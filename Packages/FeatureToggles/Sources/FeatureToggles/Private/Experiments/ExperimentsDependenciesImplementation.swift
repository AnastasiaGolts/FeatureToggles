//
//  ExperimentsDependenciesImplementation.swift
//

import Foundation
import Experiments

final class ExperimentsDependenciesImplementation: ExperimentsDependencies {
    
    var experimentsDataSourceProvider: ExperimentsDataSourceProvider
    
    init(experimentsDataSourceProvider: ExperimentsDataSourceProvider) {
        self.experimentsDataSourceProvider = experimentsDataSourceProvider
    }
}
