// BlueprintGeneratedClass BaseGameState.BaseGameState_C
// Size: 0xd41 (Inherited: 0xbe8)
struct ABaseGameState_C : AShooterGameState {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xbe8(0x08)
	struct UHUDVisibilityData* HUDVisibilityData; // 0xbf0(0x08)
	struct UComp_WidgetPool_C* Comp_WidgetPool; // 0xbf8(0x08)
	struct UComp_GameState_KillChampion_C* Comp_GameState_KillChampion; // 0xc00(0x08)
	struct UComp_GameState_TrackedDebuffTags_C* Comp_GameState_TrackedDebuffTags; // 0xc08(0x08)
	struct UBaseGameplayNotificationSystemComp_C* GameplayNotificationSystemComp; // 0xc10(0x08)
	struct UComp_GameState_HUDEvents_C* Comp_GameState_HUDEvents; // 0xc18(0x08)
	struct ABlueprintTelemetryActor_C* BlueprintTelemetryActor; // 0xc20(0x08)
	int32_t MaxSides; // 0xc28(0x04)
	char pad_C2C[0x4]; // 0xc2c(0x04)
	struct TArray<struct FSlowTimeRequest> SlowTimeRequests; // 0xc30(0x10)
	float Temp_SlowTimeTransitionSpeed; // 0xc40(0x04)
	float Temp_TimeDilationGoal; // 0xc44(0x04)
	float Temp_AfterDilation; // 0xc48(0x04)
	bool ActiveSlowTimeEffects; // 0xc4c(0x01)
	char pad_C4D[0x3]; // 0xc4d(0x03)
	struct FMulticastInlineDelegate OnWaitingForPlayersChanged; // 0xc50(0x10)
	bool IsWaitingForPlayers; // 0xc60(0x01)
	char pad_C61[0x7]; // 0xc61(0x07)
	struct FMulticastInlineDelegate OnLevelStreamingComplete; // 0xc68(0x10)
	struct FMulticastInlineDelegate OnThreeSecCountdownStart; // 0xc78(0x10)
	struct FMulticastInlineDelegate OnFiveSecCountdownStart; // 0xc88(0x10)
	struct FText DefaultRoundNotifyText; // 0xc98(0x18)
	bool IsWarmupRound; // 0xcb0(0x01)
	char pad_CB1[0x7]; // 0xcb1(0x07)
	struct FMulticastInlineDelegate OnWarmupRoundChanged; // 0xcb8(0x10)
	bool ShowCharacterSpecificHUD; // 0xcc8(0x01)
	char pad_CC9[0x3]; // 0xcc9(0x03)
	float CorpseReplaceDelayOffset; // 0xccc(0x04)
	int32_t DefaultScoreLimit; // 0xcd0(0x04)
	bool DisableEnemySpottedVO; // 0xcd4(0x01)
	char pad_CD5[0x3]; // 0xcd5(0x03)
	struct FMulticastInlineDelegate OnTeamsAdded; // 0xcd8(0x10)
	bool ThreeSecondCountdownTriggered; // 0xce8(0x01)
	bool FiveSecondCountdownTriggered; // 0xce9(0x01)
	struct FGameStateInfo GameStateInfo; // 0xcea(0x01)
	char pad_CEB[0x5]; // 0xceb(0x05)
	struct FMulticastInlineDelegate OnOvertimeRulesSet; // 0xcf0(0x10)
	struct FMulticastInlineDelegate AlertThreatCompass; // 0xd00(0x10)
	struct TSoftClassPtr<UObject> FootstepABTestClass; // 0xd10(0x30)
	bool ShouldShowEconomyTooltip; // 0xd40(0x01)

