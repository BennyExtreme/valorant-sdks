// BlueprintGeneratedClass ForceModule_RopeAscender.ForceModule_RopeAscender_C
// Size: 0x2e1 (Inherited: 0x178)
struct UForceModule_RopeAscender_C : UForceModule_RopeAscenderBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x178(0x08)
	struct USplineComponent* Spline; // 0x180(0x08)
	struct UCurveFloat* DesiredSpeedVsRange; // 0x188(0x08)
	bool CanJumpOff; // 0x190(0x01)
	char pad_191[0x3]; // 0x191(0x03)
	struct FVector AttachOffset; // 0x194(0x0c)
	struct FEffectID MoveUpEffectID; // 0x1a0(0x20)
	struct FEffectID MoveDownEffectID; // 0x1c0(0x20)
	bool PlayingMovingUp; // 0x1e0(0x01)
	bool PlayingMovingDown; // 0x1e1(0x01)
	char pad_1E2[0xe]; // 0x1e2(0x0e)
	struct FTransform CurrentSplineTransform; // 0x1f0(0x30)
	struct FVector DesiredSplineVelocity; // 0x220(0x0c)
	char pad_22C[0x4]; // 0x22c(0x04)
	struct UStaticMeshComponent* MovementThresholdPlane; // 0x230(0x08)
	struct FExplicitFloatCurve AngleToPlaneVsSpeed; // 0x238(0x88)
	float CreationTime; // 0x2c0(0x04)
	float MinimumDetachTime; // 0x2c4(0x04)
	float FixedMovementDirection; // 0x2c8(0x04)
	bool JumpPressed; // 0x2cc(0x01)
	char pad_2CD[0x3]; // 0x2cd(0x03)
	float TagModifier; // 0x2d0(0x04)
	struct FGameplayTag DisableAscenderTag; // 0x2d4(0x0c)
	bool ShouldDropOff; // 0x2e0(0x01)

	void RequestDropOff(); // Function ForceModule_RopeAscender.ForceModule_RopeAscender_C.RequestDropOff // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void GetMovementSpeed(float& Speed, bool& Walking); // Function ForceModule_RopeAscender.ForceModule_RopeAscender_C.GetMovementSpeed // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x336ad10
	void FindNearestSplineTransform(struct FTransform& Distance, float& Key); // Function ForceModule_RopeAscender.ForceModule_RopeAscender_C.FindNearestSplineTransform // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void JumpOff(); // Function ForceModule_RopeAscender.ForceModule_RopeAscender_C.JumpOff // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	bool TickForceModule(float DeltaTime); // Function ForceModule_RopeAscender.ForceModule_RopeAscender_C.TickForceModule // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void GetSplineOffset(float SplineDistance, struct FVector& Offset); // Function ForceModule_RopeAscender.ForceModule_RopeAscender_C.GetSplineOffset // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	struct FVector GetAppliedForce(struct FVector DestinationOffset, struct FVector Velocity, float TimeStep); // Function ForceModule_RopeAscender.ForceModule_RopeAscender_C.GetAppliedForce // (Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void Initialize(); // Function ForceModule_RopeAscender.ForceModule_RopeAscender_C.Initialize // (Event|Protected|BlueprintEvent) // @ game+0x336ad10
	void Shutdown(); // Function ForceModule_RopeAscender.ForceModule_RopeAscender_C.Shutdown // (Event|Protected|BlueprintEvent) // @ game+0x336ad10
	void ResetFallDamage(); // Function ForceModule_RopeAscender.ForceModule_RopeAscender_C.ResetFallDamage // (BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void JumpPressedEvent(struct AShooterCharacter* Character); // Function ForceModule_RopeAscender.ForceModule_RopeAscender_C.JumpPressedEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void ExecuteUbergraph_ForceModule_RopeAscender(int32_t EntryPoint); // Function ForceModule_RopeAscender.ForceModule_RopeAscender_C.ExecuteUbergraph_ForceModule_RopeAscender // (Final|UbergraphFunction|HasDefaults) // @ game+0x336ad10
};

