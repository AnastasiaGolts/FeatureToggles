//
//  IntegratorProtocols.swift
//

import Experiments

public protocol IntegratorBinder {
    // naming?
    //func bind(for experiments: [Experiment]) async -> [FeatureToggle]
}

public protocol IntegratorProvider {
    
    func wasSwitched(for toggle: BoolFeatureToggle) async
}
