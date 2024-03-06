//
//  ViewController.swift
//  Test
//
//  Created by akuskova on 19.02.2024.
//

import UIKit
import Experiments
import KMPNativeCoroutinesCombine
import Combine

class ViewController: UIViewController {
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
        
//        let experiment = MainExperiment(key: "MainExperiment")
//        if experiment.isFeatureOn() {
//            print("Feature ON")
//        } else {
//            print("Feature OFF")
//        }
//        
//        let settingsProvider = ExperimentsPreferencesSettingsProvider()
//        let datasourceDependencies = DataSourcesDependenciesImpl(settingsProvider: settingsProvider)
//        let dataSourceFactory = DebugDataSourceFactory(dataSourceDependencies: datasourceDependencies)
//        
//        let debugDataSource: DebugDataSource = dataSourceFactory.debugDataSource
//        let localDataSource = LocalExperimentsDataSource()
//        
//        let experimentsDataSourceProvider = ExperimentsDataSourceProviderImpl(sources: [debugDataSource, localDataSource])
//        
//        let experimentsDependencies = ExperimentsDependenciesImpl(experimentsDataSourceProvider: experimentsDataSourceProvider)
//        let interactorFactory = ExperimentsInteractorFactory(deps: experimentsDependencies)
//        
//        let interactor: ExperimentsInteractor = interactorFactory.interactor
//        var isActive = Feature1(key: "Feature1").bool(interactor: interactor).value
//        if isActive {
//            print("Feature1 ON")
//        } else {
//            print("Feature1 OFF")
//        }
//        
//        isActive = Feature2(key: "Feature2").bool(interactor: interactor).value
//        if isActive {
//            print("Feature2 ON")
//        } else {
//            print("Feature2 OFF")
//        }
        
//        interactor.funcToTest()
//        let i = FlowExperimentsInteractor(experimentsInteractor: interactor)
//        let flow = i.boolToggleFlow(experiment: Feature1(key: ""), defaultValue: .init(value: true, canBeModified: false))
//        let publisher = createPublisher(for: flow)
//        publisher.sink(receiveCompletion: <#T##((Subscribers.Completion<Error>) -> Void)##((Subscribers.Completion<Error>) -> Void)##(Subscribers.Completion<Error>) -> Void#>, receiveValue: <#T##((BoolToggle) -> Void)##((BoolToggle) -> Void)##(BoolToggle) -> Void#>)
    }
}

/*
extension Experiments.ExperimentsInteractor {
    
    func funcToTest() { }
}

final class MainExperiment: BoolExperiment {
    
    func isFeatureOn() -> Bool {
        bool(for: MainExperimentsInteractor(), with: false).value
    }
}

final class MainExperimentsInteractor: ExperimentsInteractor {
    
    func bool(for for_: Experiment, with: BoolToggle) -> BoolToggle {
        BoolToggle(value: false, canBeModified: false)
    }
    
    func string(for for_: Experiment, with: StringToggle) -> StringToggle {
        StringToggle(value: "false", canBeModified: false)
    }
    
    func subscribeBoolToggle(experiment: Experiment, defaultValue: BoolToggle, callBack: OnToggleChange) {
        //
    }
    
    func subscribeStringToggle(experiment: Experiment, defaultValue: StringToggle, callBack: OnToggleChange) {
        //
    }
    
    func unsubscribeBoolToggle(callBack: OnToggleChange) {
        //
    }
    
    func unsubscribeStringToggle(callBack: OnToggleChange) {
        //
    }
}

final class DataSourcesDependenciesImpl: DataSourceDependencies {
    
    var settingsProvider: PreferencesSettingsProvider
    
    init(settingsProvider: PreferencesSettingsProvider) {
        self.settingsProvider = settingsProvider
    }
}

final class LocalExperimentsDataSource: ExperimentsDataSource {
    
    func bool(with: String) -> BoolToggle? {
        .init(value: true, canBeModified: false)
    }
    
    func string(with: String) -> StringToggle? {
        .init(value: "true", canBeModified: false)
    }
    
    var priority: Int32 = 1
    
    private var boolExperiments: [String: BoolToggle]  = ["Feature1": BoolToggle(value: true, canBeModified: false)]
    
    func getBoolToggle(key: String) -> BoolToggle? {
        boolExperiments[key]
    }
    
    func getStringToggle(key: String) -> StringToggle? {
        nil
    }
    
    func compareTo(other: Any?) -> Int32 {
        1
    }
}

final class ObservableDataSource: ObservableExperimentsDataSource {
    var priority: Int32 = 0
    
    func observeBoolToggle(key: String, callBack: OnToggleChange) -> Listener {
        <#code#>
    }
    
    func observeStringToggle(key: String, callback: OnToggleChange) -> Listener {
        <#code#>
    }
    
    func bool(with: String) -> BoolToggle? {
        <#code#>
    }
    
    func string(with: String) -> StringToggle? {
        <#code#>
    }
    
    
}

final class ExperimentsDataSourceProviderImpl: ExperimentsDataSourceProvider {
    
    func dataSource() -> [ObservableExperimentsDataSource] {
        [ObservableDataSource()]
    }
    
    private var sources: [ExperimentsDataSource] = []
    
    init(sources: [ExperimentsDataSource]) {
        self.sources = sources
    }
    
    func getSources() -> [ExperimentsDataSource] {
        sources
    }
}

final class ExperimentsDependenciesImpl: ExperimentsDependencies {
    
    var experimentsDataSourceProvider: ExperimentsDataSourceProvider
    
    init(experimentsDataSourceProvider: ExperimentsDataSourceProvider) {
        self.experimentsDataSourceProvider = experimentsDataSourceProvider
    }
}

 */
/// Class in feature modules
//final class Feature1: BoolExperiment {}
//
//final class Feature2: BoolExperiment {
//    
//    var canBeModified = false
//    var value = false
//}

