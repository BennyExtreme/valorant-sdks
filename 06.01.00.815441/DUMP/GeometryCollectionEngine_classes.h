// Class GeometryCollectionEngine.ChaosDestructionListener
// Size: 0x4b0 (Inherited: 0x290)
struct UChaosDestructionListener : USceneComponent {
	char bIsCollisionEventListeningEnabled : 1; // 0x288(0x01)
	char bIsBreakingEventListeningEnabled : 1; // 0x288(0x01)
	char bIsTrailingEventListeningEnabled : 1; // 0x288(0x01)
	struct FChaosCollisionEventRequestSettings CollisionEventRequestSettings; // 0x28c(0x18)
	struct FChaosBreakingEventRequestSettings BreakingEventRequestSettings; // 0x2a4(0x18)
	struct FChaosTrailingEventRequestSettings TrailingEventRequestSettings; // 0x2bc(0x18)
	struct TSet<struct AChaosSolverActor*> ChaosSolverActors; // 0x2d8(0x50)
	struct TSet<struct AGeometryCollectionActor*> GeometryCollectionActors; // 0x328(0x50)
	struct FMulticastInlineDelegate OnCollisionEvents; // 0x378(0x10)
	struct FMulticastInlineDelegate OnBreakingEvents; // 0x388(0x10)
	struct FMulticastInlineDelegate OnTrailingEvents; // 0x398(0x10)
	char pad_3A8_3 : 5; // 0x3a8(0x01)
	char pad_3A9[0x107]; // 0x3a9(0x107)

	void SortTrailingEvents(struct TArray<struct FChaosTrailingEventData>& TrailingEvents, enum class EChaosTrailingSortMethod SortMethod); // Function GeometryCollectionEngine.ChaosDestructionListener.SortTrailingEvents // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x56a0ae0
	void SortCollisionEvents(struct TArray<struct FChaosCollisionEventData>& CollisionEvents, enum class EChaosCollisionSortMethod SortMethod); // Function GeometryCollectionEngine.ChaosDestructionListener.SortCollisionEvents // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x56a09e0
	void SortBreakingEvents(struct TArray<struct FChaosBreakingEventData>& BreakingEvents, enum class EChaosBreakingSortMethod SortMethod); // Function GeometryCollectionEngine.ChaosDestructionListener.SortBreakingEvents // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x56a08e0
	void SetTrailingEventRequestSettings(struct FChaosTrailingEventRequestSettings& InSettings); // Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventRequestSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x56a0840
	void SetTrailingEventEnabled(bool bIsEnabled); // Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x56a07b0
	void SetCollisionEventRequestSettings(struct FChaosCollisionEventRequestSettings& InSettings); // Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventRequestSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x56a0680
	void SetCollisionEventEnabled(bool bIsEnabled); // Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x56a05f0
	void SetBreakingEventRequestSettings(struct FChaosBreakingEventRequestSettings& InSettings); // Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventRequestSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x56a0550
	void SetBreakingEventEnabled(bool bIsEnabled); // Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x56a04c0
	void RemoveGeometryCollectionActor(struct AGeometryCollectionActor* GeometryCollectionActor); // Function GeometryCollectionEngine.ChaosDestructionListener.RemoveGeometryCollectionActor // (Final|Native|Public|BlueprintCallable) // @ game+0x56a0430
	void RemoveChaosSolverActor(struct AChaosSolverActor* ChaosSolverActor); // Function GeometryCollectionEngine.ChaosDestructionListener.RemoveChaosSolverActor // (Final|Native|Public|BlueprintCallable) // @ game+0x2ae2200
	bool IsEventListening(); // Function GeometryCollectionEngine.ChaosDestructionListener.IsEventListening // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x56a0130
	void AddGeometryCollectionActor(struct AGeometryCollectionActor* GeometryCollectionActor); // Function GeometryCollectionEngine.ChaosDestructionListener.AddGeometryCollectionActor // (Final|Native|Public|BlueprintCallable) // @ game+0x569fe60
	void AddChaosSolverActor(struct AChaosSolverActor* ChaosSolverActor); // Function GeometryCollectionEngine.ChaosDestructionListener.AddChaosSolverActor // (Final|Native|Public|BlueprintCallable) // @ game+0x2ae2200
};

