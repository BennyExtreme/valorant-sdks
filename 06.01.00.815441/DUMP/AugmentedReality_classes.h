// Class AugmentedReality.ARActor
// Size: 0x3d0 (Inherited: 0x3d0)
struct AARActor : AActor {

	struct UARComponent* AddARComponent(struct UARComponent* InComponentClass, struct FGuid& NativeID); // Function AugmentedReality.ARActor.AddARComponent // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3faf180
};

// Class AugmentedReality.ARBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
struct UARBlueprintLibrary : UBlueprintFunctionLibrary {

	void UnpinComponent(struct USceneComponent* ComponentToUnpin); // Function AugmentedReality.ARBlueprintLibrary.UnpinComponent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3fb2490
	bool ToggleARCapture(bool bOnOff, enum class EARCaptureType CaptureType); // Function AugmentedReality.ARBlueprintLibrary.ToggleARCapture // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3fb23c0
	void StopARSession(); // Function AugmentedReality.ARBlueprintLibrary.StopARSession // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3fb23a0
	void StartARSession(struct UARSessionConfig* SessionConfig); // Function AugmentedReality.ARBlueprintLibrary.StartARSession // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3fb2320
	void SetEnabledXRCamera(bool bOnOff); // Function AugmentedReality.ARBlueprintLibrary.SetEnabledXRCamera // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3fb22a0
	void SetARWorldScale(float InWorldScale); // Function AugmentedReality.ARBlueprintLibrary.SetARWorldScale // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3fb2150
	void SetARWorldOriginLocationAndRotation(struct FVector OriginLocation, struct FRotator OriginRotation, bool bIsTransformInWorldSpace, bool bMaintainUpDirection); // Function AugmentedReality.ARBlueprintLibrary.SetARWorldOriginLocationAndRotation // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x3fb1fc0
	void SetAlignmentTransform(struct FTransform& InAlignmentTransform); // Function AugmentedReality.ARBlueprintLibrary.SetAlignmentTransform // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3fb21d0
	bool SaveARPinToLocalStore(struct FName InSaveName, struct UARPin* InPin); // Function AugmentedReality.ARBlueprintLibrary.SaveARPinToLocalStore // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3fb1ee0
	struct FIntPoint ResizeXRCamera(struct FIntPoint& InSize); // Function AugmentedReality.ARBlueprintLibrary.ResizeXRCamera // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3fb1e40
	void RemovePin(struct UARPin* PinToRemove); // Function AugmentedReality.ARBlueprintLibrary.RemovePin // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3fb1dc0
	void RemoveARPinFromLocalStore(struct FName InSaveName); // Function AugmentedReality.ARBlueprintLibrary.RemoveARPinFromLocalStore // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3fb1d10
	void RemoveAllARPinsFromLocalStore(); // Function AugmentedReality.ARBlueprintLibrary.RemoveAllARPinsFromLocalStore // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3fb1da0
	struct UARPin* PinComponentToTraceResult(struct USceneComponent* ComponentToPin, struct FARTraceResult& TraceResult, struct FName DebugName); // Function AugmentedReality.ARBlueprintLibrary.PinComponentToTraceResult // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3fb1b90
	bool PinComponentToARPin(struct USceneComponent* ComponentToPin, struct UARPin* Pin); // Function AugmentedReality.ARBlueprintLibrary.PinComponentToARPin // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3fb1ac0
	struct UARPin* PinComponent(struct USceneComponent* ComponentToPin, struct FTransform& PinToWorldTransform, struct UARTrackedGeometry* TrackedGeometry, struct FName DebugName); // Function AugmentedReality.ARBlueprintLibrary.PinComponent // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3fb1900
	void PauseARSession(); // Function AugmentedReality.ARBlueprintLibrary.PauseARSession // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3fb18e0
	struct TMap<struct FName, struct UARPin*> LoadARPinsFromLocalStore(); // Function AugmentedReality.ARBlueprintLibrary.LoadARPinsFromLocalStore // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3fb1800
	struct TArray<struct FARTraceResult> LineTraceTrackedObjects3D(struct FVector Start, struct FVector End, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon); // Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects3D // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x3fb1380
	struct TArray<struct FARTraceResult> LineTraceTrackedObjects(struct FVector2D ScreenCoord, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon); // Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x3fb15e0
	bool IsSessionTypeSupported(enum class EARSessionType SessionType); // Function AugmentedReality.ARBlueprintLibrary.IsSessionTypeSupported // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3fb1300
	bool IsSessionTrackingFeatureSupported(enum class EARSessionType SessionType, enum class EARSessionTrackingFeature SessionTrackingFeature); // Function AugmentedReality.ARBlueprintLibrary.IsSessionTrackingFeatureSupported // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3fb1240
	bool IsSceneReconstructionSupported(enum class EARSessionType SessionType, enum class EARSceneReconstruction SceneReconstructionMethod); // Function AugmentedReality.ARBlueprintLibrary.IsSceneReconstructionSupported // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3fb1180
	bool IsARSupported(); // Function AugmentedReality.ARBlueprintLibrary.IsARSupported // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3fb1150
	bool IsARPinLocalStoreSupported(); // Function AugmentedReality.ARBlueprintLibrary.IsARPinLocalStoreSupported // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3fb1120
	bool IsARPinLocalStoreReady(); // Function AugmentedReality.ARBlueprintLibrary.IsARPinLocalStoreReady // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3fb10f0
	enum class EARWorldMappingState GetWorldMappingStatus(); // Function AugmentedReality.ARBlueprintLibrary.GetWorldMappingStatus // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3fb10c0
	enum class EARTrackingQualityReason GetTrackingQualityReason(); // Function AugmentedReality.ARBlueprintLibrary.GetTrackingQualityReason // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3fb1090
	enum class EARTrackingQuality GetTrackingQuality(); // Function AugmentedReality.ARBlueprintLibrary.GetTrackingQuality // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3fb1060
	struct TArray<struct FARVideoFormat> GetSupportedVideoFormats(enum class EARSessionType SessionType); // Function AugmentedReality.ARBlueprintLibrary.GetSupportedVideoFormats // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3fb0dd0
	struct UARSessionConfig* GetSessionConfig(); // Function AugmentedReality.ARBlueprintLibrary.GetSessionConfig // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3fb0da0
	struct TArray<struct FVector> GetPointCloud(); // Function AugmentedReality.ARBlueprintLibrary.GetPointCloud // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3fb0d10
	struct UARTexture* GetPersonSegmentationImage(); // Function AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationImage // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3fb0ce0
	struct UARTexture* GetPersonSegmentationDepthImage(); // Function AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationDepthImage // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3fb0cb0
	bool GetObjectClassificationAtLocation(struct FVector& InWorldLocation, enum class EARObjectClassification& OutClassification, struct FVector& OutClassificationLocation, float MaxLocationDiff); // Function AugmentedReality.ARBlueprintLibrary.GetObjectClassificationAtLocation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3fb0b20
	int32_t GetNumberOfTrackedFacesSupported(); // Function AugmentedReality.ARBlueprintLibrary.GetNumberOfTrackedFacesSupported // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3fb0af0
	struct UARLightEstimate* GetCurrentLightEstimate(); // Function AugmentedReality.ARBlueprintLibrary.GetCurrentLightEstimate // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3fb0710
	bool GetCameraIntrinsics(struct FARCameraIntrinsics& OutCameraIntrinsics); // Function AugmentedReality.ARBlueprintLibrary.GetCameraIntrinsics // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3fb0650
	struct UARTextureCameraImage* GetCameraImage(); // Function AugmentedReality.ARBlueprintLibrary.GetCameraImage // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3fb0620
	struct UARTextureCameraDepth* GetCameraDepth(); // Function AugmentedReality.ARBlueprintLibrary.GetCameraDepth // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3fb05f0
	float GetARWorldScale(); // Function AugmentedReality.ARBlueprintLibrary.GetARWorldScale // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3faff40
	struct UARTexture* GetARTexture(enum class EARTextureType TextureType); // Function AugmentedReality.ARBlueprintLibrary.GetARTexture // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3fafec0
	struct FARSessionStatus GetARSessionStatus(); // Function AugmentedReality.ARBlueprintLibrary.GetARSessionStatus // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3fafe30
	struct TArray<struct UARTrackedPose*> GetAllTrackedPoses(); // Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoses // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3fb0560
	struct TArray<struct UARTrackedPoint*> GetAllTrackedPoints(); // Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoints // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3fb04d0
	struct TArray<struct UARPlaneGeometry*> GetAllTrackedPlanes(); // Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPlanes // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3fb0440
	struct TArray<struct UARTrackedImage*> GetAllTrackedImages(); // Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedImages // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3fb03b0
	struct TArray<struct UAREnvironmentCaptureProbe*> GetAllTrackedEnvironmentCaptureProbes(); // Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedEnvironmentCaptureProbes // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3fb0320
	struct TArray<struct FARPose2D> GetAllTracked2DPoses(); // Function AugmentedReality.ARBlueprintLibrary.GetAllTracked2DPoses // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3fb01d0
	struct TArray<struct UARPin*> GetAllPins(); // Function AugmentedReality.ARBlueprintLibrary.GetAllPins // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3fb0140
	struct TArray<struct UARTrackedGeometry*> GetAllGeometriesByClass(struct UARTrackedGeometry* GeometryClass); // Function AugmentedReality.ARBlueprintLibrary.GetAllGeometriesByClass // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3fb0060
	struct TArray<struct UARTrackedGeometry*> GetAllGeometries(); // Function AugmentedReality.ARBlueprintLibrary.GetAllGeometries // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3faffd0
	struct FTransform GetAlignmentTransform(); // Function AugmentedReality.ARBlueprintLibrary.GetAlignmentTransform // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x3faff70
	struct TArray<struct UARTrackedPoint*> FindTrackedPointsByName(struct FString PointName); // Function AugmentedReality.ARBlueprintLibrary.FindTrackedPointsByName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3fafd40
	void DebugDrawTrackedGeometry(struct UARTrackedGeometry* TrackedGeometry, struct UObject* WorldContextObject, struct FLinearColor Color, float OutlineThickness, float PersistForSeconds); // Function AugmentedReality.ARBlueprintLibrary.DebugDrawTrackedGeometry // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x3fafba0
	void DebugDrawPin(struct UARPin* ARPin, struct UObject* WorldContextObject, struct FLinearColor Color, float Scale, float PersistForSeconds); // Function AugmentedReality.ARBlueprintLibrary.DebugDrawPin // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x3fafa00
	void CalculateClosestIntersection(struct TArray<struct FVector>& StartPoints, struct TArray<struct FVector>& EndPoints, struct FVector& ClosestIntersection); // Function AugmentedReality.ARBlueprintLibrary.CalculateClosestIntersection // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3faf890
	void CalculateAlignmentTransform(struct FTransform& TransformInFirstCoordinateSystem, struct FTransform& TransformInSecondCoordinateSystem, struct FTransform& AlignmentTransform); // Function AugmentedReality.ARBlueprintLibrary.CalculateAlignmentTransform // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3faf6a0
	bool AddTrackedPointWithName(struct FTransform& WorldTransform, struct FString PointName, bool bDeletePointsWithSameName); // Function AugmentedReality.ARBlueprintLibrary.AddTrackedPointWithName // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3faf500
	struct UARCandidateImage* AddRuntimeCandidateImage(struct UARSessionConfig* SessionConfig, struct UTexture2D* CandidateTexture, struct FString FriendlyName, float PhysicalWidth); // Function AugmentedReality.ARBlueprintLibrary.AddRuntimeCandidateImage // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3faf350
	bool AddManualEnvironmentCaptureProbe(struct FVector Location, struct FVector Extent); // Function AugmentedReality.ARBlueprintLibrary.AddManualEnvironmentCaptureProbe // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x3faf270
};

