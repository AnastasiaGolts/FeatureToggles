//
//  ExperimentsDataSourceProviderImplementation.swift
//

import CArch
import Foundation
import Experiments

final class ExperimentsDataSourceProviderImplementation: ExperimentsDataSourceProvider, BusinessLogicEngine {
    
    private var sources: [ExperimentsDataSource] = []
    
    nonisolated init(sources: [ExperimentsDataSource]) {
        self.sources = sources
    }
    
    func dataSource() -> [ExperimentsDataSource] {
        sources
    }
}
