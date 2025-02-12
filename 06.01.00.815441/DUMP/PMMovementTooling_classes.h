// Class PMMovementTooling.PMMovementToolingComponent
// Size: 0x128 (Inherited: 0xe8)
struct UPMMovementToolingComponent : UActorComponent {
	struct TArray<bool> FeaturesEnabledValues; // 0xe8(0x10)
	struct TArray<float> FeatureConfigValues; // 0xf8(0x10)
	struct APlayerController* OwningPC; // 0x108(0x08)
	bool bMovementToolingEnabled; // 0x110(0x01)
	char pad_111[0x3]; // 0x111(0x03)
	struct FVector2D FastStrafingPreviousInputVector; // 0x114(0x08)
	float FastStrafeDirection; // 0x11c(0x04)
	bool bInitialFastStrafingActive; // 0x120(0x01)
	char pad_121[0x7]; // 0x121(0x07)

	bool IsMovementToolingEnabled(); // Function PMMovementTooling.PMMovementToolingComponent.IsMovementToolingEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2d67540
	bool IsFeatureEnabled(enum class EPMMovementToolingFeature Feature); // Function PMMovementTooling.PMMovementToolingComponent.IsFeatureEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x565a320
	float GetFeatureConfig(enum class EPMMovementToolingConfig ConfigName); // Function PMMovementTooling.PMMovementToolingComponent.GetFeatureConfig // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x565a290
};

// Class PMMovementTooling.PMMovementToolingControllerInterface
// Size: 0x30 (Inherited: 0x30)
struct UPMMovementToolingControllerInterface : UInterface {
};

// Class PMMovementTooling.PMMovementToolingStatics
// Size: 0x30 (Inherited: 0x30)
struct UPMMovementToolingStatics : UBlueprintFunctionLibrary {
};