// Class AugmentedReality.ARTraceResultLibrary
// Size: 0x30 (Inherited: 0x30)
struct UARTraceResultLibrary : UBlueprintFunctionLibrary {

	struct UARTrackedGeometry* GetTrackedGeometry(struct FARTraceResult& TraceResult); // Function AugmentedReality.ARTraceResultLibrary.GetTrackedGeometry // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3fb0f80
	enum class EARLineTraceChannels GetTraceChannel(struct FARTraceResult& TraceResult); // Function AugmentedReality.ARTraceResultLibrary.GetTraceChannel // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3fb0ea0
	struct FTransform GetLocalTransform(struct FARTraceResult& TraceResult); // Function AugmentedReality.ARTraceResultLibrary.GetLocalTransform // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x3fb0a00
	struct FTransform GetLocalToWorldTransform(struct FARTraceResult& TraceResult); // Function AugmentedReality.ARTraceResultLibrary.GetLocalToWorldTransform // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x3fb0910
	struct FTransform GetLocalToTrackingTransform(struct FARTraceResult& TraceResult); // Function AugmentedReality.ARTraceResultLibrary.GetLocalToTrackingTransform // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x3fb0820
	float GetDistanceFromCamera(struct FARTraceResult& TraceResult); // Function AugmentedReality.ARTraceResultLibrary.GetDistanceFromCamera // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3fb0740
};

// Class AugmentedReality.ARBaseAsyncTaskBlueprintProxy
// Size: 0x68 (Inherited: 0x38)
struct UARBaseAsyncTaskBlueprintProxy : UBlueprintAsyncActionBase {
	char pad_38[0x30]; // 0x38(0x30)
};

// Class AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy
// Size: 0x98 (Inherited: 0x68)
struct UARSaveWorldAsyncTaskBlueprintProxy : UARBaseAsyncTaskBlueprintProxy {
	struct FMulticastInlineDelegate OnSuccess; // 0x68(0x10)
	struct FMulticastInlineDelegate OnFailed; // 0x78(0x10)
	char pad_88[0x10]; // 0x88(0x10)

	struct UARSaveWorldAsyncTaskBlueprintProxy* ARSaveWorld(struct UObject* WorldContextObject); // Function AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy.ARSaveWorld // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3fbc710
};

// Class AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy
// Size: 0xb0 (Inherited: 0x68)
struct UARGetCandidateObjectAsyncTaskBlueprintProxy : UARBaseAsyncTaskBlueprintProxy {
	struct FMulticastInlineDelegate OnSuccess; // 0x68(0x10)
	struct FMulticastInlineDelegate OnFailed; // 0x78(0x10)
	char pad_88[0x28]; // 0x88(0x28)

	struct UARGetCandidateObjectAsyncTaskBlueprintProxy* ARGetCandidateObject(struct UObject* WorldContextObject, struct FVector Location, struct FVector Extent); // Function AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy.ARGetCandidateObject // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x3fbc5e0
};

// Class AugmentedReality.ARComponent
// Size: 0x310 (Inherited: 0x290)
struct UARComponent : USceneComponent {
	struct FGuid NativeID; // 0x288(0x10)
	char pad_2A0[0x28]; // 0x2a0(0x28)
	bool bUseDefaultReplication; // 0x2c8(0x01)
	char pad_2C9[0x7]; // 0x2c9(0x07)
	struct UMaterialInterface* DefaultMeshMaterial; // 0x2d0(0x08)
	struct UMaterialInterface* DefaultWireframeMeshMaterial; // 0x2d8(0x08)
	struct UMRMeshComponent* MRMeshComponent; // 0x2e0(0x08)
	struct UARTrackedGeometry* MyTrackedGeometry; // 0x2e8(0x08)
	char pad_2F0[0x20]; // 0x2f0(0x20)

