// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: wanikani.proto

// This CPP symbol can be defined to use imports that match up to the framework
// imports needed when using CocoaPods.
#if !defined(GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS)
 #define GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS 0
#endif

#if GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS
 #import <Protobuf/GPBProtocolBuffers.h>
#else
 #import "GPBProtocolBuffers.h"
#endif

#if GOOGLE_PROTOBUF_OBJC_VERSION < 30004
#error This file was generated by a newer version of protoc which is incompatible with your Protocol Buffer library sources.
#endif
#if 30004 < GOOGLE_PROTOBUF_OBJC_MIN_SUPPORTED_VERSION
#error This file was generated by an older version of protoc which is incompatible with your Protocol Buffer library sources.
#endif

// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

CF_EXTERN_C_BEGIN

@class TKMAssignment;
@class TKMDeprecatedMnemonicFile_Subject;
@class TKMFormattedText;
@class TKMKanji;
@class TKMMeaning;
@class TKMRadical;
@class TKMReading;
@class TKMSubject;
@class TKMSubjectsByLevel;
@class TKMVocabulary;
@class TKMVocabulary_Sentence;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - Enum TKMMeaning_Type

typedef GPB_ENUM(TKMMeaning_Type) {
  /**
   * Value used if any message's field encounters a value that is not defined
   * by this enum. The message will also have C functions to get/set the rawValue
   * of the field.
   **/
  TKMMeaning_Type_GPBUnrecognizedEnumeratorValue = kGPBUnrecognizedEnumeratorValue,
  TKMMeaning_Type_Unknown = 0,
  TKMMeaning_Type_Primary = 1,
  TKMMeaning_Type_Secondary = 2,

  /** Old meaning for a radical that was changed. */
  TKMMeaning_Type_AuxiliaryWhitelist = 3,

  /** Similar (within edit distance) to an accepted reading but incorrect. */
  TKMMeaning_Type_Blacklist = 4,
};

GPBEnumDescriptor *TKMMeaning_Type_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL TKMMeaning_Type_IsValidValue(int32_t value);

#pragma mark - Enum TKMReading_Type

/** Type is only set for Kanji readings - not for Vocabulary. */
typedef GPB_ENUM(TKMReading_Type) {
  /**
   * Value used if any message's field encounters a value that is not defined
   * by this enum. The message will also have C functions to get/set the rawValue
   * of the field.
   **/
  TKMReading_Type_GPBUnrecognizedEnumeratorValue = kGPBUnrecognizedEnumeratorValue,
  TKMReading_Type_Unknown = 0,
  TKMReading_Type_Onyomi = 1,
  TKMReading_Type_Kunyomi = 2,
  TKMReading_Type_Nanori = 3,
};

GPBEnumDescriptor *TKMReading_Type_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL TKMReading_Type_IsValidValue(int32_t value);

#pragma mark - Enum TKMVocabulary_PartOfSpeech

typedef GPB_ENUM(TKMVocabulary_PartOfSpeech) {
  /**
   * Value used if any message's field encounters a value that is not defined
   * by this enum. The message will also have C functions to get/set the rawValue
   * of the field.
   **/
  TKMVocabulary_PartOfSpeech_GPBUnrecognizedEnumeratorValue = kGPBUnrecognizedEnumeratorValue,
  TKMVocabulary_PartOfSpeech_Unknown = 0,
  TKMVocabulary_PartOfSpeech_Noun = 1,
  TKMVocabulary_PartOfSpeech_Numeral = 2,
  TKMVocabulary_PartOfSpeech_IntransitiveVerb = 3,
  TKMVocabulary_PartOfSpeech_IchidanVerb = 4,
  TKMVocabulary_PartOfSpeech_TransitiveVerb = 5,
  TKMVocabulary_PartOfSpeech_NoAdjective = 6,
  TKMVocabulary_PartOfSpeech_GodanVerb = 7,
  TKMVocabulary_PartOfSpeech_NaAdjective = 8,
  TKMVocabulary_PartOfSpeech_IAdjective = 9,
  TKMVocabulary_PartOfSpeech_Suffix = 10,
  TKMVocabulary_PartOfSpeech_Adverb = 11,
  TKMVocabulary_PartOfSpeech_SuruVerb = 12,
  TKMVocabulary_PartOfSpeech_Prefix = 13,
  TKMVocabulary_PartOfSpeech_ProperNoun = 14,
  TKMVocabulary_PartOfSpeech_Expression = 15,
  TKMVocabulary_PartOfSpeech_Adjective = 16,
  TKMVocabulary_PartOfSpeech_Interjection = 17,
  TKMVocabulary_PartOfSpeech_Counter = 18,
  TKMVocabulary_PartOfSpeech_Pronoun = 19,
  TKMVocabulary_PartOfSpeech_Conjunction = 20,
};

