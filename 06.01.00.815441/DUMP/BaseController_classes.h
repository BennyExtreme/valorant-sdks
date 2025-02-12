// BlueprintGeneratedClass BaseController.BaseController_C
// Size: 0xc98 (Inherited: 0xb80)
struct ABaseController_C : AShooterPlayerController {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb80(0x08)
	struct UAresMovementToolingTuningComponent* MovementToolingTuningComponent; // 0xb88(0x08)
	struct URateLimiterComponent* RPCDisconnectRateLimiter; // 0xb90(0x08)
	struct URateLimiterComponent* VORateLimiter; // 0xb98(0x08)
	struct URateLimiterComponent* PingRateLimiter; // 0xba0(0x08)
	struct UGameModeControllerData* GameModeControllerData; // 0xba8(0x08)
	struct UAresAimToolingTuningComponent* AimToolingTuningComponent; // 0xbb0(0x08)
	struct UPlayerNonverbalChatComponent_C* PlayerNonverbalChatComponent; // 0xbb8(0x08)
	struct UThrottledMapPingComponent_C* ThrottledMapPingComponent; // 0xbc0(0x08)
	struct UAud_Base_UI_Component_C* Aud_Base_UI_Component; // 0xbc8(0x08)
	struct UAudioComponent* TeamSelectMusicAudioComponent; // 0xbd0(0x08)
	bool AutoHealing; // 0xbd8(0x01)
	char pad_BD9[0x7]; // 0xbd9(0x07)
	struct FTimerHandle AutoHealHandle; // 0xbe0(0x08)
	struct FMulticastInlineDelegate OnControllerRessed; // 0xbe8(0x10)
	float zPressTimeStamp; // 0xbf8(0x04)
	bool zPressed; // 0xbfc(0x01)
	bool lastInfoScreenVisibility; // 0xbfd(0x01)
	bool zHeld; // 0xbfe(0x01)
	bool pressedRecently; // 0xbff(0x01)
	struct FText controllerPlayerName; // 0xc00(0x18)
	struct FText controllerCharacterName; // 0xc18(0x18)
	bool combatReportToggledOff; // 0xc30(0x01)
	bool teammatesStillAlive; // 0xc31(0x01)
	char pad_C32[0x2]; // 0xc32(0x02)
	float Adjustment; // 0xc34(0x04)
	struct ATextRenderActor* RangeSensitivityDisplay; // 0xc38(0x08)
	struct FMulticastInlineDelegate On Map Toggle; // 0xc40(0x10)
	struct FMulticastInlineDelegate PlayerCommunicated; // 0xc50(0x10)
	enum class NonVerbalCommTypesEnum CommOptionsEnum; // 0xc60(0x01)
	char pad_C61[0x7]; // 0xc61(0x07)
	struct FText CharacterName; // 0xc68(0x18)
	int32_t ShopButtonAction; // 0xc80(0x04)
	bool LocalIsScoreboardVisible; // 0xc84(0x01)
	char pad_C85[0x3]; // 0xc85(0x03)
	struct FMulticastInlineDelegate OnOptionsScreenToggled; // 0xc88(0x10)