	void UpdateVisualization(); // Function AugmentedReality.ARComponent.UpdateVisualization // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2ce0bc0
	void SetNativeID(struct FGuid NativeID); // Function AugmentedReality.ARComponent.SetNativeID // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3fbd970
	void ReceiveRemove(); // Function AugmentedReality.ARComponent.ReceiveRemove // (Event|Public|BlueprintEvent) // @ game+0x336ad10
	void OnRep_Payload(); // Function AugmentedReality.ARComponent.OnRep_Payload // (Native|Protected) // @ game+0x3fbc8b0
	struct UMRMeshComponent* GetMRMesh(); // Function AugmentedReality.ARComponent.GetMRMesh // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x3fbc7a0
};

// Class AugmentedReality.ARPlaneComponent
// Size: 0x390 (Inherited: 0x310)
struct UARPlaneComponent : UARComponent {
	struct FARPlaneUpdatePayload ReplicatedPayload; // 0x310(0x80)

	void SetPlaneComponentDebugMode(enum class EPlaneComponentDebugMode NewDebugMode); // Function AugmentedReality.ARPlaneComponent.SetPlaneComponentDebugMode // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3fbdb10
	void SetObjectClassificationDebugColors(struct TMap<enum class EARObjectClassification, struct FLinearColor>& InColors); // Function AugmentedReality.ARPlaneComponent.SetObjectClassificationDebugColors // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3fbda10
	void ServerUpdatePayload(struct FARPlaneUpdatePayload NewPayload); // Function AugmentedReality.ARPlaneComponent.ServerUpdatePayload // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x3fbd1d0
	void ReceiveUpdate(struct FARPlaneUpdatePayload& Payload); // Function AugmentedReality.ARPlaneComponent.ReceiveUpdate // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x336ad10
	void ReceiveAdd(struct FARPlaneUpdatePayload& Payload); // Function AugmentedReality.ARPlaneComponent.ReceiveAdd // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x336ad10
	struct TMap<enum class EARObjectClassification, struct FLinearColor> GetObjectClassificationDebugColors(); // Function AugmentedReality.ARPlaneComponent.GetObjectClassificationDebugColors // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3fbc7c0
};

// Class AugmentedReality.ARPointComponent
// Size: 0x310 (Inherited: 0x310)
struct UARPointComponent : UARComponent {
	struct FARPointUpdatePayload ReplicatedPayload; // 0x308(0x01)

	void ServerUpdatePayload(struct FARPointUpdatePayload NewPayload); // Function AugmentedReality.ARPointComponent.ServerUpdatePayload // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x3fbd3a0
	void ReceiveUpdate(struct FARPointUpdatePayload& Payload); // Function AugmentedReality.ARPointComponent.ReceiveUpdate // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x336ad10
	void ReceiveAdd(struct FARPointUpdatePayload& Payload); // Function AugmentedReality.ARPointComponent.ReceiveAdd // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x336ad10
};

// Class AugmentedReality.ARFaceComponent
// Size: 0x370 (Inherited: 0x310)
struct UARFaceComponent : UARComponent {
	enum class EARFaceTransformMixing TransformSetting; // 0x308(0x01)
	bool bUpdateVertexNormal; // 0x309(0x01)
	bool bFaceOutOfScreen; // 0x30a(0x01)
	struct FARFaceUpdatePayload ReplicatedPayload; // 0x310(0x40)
	char pad_353[0x1d]; // 0x353(0x1d)

	void SetFaceComponentDebugMode(enum class EFaceComponentDebugMode NewDebugMode); // Function AugmentedReality.ARFaceComponent.SetFaceComponentDebugMode // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3fbd820
	void ServerUpdatePayload(struct FARFaceUpdatePayload NewPayload); // Function AugmentedReality.ARFaceComponent.ServerUpdatePayload // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x3fbca40
	void ReceiveUpdate(struct FARFaceUpdatePayload& Payload); // Function AugmentedReality.ARFaceComponent.ReceiveUpdate // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x336ad10
	void ReceiveAdd(struct FARFaceUpdatePayload& Payload); // Function AugmentedReality.ARFaceComponent.ReceiveAdd // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x336ad10
};

// Class AugmentedReality.ARImageComponent
// Size: 0x370 (Inherited: 0x310)
struct UARImageComponent : UARComponent {
	struct FARImageUpdatePayload ReplicatedPayload; // 0x310(0x60)

	void SetImageComponentDebugMode(enum class EImageComponentDebugMode NewDebugMode); // Function AugmentedReality.ARImageComponent.SetImageComponentDebugMode // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3fbd900
	void ServerUpdatePayload(struct FARImageUpdatePayload NewPayload); // Function AugmentedReality.ARImageComponent.ServerUpdatePayload // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x3fbcd30
	void ReceiveUpdate(struct FARImageUpdatePayload& Payload); // Function AugmentedReality.ARImageComponent.ReceiveUpdate // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x336ad10
	void ReceiveAdd(struct FARImageUpdatePayload& Payload); // Function AugmentedReality.ARImageComponent.ReceiveAdd // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x336ad10
};

// Class AugmentedReality.ARQRCodeComponent
// Size: 0x380 (Inherited: 0x310)
struct UARQRCodeComponent : UARComponent {
	struct FARQRCodeUpdatePayload ReplicatedPayload; // 0x310(0x70)

	void SetQRCodeComponentDebugMode(enum class EQRCodeComponentDebugMode NewDebugMode); // Function AugmentedReality.ARQRCodeComponent.SetQRCodeComponentDebugMode // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3fbdbf0
	void ServerUpdatePayload(struct FARQRCodeUpdatePayload NewPayload); // Function AugmentedReality.ARQRCodeComponent.ServerUpdatePayload // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x3fbd670
	void ReceiveUpdate(struct FARQRCodeUpdatePayload& Payload); // Function AugmentedReality.ARQRCodeComponent.ReceiveUpdate // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x336ad10
	void ReceiveAdd(struct FARQRCodeUpdatePayload& Payload); // Function AugmentedReality.ARQRCodeComponent.ReceiveAdd // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x336ad10
};

// Class AugmentedReality.ARPoseComponent
// Size: 0x350 (Inherited: 0x310)
struct UARPoseComponent : UARComponent {
	struct FARPoseUpdatePayload ReplicatedPayload; // 0x310(0x40)

	void SetPoseComponentDebugMode(enum class EPoseComponentDebugMode NewDebugMode); // Function AugmentedReality.ARPoseComponent.SetPoseComponentDebugMode // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3fbdb80
	void ServerUpdatePayload(struct FARPoseUpdatePayload NewPayload); // Function AugmentedReality.ARPoseComponent.ServerUpdatePayload // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x3fbd4d0
	void ReceiveUpdate(struct FARPoseUpdatePayload& Payload); // Function AugmentedReality.ARPoseComponent.ReceiveUpdate // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x336ad10
	void ReceiveAdd(struct FARPoseUpdatePayload& Payload); // Function AugmentedReality.ARPoseComponent.ReceiveAdd // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x336ad10
};

// Class AugmentedReality.AREnvironmentProbeComponent
// Size: 0x340 (Inherited: 0x310)
struct UAREnvironmentProbeComponent : UARComponent {
	struct FAREnvironmentProbeUpdatePayload ReplicatedPayload; // 0x310(0x30)

	void ServerUpdatePayload(struct FAREnvironmentProbeUpdatePayload NewPayload); // Function AugmentedReality.AREnvironmentProbeComponent.ServerUpdatePayload // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x3fbc8e0
	void ReceiveUpdate(struct FAREnvironmentProbeUpdatePayload& Payload); // Function AugmentedReality.AREnvironmentProbeComponent.ReceiveUpdate // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x336ad10
	void ReceiveAdd(struct FAREnvironmentProbeUpdatePayload& Payload); // Function AugmentedReality.AREnvironmentProbeComponent.ReceiveAdd // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x336ad10
};

// Class AugmentedReality.ARObjectComponent
// Size: 0x340 (Inherited: 0x310)
struct UARObjectComponent : UARComponent {
	struct FARObjectUpdatePayload ReplicatedPayload; // 0x310(0x30)