GPBEnumDescriptor *TKMVocabulary_PartOfSpeech_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL TKMVocabulary_PartOfSpeech_IsValidValue(int32_t value);

#pragma mark - Enum TKMSubject_Type

typedef GPB_ENUM(TKMSubject_Type) {
  /**
   * Value used if any message's field encounters a value that is not defined
   * by this enum. The message will also have C functions to get/set the rawValue
   * of the field.
   **/
  TKMSubject_Type_GPBUnrecognizedEnumeratorValue = kGPBUnrecognizedEnumeratorValue,
  TKMSubject_Type_Unknown = 0,
  TKMSubject_Type_Radical = 1,
  TKMSubject_Type_Kanji = 2,
  TKMSubject_Type_Vocabulary = 3,
};

GPBEnumDescriptor *TKMSubject_Type_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL TKMSubject_Type_IsValidValue(int32_t value);

#pragma mark - Enum TKMFormattedText_Format

typedef GPB_ENUM(TKMFormattedText_Format) {
  /**
   * Value used if any message's field encounters a value that is not defined
   * by this enum. The message will also have C functions to get/set the rawValue
   * of the field.
   **/
  TKMFormattedText_Format_GPBUnrecognizedEnumeratorValue = kGPBUnrecognizedEnumeratorValue,
  TKMFormattedText_Format_Unknown = 0,
  TKMFormattedText_Format_Radical = 1,
  TKMFormattedText_Format_Kanji = 2,
  TKMFormattedText_Format_Japanese = 3,
  TKMFormattedText_Format_Reading = 4,
  TKMFormattedText_Format_Vocabulary = 5,
  TKMFormattedText_Format_Italic = 6,
  TKMFormattedText_Format_Bold = 7,
  TKMFormattedText_Format_Link = 8,
};

GPBEnumDescriptor *TKMFormattedText_Format_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL TKMFormattedText_Format_IsValidValue(int32_t value);

#pragma mark - TKMWanikaniRoot

/**
 * Exposes the extension registry for this file.
 *
 * The base class provides:
 * @code
 *   + (GPBExtensionRegistry *)extensionRegistry;
 * @endcode
 * which is a @c GPBExtensionRegistry that includes all the extensions defined by
 * this file and all files that it depends on.
 **/
GPB_FINAL @interface TKMWanikaniRoot : GPBRootObject
@end

#pragma mark - TKMMeaning

typedef GPB_ENUM(TKMMeaning_FieldNumber) {
  TKMMeaning_FieldNumber_Meaning = 1,
  TKMMeaning_FieldNumber_Type = 3,
};

GPB_FINAL @interface TKMMeaning : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *meaning;
/** Test to see if @c meaning has been set. */
@property(nonatomic, readwrite) BOOL hasMeaning;

@property(nonatomic, readwrite) TKMMeaning_Type type;

@property(nonatomic, readwrite) BOOL hasType;
@end