// Class GeometryCollectionEngine.GeometryCollectionActor
// Size: 0x3e0 (Inherited: 0x3d0)
struct AGeometryCollectionActor : AActor {
	struct UGeometryCollectionComponent* GeometryCollectionComponent; // 0x3d0(0x08)
	struct UGeometryCollectionDebugDrawComponent* GeometryCollectionDebugDrawComponent; // 0x3d8(0x08)

	bool RaycastSingle(struct FVector Start, struct FVector End, struct FHitResult& OutHit); // Function GeometryCollectionEngine.GeometryCollectionActor.RaycastSingle // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x56a02a0
};

// Class GeometryCollectionEngine.GeometryCollectionCache
// Size: 0x58 (Inherited: 0x30)
struct UGeometryCollectionCache : UObject {
	struct FRecordedTransformTrack RecordedData; // 0x30(0x10)
	struct UGeometryCollection* SupportedCollection; // 0x40(0x08)
	struct FGuid CompatibleCollectionState; // 0x48(0x10)
};

// Class GeometryCollectionEngine.GeometryCollectionComponent
// Size: 0xa20 (Inherited: 0x590)
struct UGeometryCollectionComponent : UMeshComponent {
	struct AChaosSolverActor* ChaosSolverActor; // 0x590(0x08)
	char pad_598[0xe0]; // 0x598(0xe0)
	struct UGeometryCollection* RestCollection; // 0x678(0x08)
	struct TArray<struct AFieldSystemActor*> InitializationFields; // 0x680(0x10)
	bool Simulating; // 0x690(0x01)
	char pad_691[0x7]; // 0x691(0x07)
	enum class EObjectStateTypeEnum ObjectType; // 0x698(0x01)
	bool EnableClustering; // 0x699(0x01)
	char pad_69A[0x2]; // 0x69a(0x02)
	int32_t ClusterGroupIndex; // 0x69c(0x04)
	int32_t MaxClusterLevel; // 0x6a0(0x04)
	char pad_6A4[0x4]; // 0x6a4(0x04)
	struct TArray<float> DamageThreshold; // 0x6a8(0x10)
	enum class EClusterConnectionTypeEnum ClusterConnectionType; // 0x6b8(0x01)
	char pad_6B9[0x3]; // 0x6b9(0x03)
	int32_t CollisionGroup; // 0x6bc(0x04)
	float CollisionSampleFraction; // 0x6c0(0x04)
	float LinearEtherDrag; // 0x6c4(0x04)
	float AngularEtherDrag; // 0x6c8(0x04)
	char pad_6CC[0x4]; // 0x6cc(0x04)
	struct UChaosPhysicalMaterial* PhysicalMaterial; // 0x6d0(0x08)
	enum class EInitialVelocityTypeEnum InitialVelocityType; // 0x6d8(0x01)
	char pad_6D9[0x3]; // 0x6d9(0x03)
	struct FVector InitialLinearVelocity; // 0x6dc(0x0c)
	struct FVector InitialAngularVelocity; // 0x6e8(0x0c)
	char pad_6F4[0x4]; // 0x6f4(0x04)
	struct UPhysicalMaterial* PhysicalMaterialOverride; // 0x6f8(0x08)
	struct FGeomComponentCacheParameters CacheParameters; // 0x700(0x50)
	struct FMulticastInlineDelegate NotifyGeometryCollectionPhysicsStateChange; // 0x750(0x10)
	struct FMulticastInlineDelegate NotifyGeometryCollectionPhysicsLoadingStateChange; // 0x760(0x10)
	char pad_770[0x18]; // 0x770(0x18)
	struct FMulticastInlineDelegate OnChaosBreakEvent; // 0x788(0x10)
	float DesiredCacheTime; // 0x798(0x04)
	bool CachePlayback; // 0x79c(0x01)
	char pad_79D[0x3]; // 0x79d(0x03)
	struct FMulticastInlineDelegate OnChaosPhysicsCollision; // 0x7a0(0x10)
	bool bNotifyBreaks; // 0x7b0(0x01)
	bool bNotifyCollisions; // 0x7b1(0x01)
	bool bEnableReplication; // 0x7b2(0x01)
	bool bEnableAbandonAfterLevel; // 0x7b3(0x01)
	int32_t ReplicationAbandonClusterLevel; // 0x7b4(0x04)
	struct FGeometryCollectionRepData RepData; // 0x7b8(0x18)
	char pad_7D0[0x220]; // 0x7d0(0x220)
	struct UBodySetup* DummyBodySetup; // 0x9f0(0x08)
	char pad_9F8[0x28]; // 0x9f8(0x28)

