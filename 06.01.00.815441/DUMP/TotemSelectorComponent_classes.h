// BlueprintGeneratedClass TotemSelectorComponent.TotemSelectorComponent_C
// Size: 0xf9 (Inherited: 0xe8)
struct UTotemSelectorComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct URadialTotemSelectorMenu_C* TotemMenu; // 0xf0(0x08)
	bool MenuDirty; // 0xf8(0x01)

	void Populate Menu(); // Function TotemSelectorComponent.TotemSelectorComponent_C.Populate Menu // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void ReceiveBeginPlay(); // Function TotemSelectorComponent.TotemSelectorComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x336ad10
	void ShowRadial(); // Function TotemSelectorComponent.TotemSelectorComponent_C.ShowRadial // (BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void HideRadial(); // Function TotemSelectorComponent.TotemSelectorComponent_C.HideRadial // (BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void CancelRadial(); // Function TotemSelectorComponent.TotemSelectorComponent_C.CancelRadial // (BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void RepopulateMenu(); // Function TotemSelectorComponent.TotemSelectorComponent_C.RepopulateMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function TotemSelectorComponent.TotemSelectorComponent_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x336ad10
	void Equip_Event(struct AAresEquippable* Equippable); // Function TotemSelectorComponent.TotemSelectorComponent_C.Equip_Event // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void CustomEvent_1(struct AAresEquippable* Equippable); // Function TotemSelectorComponent.TotemSelectorComponent_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void GFT Toggled(enum class EGameFeatureToggleName GameFeatureToggleName, bool bEnabled); // Function TotemSelectorComponent.TotemSelectorComponent_C.GFT Toggled // (BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void ExecuteUbergraph_TotemSelectorComponent(int32_t EntryPoint); // Function TotemSelectorComponent.TotemSelectorComponent_C.ExecuteUbergraph_TotemSelectorComponent // (Final|UbergraphFunction) // @ game+0x336ad10
};

