//
//  FeatureToggle.swift
//

import Foundation

public struct FeatureToggle {
    
    var key: ExperimentsKeys = .init(rawValue: "")
    var value: Bool = false
    var canBeModified: Bool = false
    
    public init() {}
}
