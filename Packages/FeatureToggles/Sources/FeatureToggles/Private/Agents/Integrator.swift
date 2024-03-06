//
//  Integrator.swift
//

import Experiments

final actor Integrator: IntegratorProvider, IntegratorBinder {
    
    let interactor: ExperimentsInteractor
    let debugDataSource: DebugDataSource
    
    init(interactor: ExperimentsInteractor, debugDataSource: DebugDataSource) {

        self.debugDataSource = DebugDataSourceFactory(dataSourceDependencies: DataSourcesDependenciesImplementation(settingsProvider: ExperimentsPreferencesSettingsProvider())).debugDataSource
        
        let localExperiments = LocalExperimentsDataSource(localExperiments: [:])
        let experimentsDependencies = ExperimentsDependenciesImplementation(experimentsDataSourceProvider: ExperimentsDataSourceProviderImplementation(sources: [debugDataSource, localExperiments]))
        
        self.interactor = ExperimentsInteractorFactory(deps: experimentsDependencies).interactor
    }
    
    func bind(_ param: Any) {
        // вне тогглов?
        // di
        //[param.self: param] - storing in integrator
    }
    
    func wasSwitched(for toggle: BoolFeatureToggle) async {
        
    }
}
