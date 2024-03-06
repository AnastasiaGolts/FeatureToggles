// swift-tools-version: 5.9
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "FeatureToggles",
    defaultLocalization: "en",
    platforms: [
        .iOS(.v13),
        .macCatalyst(.v14)
    ],
    products: [
        .library(
            name: "FeatureToggles",
            targets: [
                "FeatureToggles",
                "Experiments"
            ]),
    ],
    dependencies: [
        .package(url: "https://github.com/rickclephas/KMP-NativeCoroutines.git", exact: "1.0.0-ALPHA-24")
    ],
    targets: [
        .binaryTarget(name: "Experiments", path: "./experiments.xcframework"),
        .target(
            name: "FeatureToggles",
            dependencies: [
                "Experiments",
                .product(name: "KMPNativeCoroutinesCombine", package: "KMP-NativeCoroutines"),
            ],
            path: "Sources")
    ]
)