	void SetNotifyBreaks(bool bNewNotifyBreaks); // Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyBreaks // (Final|Native|Public|BlueprintCallable) // @ game+0x56a0720
	void ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo& CollisionInfo); // Function GeometryCollectionEngine.GeometryCollectionComponent.ReceivePhysicsCollision // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x336ad10
	void OnRep_RepData(struct FGeometryCollectionRepData& OldData); // Function GeometryCollectionEngine.GeometryCollectionComponent.OnRep_RepData // (Final|Native|Protected|HasOutParms) // @ game+0x56a01f0
	void NotifyGeometryCollectionPhysicsStateChange__DelegateSignature(struct UGeometryCollectionComponent* FracturedComponent); // DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsStateChange__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x336ad10
	void NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature(struct UGeometryCollectionComponent* FracturedComponent); // DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x336ad10
	void NetAbandonCluster(int32_t TransformIndex); // Function GeometryCollectionEngine.GeometryCollectionComponent.NetAbandonCluster // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x56a0160
	void ApplyPhysicsField(bool Enabled, enum class EGeometryCollectionPhysicsTypeEnum Target, struct UFieldSystemMetaData* MetaData, struct UFieldNodeBase* Field); // Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyPhysicsField // (Final|Native|Public|BlueprintCallable) // @ game+0x569ffd0
	void ApplyKinematicField(float Radius, struct FVector Position); // Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyKinematicField // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x569fef0
};

// Class GeometryCollectionEngine.GeometryCollectionDebugDrawActor
// Size: 0x4b8 (Inherited: 0x3d0)
struct AGeometryCollectionDebugDrawActor : AActor {
	struct FGeometryCollectionDebugDrawWarningMessage WarningMessage; // 0x3d0(0x01)
	char pad_3D1[0x7]; // 0x3d1(0x07)
	struct FGeometryCollectionDebugDrawActorSelectedRigidBody SelectedRigidBody; // 0x3d8(0x18)
	bool bDebugDrawWholeCollection; // 0x3f0(0x01)
	bool bDebugDrawHierarchy; // 0x3f1(0x01)
	bool bDebugDrawClustering; // 0x3f2(0x01)
	enum class EGeometryCollectionDebugDrawActorHideGeometry HideGeometry; // 0x3f3(0x01)
	bool bShowRigidBodyId; // 0x3f4(0x01)
	bool bShowRigidBodyCollision; // 0x3f5(0x01)
	bool bCollisionAtOrigin; // 0x3f6(0x01)
	bool bShowRigidBodyTransform; // 0x3f7(0x01)
	bool bShowRigidBodyInertia; // 0x3f8(0x01)
	bool bShowRigidBodyVelocity; // 0x3f9(0x01)
	bool bShowRigidBodyForce; // 0x3fa(0x01)
	bool bShowRigidBodyInfos; // 0x3fb(0x01)
	bool bShowTransformIndex; // 0x3fc(0x01)
	bool bShowTransform; // 0x3fd(0x01)
	bool bShowParent; // 0x3fe(0x01)
	bool bShowLevel; // 0x3ff(0x01)
	bool bShowConnectivityEdges; // 0x400(0x01)
	bool bShowGeometryIndex; // 0x401(0x01)
	bool bShowGeometryTransform; // 0x402(0x01)
	bool bShowBoundingBox; // 0x403(0x01)
	bool bShowFaces; // 0x404(0x01)
	bool bShowFaceIndices; // 0x405(0x01)
	bool bShowFaceNormals; // 0x406(0x01)
	bool bShowSingleFace; // 0x407(0x01)
	int32_t SingleFaceIndex; // 0x408(0x04)
	bool bShowVertices; // 0x40c(0x01)
	bool bShowVertexIndices; // 0x40d(0x01)
	bool bShowVertexNormals; // 0x40e(0x01)
	bool bUseActiveVisualization; // 0x40f(0x01)
	float PointThickness; // 0x410(0x04)
	float LineThickness; // 0x414(0x04)
	bool bTextShadow; // 0x418(0x01)
	char pad_419[0x3]; // 0x419(0x03)
	float TextScale; // 0x41c(0x04)
	float NormalScale; // 0x420(0x04)
	float AxisScale; // 0x424(0x04)
	float ArrowScale; // 0x428(0x04)
	struct FColor RigidBodyIdColor; // 0x42c(0x04)
	float RigidBodyTransformScale; // 0x430(0x04)
	struct FColor RigidBodyCollisionColor; // 0x434(0x04)
	struct FColor RigidBodyInertiaColor; // 0x438(0x04)
	struct FColor RigidBodyVelocityColor; // 0x43c(0x04)
	struct FColor RigidBodyForceColor; // 0x440(0x04)
	struct FColor RigidBodyInfoColor; // 0x444(0x04)
	struct FColor TransformIndexColor; // 0x448(0x04)
	float TransformScale; // 0x44c(0x04)
	struct FColor LevelColor; // 0x450(0x04)
	struct FColor ParentColor; // 0x454(0x04)
	float ConnectivityEdgeThickness; // 0x458(0x04)
	struct FColor GeometryIndexColor; // 0x45c(0x04)
	float GeometryTransformScale; // 0x460(0x04)
	struct FColor BoundingBoxColor; // 0x464(0x04)
	struct FColor FaceColor; // 0x468(0x04)
	struct FColor FaceIndexColor; // 0x46c(0x04)
	struct FColor FaceNormalColor; // 0x470(0x04)
	struct FColor SingleFaceColor; // 0x474(0x04)
	struct FColor VertexColor; // 0x478(0x04)
	struct FColor VertexIndexColor; // 0x47c(0x04)
	struct FColor VertexNormalColor; // 0x480(0x04)
	char pad_484[0x4]; // 0x484(0x04)
	struct UBillboardComponent* SpriteComponent; // 0x488(0x08)
	char pad_490[0x28]; // 0x490(0x28)
};