	void ServerUpdatePayload(struct FARObjectUpdatePayload NewPayload); // Function AugmentedReality.ARObjectComponent.ServerUpdatePayload // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x3fbd070
	void ReceiveUpdate(struct FARObjectUpdatePayload& Payload); // Function AugmentedReality.ARObjectComponent.ReceiveUpdate // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x336ad10
	void ReceiveAdd(struct FARObjectUpdatePayload& Payload); // Function AugmentedReality.ARObjectComponent.ReceiveAdd // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x336ad10
};

// Class AugmentedReality.ARMeshComponent
// Size: 0x370 (Inherited: 0x310)
struct UARMeshComponent : UARComponent {
	struct FARMeshUpdatePayload ReplicatedPayload; // 0x310(0x60)

	void ServerUpdatePayload(struct FARMeshUpdatePayload NewPayload); // Function AugmentedReality.ARMeshComponent.ServerUpdatePayload // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x3fbcee0
	void ReceiveUpdate(struct FARMeshUpdatePayload& Payload); // Function AugmentedReality.ARMeshComponent.ReceiveUpdate // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x336ad10
	void ReceiveAdd(struct FARMeshUpdatePayload& Payload); // Function AugmentedReality.ARMeshComponent.ReceiveAdd // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x336ad10
};

// Class AugmentedReality.ARGeoAnchorComponent
// Size: 0x380 (Inherited: 0x310)
struct UARGeoAnchorComponent : UARComponent {
	struct FARGeoAnchorUpdatePayload ReplicatedPayload; // 0x310(0x70)

	void SetGeoAnchorComponentDebugMode(enum class EGeoAnchorComponentDebugMode NewDebugMode); // Function AugmentedReality.ARGeoAnchorComponent.SetGeoAnchorComponentDebugMode // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3fbd890
	void ServerUpdatePayload(struct FARGeoAnchorUpdatePayload NewPayload); // Function AugmentedReality.ARGeoAnchorComponent.ServerUpdatePayload // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x3fbcb80
	void ReceiveUpdate(struct FARGeoAnchorUpdatePayload& Payload); // Function AugmentedReality.ARGeoAnchorComponent.ReceiveUpdate // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x336ad10
	void ReceiveAdd(struct FARGeoAnchorUpdatePayload& Payload); // Function AugmentedReality.ARGeoAnchorComponent.ReceiveAdd // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x336ad10
};

// Class AugmentedReality.ARDependencyHandler
// Size: 0x30 (Inherited: 0x30)
struct UARDependencyHandler : UObject {

	void StartARSessionLatent(struct UObject* WorldContextObject, struct UARSessionConfig* SessionConfig, struct FLatentActionInfo LatentInfo); // Function AugmentedReality.ARDependencyHandler.StartARSessionLatent // (Native|Public|BlueprintCallable) // @ game+0x3fc9030
	void RequestARSessionPermission(struct UObject* WorldContextObject, struct UARSessionConfig* SessionConfig, struct FLatentActionInfo LatentInfo, enum class EARServicePermissionRequestResult& OutPermissionResult); // Function AugmentedReality.ARDependencyHandler.RequestARSessionPermission // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3fc84e0
	void InstallARService(struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo, enum class EARServiceInstallRequestResult& OutInstallResult); // Function AugmentedReality.ARDependencyHandler.InstallARService // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3fc8370
	struct UARDependencyHandler* GetARDependencyHandler(); // Function AugmentedReality.ARDependencyHandler.GetARDependencyHandler // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3fc7d80
	void CheckARServiceAvailability(struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo, enum class EARServiceAvailability& OutAvailability); // Function AugmentedReality.ARDependencyHandler.CheckARServiceAvailability // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3fc7910
};

// Class AugmentedReality.ARGeoTrackingSupport
// Size: 0x30 (Inherited: 0x30)
struct UARGeoTrackingSupport : UObject {

	struct UARGeoTrackingSupport* GetGeoTrackingSupport(); // Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingSupport // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3fc8150
	enum class EARGeoTrackingStateReason GetGeoTrackingStateReason(); // Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingStateReason // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2c48f10
	enum class EARGeoTrackingState GetGeoTrackingState(); // Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingState // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2d44cf0
	enum class EARGeoTrackingAccuracy GetGeoTrackingAccuracy(); // Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingAccuracy // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b1c1d0
	bool AddGeoAnchorAtLocationWithAltitude(float Longitude, float Latitude, float AltitudeMeters, struct FString OptionalAnchorName); // Function AugmentedReality.ARGeoTrackingSupport.AddGeoAnchorAtLocationWithAltitude // (Native|Public|BlueprintCallable) // @ game+0x3fc7740
	bool AddGeoAnchorAtLocation(float Longitude, float Latitude, struct FString OptionalAnchorName); // Function AugmentedReality.ARGeoTrackingSupport.AddGeoAnchorAtLocation // (Native|Public|BlueprintCallable) // @ game+0x3fc75b0
};

// Class AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy
// Size: 0xb8 (Inherited: 0x68)
struct UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy : UARBaseAsyncTaskBlueprintProxy {
	struct FMulticastInlineDelegate OnSuccess; // 0x68(0x10)
	struct FMulticastInlineDelegate OnFailed; // 0x78(0x10)
	char pad_88[0x30]; // 0x88(0x30)

	void GeoTrackingAvailabilityDelegate__DelegateSignature(bool bIsAvailable, struct FString Error); // DelegateFunction AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.GeoTrackingAvailabilityDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x336ad10
	struct UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* CheckGeoTrackingAvailabilityAtLocation(struct UObject* WorldContextObject, float Longitude, float Latitude); // Function AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.CheckGeoTrackingAvailabilityAtLocation // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3fc7b10
	struct UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* CheckGeoTrackingAvailability(struct UObject* WorldContextObject); // Function AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.CheckGeoTrackingAvailability // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3fc7a80
};

// Class AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy
// Size: 0xb8 (Inherited: 0x68)
struct UGetGeoLocationAsyncTaskBlueprintProxy : UARBaseAsyncTaskBlueprintProxy {
	struct FMulticastInlineDelegate OnSuccess; // 0x68(0x10)
	struct FMulticastInlineDelegate OnFailed; // 0x78(0x10)
	char pad_88[0x30]; // 0x88(0x30)

	void GetGeoLocationDelegate__DelegateSignature(float Longitude, float Latitude, float Altitude, struct FString Error); // DelegateFunction AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy.GetGeoLocationDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x336ad10
	struct UGetGeoLocationAsyncTaskBlueprintProxy* GetGeoLocationAtWorldPosition(struct UObject* WorldContextObject, struct FVector& WorldPosition); // Function AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy.GetGeoLocationAtWorldPosition // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3fc8080
};

// Class AugmentedReality.ARLifeCycleComponent
// Size: 0x2c0 (Inherited: 0x290)
struct UARLifeCycleComponent : USceneComponent {
	struct FMulticastInlineDelegate OnARActorSpawnedDelegate; // 0x288(0x10)
	struct FMulticastInlineDelegate OnARActorToBeDestroyedDelegate; // 0x298(0x10)
	char pad_2B0[0x10]; // 0x2b0(0x10)

	void ServerSpawnARActor(struct UObject* ComponentClass, struct FGuid NativeID); // Function AugmentedReality.ARLifeCycleComponent.ServerSpawnARActor // (Final|Net|NetReliableNative|Event|Private|NetServer|HasDefaults|NetValidate) // @ game+0x3fc87a0
	void ServerDestroyARActor(struct AARActor* Actor); // Function AugmentedReality.ARLifeCycleComponent.ServerDestroyARActor // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x3fc8660
	void InstanceARActorToBeDestroyedDelegate__DelegateSignature(struct AARActor* Actor); // DelegateFunction AugmentedReality.ARLifeCycleComponent.InstanceARActorToBeDestroyedDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x336ad10
	void InstanceARActorSpawnedDelegate__DelegateSignature(struct UObject* ComponentClass, struct FGuid NativeID, struct AARActor* SpawnedActor); // DelegateFunction AugmentedReality.ARLifeCycleComponent.InstanceARActorSpawnedDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasDefaults) // @ game+0x336ad10
};

