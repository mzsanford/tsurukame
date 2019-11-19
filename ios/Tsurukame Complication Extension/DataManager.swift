// Copyright 2019 David Sansome
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

import Foundation
import os

typealias UserData = [String: Any]

protocol DataManagerDelegate {
  func onDataUpdated(data: UserData)
}

class DataManager {
  public static let sharedInstance = DataManager()
  var latestData: UserData?
  var delegates: [DataManagerDelegate] = []

  private init() {
    os_log("MZS - data manager init")
    WatchHelper.sharedInstance().awaitMessages { userInfo in
      os_log("MZS - new data arrived: %{public}@", userInfo)
      self.latestData = userInfo

      for delegate in self.delegates {
        delegate.onDataUpdated(data: userInfo)
      }
    }
  }

  func addDelegate(_ delegate: DataManagerDelegate) {
    delegates.append(delegate)
  }

  func removeDelegate(_: DataManagerDelegate) {}
}
