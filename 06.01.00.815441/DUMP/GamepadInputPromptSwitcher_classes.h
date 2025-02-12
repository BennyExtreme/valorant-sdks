// WidgetBlueprintGeneratedClass GamepadInputPromptSwitcher.GamepadInputPromptSwitcher_C
// Size: 0x2f8 (Inherited: 0x2c8)
struct UGamepadInputPromptSwitcher_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UNamedSlot* GamepadSlot; // 0x2d0(0x08)
	struct UNamedSlot* KeyboardMouseSlot; // 0x2d8(0x08)
	struct UWidgetSwitcher* Switcher; // 0x2e0(0x08)
	struct TScriptInterface<IInputMethodInterface> InputMethodInterface; // 0x2e8(0x10)

	void UpdateActiveWidgetIndex(); // Function GamepadInputPromptSwitcher.GamepadInputPromptSwitcher_C.UpdateActiveWidgetIndex // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void OnInputMethodChanged(struct UObject* Source); // Function GamepadInputPromptSwitcher.GamepadInputPromptSwitcher_C.OnInputMethodChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void OnInitialized(); // Function GamepadInputPromptSwitcher.GamepadInputPromptSwitcher_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x336ad10
	void ExecuteUbergraph_GamepadInputPromptSwitcher(int32_t EntryPoint); // Function GamepadInputPromptSwitcher.GamepadInputPromptSwitcher_C.ExecuteUbergraph_GamepadInputPromptSwitcher // (Final|UbergraphFunction) // @ game+0x336ad10
};

