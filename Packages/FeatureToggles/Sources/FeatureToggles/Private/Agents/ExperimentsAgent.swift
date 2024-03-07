//
//  ExperimentsAgent.swift
//

import Foundation
import Experiments

// MARK: - ExperimentsAgent
final actor ExperimentsAgent: ExperimentsEngineMutable, ExperimentsEngineReadOnly {
    
    
    let interactor: ExperimentsInteractor
//    let debugDataSource: DebugDataSource
    
    init(interactor: ExperimentsInteractor) {

        let debugDataSource = DebugDataSourceFactory(dataSourceDependencies: DataSourcesDependenciesImplementation(settingsProvider: ExperimentsPreferencesSettingsProvider())).debugDataSource
        
        let localExperiments = LocalExperimentsDataSource(localExperiments: [:])
        let experimentsDependencies = ExperimentsDependenciesImplementation(experimentsDataSourceProvider: ExperimentsDataSourceProviderImplementation(sources: [debugDataSource, localExperiments]))
        
        self.interactor = ExperimentsInteractorFactory(deps: experimentsDependencies).interactor
    }
    
    func bool(for experiment: Experiment, with toggle: BoolToggle) -> Bool {
        interactor.bool(for: experiment, with: toggle).value
    }
    
    func set(key: ExperimentsKeys, for toggle: Toggle) async {
        
    }
}
