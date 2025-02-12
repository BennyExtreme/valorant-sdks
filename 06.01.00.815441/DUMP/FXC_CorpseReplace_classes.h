// BlueprintGeneratedClass FXC_CorpseReplace.FXC_CorpseReplace_C
// Size: 0x5ac (Inherited: 0x530)
struct AFXC_CorpseReplace_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x530(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x538(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x540(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x548(0x08)
	float Timeline_0_FresnelFadeValue_A56D1F9D4F84763B2046BF87AE1F10B1; // 0x550(0x04)
	float Timeline_0_FadeAmount_A56D1F9D4F84763B2046BF87AE1F10B1; // 0x554(0x04)
	enum class ETimelineDirection Timeline_0__Direction_A56D1F9D4F84763B2046BF87AE1F10B1; // 0x558(0x01)
	char pad_559[0x7]; // 0x559(0x07)
	struct UTimelineComponent* Timeline_1; // 0x560(0x08)
	float SwapDelay; // 0x568(0x04)
	float EffectStartTime; // 0x56c(0x04)
	float MinimapPulseTime; // 0x570(0x04)
	char pad_574[0x4]; // 0x574(0x04)
	struct UCurveFloat* minimapDeadIconPulseCurve ; // 0x578(0x08)
	struct AShooterCharacter* OwningShooterCharacter; // 0x580(0x08)
	float AliveFresnelIntensity; // 0x588(0x04)
	char pad_58C[0x4]; // 0x58c(0x04)
	struct FTimerHandle SwapCorpseTimer; // 0x590(0x08)
	float DefaultSwapDelay; // 0x598(0x04)
	float DifferenceFromDefaultSwapDelay; // 0x59c(0x04)
	struct AShooterCharacter* NewVar_1; // 0x5a0(0x08)
	float AdditionalTimeOnSwap; // 0x5a8(0x04)

	void CheckForFinisherFXCs(); // Function FXC_CorpseReplace.FXC_CorpseReplace_C.CheckForFinisherFXCs // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void UpdateTimer(float AdditionalTime); // Function FXC_CorpseReplace.FXC_CorpseReplace_C.UpdateTimer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void Timeline_0__FinishedFunc(); // Function FXC_CorpseReplace.FXC_CorpseReplace_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x336ad10
	void Timeline_0__UpdateFunc(); // Function FXC_CorpseReplace.FXC_CorpseReplace_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x336ad10
	void SwapCorpse(); // Function FXC_CorpseReplace.FXC_CorpseReplace_C.SwapCorpse // (BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_CorpseReplace.FXC_CorpseReplace_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x336ad10
	void OnExploited_Event_1(struct UCorpseExploitationComponent* ExploitationComponent); // Function FXC_CorpseReplace.FXC_CorpseReplace_C.OnExploited_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void StopEffect(enum class EStopEffectType StopEffectType); // Function FXC_CorpseReplace.FXC_CorpseReplace_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x336ad10
	void ReceiveTick(float DeltaSeconds); // Function FXC_CorpseReplace.FXC_CorpseReplace_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x336ad10
	void ResetEffect(); // Function FXC_CorpseReplace.FXC_CorpseReplace_C.ResetEffect // (Event|Public|BlueprintEvent) // @ game+0x336ad10
	void OnTeamChange(); // Function FXC_CorpseReplace.FXC_CorpseReplace_C.OnTeamChange // (BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void ExecuteUbergraph_FXC_CorpseReplace(int32_t EntryPoint); // Function FXC_CorpseReplace.FXC_CorpseReplace_C.ExecuteUbergraph_FXC_CorpseReplace // (Final|UbergraphFunction|HasDefaults) // @ game+0x336ad10
};