/**
 * Fetches the raw value of a @c TKMMeaning's @c type property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t TKMMeaning_Type_RawValue(TKMMeaning *message);
/**
 * Sets the raw value of an @c TKMMeaning's @c type property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetTKMMeaning_Type_RawValue(TKMMeaning *message, int32_t value);

#pragma mark - TKMReading

typedef GPB_ENUM(TKMReading_FieldNumber) {
  TKMReading_FieldNumber_Reading = 1,
  TKMReading_FieldNumber_IsPrimary = 2,
  TKMReading_FieldNumber_Type = 3,
};

GPB_FINAL @interface TKMReading : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *reading;
/** Test to see if @c reading has been set. */
@property(nonatomic, readwrite) BOOL hasReading;

/**
 * Non-primary readings are not accepted for Kanji.
 * TODO: use the accepted_answer field instead.
 **/
@property(nonatomic, readwrite) BOOL isPrimary;

@property(nonatomic, readwrite) BOOL hasIsPrimary;
@property(nonatomic, readwrite) TKMReading_Type type;

@property(nonatomic, readwrite) BOOL hasType;
@end

/**
 * Fetches the raw value of a @c TKMReading's @c type property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t TKMReading_Type_RawValue(TKMReading *message);
/**
 * Sets the raw value of an @c TKMReading's @c type property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetTKMReading_Type_RawValue(TKMReading *message, int32_t value);

#pragma mark - TKMRadical

typedef GPB_ENUM(TKMRadical_FieldNumber) {
  TKMRadical_FieldNumber_CharacterImage = 1,
  TKMRadical_FieldNumber_Mnemonic = 2,
  TKMRadical_FieldNumber_HasCharacterImageFile = 3,
  TKMRadical_FieldNumber_DeprecatedMnemonic = 5,
};

GPB_FINAL @interface TKMRadical : GPBMessage

/** Not present in final data. */
@property(nonatomic, readwrite, copy, null_resettable) NSString *characterImage;
/** Test to see if @c characterImage has been set. */
@property(nonatomic, readwrite) BOOL hasCharacterImage;

@property(nonatomic, readwrite, copy, null_resettable) NSString *mnemonic;
/** Test to see if @c mnemonic has been set. */
@property(nonatomic, readwrite) BOOL hasMnemonic;

@property(nonatomic, readwrite, copy, null_resettable) NSString *deprecatedMnemonic;
/** Test to see if @c deprecatedMnemonic has been set. */
@property(nonatomic, readwrite) BOOL hasDeprecatedMnemonic;

@property(nonatomic, readwrite) BOOL hasCharacterImageFile;

@property(nonatomic, readwrite) BOOL hasHasCharacterImageFile;
@end

#pragma mark - TKMKanji

typedef GPB_ENUM(TKMKanji_FieldNumber) {
  TKMKanji_FieldNumber_MeaningMnemonic = 1,
  TKMKanji_FieldNumber_MeaningHint = 2,
  TKMKanji_FieldNumber_ReadingMnemonic = 3,
  TKMKanji_FieldNumber_ReadingHint = 4,
  TKMKanji_FieldNumber_VisuallySimilarKanji = 10,
};

GPB_FINAL @interface TKMKanji : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *meaningMnemonic;
/** Test to see if @c meaningMnemonic has been set. */
@property(nonatomic, readwrite) BOOL hasMeaningMnemonic;

@property(nonatomic, readwrite, copy, null_resettable) NSString *meaningHint;
/** Test to see if @c meaningHint has been set. */
@property(nonatomic, readwrite) BOOL hasMeaningHint;

@property(nonatomic, readwrite, copy, null_resettable) NSString *readingMnemonic;
/** Test to see if @c readingMnemonic has been set. */
@property(nonatomic, readwrite) BOOL hasReadingMnemonic;

@property(nonatomic, readwrite, copy, null_resettable) NSString *readingHint;
/** Test to see if @c readingHint has been set. */
@property(nonatomic, readwrite) BOOL hasReadingHint;

