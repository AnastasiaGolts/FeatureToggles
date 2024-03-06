//
//  LocalExperimentsDataSource.swift
//

import CArch
import Foundation
import Experiments

// В пакете или в основном приложении?
final class LocalExperimentsDataSource: ExperimentsDataSource {

    var priority: Int32 = 1
    
    private var boolExperiments: [String: BoolToggle] = [:]
    private var stringExperiments: [String: StringToggle] = [:]

    init(localExperiments: LocalExperimentsData) {
        for (_, value) in localExperiments {
            addEperiments(value.boolExperiments, to: &boolExperiments)
            addEperiments(value.stringExperiments, to: &stringExperiments)
        }
    }
    
    func bool(with key: String) -> BoolToggle? {
        boolExperiments[key]
    }
    
    func string(with key: String) -> StringToggle? {
        stringExperiments[key]
    }
    
    private func addEperiments<T>(_ experiments: [String: T], to target: inout [String: T]) {
        for (key, experiment) in experiments {
            target[key] = experiment
        }
    }
}
