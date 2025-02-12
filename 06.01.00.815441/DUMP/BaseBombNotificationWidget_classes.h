// WidgetBlueprintGeneratedClass BaseBombNotificationWidget.BaseBombNotificationWidget_C
// Size: 0x320 (Inherited: 0x310)
struct UBaseBombNotificationWidget_C : UBaseGameplayNotificationWidget_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x310(0x08)
	struct UComp_BombEvents_C* BombEventsComp; // 0x318(0x08)

	void UnbindBombEvents(); // Function BaseBombNotificationWidget.BaseBombNotificationWidget_C.UnbindBombEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void BindBombEvents(); // Function BaseBombNotificationWidget.BaseBombNotificationWidget_C.BindBombEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void SetHUDModel(struct UCoordinatedHUDModel* HUDModel); // Function BaseBombNotificationWidget.BaseBombNotificationWidget_C.SetHUDModel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void GameStateChanged(); // Function BaseBombNotificationWidget.BaseBombNotificationWidget_C.GameStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void HandleBombPlantStarted(struct AShooterCharacter* Planter, enum class BombSiteEnum PlantSite); // Function BaseBombNotificationWidget.BaseBombNotificationWidget_C.HandleBombPlantStarted // (BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void HandleBombPlantCanceled(enum class BombSiteEnum PlantSite); // Function BaseBombNotificationWidget.BaseBombNotificationWidget_C.HandleBombPlantCanceled // (BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void HandleBombPlanted(struct FVector PlantLocation, struct AShooterCharacter* BombPlanter, enum class BombSiteEnum PlantSite); // Function BaseBombNotificationWidget.BaseBombNotificationWidget_C.HandleBombPlanted // (BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void HandleBombPlanterKilled(struct AShooterCharacter* Planter); // Function BaseBombNotificationWidget.BaseBombNotificationWidget_C.HandleBombPlanterKilled // (BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void HandleBombPickedUp(struct AShooterCharacter* NewBombHolder); // Function BaseBombNotificationWidget.BaseBombNotificationWidget_C.HandleBombPickedUp // (BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void HandleBombDropped(struct AShooterCharacter* OldBombHolder); // Function BaseBombNotificationWidget.BaseBombNotificationWidget_C.HandleBombDropped // (BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void HandleDefuserKilled(struct AShooterCharacter* Defuser); // Function BaseBombNotificationWidget.BaseBombNotificationWidget_C.HandleDefuserKilled // (BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void HandleBombCarrierKilled(struct AShooterCharacter* OldCarrier); // Function BaseBombNotificationWidget.BaseBombNotificationWidget_C.HandleBombCarrierKilled // (BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void HandleDefuseStart(struct AShooterCharacter* Defuser); // Function BaseBombNotificationWidget.BaseBombNotificationWidget_C.HandleDefuseStart // (BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void HandleDefuseStop(); // Function BaseBombNotificationWidget.BaseBombNotificationWidget_C.HandleDefuseStop // (BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void ExecuteUbergraph_BaseBombNotificationWidget(int32_t EntryPoint); // Function BaseBombNotificationWidget.BaseBombNotificationWidget_C.ExecuteUbergraph_BaseBombNotificationWidget // (Final|UbergraphFunction) // @ game+0x336ad10
};