	bool IsNextRoundOvertime(); // Function BaseGameState.BaseGameState_C.IsNextRoundOvertime // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x336ad10
	void InitABTesting(); // Function BaseGameState.BaseGameState_C.InitABTesting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void ShouldAnnouncerPlayForObserver(struct UAnnouncerVOComponent_C* Announcer Component, struct AObserverPlayerState*& Observer, bool& Should Play); // Function BaseGameState.BaseGameState_C.ShouldAnnouncerPlayForObserver // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x336ad10
	void IsTeamOnMatchPoint(struct UBaseTeamComponent* Team, bool& IsOnMatchPoint); // Function BaseGameState.BaseGameState_C.IsTeamOnMatchPoint // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x336ad10
	void GetDefuseProgress(float& CurProgress, float& MaxProgress); // Function BaseGameState.BaseGameState_C.GetDefuseProgress // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x336ad10
	void GetPlantProgress(float& CurProgress, float& MaxProgress); // Function BaseGameState.BaseGameState_C.GetPlantProgress // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void GetPlantInProgress(bool& InProgress); // Function BaseGameState.BaseGameState_C.GetPlantInProgress // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void GetBombState(enum class EAresBombStates& CurrentState); // Function BaseGameState.BaseGameState_C.GetBombState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void ShouldPlayBombEvents(bool& ReturnVal); // Function BaseGameState.BaseGameState_C.ShouldPlayBombEvents // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x336ad10
	void Set Minimum Income Variables(int32_t MinimumIncomeForLoss, bool WillResetMoneyNextRound, int32_t IncomeForWin, int32_t IncomeForLossStreak); // Function BaseGameState.BaseGameState_C.Set Minimum Income Variables // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void CalculateNextRoundMinimumMoney(int32_t CurrentMoney, int32_t& MinimumMoney); // Function BaseGameState.BaseGameState_C.CalculateNextRoundMinimumMoney // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x336ad10
	void CalculateLossStreakBonusMoney(bool IsForNextRound, int32_t& Return Value); // Function BaseGameState.BaseGameState_C.CalculateLossStreakBonusMoney // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x336ad10
	void HasThreeSecondCountdownTriggered(bool& Triggered); // Function BaseGameState.BaseGameState_C.HasThreeSecondCountdownTriggered // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x336ad10
	void IsMinimumRoundRequirementMet(int32_t Current Round, bool& Has Played Minimum Rounds); // Function BaseGameState.BaseGameState_C.IsMinimumRoundRequirementMet // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x336ad10
	void AuthSetIsWarmupRound(bool IsWarmupRound); // Function BaseGameState.BaseGameState_C.AuthSetIsWarmupRound // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void OnRep_IsWarmupRound(); // Function BaseGameState.BaseGameState_C.OnRep_IsWarmupRound // (BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	bool IsInOvertime(); // Function BaseGameState.BaseGameState_C.IsInOvertime // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x336ad10
	void GetOtherTeam(struct UBaseTeamComponent* Team, struct UBaseTeamComponent*& OtherTeam); // Function BaseGameState.BaseGameState_C.GetOtherTeam // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x336ad10
	void GetDefenderTeam(struct UBaseTeamComponent*& Team); // Function BaseGameState.BaseGameState_C.GetDefenderTeam // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x336ad10
	void GetAttackerTeam(struct UBaseTeamComponent*& Team); // Function BaseGameState.BaseGameState_C.GetAttackerTeam // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x336ad10
	void AuthSetIsWaitingForPlayers(bool WaitingForPlayers); // Function BaseGameState.BaseGameState_C.AuthSetIsWaitingForPlayers // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void OnRep_IsWaitingForPlayers(); // Function BaseGameState.BaseGameState_C.OnRep_IsWaitingForPlayers // (BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void GetRoundNotifyText_Deprecated(struct FText& OutRoundNotifyString); // Function BaseGameState.BaseGameState_C.GetRoundNotifyText_Deprecated // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x336ad10
	void AuthCancelSlowTimeRequest(struct AActor* OriginalRequestingActor); // Function BaseGameState.BaseGameState_C.AuthCancelSlowTimeRequest // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void AuthUpdateSlowTimeRequests(float DeltaSeconds); // Function BaseGameState.BaseGameState_C.AuthUpdateSlowTimeRequests // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void AuthSlowTime(struct FSlowTimeRequest New Slow Time Request); // Function BaseGameState.BaseGameState_C.AuthSlowTime // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void ShouldSwitchSides(bool& Should Switch Sides); // Function BaseGameState.BaseGameState_C.ShouldSwitchSides // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x336ad10
	void IsOvertime(bool& Ret); // Function BaseGameState.BaseGameState_C.IsOvertime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x336ad10
	void HasTeamWon(struct UBaseTeamComponent* Team, bool& HasWon); // Function BaseGameState.BaseGameState_C.HasTeamWon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x336ad10
	void IsFirstGameRound(bool& IsFirstGameRound); // Function BaseGameState.BaseGameState_C.IsFirstGameRound // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x336ad10
	void IsSideSwitchRound(bool& Ret); // Function BaseGameState.BaseGameState_C.IsSideSwitchRound // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x336ad10
	void IsMatchPoint(bool& Ret); // Function BaseGameState.BaseGameState_C.IsMatchPoint // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x336ad10
	void GetMaxRoundsPerSide(int32_t& MaxRoundsPerSide); // Function BaseGameState.BaseGameState_C.GetMaxRoundsPerSide // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x336ad10
	void GetSidesPlayed(int32_t& SidesPlayed); // Function BaseGameState.BaseGameState_C.GetSidesPlayed // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x336ad10
	void GetRoundsPlayedThisSide(int32_t& RoundsPlayedThisSide); // Function BaseGameState.BaseGameState_C.GetRoundsPlayedThisSide // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x336ad10
	void TryOverrideMatchTimerText(bool& ShouldOverride, struct FText& OverrideText); // Function BaseGameState.BaseGameState_C.TryOverrideMatchTimerText // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void TryOverrideMatchTimerColor(bool& ShouldOverride, struct FLinearColor& OverrideColor); // Function BaseGameState.BaseGameState_C.TryOverrideMatchTimerColor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void OnPreInitGame(); // Function BaseGameState.BaseGameState_C.OnPreInitGame // (Event|Protected|BlueprintEvent) // @ game+0x336ad10
	void ReceiveTick(float DeltaSeconds); // Function BaseGameState.BaseGameState_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x336ad10
	void UpdateSlowTime(float DeltaTime); // Function BaseGameState.BaseGameState_C.UpdateSlowTime // (BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void SetWaitingForPlayers(bool bWaitingForPlayers); // Function BaseGameState.BaseGameState_C.SetWaitingForPlayers // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void LevelStreamingComplete(); // Function BaseGameState.BaseGameState_C.LevelStreamingComplete // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void ThreeSecCountdownEvent(); // Function BaseGameState.BaseGameState_C.ThreeSecCountdownEvent // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void FiveSecCountdownEvent(); // Function BaseGameState.BaseGameState_C.FiveSecCountdownEvent // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BaseGameState.BaseGameState_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x336ad10
	void Multicast Warmup Ending(); // Function BaseGameState.BaseGameState_C.Multicast Warmup Ending // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void ReceiveBeginPlay(); // Function BaseGameState.BaseGameState_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x336ad10
	void GFTFloatChanged(enum class EGameFeatureFloatConfigName GameFeatureFloatConfigName, float ConfigValue); // Function BaseGameState.BaseGameState_C.GFTFloatChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void ScoreLimitChanged(bool IsValid, float Value); // Function BaseGameState.BaseGameState_C.ScoreLimitChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void ResetCoundownEvents(); // Function BaseGameState.BaseGameState_C.ResetCoundownEvents // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void MarkDroppedBombEvent(struct AEquippableGroundPickup_C* DroppedBombActor); // Function BaseGameState.BaseGameState_C.MarkDroppedBombEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void OrbPickedUpRPC(struct AShooterCharacter* Orb Gatherer); // Function BaseGameState.BaseGameState_C.OrbPickedUpRPC // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void MulticastTimeoutEnding(); // Function BaseGameState.BaseGameState_C.MulticastTimeoutEnding // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void ExecuteUbergraph_BaseGameState(int32_t EntryPoint); // Function BaseGameState.BaseGameState_C.ExecuteUbergraph_BaseGameState // (Final|UbergraphFunction|HasDefaults) // @ game+0x336ad10
	void AlertThreatCompass__DelegateSignature(struct ADangerCompassActor_C* Location); // Function BaseGameState.BaseGameState_C.AlertThreatCompass__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void OnOvertimeRulesSet__DelegateSignature(); // Function BaseGameState.BaseGameState_C.OnOvertimeRulesSet__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void OnTeamsAdded__DelegateSignature(); // Function BaseGameState.BaseGameState_C.OnTeamsAdded__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void OnWarmupRoundChanged__DelegateSignature(bool IsWarmupRound); // Function BaseGameState.BaseGameState_C.OnWarmupRoundChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void OnFiveSecCountdownStart__DelegateSignature(); // Function BaseGameState.BaseGameState_C.OnFiveSecCountdownStart__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void OnThreeSecCountdownStart__DelegateSignature(); // Function BaseGameState.BaseGameState_C.OnThreeSecCountdownStart__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void OnLevelStreamingComplete__DelegateSignature(); // Function BaseGameState.BaseGameState_C.OnLevelStreamingComplete__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
	void OnWaitingForPlayersChanged__DelegateSignature(bool WaitingForPlayers); // Function BaseGameState.BaseGameState_C.OnWaitingForPlayersChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x336ad10
};