@property(nonatomic, readwrite, copy, null_resettable) NSString *visuallySimilarKanji;
/** Test to see if @c visuallySimilarKanji has been set. */
@property(nonatomic, readwrite) BOOL hasVisuallySimilarKanji;

@end

#pragma mark - TKMVocabulary

typedef GPB_ENUM(TKMVocabulary_FieldNumber) {
  TKMVocabulary_FieldNumber_MeaningExplanation = 1,
  TKMVocabulary_FieldNumber_ReadingExplanation = 2,
  TKMVocabulary_FieldNumber_SentencesArray = 3,
  TKMVocabulary_FieldNumber_PartsOfSpeechArray = 4,
  TKMVocabulary_FieldNumber_AudioIdsArray = 5,
};

GPB_FINAL @interface TKMVocabulary : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *meaningExplanation;
/** Test to see if @c meaningExplanation has been set. */
@property(nonatomic, readwrite) BOOL hasMeaningExplanation;

@property(nonatomic, readwrite, copy, null_resettable) NSString *readingExplanation;
/** Test to see if @c readingExplanation has been set. */
@property(nonatomic, readwrite) BOOL hasReadingExplanation;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<TKMVocabulary_Sentence*> *sentencesArray;
/** The number of items in @c sentencesArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger sentencesArray_Count;

// |partsOfSpeechArray| contains |TKMVocabulary_PartOfSpeech|
@property(nonatomic, readwrite, strong, null_resettable) GPBEnumArray *partsOfSpeechArray;
/** The number of items in @c partsOfSpeechArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger partsOfSpeechArray_Count;

@property(nonatomic, readwrite, strong, null_resettable) GPBInt32Array *audioIdsArray;
/** The number of items in @c audioIdsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger audioIdsArray_Count;

@end

#pragma mark - TKMVocabulary_Sentence

typedef GPB_ENUM(TKMVocabulary_Sentence_FieldNumber) {
  TKMVocabulary_Sentence_FieldNumber_Japanese = 1,
  TKMVocabulary_Sentence_FieldNumber_English = 2,
};

GPB_FINAL @interface TKMVocabulary_Sentence : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *japanese;
/** Test to see if @c japanese has been set. */
@property(nonatomic, readwrite) BOOL hasJapanese;

@property(nonatomic, readwrite, copy, null_resettable) NSString *english;
/** Test to see if @c english has been set. */
@property(nonatomic, readwrite) BOOL hasEnglish;

@end

#pragma mark - TKMSubject

typedef GPB_ENUM(TKMSubject_FieldNumber) {
  TKMSubject_FieldNumber_Id_p = 1,
  TKMSubject_FieldNumber_Level = 2,
  TKMSubject_FieldNumber_Slug = 3,
  TKMSubject_FieldNumber_DocumentURL = 4,
  TKMSubject_FieldNumber_Japanese = 5,
  TKMSubject_FieldNumber_ReadingsArray = 6,
  TKMSubject_FieldNumber_MeaningsArray = 7,
  TKMSubject_FieldNumber_ComponentSubjectIdsArray = 8,
  TKMSubject_FieldNumber_Radical = 9,
  TKMSubject_FieldNumber_Kanji = 10,
  TKMSubject_FieldNumber_Vocabulary = 11,
  TKMSubject_FieldNumber_AmalgamationSubjectIdsArray = 12,
};

GPB_FINAL @interface TKMSubject : GPBMessage

@property(nonatomic, readwrite) int32_t id_p;

@property(nonatomic, readwrite) BOOL hasId_p;
@property(nonatomic, readwrite) int32_t level;

@property(nonatomic, readwrite) BOOL hasLevel;
@property(nonatomic, readwrite, copy, null_resettable) NSString *slug;
/** Test to see if @c slug has been set. */
@property(nonatomic, readwrite) BOOL hasSlug;