// Class GeometryCollectionEngine.GeometryCollectionDebugDrawComponent
// Size: 0x100 (Inherited: 0xe8)
struct UGeometryCollectionDebugDrawComponent : UActorComponent {
	struct AGeometryCollectionDebugDrawActor* GeometryCollectionDebugDrawActor; // 0xe8(0x08)
	struct AGeometryCollectionRenderLevelSetActor* GeometryCollectionRenderLevelSetActor; // 0xf0(0x08)
	char pad_F8[0x8]; // 0xf8(0x08)
};

// Class GeometryCollectionEngine.GeometryCollection
// Size: 0xe8 (Inherited: 0x30)
struct UGeometryCollection : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct TArray<struct FGeometryCollectionSource> GeometrySource; // 0x38(0x10)
	struct TArray<struct UMaterialInterface*> Materials; // 0x48(0x10)
	enum class ECollisionTypeEnum CollisionType; // 0x58(0x01)
	enum class EImplicitTypeEnum ImplicitType; // 0x59(0x01)
	char pad_5A[0x2]; // 0x5a(0x02)
	int32_t MinLevelSetResolution; // 0x5c(0x04)
	int32_t MaxLevelSetResolution; // 0x60(0x04)
	int32_t MinClusterLevelSetResolution; // 0x64(0x04)
	int32_t MaxClusterLevelSetResolution; // 0x68(0x04)
	float CollisionObjectReductionPercentage; // 0x6c(0x04)
	bool bMassAsDensity; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	float Mass; // 0x74(0x04)
	float MinimumMassClamp; // 0x78(0x04)
	float CollisionParticlesFraction; // 0x7c(0x04)
	int32_t MaximumCollisionParticles; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
	struct TArray<struct FGeometryCollectionSizeSpecificData> SizeSpecificData; // 0x88(0x10)
	bool EnableRemovePiecesOnFracture; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
	struct TArray<struct UMaterialInterface*> RemoveOnFractureMaterials; // 0xa0(0x10)
	struct FGuid PersistentGuid; // 0xb0(0x10)
	struct FGuid StateGuid; // 0xc0(0x10)
	int32_t BoneSelectedMaterialIndex; // 0xd0(0x04)
	char pad_D4[0x14]; // 0xd4(0x14)
};

// Class GeometryCollectionEngine.GeometryCollectionRenderLevelSetActor
// Size: 0x470 (Inherited: 0x3d0)
struct AGeometryCollectionRenderLevelSetActor : AActor {
	struct UVolumeTexture* TargetVolumeTexture; // 0x3d0(0x08)
	struct UMaterial* RayMarchMaterial; // 0x3d8(0x08)
	float SurfaceTolerance; // 0x3e0(0x04)
	float Isovalue; // 0x3e4(0x04)
	bool Enabled; // 0x3e8(0x01)
	bool RenderVolumeBoundingBox; // 0x3e9(0x01)
	char pad_3EA[0x86]; // 0x3ea(0x86)
};

