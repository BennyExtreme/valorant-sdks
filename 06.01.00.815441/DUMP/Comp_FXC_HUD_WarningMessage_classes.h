// BlueprintGeneratedClass Comp_FXC_HUD_WarningMessage.Comp_FXC_HUD_WarningMessage_C
// Size: 0x1b0 (Inherited: 0x134)
struct UComp_FXC_HUD_WarningMessage_C : UComp_FXC_HUD_C {
	char pad_134[0x4]; // 0x134(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x138(0x08)
	struct UWarningMessageHUD_C* WarningMessageHUD; // 0x140(0x08)
	int32_t LifeSpan; // 0x148(0x04)
	char pad_14C[0x4]; // 0x14c(0x04)
	struct FText MessageText; // 0x150(0x18)
	struct FText SubText; // 0x168(0x18)
	struct UAkAudioEvent* AkEvent; // 0x180(0x08)
	bool Continuous; // 0x188(0x01)
	char pad_189[0x3]; // 0x189(0x03)
	float PulseTime; // 0x18c(0x04)
	bool HideExistingWarnings; // 0x190(0x01)
	bool LoopAudio; // 0x191(0x01)
	bool PlayIntroAndOutro; // 0x192(0x01)
	char pad_193[0x5]; // 0x193(0x05)
	struct FText Message Two Text; // 0x198(0x18)

	void SetupHUD_Event(struct UUserWidget* InHUD); // Function Comp_FXC_HUD_WarningMessage.Comp_FXC_HUD_WarningMessage_C.SetupHUD_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void ManualRemoveHUD(); // Function Comp_FXC_HUD_WarningMessage.Comp_FXC_HUD_WarningMessage_C.ManualRemoveHUD // (BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void ExecuteUbergraph_Comp_FXC_HUD_WarningMessage(int32_t EntryPoint); // Function Comp_FXC_HUD_WarningMessage.Comp_FXC_HUD_WarningMessage_C.ExecuteUbergraph_Comp_FXC_HUD_WarningMessage // (Final|UbergraphFunction|HasDefaults) // @ game+0x336ad10
};

