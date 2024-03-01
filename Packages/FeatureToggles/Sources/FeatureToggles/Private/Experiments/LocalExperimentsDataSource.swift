//
//  LocalExperimentsDataSource.swift
//

import CArch
import Foundation
import Experiments

// В пакете или в основном приложении?
final class LocalExperimentsDataSource: ExperimentsDataSource {

    var priority: Int32 = 1
    
    private let boolExperiments: [String: BoolToggle] = [ExperimentsKeys.feature1.rawValue: .init(value: true, canBeModified: true)]

    func bool(with key: String) -> BoolToggle? {
        boolExperiments[key]
    }
    
    func string(with key: String) -> StringToggle? {
        nil
    }
}