@property(nonatomic, readwrite, copy, null_resettable) NSString *documentURL;
/** Test to see if @c documentURL has been set. */
@property(nonatomic, readwrite) BOOL hasDocumentURL;

@property(nonatomic, readwrite, copy, null_resettable) NSString *japanese;
/** Test to see if @c japanese has been set. */
@property(nonatomic, readwrite) BOOL hasJapanese;

/** Does not apply to radicals. */
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<TKMReading*> *readingsArray;
/** The number of items in @c readingsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger readingsArray_Count;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<TKMMeaning*> *meaningsArray;
/** The number of items in @c meaningsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger meaningsArray_Count;

/** Does not apply to radicals. */
@property(nonatomic, readwrite, strong, null_resettable) GPBInt32Array *componentSubjectIdsArray;
/** The number of items in @c componentSubjectIdsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger componentSubjectIdsArray_Count;

/** Does not apply to vocabulary. */
@property(nonatomic, readwrite, strong, null_resettable) GPBInt32Array *amalgamationSubjectIdsArray;
/** The number of items in @c amalgamationSubjectIdsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger amalgamationSubjectIdsArray_Count;

@property(nonatomic, readwrite, strong, null_resettable) TKMRadical *radical;
/** Test to see if @c radical has been set. */
@property(nonatomic, readwrite) BOOL hasRadical;

@property(nonatomic, readwrite, strong, null_resettable) TKMKanji *kanji;
/** Test to see if @c kanji has been set. */
@property(nonatomic, readwrite) BOOL hasKanji;

@property(nonatomic, readwrite, strong, null_resettable) TKMVocabulary *vocabulary;
/** Test to see if @c vocabulary has been set. */
@property(nonatomic, readwrite) BOOL hasVocabulary;

@end

#pragma mark - TKMAssignment

typedef GPB_ENUM(TKMAssignment_FieldNumber) {
  TKMAssignment_FieldNumber_Id_p = 1,
  TKMAssignment_FieldNumber_Level = 2,
  TKMAssignment_FieldNumber_SubjectId = 3,
  TKMAssignment_FieldNumber_SubjectType = 4,
  TKMAssignment_FieldNumber_AvailableAt = 5,
  TKMAssignment_FieldNumber_StartedAt = 6,
  TKMAssignment_FieldNumber_SrsStageNumber = 7,
  TKMAssignment_FieldNumber_PassedAt = 8,
};

GPB_FINAL @interface TKMAssignment : GPBMessage

@property(nonatomic, readwrite) int32_t id_p;

@property(nonatomic, readwrite) BOOL hasId_p;
@property(nonatomic, readwrite) int32_t level;

@property(nonatomic, readwrite) BOOL hasLevel;
@property(nonatomic, readwrite) int32_t subjectId;

@property(nonatomic, readwrite) BOOL hasSubjectId;
@property(nonatomic, readwrite) TKMSubject_Type subjectType;

@property(nonatomic, readwrite) BOOL hasSubjectType;
@property(nonatomic, readwrite) int32_t availableAt;

@property(nonatomic, readwrite) BOOL hasAvailableAt;
@property(nonatomic, readwrite) int32_t startedAt;

@property(nonatomic, readwrite) BOOL hasStartedAt;
@property(nonatomic, readwrite) int32_t srsStageNumber;

@property(nonatomic, readwrite) BOOL hasSrsStageNumber;
@property(nonatomic, readwrite) int32_t passedAt;

@property(nonatomic, readwrite) BOOL hasPassedAt;
@end

