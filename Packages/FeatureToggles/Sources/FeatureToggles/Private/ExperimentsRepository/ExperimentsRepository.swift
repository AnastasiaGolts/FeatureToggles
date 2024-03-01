//
//  ExperimentsRepository.swift
//

import Foundation

public protocol ExperimentsRepository {
    
    func set(value: Any, key: ExperimentsKeys)
    
    subscript<T>(key: ExperimentsKeys, _: T.Type) -> T? { get }
}
