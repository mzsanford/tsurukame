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
  func onDataUpdated(data: UserData, dataSource: ComplicationDataSource)
}

enum ComplicationDataSource: Int {
  case ReviewCounts, Level
}

class DataManager {
  private let UserDefaultsKeyData = "LastKnownData"
  private let UserDefaultsKeySource = "DataSource"
  public static let sharedInstance = DataManager()
  var latestData: UserData?
  var delegates: [DataManagerDelegate] = []
  public var dataSource: ComplicationDataSource = .ReviewCounts {
    didSet {
      UserDefaults.standard.set(dataSource.rawValue, forKey: UserDefaultsKeySource)
    }
  }

  private init() {
    // Load the last known data from last time
    latestData = UserDefaults.standard.dictionary(forKey: UserDefaultsKeyData)
    dataSource = ComplicationDataSource(rawValue: UserDefaults.standard.integer(forKey: UserDefaultsKeySource)) ?? .ReviewCounts

    WatchHelper.sharedInstance().awaitMessages { userInfo in
      self.latestData = userInfo

      UserDefaults.standard.set(userInfo, forKey: self.UserDefaultsKeyData)

      for delegate in self.delegates {
        delegate.onDataUpdated(data: userInfo, dataSource: self.dataSource)
      }
    }
  }

  func addDelegate(_ delegate: DataManagerDelegate) {
    delegates.append(delegate)
  }

  func removeDelegate(_: DataManagerDelegate) {}
}