// Class GeometryCollectionEngine.SkeletalMeshSimulationComponent
// Size: 0x170 (Inherited: 0xe8)
struct USkeletalMeshSimulationComponent : UActorComponent {
	char pad_E8[0x8]; // 0xe8(0x08)
	struct UChaosPhysicalMaterial* PhysicalMaterial; // 0xf0(0x08)
	struct AChaosSolverActor* ChaosSolverActor; // 0xf8(0x08)
	struct UPhysicsAsset* OverridePhysicsAsset; // 0x100(0x08)
	bool bSimulating; // 0x108(0x01)
	bool bNotifyCollisions; // 0x109(0x01)
	enum class EObjectStateTypeEnum ObjectType; // 0x10a(0x01)
	char pad_10B[0x1]; // 0x10b(0x01)
	float Density; // 0x10c(0x04)
	float MinMass; // 0x110(0x04)
	float MaxMass; // 0x114(0x04)
	enum class ECollisionTypeEnum CollisionType; // 0x118(0x01)
	char pad_119[0x3]; // 0x119(0x03)
	float ImplicitShapeParticlesPerUnitArea; // 0x11c(0x04)
	int32_t ImplicitShapeMinNumParticles; // 0x120(0x04)
	int32_t ImplicitShapeMaxNumParticles; // 0x124(0x04)
	int32_t MinLevelSetResolution; // 0x128(0x04)
	int32_t MaxLevelSetResolution; // 0x12c(0x04)
	int32_t CollisionGroup; // 0x130(0x04)
	enum class EInitialVelocityTypeEnum InitialVelocityType; // 0x134(0x01)
	char pad_135[0x3]; // 0x135(0x03)
	struct FVector InitialLinearVelocity; // 0x138(0x0c)
	struct FVector InitialAngularVelocity; // 0x144(0x0c)
	struct FMulticastInlineDelegate OnChaosPhysicsCollision; // 0x150(0x10)
	char pad_160[0x10]; // 0x160(0x10)

	void ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo& CollisionInfo); // Function GeometryCollectionEngine.SkeletalMeshSimulationComponent.ReceivePhysicsCollision // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x336ad10
};

// Class GeometryCollectionEngine.StaticMeshSimulationComponent
// Size: 0x170 (Inherited: 0xe8)
struct UStaticMeshSimulationComponent : UActorComponent {
	char pad_E8[0x8]; // 0xe8(0x08)
	bool Simulating; // 0xf0(0x01)
	bool bNotifyCollisions; // 0xf1(0x01)
	enum class EObjectStateTypeEnum ObjectType; // 0xf2(0x01)
	char pad_F3[0x1]; // 0xf3(0x01)
	float Mass; // 0xf4(0x04)
	enum class ECollisionTypeEnum CollisionType; // 0xf8(0x01)
	enum class EImplicitTypeEnum ImplicitType; // 0xf9(0x01)
	char pad_FA[0x2]; // 0xfa(0x02)
	int32_t MinLevelSetResolution; // 0xfc(0x04)
	int32_t MaxLevelSetResolution; // 0x100(0x04)
	enum class EInitialVelocityTypeEnum InitialVelocityType; // 0x104(0x01)
	char pad_105[0x3]; // 0x105(0x03)
	struct FVector InitialLinearVelocity; // 0x108(0x0c)
	struct FVector InitialAngularVelocity; // 0x114(0x0c)
	float DamageThreshold; // 0x120(0x04)
	char pad_124[0x4]; // 0x124(0x04)
	struct UChaosPhysicalMaterial* PhysicalMaterial; // 0x128(0x08)
	struct AChaosSolverActor* ChaosSolverActor; // 0x130(0x08)
	struct FMulticastInlineDelegate OnChaosPhysicsCollision; // 0x138(0x10)
	char pad_148[0x10]; // 0x148(0x10)
	struct TArray<struct UPrimitiveComponent*> SimulatedComponents; // 0x158(0x10)
	char pad_168[0x8]; // 0x168(0x08)

	void ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo& CollisionInfo); // Function GeometryCollectionEngine.StaticMeshSimulationComponent.ReceivePhysicsCollision // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x336ad10
	void ForceRecreatePhysicsState(); // Function GeometryCollectionEngine.StaticMeshSimulationComponent.ForceRecreatePhysicsState // (Final|Native|Public|BlueprintCallable) // @ game+0x56a2980
};

