package main

import (
	"encoding/binary"
	"flag"
	"fmt"
	"os"

	"github.com/golang/protobuf/proto"

	"github.com/davidsansome/wk/fileencoding"
	pb "github.com/davidsansome/wk/proto"
	"github.com/davidsansome/wk/utils"
)

var (
	out = flag.String("out", "data.bin", "Output file")

	order = binary.LittleEndian
)

func main() {
	flag.Parse()
	utils.Must(Combine())
}

func Combine() error {
	// List files.
	files, err := fileencoding.ListFilenames()
	if err != nil {
		return err
	}

	// Read everything into memory.
	all := make([][]byte, len(files))
	for _, f := range files {
		spb, err := fileencoding.ReadSubjectByFilename(f)
		if err != nil {
			return err
		}

		// Remove fields we don't care about for the iOS app.
		id := spb.GetId()
		spb.DocumentUrl = nil
		spb.Id = nil
		if spb.Radical != nil && spb.Radical.CharacterImage != nil {
			spb.Radical.CharacterImage = nil
			spb.Radical.HasCharacterImageFile = proto.Bool(true)
		}

		if err := ReorderComponentSubjectIDs(spb); err != nil {
			return err
		}

		data, err := proto.Marshal(spb)
		if err != nil {
			return err
		}

		// Make space in the array for this ID.
		for len(all) <= int(id) {
			all = append(all, nil)
		}
		all[id] = data
	}

	fh, err := os.Create(*out)
	if err != nil {
		return err
	}
	defer fh.Close()

	// Write the index.
	binary.Write(fh, order, uint32(len(all)))
	offset := 4 + 4*len(all)
	for _, d := range all {
		binary.Write(fh, order, uint32(offset))
		offset += len(d)
	}

	// Write each encoded protobuf.
	for _, d := range all {
		fh.Write(d)
	}

	return nil
}

func ReorderComponentSubjectIDs(spb *pb.Subject) error {
	if spb.Vocabulary == nil {
		return nil
	}

	characterToID := map[string]int32{}
	for _, id := range spb.ComponentSubjectIds {
		pb, err := fileencoding.ReadSubjectByID(id)
		if err != nil {
			return err
		}
		characterToID[pb.GetJapanese()] = id
	}

	var newComponentIDs []int32
	seenComponentIDs := map[int32]struct{}{}
	for _, char := range spb.GetJapanese() {
		if id, ok := characterToID[string(char)]; ok {
			if _, ok := seenComponentIDs[id]; ok {
				continue
			}
			newComponentIDs = append(newComponentIDs, id)
			seenComponentIDs[id] = struct{}{}
		}
	}

	if len(newComponentIDs) != len(spb.ComponentSubjectIds) {
		return fmt.Errorf("different length component subject ID lists for %s: %v vs. %v",
			spb.GetJapanese(), spb.ComponentSubjectIds, newComponentIDs)
	}

	spb.ComponentSubjectIds = newComponentIDs
	return nil
}