/**
 * Fetches the raw value of a @c TKMAssignment's @c subjectType property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t TKMAssignment_SubjectType_RawValue(TKMAssignment *message);
/**
 * Sets the raw value of an @c TKMAssignment's @c subjectType property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetTKMAssignment_SubjectType_RawValue(TKMAssignment *message, int32_t value);

#pragma mark - TKMProgress

typedef GPB_ENUM(TKMProgress_FieldNumber) {
  TKMProgress_FieldNumber_MeaningWrong = 3,
  TKMProgress_FieldNumber_ReadingWrong = 4,
  TKMProgress_FieldNumber_IsLesson = 5,
  TKMProgress_FieldNumber_Assignment = 6,
  TKMProgress_FieldNumber_CreatedAt = 7,
  TKMProgress_FieldNumber_MeaningWrongCount = 8,
  TKMProgress_FieldNumber_ReadingWrongCount = 9,
};

GPB_FINAL @interface TKMProgress : GPBMessage

@property(nonatomic, readwrite) BOOL meaningWrong;

@property(nonatomic, readwrite) BOOL hasMeaningWrong;
@property(nonatomic, readwrite) BOOL readingWrong;

@property(nonatomic, readwrite) BOOL hasReadingWrong;
@property(nonatomic, readwrite) BOOL isLesson;

@property(nonatomic, readwrite) BOOL hasIsLesson;
@property(nonatomic, readwrite, strong, null_resettable) TKMAssignment *assignment;
/** Test to see if @c assignment has been set. */
@property(nonatomic, readwrite) BOOL hasAssignment;

@property(nonatomic, readwrite) int32_t createdAt;

@property(nonatomic, readwrite) BOOL hasCreatedAt;
@property(nonatomic, readwrite) int32_t meaningWrongCount;

@property(nonatomic, readwrite) BOOL hasMeaningWrongCount;
@property(nonatomic, readwrite) int32_t readingWrongCount;

@property(nonatomic, readwrite) BOOL hasReadingWrongCount;
@end

#pragma mark - TKMStudyMaterials

typedef GPB_ENUM(TKMStudyMaterials_FieldNumber) {
  TKMStudyMaterials_FieldNumber_Id_p = 1,
  TKMStudyMaterials_FieldNumber_SubjectId = 2,
  TKMStudyMaterials_FieldNumber_MeaningNote = 3,
  TKMStudyMaterials_FieldNumber_ReadingNote = 4,
  TKMStudyMaterials_FieldNumber_MeaningSynonymsArray = 5,
};

GPB_FINAL @interface TKMStudyMaterials : GPBMessage

@property(nonatomic, readwrite) int32_t id_p;

@property(nonatomic, readwrite) BOOL hasId_p;
@property(nonatomic, readwrite) int32_t subjectId;

@property(nonatomic, readwrite) BOOL hasSubjectId;
@property(nonatomic, readwrite, copy, null_resettable) NSString *meaningNote;
/** Test to see if @c meaningNote has been set. */
@property(nonatomic, readwrite) BOOL hasMeaningNote;

@property(nonatomic, readwrite, copy, null_resettable) NSString *readingNote;
/** Test to see if @c readingNote has been set. */
@property(nonatomic, readwrite) BOOL hasReadingNote;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<NSString*> *meaningSynonymsArray;
/** The number of items in @c meaningSynonymsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger meaningSynonymsArray_Count;

@end

#pragma mark - TKMUser

typedef GPB_ENUM(TKMUser_FieldNumber) {
  TKMUser_FieldNumber_Username = 1,
  TKMUser_FieldNumber_Level = 2,
  TKMUser_FieldNumber_MaxLevelGrantedBySubscription = 3,
  TKMUser_FieldNumber_ProfileURL = 4,
  TKMUser_FieldNumber_StartedAt = 5,
  TKMUser_FieldNumber_Subscribed = 6,
  TKMUser_FieldNumber_SubscriptionEndsAt = 7,
  TKMUser_FieldNumber_VacationStartedAt = 8,
};

GPB_FINAL @interface TKMUser : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *username;
/** Test to see if @c username has been set. */
@property(nonatomic, readwrite) BOOL hasUsername;

@property(nonatomic, readwrite) int32_t level;

@property(nonatomic, readwrite) BOOL hasLevel;
@property(nonatomic, readwrite) int32_t maxLevelGrantedBySubscription;

