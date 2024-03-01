//
//  Integrator.swift
//

import Experiments

final actor Integrator: IntegratorProvider, IntegratorBinder {
    
    let interactor: ExperimentsInteractor
    let debugDataSource: DebugDataSource
    
    init(interactor: ExperimentsInteractor, debugDataSource: DebugDataSource) {

        self.debugDataSource = DebugDataSourceFactory(dataSourceDependencies: DataSourcesDependenciesImplementation(settingsProvider: ExperimentsPreferencesSettingsProvider())).debugDataSource
        
        let experimentsDependencies = ExperimentsDependenciesImplementation(experimentsDataSourceProvider: ExperimentsDataSourceProviderImplementation(sources: [debugDataSource, LocalExperimentsDataSource()]))
        
        self.interactor = ExperimentsInteractorFactory(deps: experimentsDependencies).interactor
    }
    
    func bind(_ param: Any) {
        // вне тогглов?
        // di
        //[param.self: param] - storing in integrator
    }
}
