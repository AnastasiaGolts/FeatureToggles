//
//  UserDefaults+ExperimentsRepository.swift
//

import Foundation

// Зачем нужен?
// MARK: - UserDefaults
public extension UserDefaults {
    
    static var app: UserDefaults {
        .init(suiteName: "app") ?? .init()
    }
    
    subscript(key: ExperimentsKeys) -> Bool? {
        bool(forKey: key.rawValue)
    }
}

// MARK: - UserDefaults + ExperimentsRepository
extension UserDefaults: ExperimentsRepository {
    
    public func set(value: Any, key: ExperimentsKeys) {
        set(value, forKey: key.rawValue)
    }
    
    public subscript<T>(key: ExperimentsKeys, _ type: T.Type) -> T? {
        object(forKey: key.rawValue) as? T
    }
}