	void UpdateInvertSetting(bool Invert); // Function BaseController.BaseController_C.UpdateInvertSetting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void ValidateRPCFrequency(); // Function BaseController.BaseController_C.ValidateRPCFrequency // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void TryConsumeBroadcastVO(bool& bSuccess); // Function BaseController.BaseController_C.TryConsumeBroadcastVO // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void CanPlayerBraodcastVO(bool& bSuccess); // Function BaseController.BaseController_C.CanPlayerBraodcastVO // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void TryConsumeBroadcastPing(bool& bSuccess); // Function BaseController.BaseController_C.TryConsumeBroadcastPing // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void CanPlayerBroadcastPing(bool& bSuccess); // Function BaseController.BaseController_C.CanPlayerBroadcastPing // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void AuthBroadcastTacCalloutChatMessageToTeam(struct FText ChatMessage, struct AShooterPlayerState* Source, struct AShooterPlayerState* Target); // Function BaseController.BaseController_C.AuthBroadcastTacCalloutChatMessageToTeam // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void GenerateChatMessageWithRegions(enum class NonVerbalCommTypesEnum VO, struct FText& ChatMessageText); // Function BaseController.BaseController_C.GenerateChatMessageWithRegions // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void OnRep_PlayerCommunicated(); // Function BaseController.BaseController_C.OnRep_PlayerCommunicated // (BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void CalculateSensitivity(bool Up, bool BIG); // Function BaseController.BaseController_C.CalculateSensitivity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void AuthBroadcastChatMessageToTeam(struct FText ChatMessage, struct AShooterPlayerState* Source, struct AShooterPlayerState* Target); // Function BaseController.BaseController_C.AuthBroadcastChatMessageToTeam // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void UpdateSmokeFrameTick(); // Function BaseController.BaseController_C.UpdateSmokeFrameTick // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void ApplySmokeThisFrame(float SmokeScreenObstructionPercent); // Function BaseController.BaseController_C.ApplySmokeThisFrame // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	float GetSmokeOverlay(); // Function BaseController.BaseController_C.GetSmokeOverlay // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x336ad10
	void AudSetupComponents(); // Function BaseController.BaseController_C.AudSetupComponents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void SpawnInCharacter(struct AShooterCharacter* ShooterCharacterRef); // Function BaseController.BaseController_C.SpawnInCharacter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void DistanceFromEyes(struct AShooterCharacter* ShooterCharacter, struct AActor* OtherActor, float& Distance); // Function BaseController.BaseController_C.DistanceFromEyes // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x336ad10
	void GetOwnedPawnOrSpectatePawn(struct AShooterCharacter*& OutPawn); // Function BaseController.BaseController_C.GetOwnedPawnOrSpectatePawn // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x336ad10
	void AuthToggleAutoHeal(); // Function BaseController.BaseController_C.AuthToggleAutoHeal // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void InpActEvt_InformationalHUD_K2Node_InputActionEvent_1(struct FKey Key); // Function BaseController.BaseController_C.InpActEvt_InformationalHUD_K2Node_InputActionEvent_1 // (BlueprintEvent) // @ game+0x336ad10
	void ReceiveBeginPlay(); // Function BaseController.BaseController_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x336ad10
	void AutoHeal(); // Function BaseController.BaseController_C.AutoHeal // (BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void NewRound(int32_t RoundNumberBeginning); // Function BaseController.BaseController_C.NewRound // (BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void makeBasePing(struct FVector Location, bool upgrade); // Function BaseController.BaseController_C.makeBasePing // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void MarkGroundObjectForTeammates(struct AAresOnGroundEquippable* Equippable, struct FEffectData MarkerData); // Function BaseController.BaseController_C.MarkGroundObjectForTeammates // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void AdjustSensitivity(bool Up, bool BIG); // Function BaseController.BaseController_C.AdjustSensitivity // (Net|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void OnMapToggle(bool bOpen); // Function BaseController.BaseController_C.OnMapToggle // (Event|Public|BlueprintEvent) // @ game+0x336ad10
	void MarkOrbForTeammates(struct AActor* Orb); // Function BaseController.BaseController_C.MarkOrbForTeammates // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void OnScreenTransitionUpdated_Event_1(bool TransitionActive); // Function BaseController.BaseController_C.OnScreenTransitionUpdated_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void Tactical Chat Callout(struct APlayerState* source player state, struct APlayerState* target player state, struct FText Msg); // Function BaseController.BaseController_C.Tactical Chat Callout // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void OnScoreboardVisibilityUpdated(bool Visible); // Function BaseController.BaseController_C.OnScoreboardVisibilityUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void OnOptionsScreenToggled_Event(bool IsVisible); // Function BaseController.BaseController_C.OnOptionsScreenToggled_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void ReceiveTick(float DeltaSeconds); // Function BaseController.BaseController_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x336ad10
	void UpdateInvert(bool Invert); // Function BaseController.BaseController_C.UpdateInvert // (Net|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void TryInspectWeapon(); // Function BaseController.BaseController_C.TryInspectWeapon // (Event|Public|BlueprintEvent) // @ game+0x336ad10
	void ExecuteUbergraph_BaseController(int32_t EntryPoint); // Function BaseController.BaseController_C.ExecuteUbergraph_BaseController // (Final|UbergraphFunction|HasDefaults) // @ game+0x336ad10
	void OnOptionsScreenToggled__DelegateSignature(bool IsVisible); // Function BaseController.BaseController_C.OnOptionsScreenToggled__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void PlayerCommunicated__DelegateSignature(); // Function BaseController.BaseController_C.PlayerCommunicated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void On Map Toggle__DelegateSignature(bool Open); // Function BaseController.BaseController_C.On Map Toggle__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void OnControllerRessed__DelegateSignature(struct FVector Location, bool CanTriggerMultiRes); // Function BaseController.BaseController_C.OnControllerRessed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
};

