//
//  DataSourcesDependenciesImplementation.swift
//

import Foundation
import Experiments

final class DataSourcesDependenciesImplementation: DataSourceDependencies {
    
    var settingsProvider: PreferencesSettingsProvider
    
    init(settingsProvider: PreferencesSettingsProvider) {
        self.settingsProvider = settingsProvider
    }
}
