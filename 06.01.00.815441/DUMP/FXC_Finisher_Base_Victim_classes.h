// BlueprintGeneratedClass FXC_Finisher_Base_Victim.FXC_Finisher_Base_Victim_C
// Size: 0x5c4 (Inherited: 0x530)
struct AFXC_Finisher_Base_Victim_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x530(0x08)
	struct UCameraComponent* Camera; // 0x538(0x08)
	struct USpringArmComponent* SpringArm; // 0x540(0x08)
	struct UComp_FXC_DeathCameraOverride_C* Comp_FXC_DeathCameraOverride; // 0x548(0x08)
	struct UComp_FXC_AudioBasic_C* Comp_FXC_AudioBasic; // 0x550(0x08)
	struct UComp_FXC_PlayAnimation_ShooterCharacter_C* VictimAnimation; // 0x558(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x560(0x08)
	struct TArray<struct FGunSkinParticleInfo> Particle System; // 0x568(0x10)
	float AdditionalDeathSwapDelay; // 0x578(0x04)
	char pad_57C[0x4]; // 0x57c(0x04)
	struct TArray<struct UParticleSystemComponent*> SpawnedPartciles; // 0x580(0x10)
	bool HideCorpse; // 0x590(0x01)
	char pad_591[0x3]; // 0x591(0x03)
	float HideCorpseTime; // 0x594(0x04)
	struct FTimerHandle Hide Corpse Timer; // 0x598(0x08)
	struct FTimerHandle Hide Body Timer; // 0x5a0(0x08)
	struct ABasePawn_C* Victim Player; // 0x5a8(0x08)
	struct AShooterCharacter* Triggering Player; // 0x5b0(0x08)
	float Min Camera Distance; // 0x5b8(0x04)
	float Max Camera Distance; // 0x5bc(0x04)
	float Relative Distance Between Targets; // 0x5c0(0x04)

	void OverrideVariantColor(); // Function FXC_Finisher_Base_Victim.FXC_Finisher_Base_Victim_C.OverrideVariantColor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void GetPreloadAssetPathsOnContainer(int32_t AssetTypes, struct TArray<struct FSoftObjectPath>& AssetPathsToPreload); // Function FXC_Finisher_Base_Victim.FXC_Finisher_Base_Victim_C.GetPreloadAssetPathsOnContainer // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_Finisher_Base_Victim.FXC_Finisher_Base_Victim_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x336ad10
	void StopEffect(enum class EStopEffectType StopEffectType); // Function FXC_Finisher_Base_Victim.FXC_Finisher_Base_Victim_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x336ad10
	void Hide Character(); // Function FXC_Finisher_Base_Victim.FXC_Finisher_Base_Victim_C.Hide Character // (BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void Hide CorpseReplace(); // Function FXC_Finisher_Base_Victim.FXC_Finisher_Base_Victim_C.Hide CorpseReplace // (BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void ReceiveBeginPlay(); // Function FXC_Finisher_Base_Victim.FXC_Finisher_Base_Victim_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x336ad10
	void ReceiveTick(float DeltaSeconds); // Function FXC_Finisher_Base_Victim.FXC_Finisher_Base_Victim_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x336ad10
	void Start Rotation(); // Function FXC_Finisher_Base_Victim.FXC_Finisher_Base_Victim_C.Start Rotation // (BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void ExecuteUbergraph_FXC_Finisher_Base_Victim(int32_t EntryPoint); // Function FXC_Finisher_Base_Victim.FXC_Finisher_Base_Victim_C.ExecuteUbergraph_FXC_Finisher_Base_Victim // (Final|UbergraphFunction|HasDefaults) // @ game+0x336ad10
};

