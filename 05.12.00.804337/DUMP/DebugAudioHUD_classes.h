// BlueprintGeneratedClass DebugAudioHUD.DebugAudioHUD_C
// Size: 0xf8 (Inherited: 0x58)
struct UDebugAudioHUD_C : UAresHudElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x58(0x08)
	struct FAresHudFontParams FontParams; // 0x60(0x70)
	float ; // 0xd0(0x04)
	float ; // 0xd4(0x04)
	int32_t TotalFrames; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
	struct FText ; // 0xe0(0x18)

	void OnDraw(float DeltaTime); // Function DebugAudioHUD.DebugAudioHUD_C.OnDraw // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322a90
	void (int32_t EntryPoint); // Function DebugAudioHUD.DebugAudioHUD_C. // (Final|UbergraphFunction|HasDefaults) // @ game+0x3322a90
};