// Class AugmentedReality.ARLightEstimate
// Size: 0x30 (Inherited: 0x30)
struct UARLightEstimate : UObject {
};

// Class AugmentedReality.ARBasicLightEstimate
// Size: 0x48 (Inherited: 0x30)
struct UARBasicLightEstimate : UARLightEstimate {
	float AmbientIntensityLumens; // 0x30(0x04)
	float AmbientColorTemperatureKelvin; // 0x34(0x04)
	struct FLinearColor AmbientColor; // 0x38(0x10)

	float GetAmbientIntensityLumens(); // Function AugmentedReality.ARBasicLightEstimate.GetAmbientIntensityLumens // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3fc7e20
	float GetAmbientColorTemperatureKelvin(); // Function AugmentedReality.ARBasicLightEstimate.GetAmbientColorTemperatureKelvin // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3fc7df0
	struct FLinearColor GetAmbientColor(); // Function AugmentedReality.ARBasicLightEstimate.GetAmbientColor // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3fc7db0
};

// Class AugmentedReality.AROriginActor
// Size: 0x3d0 (Inherited: 0x3d0)
struct AAROriginActor : AActor {
};

// Class AugmentedReality.ARPin
// Size: 0xf0 (Inherited: 0x30)
struct UARPin : UObject {
	struct UARTrackedGeometry* TrackedGeometry; // 0x30(0x08)
	struct USceneComponent* PinnedComponent; // 0x38(0x08)
	struct FTransform LocalToTrackingTransform; // 0x40(0x30)
	struct FTransform LocalToAlignedTrackingTransform; // 0x70(0x30)
	enum class EARTrackingState TrackingState; // 0xa0(0x01)
	char pad_A1[0x27]; // 0xa1(0x27)
	struct FMulticastInlineDelegate OnARTrackingStateChanged; // 0xc8(0x10)
	struct FMulticastInlineDelegate OnARTransformUpdated; // 0xd8(0x10)
	char pad_E8[0x8]; // 0xe8(0x08)

	enum class EARTrackingState GetTrackingState(); // Function AugmentedReality.ARPin.GetTrackingState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3fc82d0
	struct UARTrackedGeometry* GetTrackedGeometry(); // Function AugmentedReality.ARPin.GetTrackedGeometry // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2e224b0
	struct USceneComponent* GetPinnedComponent(); // Function AugmentedReality.ARPin.GetPinnedComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2ca0fc0
	struct FTransform GetLocalToWorldTransform(); // Function AugmentedReality.ARPin.GetLocalToWorldTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3fc81e0
	struct FTransform GetLocalToTrackingTransform(); // Function AugmentedReality.ARPin.GetLocalToTrackingTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3fc8180
	struct FName GetDebugName(); // Function AugmentedReality.ARPin.GetDebugName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3fc7f70
	void DebugDraw(struct UWorld* World, struct FLinearColor& Color, float Scale, float PersistForSeconds); // Function AugmentedReality.ARPin.DebugDraw // (Native|Public|HasOutParms|HasDefaults|Const) // @ game+0x3fc7c10
};

// Class AugmentedReality.ARSessionConfig
// Size: 0x118 (Inherited: 0x38)
struct UARSessionConfig : UDataAsset {
	bool bGenerateMeshDataFromTrackedGeometry; // 0x38(0x01)
	bool bGenerateCollisionForMeshData; // 0x39(0x01)
	bool bGenerateNavMeshForMeshData; // 0x3a(0x01)
	bool bUseMeshDataForOcclusion; // 0x3b(0x01)
	bool bRenderMeshDataInWireframe; // 0x3c(0x01)
	bool bTrackSceneObjects; // 0x3d(0x01)
	bool bUsePersonSegmentationForOcclusion; // 0x3e(0x01)
	bool bUseSceneDepthForOcclusion; // 0x3f(0x01)
	bool bUseAutomaticImageScaleEstimation; // 0x40(0x01)
	bool bUseStandardOnboardingUX; // 0x41(0x01)
	enum class EARWorldAlignment WorldAlignment; // 0x42(0x01)
	enum class EARSessionType SessionType; // 0x43(0x01)
	enum class EARPlaneDetectionMode PlaneDetectionMode; // 0x44(0x01)
	bool bHorizontalPlaneDetection; // 0x45(0x01)
	bool bVerticalPlaneDetection; // 0x46(0x01)
	bool bEnableAutoFocus; // 0x47(0x01)
	enum class EARLightEstimationMode LightEstimationMode; // 0x48(0x01)
	enum class EARFrameSyncMode FrameSyncMode; // 0x49(0x01)
	bool bEnableAutomaticCameraOverlay; // 0x4a(0x01)
	bool bEnableAutomaticCameraTracking; // 0x4b(0x01)
	bool bResetCameraTracking; // 0x4c(0x01)
	bool bResetTrackedObjects; // 0x4d(0x01)
	char pad_4E[0x2]; // 0x4e(0x02)
	struct TArray<struct UARCandidateImage*> CandidateImages; // 0x50(0x10)
	int32_t MaxNumSimultaneousImagesTracked; // 0x60(0x04)
	enum class EAREnvironmentCaptureProbeType EnvironmentCaptureProbeType; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	struct TArray<char> WorldMapData; // 0x68(0x10)
	struct TArray<struct UARCandidateObject*> CandidateObjects; // 0x78(0x10)
	struct FARVideoFormat DesiredVideoFormat; // 0x88(0x0c)
	bool bUseOptimalVideoFormat; // 0x94(0x01)
	enum class EARFaceTrackingDirection FaceTrackingDirection; // 0x95(0x01)
	enum class EARFaceTrackingUpdate FaceTrackingUpdate; // 0x96(0x01)
	char pad_97[0x1]; // 0x97(0x01)
	int32_t MaxNumberOfTrackedFaces; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct TArray<char> SerializedARCandidateImageDatabase; // 0xa0(0x10)
	enum class EARSessionTrackingFeature EnabledSessionTrackingFeature; // 0xb0(0x01)
	enum class EARSceneReconstruction SceneReconstructionMethod; // 0xb1(0x01)
	char pad_B2[0x6]; // 0xb2(0x06)
	struct UARPlaneComponent* PlaneComponentClass; // 0xb8(0x08)
	struct UARPointComponent* PointComponentClass; // 0xc0(0x08)
	struct UARFaceComponent* FaceComponentClass; // 0xc8(0x08)
	struct UARImageComponent* ImageComponentClass; // 0xd0(0x08)
	struct UARQRCodeComponent* QRCodeComponentClass; // 0xd8(0x08)
	struct UARPoseComponent* PoseComponentClass; // 0xe0(0x08)
	struct UAREnvironmentProbeComponent* EnvironmentProbeComponentClass; // 0xe8(0x08)
	struct UARObjectComponent* ObjectComponentClass; // 0xf0(0x08)
	struct UARMeshComponent* MeshComponentClass; // 0xf8(0x08)
	struct UARGeoAnchorComponent* GeoAnchorComponentClass; // 0x100(0x08)
	struct UMaterialInterface* DefaultMeshMaterial; // 0x108(0x08)
	struct UMaterialInterface* DefaultWireframeMeshMaterial; // 0x110(0x08)

