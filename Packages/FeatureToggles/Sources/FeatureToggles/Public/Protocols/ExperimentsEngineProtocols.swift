//
//  ExperimentsEngineProtocols.swift
//

import Experiments

public protocol ExperimentsEngineMutable {
    
    func set(key: ExperimentsKeys, for toggle: Toggle) async
}

public protocol ExperimentsEngineReadOnly {
    
    func bool(for experiment: Experiment, with toggle: BoolToggle) async -> Bool
}
