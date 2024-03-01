//
//  DataSourcesDependenciesImplementation.swift
//

import CArch
import Foundation
import Experiments

final class DataSourcesDependenciesImplementation: DataSourceDependencies, BusinessLogicEngine {
    
    var settingsProvider: PreferencesSettingsProvider
    
    nonisolated init(settingsProvider: PreferencesSettingsProvider) {
        self.settingsProvider = settingsProvider
    }
}

extension ExperimentsPreferencesSettingsProvider: BusinessLogicEngine { }
extension DebugDataSourceFactory: BusinessLogicEngine { }
extension ExperimentsInteractorFactory: BusinessLogicEngine { }