	bool ShouldResetTrackedObjects(); // Function AugmentedReality.ARSessionConfig.ShouldResetTrackedObjects // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3fc9000
	bool ShouldResetCameraTracking(); // Function AugmentedReality.ARSessionConfig.ShouldResetCameraTracking // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3fc8fd0
	bool ShouldRenderCameraOverlay(); // Function AugmentedReality.ARSessionConfig.ShouldRenderCameraOverlay // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3fc8fa0
	bool ShouldEnableCameraTracking(); // Function AugmentedReality.ARSessionConfig.ShouldEnableCameraTracking // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3fc8f70
	bool ShouldEnableAutoFocus(); // Function AugmentedReality.ARSessionConfig.ShouldEnableAutoFocus // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3fc8f40
	void SetWorldMapData(struct TArray<char> WorldMapData); // Function AugmentedReality.ARSessionConfig.SetWorldMapData // (Final|Native|Public|BlueprintCallable) // @ game+0x3fc8e40
	void SetSessionTrackingFeatureToEnable(enum class EARSessionTrackingFeature InSessionTrackingFeature); // Function AugmentedReality.ARSessionConfig.SetSessionTrackingFeatureToEnable // (Final|Native|Public|BlueprintCallable) // @ game+0x3fc8dc0
	void SetSceneReconstructionMethod(enum class EARSceneReconstruction InSceneReconstructionMethod); // Function AugmentedReality.ARSessionConfig.SetSceneReconstructionMethod // (Final|Native|Public|BlueprintCallable) // @ game+0x3fc8d40
	void SetResetTrackedObjects(bool bNewValue); // Function AugmentedReality.ARSessionConfig.SetResetTrackedObjects // (Final|Native|Public|BlueprintCallable) // @ game+0x3fc8cb0
	void SetResetCameraTracking(bool bNewValue); // Function AugmentedReality.ARSessionConfig.SetResetCameraTracking // (Final|Native|Public|BlueprintCallable) // @ game+0x3fc8c20
	void SetFaceTrackingUpdate(enum class EARFaceTrackingUpdate InUpdate); // Function AugmentedReality.ARSessionConfig.SetFaceTrackingUpdate // (Final|Native|Public|BlueprintCallable) // @ game+0x3fc8ba0
	void SetFaceTrackingDirection(enum class EARFaceTrackingDirection InDirection); // Function AugmentedReality.ARSessionConfig.SetFaceTrackingDirection // (Final|Native|Public|BlueprintCallable) // @ game+0x3fc8b20
	void SetEnableAutoFocus(bool bNewValue); // Function AugmentedReality.ARSessionConfig.SetEnableAutoFocus // (Final|Native|Public|BlueprintCallable) // @ game+0x3fc8a90
	void SetDesiredVideoFormat(struct FARVideoFormat NewFormat); // Function AugmentedReality.ARSessionConfig.SetDesiredVideoFormat // (Final|Native|Public|BlueprintCallable) // @ game+0x3fc89f0
	void SetCandidateObjectList(struct TArray<struct UARCandidateObject*>& InCandidateObjects); // Function AugmentedReality.ARSessionConfig.SetCandidateObjectList // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3fc8940
	struct TArray<char> GetWorldMapData(); // Function AugmentedReality.ARSessionConfig.GetWorldMapData // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3fc8330
	enum class EARWorldAlignment GetWorldAlignment(); // Function AugmentedReality.ARSessionConfig.GetWorldAlignment // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3fc8300
	enum class EARSessionType GetSessionType(); // Function AugmentedReality.ARSessionConfig.GetSessionType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3fc82a0
	enum class EARSceneReconstruction GetSceneReconstructionMethod(); // Function AugmentedReality.ARSessionConfig.GetSceneReconstructionMethod // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3fc8270
	enum class EARPlaneDetectionMode GetPlaneDetectionMode(); // Function AugmentedReality.ARSessionConfig.GetPlaneDetectionMode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3fc8240
	int32_t GetMaxNumSimultaneousImagesTracked(); // Function AugmentedReality.ARSessionConfig.GetMaxNumSimultaneousImagesTracked // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2f5c190
	enum class EARLightEstimationMode GetLightEstimationMode(); // Function AugmentedReality.ARSessionConfig.GetLightEstimationMode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2bf50d0
	enum class EARFrameSyncMode GetFrameSyncMode(); // Function AugmentedReality.ARSessionConfig.GetFrameSyncMode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3fc8050
	enum class EARFaceTrackingUpdate GetFaceTrackingUpdate(); // Function AugmentedReality.ARSessionConfig.GetFaceTrackingUpdate // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3fc8020
	enum class EARFaceTrackingDirection GetFaceTrackingDirection(); // Function AugmentedReality.ARSessionConfig.GetFaceTrackingDirection // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3fc7ff0
	enum class EAREnvironmentCaptureProbeType GetEnvironmentCaptureProbeType(); // Function AugmentedReality.ARSessionConfig.GetEnvironmentCaptureProbeType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3c1fb00
	enum class EARSessionTrackingFeature GetEnabledSessionTrackingFeature(); // Function AugmentedReality.ARSessionConfig.GetEnabledSessionTrackingFeature // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2e34940
	struct FARVideoFormat GetDesiredVideoFormat(); // Function AugmentedReality.ARSessionConfig.GetDesiredVideoFormat // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3fc7fb0
	struct TArray<struct UARCandidateObject*> GetCandidateObjectList(); // Function AugmentedReality.ARSessionConfig.GetCandidateObjectList // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3fc7ee0
	struct TArray<struct UARCandidateImage*> GetCandidateImageList(); // Function AugmentedReality.ARSessionConfig.GetCandidateImageList // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3fc7e50
	void AddCandidateObject(struct UARCandidateObject* CandidateObject); // Function AugmentedReality.ARSessionConfig.AddCandidateObject // (Final|Native|Public|BlueprintCallable) // @ game+0x3fc7520
	void AddCandidateImage(struct UARCandidateImage* NewCandidateImage); // Function AugmentedReality.ARSessionConfig.AddCandidateImage // (Final|Native|Public|BlueprintCallable) // @ game+0x3fc7490
};

// Class AugmentedReality.ARSharedWorldGameMode
// Size: 0x528 (Inherited: 0x4c0)
struct AARSharedWorldGameMode : AGameMode {
	int32_t BufferSizePerChunk; // 0x4c0(0x04)
	char pad_4C4[0x64]; // 0x4c4(0x64)

	void SetPreviewImageData(struct TArray<char> ImageData); // Function AugmentedReality.ARSharedWorldGameMode.SetPreviewImageData // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x3fd4640
	void SetARWorldSharingIsReady(); // Function AugmentedReality.ARSharedWorldGameMode.SetARWorldSharingIsReady // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x3fd4590
	void SetARSharedWorldData(struct TArray<char> ARWorldData); // Function AugmentedReality.ARSharedWorldGameMode.SetARSharedWorldData // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x3fd4490
	struct AARSharedWorldGameState* GetARSharedWorldGameState(); // Function AugmentedReality.ARSharedWorldGameMode.GetARSharedWorldGameState // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x2b1bbd0
};

// Class AugmentedReality.ARSharedWorldGameState
// Size: 0x490 (Inherited: 0x458)
struct AARSharedWorldGameState : AGameState {
	struct TArray<char> PreviewImageData; // 0x458(0x10)
	struct TArray<char> ARWorldData; // 0x468(0x10)
	int32_t PreviewImageBytesTotal; // 0x478(0x04)
	int32_t ARWorldBytesTotal; // 0x47c(0x04)
	int32_t PreviewImageBytesDelivered; // 0x480(0x04)
	int32_t ARWorldBytesDelivered; // 0x484(0x04)
	char pad_488[0x8]; // 0x488(0x08)

	void K2_OnARWorldMapIsReady(); // Function AugmentedReality.ARSharedWorldGameState.K2_OnARWorldMapIsReady // (Event|Public|BlueprintEvent) // @ game+0x336ad10
};

// Class AugmentedReality.ARSharedWorldPlayerController
// Size: 0x740 (Inherited: 0x738)
struct AARSharedWorldPlayerController : APlayerController {
	char pad_738[0x8]; // 0x738(0x08)

