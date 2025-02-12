// WidgetBlueprintGeneratedClass UniversalChargeBar.UniversalChargeBar_C
// Size: 0x380 (Inherited: 0x2c8)
struct UUniversalChargeBar_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UNamedSlot* BarSlot; // 0x2d0(0x08)
	struct UImage* BG; // 0x2d8(0x08)
	struct UImage* BLDot; // 0x2e0(0x08)
	struct UImage* BRDot; // 0x2e8(0x08)
	struct UTextBlock* Charge; // 0x2f0(0x08)
	struct UProgressBar* ChargeBar; // 0x2f8(0x08)
	struct UHorizontalBox* DivisionBox; // 0x300(0x08)
	struct UImage* Image_160; // 0x308(0x08)
	struct UImage* Image_162; // 0x310(0x08)
	struct UImage* Image_163; // 0x318(0x08)
	struct UImage* Image_164; // 0x320(0x08)
	struct UImage* Image_165; // 0x328(0x08)
	struct UImage* Image_166; // 0x330(0x08)
	struct UImage* Image_167; // 0x338(0x08)
	struct UImage* Image_168; // 0x340(0x08)
	struct UNamedSlot* TickSlot; // 0x348(0x08)
	struct UImage* TLDot; // 0x350(0x08)
	struct UImage* TRDot; // 0x358(0x08)
	struct UImage* WhiteOutline; // 0x360(0x08)
	struct FText TopText; // 0x368(0x18)

	void SetChargePercent(float ChargePercent); // Function UniversalChargeBar.UniversalChargeBar_C.SetChargePercent // (BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void SetTopText(struct FText InText); // Function UniversalChargeBar.UniversalChargeBar_C.SetTopText // (BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void SetDividers(int32_t Dividers); // Function UniversalChargeBar.UniversalChargeBar_C.SetDividers // (BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void SetFillColor(struct FLinearColor InColor); // Function UniversalChargeBar.UniversalChargeBar_C.SetFillColor // (BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void ExecuteUbergraph_UniversalChargeBar(int32_t EntryPoint); // Function UniversalChargeBar.UniversalChargeBar_C.ExecuteUbergraph_UniversalChargeBar // (Final|UbergraphFunction|HasDefaults) // @ game+0x336ad10
};

