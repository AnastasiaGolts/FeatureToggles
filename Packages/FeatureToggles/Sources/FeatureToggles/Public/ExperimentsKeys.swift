//
//  ExperimentsKeys.swift
//

import Foundation

// MARK: - ExperimentsKeys
public struct ExperimentsKeys: RawRepresentable {
    
    public let rawValue: String
    
    public init(rawValue: String) {
        self.rawValue = rawValue
    }
}

// MARK: - ExperimentsKeys + WelcomeModule
extension ExperimentsKeys {
    
    static let feature1 = Self(rawValue: "feature1")
}
