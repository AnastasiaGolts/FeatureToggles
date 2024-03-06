//
//  FeatureToggle.swift
//

import Foundation
import Experiments

public struct BoolFeatureToggle {
    
    var key: ExperimentsKeys
    var value: Bool
    var canBeModified: Bool
    
    var toggleValue: BoolToggle {
        BoolToggle(value: value, canBeModified: canBeModified)
    }
    
    public init(key: String, value: Bool, canBeModified: Bool) {
        self.key = ExperimentsKeys(rawValue: key)
        self.value = value
        self.canBeModified = canBeModified
    }
}
