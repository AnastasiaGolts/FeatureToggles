//
//  ExperimentsDependenciesImplementation.swift
//

import CArch
import Foundation
import Experiments

final class ExperimentsDependenciesImplementation: ExperimentsDependencies, BusinessLogicEngine {
    
    var experimentsDataSourceProvider: ExperimentsDataSourceProvider
    
    nonisolated init(experimentsDataSourceProvider: ExperimentsDataSourceProvider) {
        self.experimentsDataSourceProvider = experimentsDataSourceProvider
    }
}
