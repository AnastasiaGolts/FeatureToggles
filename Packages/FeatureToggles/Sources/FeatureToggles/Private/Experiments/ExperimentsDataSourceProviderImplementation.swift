//
//  ExperimentsDataSourceProviderImplementation.swift
//

import Foundation
import Experiments

final class ExperimentsDataSourceProviderImplementation: ExperimentsDataSourceProvider {
    
    private var sources: [ExperimentsDataSource] = []
    
    init(sources: [ExperimentsDataSource]) {
        self.sources = sources
    }
    
    func dataSource() -> [ExperimentsDataSource] {
        sources
    }
    
    func dataSource() -> [ObservableExperimentsDataSource] {
        [ObservableExperimentsDataSource]()
    }
}
