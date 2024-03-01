// swift-tools-version: 5.9
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "FeatureToggles",
    products: [
        .library(
            name: "FeatureToggles",
            targets: [
                "FeatureToggles",
                "Experiments"
            ]),
    ],
    dependencies: [
        .package(url: "https://github.com/ayham-achami/CArchSwinject.git", branch: "feature/v-3.0.0")
    ],
    targets: [
        .binaryTarget(name: "Experiments", path: "./experiments.xcframework"),
        .target(
            name: "FeatureToggles",
            dependencies: [
                "Experiments",
                "CArchSwinject"
            ],
            path: "Sources")
    ]
)
