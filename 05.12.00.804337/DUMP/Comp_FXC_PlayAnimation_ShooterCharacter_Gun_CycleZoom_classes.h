// BlueprintGeneratedClass Comp_FXC_PlayAnimation_ShooterCharacter_Gun_CycleZoom.Comp_FXC_PlayAnimation_ShooterCharacter_Gun_CycleZoom_C
// Size: 0x150 (Inherited: 0xf8)
struct UComp_FXC_PlayAnimation_ShooterCharacter_Gun_CycleZoom_C : UEffectComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf8(0x08)
	struct UAnimMontage* ; // 0x100(0x08)
	struct UAnimMontage* ; // 0x108(0x08)
	struct UAnimMontage* ; // 0x110(0x08)
	struct UAnimMontage* ; // 0x118(0x08)
	bool ; // 0x120(0x01)
	char pad_121[0x3]; // 0x121(0x03)
	float ; // 0x124(0x04)
	float ; // 0x128(0x04)
	char pad_12C[0x4]; // 0x12c(0x04)
	struct AShooterCharacter* OwningShooterCharacter; // 0x130(0x08)
	float StartTime; // 0x138(0x04)
	float ; // 0x13c(0x04)
	bool ; // 0x140(0x01)
	char pad_141[0x7]; // 0x141(0x07)
	struct UAnimMontage* MontageToPlay; // 0x148(0x08)

	void (bool , struct UAnimMontage*& Montage, float& PlayRate, struct UAnimInstance*& AnimInstance); // Function Comp_FXC_PlayAnimation_ShooterCharacter_Gun_CycleZoom.Comp_FXC_PlayAnimation_ShooterCharacter_Gun_CycleZoom_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void GetPlayRate(float , float , float& PlayRate); // Function Comp_FXC_PlayAnimation_ShooterCharacter_Gun_CycleZoom.Comp_FXC_PlayAnimation_ShooterCharacter_Gun_CycleZoom_C.GetPlayRate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function Comp_FXC_PlayAnimation_ShooterCharacter_Gun_CycleZoom.Comp_FXC_PlayAnimation_ShooterCharacter_Gun_CycleZoom_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x3322a90
	void StopEffect(enum class EStopEffectType StopEffectType); // Function Comp_FXC_PlayAnimation_ShooterCharacter_Gun_CycleZoom.Comp_FXC_PlayAnimation_ShooterCharacter_Gun_CycleZoom_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x3322a90
	void (); // Function Comp_FXC_PlayAnimation_ShooterCharacter_Gun_CycleZoom.Comp_FXC_PlayAnimation_ShooterCharacter_Gun_CycleZoom_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void ResetEffect(); // Function Comp_FXC_PlayAnimation_ShooterCharacter_Gun_CycleZoom.Comp_FXC_PlayAnimation_ShooterCharacter_Gun_CycleZoom_C.ResetEffect // (Event|Public|BlueprintEvent) // @ game+0x3322a90
	void (int32_t EntryPoint); // Function Comp_FXC_PlayAnimation_ShooterCharacter_Gun_CycleZoom.Comp_FXC_PlayAnimation_ShooterCharacter_Gun_CycleZoom_C. // (Final|UbergraphFunction) // @ game+0x3322a90
};