	void ServerMarkReadyForReceiving(); // Function AugmentedReality.ARSharedWorldPlayerController.ServerMarkReadyForReceiving // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x3fd43c0
	void ClientUpdatePreviewImageData(int32_t Offset, struct TArray<char> Buffer); // Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdatePreviewImageData // (Net|NetReliableNative|Event|Public|NetClient|NetValidate) // @ game+0x3fd3970
	void ClientUpdateARWorldData(int32_t Offset, struct TArray<char> Buffer); // Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdateARWorldData // (Net|NetReliableNative|Event|Public|NetClient|NetValidate) // @ game+0x3fd37d0
	void ClientInitSharedWorld(int32_t PreviewImageSize, int32_t ARWorldDataSize); // Function AugmentedReality.ARSharedWorldPlayerController.ClientInitSharedWorld // (Net|NetReliableNative|Event|Public|NetClient|NetValidate) // @ game+0x3fd3640
};

// Class AugmentedReality.ARSkyLight
// Size: 0x3f0 (Inherited: 0x3e0)
struct AARSkyLight : ASkyLight {
	struct UAREnvironmentCaptureProbe* CaptureProbe; // 0x3e0(0x08)
	char pad_3E8[0x8]; // 0x3e8(0x08)

	void SetEnvironmentCaptureProbe(struct UAREnvironmentCaptureProbe* InCaptureProbe); // Function AugmentedReality.ARSkyLight.SetEnvironmentCaptureProbe // (Final|Native|Public|BlueprintCallable) // @ game+0x3fd45b0
};

// Class AugmentedReality.ARTexture
// Size: 0x110 (Inherited: 0xf0)
struct UARTexture : UTexture {
	enum class EARTextureType TextureType; // 0xf0(0x01)
	char pad_F1[0x3]; // 0xf1(0x03)
	float Timestamp; // 0xf4(0x04)
	struct FGuid ExternalTextureGuid; // 0xf8(0x10)
	struct FVector2D Size; // 0x108(0x08)
};

// Class AugmentedReality.ARTextureCameraImage
// Size: 0x110 (Inherited: 0x110)
struct UARTextureCameraImage : UARTexture {
};

// Class AugmentedReality.ARTextureCameraDepth
// Size: 0x118 (Inherited: 0x110)
struct UARTextureCameraDepth : UARTexture {
	enum class EARDepthQuality DepthQuality; // 0x110(0x01)
	enum class EARDepthAccuracy DepthAccuracy; // 0x111(0x01)
	bool bIsTemporallySmoothed; // 0x112(0x01)
	char pad_113[0x5]; // 0x113(0x05)
};

// Class AugmentedReality.AREnvironmentCaptureProbeTexture
// Size: 0x168 (Inherited: 0x148)
struct UAREnvironmentCaptureProbeTexture : UTextureCube {
	enum class EARTextureType TextureType; // 0x148(0x01)
	char pad_149[0x3]; // 0x149(0x03)
	float Timestamp; // 0x14c(0x04)
	struct FGuid ExternalTextureGuid; // 0x150(0x10)
	struct FVector2D Size; // 0x160(0x08)
};

// Class AugmentedReality.ARTraceResultDummy
// Size: 0x30 (Inherited: 0x30)
struct UARTraceResultDummy : UObject {
};

// Class AugmentedReality.ARTrackedGeometry
// Size: 0x100 (Inherited: 0x30)
struct UARTrackedGeometry : UObject {
	struct FGuid UniqueId; // 0x30(0x10)
	struct FTransform LocalToTrackingTransform; // 0x40(0x30)
	struct FTransform LocalToAlignedTrackingTransform; // 0x70(0x30)
	enum class EARTrackingState TrackingState; // 0xa0(0x01)
	char pad_A1[0xf]; // 0xa1(0x0f)
	struct UMRMeshComponent* UnderlyingMesh; // 0xb0(0x08)
	enum class EARObjectClassification ObjectClassification; // 0xb8(0x01)
	char pad_B9[0x17]; // 0xb9(0x17)
	int32_t LastUpdateFrameNumber; // 0xd0(0x04)
	char pad_D4[0xc]; // 0xd4(0x0c)
	struct FName DebugName; // 0xe0(0x0c)
	char pad_EC[0x14]; // 0xec(0x14)

	bool IsTracked(); // Function AugmentedReality.ARTrackedGeometry.IsTracked // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3fd4390
	struct UMRMeshComponent* GetUnderlyingMesh(); // Function AugmentedReality.ARTrackedGeometry.GetUnderlyingMesh // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x2e21c40
	enum class EARTrackingState GetTrackingState(); // Function AugmentedReality.ARTrackedGeometry.GetTrackingState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3fc82d0
	enum class EARObjectClassification GetObjectClassification(); // Function AugmentedReality.ARTrackedGeometry.GetObjectClassification // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2f62900
	struct FString GetName(); // Function AugmentedReality.ARTrackedGeometry.GetName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3fd4080
	struct FTransform GetLocalToWorldTransform(); // Function AugmentedReality.ARTrackedGeometry.GetLocalToWorldTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3fd4020
	struct FTransform GetLocalToTrackingTransform(); // Function AugmentedReality.ARTrackedGeometry.GetLocalToTrackingTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3fc8180
	float GetLastUpdateTimestamp(); // Function AugmentedReality.ARTrackedGeometry.GetLastUpdateTimestamp // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3fd3f50
	int32_t GetLastUpdateFrameNumber(); // Function AugmentedReality.ARTrackedGeometry.GetLastUpdateFrameNumber // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3fd3f20
	struct FName GetDebugName(); // Function AugmentedReality.ARTrackedGeometry.GetDebugName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3fd3e30
};

// Class AugmentedReality.ARPlaneGeometry
// Size: 0x140 (Inherited: 0x100)
struct UARPlaneGeometry : UARTrackedGeometry {
	enum class EARPlaneOrientation Orientation; // 0x100(0x01)
	char pad_101[0x3]; // 0x101(0x03)
	struct FVector Center; // 0x104(0x0c)
	struct FVector Extent; // 0x110(0x0c)
	char pad_11C[0x4]; // 0x11c(0x04)
	struct TArray<struct FVector> BoundaryPolygon; // 0x120(0x10)
	struct UARPlaneGeometry* SubsumedBy; // 0x130(0x08)
	char pad_138[0x8]; // 0x138(0x08)

	struct UARPlaneGeometry* GetSubsumedBy(); // Function AugmentedReality.ARPlaneGeometry.GetSubsumedBy // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3fd4280
	enum class EARPlaneOrientation GetOrientation(); // Function AugmentedReality.ARPlaneGeometry.GetOrientation // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2dbafb0
	struct FVector GetExtent(); // Function AugmentedReality.ARPlaneGeometry.GetExtent // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3fd3ef0
	struct FVector GetCenter(); // Function AugmentedReality.ARPlaneGeometry.GetCenter // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3fd3e00
	struct TArray<struct FVector> GetBoundaryPolygonInLocalSpace(); // Function AugmentedReality.ARPlaneGeometry.GetBoundaryPolygonInLocalSpace // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3fd3d20
};

// Class AugmentedReality.ARTrackedPoint
// Size: 0x100 (Inherited: 0x100)
struct UARTrackedPoint : UARTrackedGeometry {
};

// Class AugmentedReality.ARTrackedImage
// Size: 0x110 (Inherited: 0x100)
struct UARTrackedImage : UARTrackedGeometry {
	struct UARCandidateImage* DetectedImage; // 0x100(0x08)
	struct FVector2D EstimatedSize; // 0x108(0x08)

	struct FVector2D GetEstimateSize(); // Function AugmentedReality.ARTrackedImage.GetEstimateSize // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x3fd3e70
	struct UARCandidateImage* GetDetectedImage(); // Function AugmentedReality.ARTrackedImage.GetDetectedImage // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2c7bed0
};

// Class AugmentedReality.ARTrackedQRCode
// Size: 0x130 (Inherited: 0x110)
struct UARTrackedQRCode : UARTrackedImage {
	struct FString QRCode; // 0x110(0x10)
	int32_t Version; // 0x120(0x04)
	char pad_124[0xc]; // 0x124(0x0c)
};

