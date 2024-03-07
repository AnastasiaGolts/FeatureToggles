//
//  FeatureToggles.swift
//

import Combine
import Foundation
import KMPNativeCoroutinesCombine
import Experiments

public protocol ExperimentsData {
    
    var boolExperiments: [String: BoolToggle] { get }
    var stringExperiments: [String: StringToggle] { get }
}

public typealias LocalExperimentsData = [String: ExperimentsData]

public class FeatureToggles {
    
    let settingsProvider: ExperimentsPreferencesSettingsProvider
    let datasourceDependencies: DataSourcesDependenciesImplementation
    let dataSourceFactory: DebugDataSourceFactory
    let localExperiments: LocalExperimentsData
    let interactor: ExperimentsInteractor
    let flowInteracor: FlowExperimentsInteractor
    
    init(with localExperiments: LocalExperimentsData) {
        settingsProvider = ExperimentsPreferencesSettingsProvider()
        datasourceDependencies = DataSourcesDependenciesImplementation(settingsProvider: settingsProvider)
        dataSourceFactory = DebugDataSourceFactory(dataSourceDependencies: datasourceDependencies)
        
        let debugDataSource: DebugDataSource = dataSourceFactory.debugDataSource
        self.localExperiments = localExperiments
        let localDataSource = LocalExperimentsDataSource(localExperiments: localExperiments)
        
        let experimentsDataSourceProvider = ExperimentsDataSourceProviderImplementation(sources: [debugDataSource, localDataSource])
        
        let experimentsDependencies = ExperimentsDependenciesImplementation(experimentsDataSourceProvider: experimentsDataSourceProvider)
        let interactorFactory = ExperimentsInteractorFactory(deps: experimentsDependencies)
        
        interactor = interactorFactory.interactor
        flowInteracor = FlowExperimentsInteractor(experimentsInteractor: interactor)
        
    }
    
    func isActive(_ key: String) -> Bool {
        BoolExperiment(key: key).bool(interactor: interactor).value
    }
    
    func boolPublisher(for toggle: BoolFeatureToggle) -> AnyPublisher<BoolToggle, Error> {
        let flow = flowInteracor.boolToggleFlow(experiment: toggle.key, defaultValue: toggle.toggleValue)
        return createPublisher(for: flow)
    }
    
    func stringValue(_ key: String) -> String {
        ""
//        StringExperiment(key: key).string(for: <#T##ExperimentsInteractor#>, with: <#T##String#>)
    }
}
