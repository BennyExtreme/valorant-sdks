// BlueprintGeneratedClass Comp_BombEvents.Comp_BombEvents_C
// Size: 0x1c0 (Inherited: 0xe8)
struct UComp_BombEvents_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct FMulticastInlineDelegate OnBombPlanted; // 0xf0(0x10)
	struct FMulticastInlineDelegate OnBombDefused; // 0x100(0x10)
	struct FMulticastInlineDelegate OnBombDefuseStart; // 0x110(0x10)
	struct FMulticastInlineDelegate OnBombDefuseStop; // 0x120(0x10)
	struct FMulticastInlineDelegate OnBombPlantStart; // 0x130(0x10)
	struct FMulticastInlineDelegate OnBombPlantCancelled; // 0x140(0x10)
	struct FMulticastInlineDelegate OnBombPickedUp; // 0x150(0x10)
	struct FMulticastInlineDelegate OnBombDropped; // 0x160(0x10)
	struct FMulticastInlineDelegate OnBombDefuserKilled; // 0x170(0x10)
	struct FMulticastInlineDelegate OnBombPlanterKilled; // 0x180(0x10)
	struct FMulticastInlineDelegate OnBombCarrierKilled; // 0x190(0x10)
	struct FMulticastInlineDelegate OnBombExploded; // 0x1a0(0x10)
	struct FMulticastInlineDelegate OnBombStateChanged; // 0x1b0(0x10)

	void BombDefuserKilledRPC(struct AShooterCharacter* ShooterCharacter); // Function Comp_BombEvents.Comp_BombEvents_C.BombDefuserKilledRPC // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void BombPlantedRPC(struct FVector PlantLocation, struct AShooterCharacter* BombPlanter, enum class BombSiteEnum PlantSite); // Function Comp_BombEvents.Comp_BombEvents_C.BombPlantedRPC // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void BombPickedUpRPC(struct AShooterCharacter* NewBombHolder); // Function Comp_BombEvents.Comp_BombEvents_C.BombPickedUpRPC // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void BombCarrierKilledRPC(struct AShooterCharacter* OldCarrier); // Function Comp_BombEvents.Comp_BombEvents_C.BombCarrierKilledRPC // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void BombDroppedRPC(struct AShooterCharacter* OldBombHolder); // Function Comp_BombEvents.Comp_BombEvents_C.BombDroppedRPC // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void BombPlanterKilledRPC(struct AShooterCharacter* Planter); // Function Comp_BombEvents.Comp_BombEvents_C.BombPlanterKilledRPC // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void BombDefuseStopRPC(); // Function Comp_BombEvents.Comp_BombEvents_C.BombDefuseStopRPC // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void BombPlantStartRPC(struct AShooterCharacter* Planter, enum class BombSiteEnum PlantSite); // Function Comp_BombEvents.Comp_BombEvents_C.BombPlantStartRPC // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void BombPlantCancelRPC(enum class BombSiteEnum PlantSite); // Function Comp_BombEvents.Comp_BombEvents_C.BombPlantCancelRPC // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void BombDefuseStartRPC(struct AShooterCharacter* Defuser); // Function Comp_BombEvents.Comp_BombEvents_C.BombDefuseStartRPC // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void BombDefusedRPC(struct AShooterCharacter* DefusingCharacter); // Function Comp_BombEvents.Comp_BombEvents_C.BombDefusedRPC // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void BombExplodedRPC(enum class BombSiteEnum PlantSite); // Function Comp_BombEvents.Comp_BombEvents_C.BombExplodedRPC // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void ExecuteUbergraph_Comp_BombEvents(int32_t EntryPoint); // Function Comp_BombEvents.Comp_BombEvents_C.ExecuteUbergraph_Comp_BombEvents // (Final|UbergraphFunction) // @ game+0x336ad10
	void OnBombStateChanged__DelegateSignature(enum class EAresBombStates BombState); // Function Comp_BombEvents.Comp_BombEvents_C.OnBombStateChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void OnBombExploded__DelegateSignature(enum class BombSiteEnum PlantSite); // Function Comp_BombEvents.Comp_BombEvents_C.OnBombExploded__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void OnBombCarrierKilled__DelegateSignature(struct AShooterCharacter* OldCarrier); // Function Comp_BombEvents.Comp_BombEvents_C.OnBombCarrierKilled__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void OnBombPlanterKilled__DelegateSignature(struct AShooterCharacter* Planter); // Function Comp_BombEvents.Comp_BombEvents_C.OnBombPlanterKilled__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void OnBombDefuserKilled__DelegateSignature(struct AShooterCharacter* Defuser); // Function Comp_BombEvents.Comp_BombEvents_C.OnBombDefuserKilled__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void OnBombDropped__DelegateSignature(struct AShooterCharacter* OldBombHolder); // Function Comp_BombEvents.Comp_BombEvents_C.OnBombDropped__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void OnBombPickedUp__DelegateSignature(struct AShooterCharacter* NewBombHolder); // Function Comp_BombEvents.Comp_BombEvents_C.OnBombPickedUp__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void OnBombPlantCancelled__DelegateSignature(enum class BombSiteEnum PlantSite); // Function Comp_BombEvents.Comp_BombEvents_C.OnBombPlantCancelled__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void OnBombPlantStart__DelegateSignature(struct AShooterCharacter* Planter, enum class BombSiteEnum PlantSite); // Function Comp_BombEvents.Comp_BombEvents_C.OnBombPlantStart__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void OnBombDefuseStop__DelegateSignature(); // Function Comp_BombEvents.Comp_BombEvents_C.OnBombDefuseStop__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void OnBombDefuseStart__DelegateSignature(struct AShooterCharacter* Defuser); // Function Comp_BombEvents.Comp_BombEvents_C.OnBombDefuseStart__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void OnBombDefused__DelegateSignature(struct AShooterCharacter* DefusingCharacter); // Function Comp_BombEvents.Comp_BombEvents_C.OnBombDefused__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void OnBombPlanted__DelegateSignature(struct FVector PlantLocation, struct AShooterCharacter* BombPlanter, enum class BombSiteEnum PlantSite); // Function Comp_BombEvents.Comp_BombEvents_C.OnBombPlanted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
};

