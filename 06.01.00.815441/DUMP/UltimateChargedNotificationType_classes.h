// BlueprintGeneratedClass UltimateChargedNotificationType.UltimateChargedNotificationType_C
// Size: 0xb0 (Inherited: 0x90)
struct UUltimateChargedNotificationType_C : UBaseAbilityChargedNotificationType_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x90(0x08)
	struct AShooterCharacter* Character; // 0x98(0x08)
	bool bLastUpdateWasEmpty; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct UUltPointsComponent* UltPointsComponent; // 0xa8(0x08)

	void UpdateUltimateAbility(struct AShooterCharacter* Character); // Function UltimateChargedNotificationType.UltimateChargedNotificationType_C.UpdateUltimateAbility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void SetupAbilityBindings(struct AShooterCharacter* Character); // Function UltimateChargedNotificationType.UltimateChargedNotificationType_C.SetupAbilityBindings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void HandleResourceChanged(struct UResourceComponent* ResourceComponent); // Function UltimateChargedNotificationType.UltimateChargedNotificationType_C.HandleResourceChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void ExecuteUbergraph_UltimateChargedNotificationType(int32_t EntryPoint); // Function UltimateChargedNotificationType.UltimateChargedNotificationType_C.ExecuteUbergraph_UltimateChargedNotificationType // (Final|UbergraphFunction) // @ game+0x336ad10
};

