//
//  ExperimentsAgent.swift
//

import Foundation
import Experiments
import CArch

// MARK: - ExperimentsAgent
final actor ExperimentsAgent: BusinessLogicAgent, ExperimentsEngineMutable, ExperimentsEngineReadOnly {
    
    let interactor: ExperimentsInteractor
//    let debugDataSource: DebugDataSource
    
    init(interactor: ExperimentsInteractor) {

        let debugDataSource = DebugDataSourceFactory(dataSourceDependencies: DataSourcesDependenciesImplementation(settingsProvider: ExperimentsPreferencesSettingsProvider())).debugDataSource
        
        let experimentsDependencies = ExperimentsDependenciesImplementation(experimentsDataSourceProvider: ExperimentsDataSourceProviderImplementation(sources: [debugDataSource, LocalExperimentsDataSource()]))
        
        self.interactor = ExperimentsInteractorFactory(deps: experimentsDependencies).interactor
    }
    
    func bool(for experiment: Experiment, with toggle: BoolToggle) -> Bool {
        interactor.bool(for: experiment, with: toggle).value
    }
}