// Class AugmentedReality.ARFaceGeometry
// Size: 0x1f0 (Inherited: 0x100)
struct UARFaceGeometry : UARTrackedGeometry {
	struct FVector LookAtTarget; // 0x100(0x0c)
	bool bIsTracked; // 0x10c(0x01)
	char pad_10D[0x3]; // 0x10d(0x03)
	struct TMap<enum class EARFaceBlendShape, float> BlendShapes; // 0x110(0x50)
	char pad_160[0x30]; // 0x160(0x30)
	struct FTransform LeftEyeTransform; // 0x190(0x30)
	struct FTransform RightEyeTransform; // 0x1c0(0x30)

	struct FTransform GetWorldSpaceEyeTransform(enum class EAREye Eye); // Function AugmentedReality.ARFaceGeometry.GetWorldSpaceEyeTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3fd42d0
	struct FTransform GetLocalSpaceEyeTransform(enum class EAREye Eye); // Function AugmentedReality.ARFaceGeometry.GetLocalSpaceEyeTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3fd3f80
	float GetBlendShapeValue(enum class EARFaceBlendShape BlendShape); // Function AugmentedReality.ARFaceGeometry.GetBlendShapeValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3fd3b50
	struct TMap<enum class EARFaceBlendShape, float> GetBlendShapes(); // Function AugmentedReality.ARFaceGeometry.GetBlendShapes // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3fd3be0
};

// Class AugmentedReality.AREnvironmentCaptureProbe
// Size: 0x120 (Inherited: 0x100)
struct UAREnvironmentCaptureProbe : UARTrackedGeometry {
	struct FVector Extent; // 0x100(0x0c)
	char pad_10C[0x4]; // 0x10c(0x04)
	struct UAREnvironmentCaptureProbeTexture* EnvironmentCaptureTexture; // 0x110(0x08)
	char pad_118[0x8]; // 0x118(0x08)

	struct FVector GetExtent(); // Function AugmentedReality.AREnvironmentCaptureProbe.GetExtent // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3fd3eb0
	struct UAREnvironmentCaptureProbeTexture* GetEnvironmentCaptureTexture(); // Function AugmentedReality.AREnvironmentCaptureProbe.GetEnvironmentCaptureTexture // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x2bf5470
};

// Class AugmentedReality.ARTrackedObject
// Size: 0x110 (Inherited: 0x100)
struct UARTrackedObject : UARTrackedGeometry {
	struct UARCandidateObject* DetectedObject; // 0x100(0x08)
	char pad_108[0x8]; // 0x108(0x08)

	struct UARCandidateObject* GetDetectedObject(); // Function AugmentedReality.ARTrackedObject.GetDetectedObject // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2c7bed0
};

// Class AugmentedReality.ARTrackedPose
// Size: 0x150 (Inherited: 0x100)
struct UARTrackedPose : UARTrackedGeometry {
	struct FARPose3D TrackedPose; // 0x100(0x50)

	struct FARPose3D GetTrackedPoseData(); // Function AugmentedReality.ARTrackedPose.GetTrackedPoseData // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3fd42a0
};

// Class AugmentedReality.ARMeshGeometry
// Size: 0x100 (Inherited: 0x100)
struct UARMeshGeometry : UARTrackedGeometry {

	bool GetObjectClassificationAtLocation(struct FVector& InWorldLocation, enum class EARObjectClassification& OutClassification, struct FVector& OutClassificationLocation, float MaxLocationDiff); // Function AugmentedReality.ARMeshGeometry.GetObjectClassificationAtLocation // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3fd40c0
};

// Class AugmentedReality.ARGeoAnchor
// Size: 0x110 (Inherited: 0x100)
struct UARGeoAnchor : UARTrackedGeometry {
	char pad_100[0x10]; // 0x100(0x10)

	float GetLongitude(); // Function AugmentedReality.ARGeoAnchor.GetLongitude // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2cf8760
	float GetLatitude(); // Function AugmentedReality.ARGeoAnchor.GetLatitude // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2cf8780
	enum class EARAltitudeSource GetAltitudeSource(); // Function AugmentedReality.ARGeoAnchor.GetAltitudeSource // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3fd3b30
	float GetAltitudeMeters(); // Function AugmentedReality.ARGeoAnchor.GetAltitudeMeters // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3fd3b10
};

// Class AugmentedReality.ARTrackableNotifyComponent
// Size: 0x238 (Inherited: 0xe8)
struct UARTrackableNotifyComponent : UActorComponent {
	struct FMulticastInlineDelegate OnAddTrackedGeometry; // 0xe8(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedGeometry; // 0xf8(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedGeometry; // 0x108(0x10)
	struct FMulticastInlineDelegate OnAddTrackedPlane; // 0x118(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedPlane; // 0x128(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedPlane; // 0x138(0x10)
	struct FMulticastInlineDelegate OnAddTrackedPoint; // 0x148(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedPoint; // 0x158(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedPoint; // 0x168(0x10)
	struct FMulticastInlineDelegate OnAddTrackedImage; // 0x178(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedImage; // 0x188(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedImage; // 0x198(0x10)
	struct FMulticastInlineDelegate OnAddTrackedFace; // 0x1a8(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedFace; // 0x1b8(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedFace; // 0x1c8(0x10)
	struct FMulticastInlineDelegate OnAddTrackedEnvProbe; // 0x1d8(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedEnvProbe; // 0x1e8(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedEnvProbe; // 0x1f8(0x10)
	struct FMulticastInlineDelegate OnAddTrackedObject; // 0x208(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedObject; // 0x218(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedObject; // 0x228(0x10)
};

// Class AugmentedReality.ARTypesDummyClass
// Size: 0x30 (Inherited: 0x30)
struct UARTypesDummyClass : UObject {
};

// Class AugmentedReality.ARCandidateImage
// Size: 0x60 (Inherited: 0x38)
struct UARCandidateImage : UDataAsset {
	struct UTexture2D* CandidateTexture; // 0x38(0x08)
	struct FString FriendlyName; // 0x40(0x10)
	float Width; // 0x50(0x04)
	float Height; // 0x54(0x04)
	enum class EARCandidateImageOrientation Orientation; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)

	float GetPhysicalWidth(); // Function AugmentedReality.ARCandidateImage.GetPhysicalWidth // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2bd3050
	float GetPhysicalHeight(); // Function AugmentedReality.ARCandidateImage.GetPhysicalHeight // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2c7c950
	enum class EARCandidateImageOrientation GetOrientation(); // Function AugmentedReality.ARCandidateImage.GetOrientation // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2bd3070
	struct FString GetFriendlyName(); // Function AugmentedReality.ARCandidateImage.GetFriendlyName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3fdaf60
	struct UTexture2D* GetCandidateTexture(); // Function AugmentedReality.ARCandidateImage.GetCandidateTexture // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2c6e230
};

// Class AugmentedReality.ARCandidateObject
// Size: 0x78 (Inherited: 0x38)
struct UARCandidateObject : UDataAsset {
	struct TArray<char> CandidateObjectData; // 0x38(0x10)
	struct FString FriendlyName; // 0x48(0x10)
	struct FBox BoundingBox; // 0x58(0x1c)
	char pad_74[0x4]; // 0x74(0x04)

	void SetFriendlyName(struct FString NewName); // Function AugmentedReality.ARCandidateObject.SetFriendlyName // (Final|Native|Public|BlueprintCallable) // @ game+0x3fdb110
	void SetCandidateObjectData(struct TArray<char>& InCandidateObject); // Function AugmentedReality.ARCandidateObject.SetCandidateObjectData // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3fdb060
	void SetBoundingBox(struct FBox& InBoundingBox); // Function AugmentedReality.ARCandidateObject.SetBoundingBox // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3fdafc0
	struct FString GetFriendlyName(); // Function AugmentedReality.ARCandidateObject.GetFriendlyName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3fdaf90
	struct TArray<char> GetCandidateObjectData(); // Function AugmentedReality.ARCandidateObject.GetCandidateObjectData // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3fdaf30
	struct FBox GetBoundingBox(); // Function AugmentedReality.ARCandidateObject.GetBoundingBox // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3fdaf00
};