@property(nonatomic, readwrite) BOOL hasMaxLevelGrantedBySubscription;
@property(nonatomic, readwrite, copy, null_resettable) NSString *profileURL;
/** Test to see if @c profileURL has been set. */
@property(nonatomic, readwrite) BOOL hasProfileURL;

@property(nonatomic, readwrite) int32_t startedAt;

@property(nonatomic, readwrite) BOOL hasStartedAt;
@property(nonatomic, readwrite) BOOL subscribed;

@property(nonatomic, readwrite) BOOL hasSubscribed;
@property(nonatomic, readwrite) int32_t subscriptionEndsAt;

@property(nonatomic, readwrite) BOOL hasSubscriptionEndsAt;
@property(nonatomic, readwrite) int32_t vacationStartedAt;

@property(nonatomic, readwrite) BOOL hasVacationStartedAt;
@end

#pragma mark - TKMSubjectOverrides

typedef GPB_ENUM(TKMSubjectOverrides_FieldNumber) {
  TKMSubjectOverrides_FieldNumber_SubjectArray = 1,
};

GPB_FINAL @interface TKMSubjectOverrides : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<TKMSubject*> *subjectArray;
/** The number of items in @c subjectArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger subjectArray_Count;

@end

#pragma mark - TKMFormattedText

typedef GPB_ENUM(TKMFormattedText_FieldNumber) {
  TKMFormattedText_FieldNumber_FormatArray = 1,
  TKMFormattedText_FieldNumber_Text = 2,
  TKMFormattedText_FieldNumber_LinkURL = 3,
};

GPB_FINAL @interface TKMFormattedText : GPBMessage

// |formatArray| contains |TKMFormattedText_Format|
@property(nonatomic, readwrite, strong, null_resettable) GPBEnumArray *formatArray;
/** The number of items in @c formatArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger formatArray_Count;

@property(nonatomic, readwrite, copy, null_resettable) NSString *text;
/** Test to see if @c text has been set. */
@property(nonatomic, readwrite) BOOL hasText;

@property(nonatomic, readwrite, copy, null_resettable) NSString *linkURL;
/** Test to see if @c linkURL has been set. */
@property(nonatomic, readwrite) BOOL hasLinkURL;

@end

#pragma mark - TKMDataFileHeader

typedef GPB_ENUM(TKMDataFileHeader_FieldNumber) {
  TKMDataFileHeader_FieldNumber_SubjectsByLevelArray = 1,
  TKMDataFileHeader_FieldNumber_SubjectByteOffsetArray = 2,
  TKMDataFileHeader_FieldNumber_DeletedSubjectIdsArray = 3,
  TKMDataFileHeader_FieldNumber_LevelBySubjectArray = 4,
};

GPB_FINAL @interface TKMDataFileHeader : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<TKMSubjectsByLevel*> *subjectsByLevelArray;
/** The number of items in @c subjectsByLevelArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger subjectsByLevelArray_Count;

/** The level of each subject. */
@property(nonatomic, readwrite, strong, null_resettable) GPBInt32Array *levelBySubjectArray;
/** The number of items in @c levelBySubjectArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger levelBySubjectArray_Count;

/**
 * Subject IDs that no longer have any data.  The client should ignore any
 * assignments with these subjects.
 **/
@property(nonatomic, readwrite, strong, null_resettable) GPBInt32Array *deletedSubjectIdsArray;
/** The number of items in @c deletedSubjectIdsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger deletedSubjectIdsArray_Count;

/**
 * Offset of each encoded Subject message, starting from the end of this
 * header in the file.
 **/
