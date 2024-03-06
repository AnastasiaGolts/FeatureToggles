//
//  ExperimentsKeys.swift
//

import Foundation
import Experiments

// MARK: - ExperimentsKeys
public class ExperimentsKeys: RawRepresentable, Experiment {
    public var key: String
    
    
    public var rawValue: String {
        key
    }
    
    required public init(rawValue key: String) {
        self.key = key
    }
}
