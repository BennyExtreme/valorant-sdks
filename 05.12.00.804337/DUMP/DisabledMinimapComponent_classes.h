// BlueprintGeneratedClass DisabledMinimapComponent.DisabledMinimapComponent_C
// Size: 0x550 (Inherited: 0x500)
struct UDisabledMinimapComponent_C : UAresMinimapComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x500(0x08)
	struct UUserWidget* ; // 0x508(0x08)
	struct FGameplayAttribute ; // 0x510(0x38)
	struct AShooterCharacter* ; // 0x548(0x08)

	void UpdateWidgetClass(); // Function DisabledMinimapComponent.DisabledMinimapComponent_C.UpdateWidgetClass // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void ReceiveBeginPlay(); // Function DisabledMinimapComponent.DisabledMinimapComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x3322a90
	void UpdateWidget(struct UUserWidget* Widget, bool bForce); // Function DisabledMinimapComponent.DisabledMinimapComponent_C.UpdateWidget // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void CustomEvent_1(); // Function DisabledMinimapComponent.DisabledMinimapComponent_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void CustomEvent_2(struct UAresAbilitySystemComponent* AbilitySystem, struct FGameplayAttribute& Attribute, float OldValue, float NewValue); // Function DisabledMinimapComponent.DisabledMinimapComponent_C.CustomEvent_2 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (int32_t EntryPoint); // Function DisabledMinimapComponent.DisabledMinimapComponent_C. // (Final|UbergraphFunction|HasDefaults) // @ game+0x3322a90
};