@property(nonatomic, readwrite, strong, null_resettable) GPBUInt32Array *subjectByteOffsetArray;
/** The number of items in @c subjectByteOffsetArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger subjectByteOffsetArray_Count;

@end

#pragma mark - TKMSubjectsByLevel

typedef GPB_ENUM(TKMSubjectsByLevel_FieldNumber) {
  TKMSubjectsByLevel_FieldNumber_RadicalsArray = 1,
  TKMSubjectsByLevel_FieldNumber_KanjiArray = 2,
  TKMSubjectsByLevel_FieldNumber_VocabularyArray = 3,
};

GPB_FINAL @interface TKMSubjectsByLevel : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) GPBInt32Array *radicalsArray;
/** The number of items in @c radicalsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger radicalsArray_Count;

@property(nonatomic, readwrite, strong, null_resettable) GPBInt32Array *kanjiArray;
/** The number of items in @c kanjiArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger kanjiArray_Count;

@property(nonatomic, readwrite, strong, null_resettable) GPBInt32Array *vocabularyArray;
/** The number of items in @c vocabularyArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger vocabularyArray_Count;

@end

#pragma mark - TKMLevel

typedef GPB_ENUM(TKMLevel_FieldNumber) {
  TKMLevel_FieldNumber_Id_p = 1,
  TKMLevel_FieldNumber_Level = 2,
  TKMLevel_FieldNumber_AbandonedAt = 3,
  TKMLevel_FieldNumber_CompletedAt = 4,
  TKMLevel_FieldNumber_CreatedAt = 5,
  TKMLevel_FieldNumber_PassedAt = 6,
  TKMLevel_FieldNumber_StartedAt = 7,
  TKMLevel_FieldNumber_UnlockedAt = 8,
};

GPB_FINAL @interface TKMLevel : GPBMessage

@property(nonatomic, readwrite) int32_t id_p;

@property(nonatomic, readwrite) BOOL hasId_p;
@property(nonatomic, readwrite) int32_t level;

@property(nonatomic, readwrite) BOOL hasLevel;
@property(nonatomic, readwrite) int32_t abandonedAt;

@property(nonatomic, readwrite) BOOL hasAbandonedAt;
@property(nonatomic, readwrite) int32_t completedAt;

@property(nonatomic, readwrite) BOOL hasCompletedAt;
@property(nonatomic, readwrite) int32_t createdAt;

@property(nonatomic, readwrite) BOOL hasCreatedAt;
@property(nonatomic, readwrite) int32_t passedAt;

@property(nonatomic, readwrite) BOOL hasPassedAt;
@property(nonatomic, readwrite) int32_t startedAt;

@property(nonatomic, readwrite) BOOL hasStartedAt;
@property(nonatomic, readwrite) int32_t unlockedAt;

@property(nonatomic, readwrite) BOOL hasUnlockedAt;
@end

#pragma mark - TKMDeprecatedMnemonicFile

typedef GPB_ENUM(TKMDeprecatedMnemonicFile_FieldNumber) {
  TKMDeprecatedMnemonicFile_FieldNumber_SubjectsArray = 1,
};

GPB_FINAL @interface TKMDeprecatedMnemonicFile : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<TKMDeprecatedMnemonicFile_Subject*> *subjectsArray;
/** The number of items in @c subjectsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger subjectsArray_Count;

@end

#pragma mark - TKMDeprecatedMnemonicFile_Subject

typedef GPB_ENUM(TKMDeprecatedMnemonicFile_Subject_FieldNumber) {
  TKMDeprecatedMnemonicFile_Subject_FieldNumber_Id_p = 1,
  TKMDeprecatedMnemonicFile_Subject_FieldNumber_FormattedDeprecatedMnemonicArray = 2,
};

GPB_FINAL @interface TKMDeprecatedMnemonicFile_Subject : GPBMessage

@property(nonatomic, readwrite) int32_t id_p;

@property(nonatomic, readwrite) BOOL hasId_p;
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<TKMFormattedText*> *formattedDeprecatedMnemonicArray;
/** The number of items in @c formattedDeprecatedMnemonicArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger formattedDeprecatedMnemonicArray_Count;

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
