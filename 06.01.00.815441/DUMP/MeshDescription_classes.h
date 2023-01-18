// Class MeshDescription.MeshDescription
// Size: 0x30 (Inherited: 0x30)
struct UMeshDescription : UObject {
};

// Class MeshDescription.MeshDescriptionBase
// Size: 0x398 (Inherited: 0x30)
struct UMeshDescriptionBase : UObject {
	char pad_30[0x368]; // 0x30(0x368)

	void SetVertexPosition(struct FVertexID VertexID, struct FVector& Position); // Function MeshDescription.MeshDescriptionBase.SetVertexPosition // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x46dc8f0
	void SetPolygonVertexInstance(struct FPolygonID PolygonID, int32_t PerimeterIndex, struct FVertexInstanceID VertexInstanceID); // Function MeshDescription.MeshDescriptionBase.SetPolygonVertexInstance // (Final|Native|Public|BlueprintCallable) // @ game+0x46dc7d0
	void SetPolygonPolygonGroup(struct FPolygonID PolygonID, struct FPolygonGroupID PolygonGroupID); // Function MeshDescription.MeshDescriptionBase.SetPolygonPolygonGroup // (Final|Native|Public|BlueprintCallable) // @ game+0x46dc700
	void ReversePolygonFacing(struct FPolygonID PolygonID); // Function MeshDescription.MeshDescriptionBase.ReversePolygonFacing // (Final|Native|Public|BlueprintCallable) // @ game+0x46dc680
	void ReserveNewVertices(int32_t NumberOfNewVertices); // Function MeshDescription.MeshDescriptionBase.ReserveNewVertices // (Final|Native|Public|BlueprintCallable) // @ game+0x46dc5f0
	void ReserveNewVertexInstances(int32_t NumberOfNewVertexInstances); // Function MeshDescription.MeshDescriptionBase.ReserveNewVertexInstances // (Final|Native|Public|BlueprintCallable) // @ game+0x46dc3b0
	void ReserveNewTriangles(int32_t NumberOfNewTriangles); // Function MeshDescription.MeshDescriptionBase.ReserveNewTriangles // (Final|Native|Public|BlueprintCallable) // @ game+0x46dc560
	void ReserveNewPolygons(int32_t NumberOfNewPolygons); // Function MeshDescription.MeshDescriptionBase.ReserveNewPolygons // (Final|Native|Public|BlueprintCallable) // @ game+0x46dc4d0
	void ReserveNewPolygonGroups(int32_t NumberOfNewPolygonGroups); // Function MeshDescription.MeshDescriptionBase.ReserveNewPolygonGroups // (Final|Native|Public|BlueprintCallable) // @ game+0x46dc440
	void ReserveNewEdges(int32_t NumberOfNewEdges); // Function MeshDescription.MeshDescriptionBase.ReserveNewEdges // (Final|Native|Public|BlueprintCallable) // @ game+0x46dc3b0
	bool IsVertexValid(struct FVertexID VertexID); // Function MeshDescription.MeshDescriptionBase.IsVertexValid // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x46dc320
	bool IsVertexOrphaned(struct FVertexID VertexID); // Function MeshDescription.MeshDescriptionBase.IsVertexOrphaned // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x46dc290
	bool IsVertexInstanceValid(struct FVertexInstanceID VertexInstanceID); // Function MeshDescription.MeshDescriptionBase.IsVertexInstanceValid // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x46dc200
	bool IsTriangleValid(struct FTriangleID TriangleID); // Function MeshDescription.MeshDescriptionBase.IsTriangleValid // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x46dc170
	bool IsTrianglePartOfNgon(struct FTriangleID TriangleID); // Function MeshDescription.MeshDescriptionBase.IsTrianglePartOfNgon // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x46dc0e0
	bool IsPolygonValid(struct FPolygonID PolygonID); // Function MeshDescription.MeshDescriptionBase.IsPolygonValid // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x46dc050
	bool IsPolygonGroupValid(struct FPolygonGroupID PolygonGroupID); // Function MeshDescription.MeshDescriptionBase.IsPolygonGroupValid // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x46dbfc0
	bool IsEmpty(); // Function MeshDescription.MeshDescriptionBase.IsEmpty // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x46dbf90
	bool IsEdgeValid(struct FEdgeID EdgeID); // Function MeshDescription.MeshDescriptionBase.IsEdgeValid // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x46dbf00
	bool IsEdgeInternalToPolygon(struct FEdgeID EdgeID, struct FPolygonID PolygonID); // Function MeshDescription.MeshDescriptionBase.IsEdgeInternalToPolygon // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x46dbe20
	bool IsEdgeInternal(struct FEdgeID EdgeID); // Function MeshDescription.MeshDescriptionBase.IsEdgeInternal // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x46dbd90
	void GetVertexVertexInstances(struct FVertexID VertexID, struct TArray<struct FVertexInstanceID>& OutVertexInstanceIDs); // Function MeshDescription.MeshDescriptionBase.GetVertexVertexInstances // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x46dbc90
	struct FVector GetVertexPosition(struct FVertexID VertexID); // Function MeshDescription.MeshDescriptionBase.GetVertexPosition // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x46dbbf0
	struct FEdgeID GetVertexPairEdge(struct FVertexID VertexID0, struct FVertexID VertexID1); // Function MeshDescription.MeshDescriptionBase.GetVertexPairEdge // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x46dbb10
	struct FVertexID GetVertexInstanceVertex(struct FVertexInstanceID VertexInstanceID); // Function MeshDescription.MeshDescriptionBase.GetVertexInstanceVertex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x46dba70
	struct FEdgeID GetVertexInstancePairEdge(struct FVertexInstanceID VertexInstanceID0, struct FVertexInstanceID VertexInstanceID1); // Function MeshDescription.MeshDescriptionBase.GetVertexInstancePairEdge // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x46db990
	struct FVertexInstanceID GetVertexInstanceForTriangleVertex(struct FTriangleID TriangleID, struct FVertexID VertexID); // Function MeshDescription.MeshDescriptionBase.GetVertexInstanceForTriangleVertex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x46db8b0
	struct FVertexInstanceID GetVertexInstanceForPolygonVertex(struct FPolygonID PolygonID, struct FVertexID VertexID); // Function MeshDescription.MeshDescriptionBase.GetVertexInstanceForPolygonVertex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x46db7d0
	void GetVertexInstanceConnectedTriangles(struct FVertexInstanceID VertexInstanceID, struct TArray<struct FTriangleID>& OutConnectedTriangleIDs); // Function MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedTriangles // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x46db6d0
	void GetVertexInstanceConnectedPolygons(struct FVertexInstanceID VertexInstanceID, struct TArray<struct FPolygonID>& OutConnectedPolygonIDs); // Function MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedPolygons // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x46db5d0
	void GetVertexConnectedTriangles(struct FVertexID VertexID, struct TArray<struct FTriangleID>& OutConnectedTriangleIDs); // Function MeshDescription.MeshDescriptionBase.GetVertexConnectedTriangles // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x46db4d0
	void GetVertexConnectedPolygons(struct FVertexID VertexID, struct TArray<struct FPolygonID>& OutConnectedPolygonIDs); // Function MeshDescription.MeshDescriptionBase.GetVertexConnectedPolygons // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x46db3d0
	void GetVertexConnectedEdges(struct FVertexID VertexID, struct TArray<struct FEdgeID>& OutEdgeIDs); // Function MeshDescription.MeshDescriptionBase.GetVertexConnectedEdges // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x46db2d0
	void GetVertexAdjacentVertices(struct FVertexID VertexID, struct TArray<struct FVertexID>& OutAdjacentVertexIDs); // Function MeshDescription.MeshDescriptionBase.GetVertexAdjacentVertices // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x46db1d0
	void GetTriangleVertices(struct FTriangleID TriangleID, struct TArray<struct FVertexID>& OutVertexIDs); // Function MeshDescription.MeshDescriptionBase.GetTriangleVertices // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x46db0d0
	void GetTriangleVertexInstances(struct FTriangleID TriangleID, struct TArray<struct FVertexInstanceID>& OutVertexInstanceIDs); // Function MeshDescription.MeshDescriptionBase.GetTriangleVertexInstances // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x46dafd0
	struct FVertexInstanceID GetTriangleVertexInstance(struct FTriangleID TriangleID, int32_t Index); // Function MeshDescription.MeshDescriptionBase.GetTriangleVertexInstance // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x46daef0
	struct FPolygonGroupID GetTrianglePolygonGroup(struct FTriangleID TriangleID); // Function MeshDescription.MeshDescriptionBase.GetTrianglePolygonGroup // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x46dae50
	struct FPolygonID GetTrianglePolygon(struct FTriangleID TriangleID); // Function MeshDescription.MeshDescriptionBase.GetTrianglePolygon // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x46dadb0
	void GetTriangleEdges(struct FTriangleID TriangleID, struct TArray<struct FEdgeID>& OutEdgeIDs); // Function MeshDescription.MeshDescriptionBase.GetTriangleEdges // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x46dacb0
	void GetTriangleAdjacentTriangles(struct FTriangleID TriangleID, struct TArray<struct FTriangleID>& OutTriangleIDs); // Function MeshDescription.MeshDescriptionBase.GetTriangleAdjacentTriangles // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x46dabb0
	void GetPolygonVertices(struct FPolygonID PolygonID, struct TArray<struct FVertexID>& OutVertexIDs); // Function MeshDescription.MeshDescriptionBase.GetPolygonVertices // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x46daab0
	void GetPolygonVertexInstances(struct FPolygonID PolygonID, struct TArray<struct FVertexInstanceID>& OutVertexInstanceIDs); // Function MeshDescription.MeshDescriptionBase.GetPolygonVertexInstances // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x46da9b0
	void GetPolygonTriangles(struct FPolygonID PolygonID, struct TArray<struct FTriangleID>& OutTriangleIDs); // Function MeshDescription.MeshDescriptionBase.GetPolygonTriangles // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x46da8b0
	struct FPolygonGroupID GetPolygonPolygonGroup(struct FPolygonID PolygonID); // Function MeshDescription.MeshDescriptionBase.GetPolygonPolygonGroup // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x46da810
	void GetPolygonPerimeterEdges(struct FPolygonID PolygonID, struct TArray<struct FEdgeID>& OutEdgeIDs); // Function MeshDescription.MeshDescriptionBase.GetPolygonPerimeterEdges // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x46da710
	void GetPolygonInternalEdges(struct FPolygonID PolygonID, struct TArray<struct FEdgeID>& OutEdgeIDs); // Function MeshDescription.MeshDescriptionBase.GetPolygonInternalEdges // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x46da610
	void GetPolygonGroupPolygons(struct FPolygonGroupID PolygonGroupID, struct TArray<struct FPolygonID>& OutPolygonIDs); // Function MeshDescription.MeshDescriptionBase.GetPolygonGroupPolygons // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x46da510
	void GetPolygonAdjacentPolygons(struct FPolygonID PolygonID, struct TArray<struct FPolygonID>& OutPolygonIDs); // Function MeshDescription.MeshDescriptionBase.GetPolygonAdjacentPolygons // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x46da410
	int32_t GetNumVertexVertexInstances(struct FVertexID VertexID); // Function MeshDescription.MeshDescriptionBase.GetNumVertexVertexInstances // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x46da380
	int32_t GetNumVertexInstanceConnectedTriangles(struct FVertexInstanceID VertexInstanceID); // Function MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedTriangles // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x46da2f0
	int32_t GetNumVertexInstanceConnectedPolygons(struct FVertexInstanceID VertexInstanceID); // Function MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedPolygons // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x46da260
	int32_t GetNumVertexConnectedTriangles(struct FVertexID VertexID); // Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedTriangles // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x46da1d0
	int32_t GetNumVertexConnectedPolygons(struct FVertexID VertexID); // Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedPolygons // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x46da140
	int32_t GetNumVertexConnectedEdges(struct FVertexID VertexID); // Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedEdges // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x46da0b0
	int32_t GetNumPolygonVertices(struct FPolygonID PolygonID); // Function MeshDescription.MeshDescriptionBase.GetNumPolygonVertices // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x46da020
	int32_t GetNumPolygonTriangles(struct FPolygonID PolygonID); // Function MeshDescription.MeshDescriptionBase.GetNumPolygonTriangles // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x46d9f90
	int32_t GetNumPolygonInternalEdges(struct FPolygonID PolygonID); // Function MeshDescription.MeshDescriptionBase.GetNumPolygonInternalEdges // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x46d9f00
	int32_t GetNumPolygonGroupPolygons(struct FPolygonGroupID PolygonGroupID); // Function MeshDescription.MeshDescriptionBase.GetNumPolygonGroupPolygons // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x46d9e70
	int32_t GetNumEdgeConnectedTriangles(struct FEdgeID EdgeID); // Function MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedTriangles // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x46d9de0
	int32_t GetNumEdgeConnectedPolygons(struct FEdgeID EdgeID); // Function MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedPolygons // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x46d9d50
	void GetEdgeVertices(struct FEdgeID EdgeID, struct TArray<struct FVertexID>& OutVertexIDs); // Function MeshDescription.MeshDescriptionBase.GetEdgeVertices // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x46d9c50
	struct FVertexID GetEdgeVertex(struct FEdgeID EdgeID, int32_t VertexNumber); // Function MeshDescription.MeshDescriptionBase.GetEdgeVertex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x46d9b70
	void GetEdgeConnectedTriangles(struct FEdgeID EdgeID, struct TArray<struct FTriangleID>& OutConnectedTriangleIDs); // Function MeshDescription.MeshDescriptionBase.GetEdgeConnectedTriangles // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x46d9a70
	void GetEdgeConnectedPolygons(struct FEdgeID EdgeID, struct TArray<struct FPolygonID>& OutConnectedPolygonIDs); // Function MeshDescription.MeshDescriptionBase.GetEdgeConnectedPolygons // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x46d9970
	void Empty(); // Function MeshDescription.MeshDescriptionBase.Empty // (Final|Native|Public|BlueprintCallable) // @ game+0x46d9950
	void DeleteVertexInstance(struct FVertexInstanceID VertexInstanceID, struct TArray<struct FVertexID>& OrphanedVertices); // Function MeshDescription.MeshDescriptionBase.DeleteVertexInstance // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x46d9850
	void DeleteVertex(struct FVertexID VertexID); // Function MeshDescription.MeshDescriptionBase.DeleteVertex // (Final|Native|Public|BlueprintCallable) // @ game+0x46d97d0
	void DeleteTriangle(struct FTriangleID TriangleID, struct TArray<struct FEdgeID>& OrphanedEdges, struct TArray<struct FVertexInstanceID>& OrphanedVertexInstances, struct TArray<struct FPolygonGroupID>& OrphanedPolygonGroupsPtr); // Function MeshDescription.MeshDescriptionBase.DeleteTriangle // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x46d9600
	void DeletePolygonGroup(struct FPolygonGroupID PolygonGroupID); // Function MeshDescription.MeshDescriptionBase.DeletePolygonGroup // (Final|Native|Public|BlueprintCallable) // @ game+0x46d9580
	void DeletePolygon(struct FPolygonID PolygonID, struct TArray<struct FEdgeID>& OrphanedEdges, struct TArray<struct FVertexInstanceID>& OrphanedVertexInstances, struct TArray<struct FPolygonGroupID>& OrphanedPolygonGroups); // Function MeshDescription.MeshDescriptionBase.DeletePolygon // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x46d93b0
	void DeleteEdge(struct FEdgeID EdgeID, struct TArray<struct FVertexID>& OrphanedVertices); // Function MeshDescription.MeshDescriptionBase.DeleteEdge // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x46d92b0
	void CreateVertexWithID(struct FVertexID VertexID); // Function MeshDescription.MeshDescriptionBase.CreateVertexWithID // (Final|Native|Public|BlueprintCallable) // @ game+0x46d9230
	void CreateVertexInstanceWithID(struct FVertexInstanceID VertexInstanceID, struct FVertexID VertexID); // Function MeshDescription.MeshDescriptionBase.CreateVertexInstanceWithID // (Final|Native|Public|BlueprintCallable) // @ game+0x46d9160
	struct FVertexInstanceID CreateVertexInstance(struct FVertexID VertexID); // Function MeshDescription.MeshDescriptionBase.CreateVertexInstance // (Final|Native|Public|BlueprintCallable) // @ game+0x46d90c0
	struct FVertexID CreateVertex(); // Function MeshDescription.MeshDescriptionBase.CreateVertex // (Final|Native|Public|BlueprintCallable) // @ game+0x46d9080
	void CreateTriangleWithID(struct FTriangleID TriangleID, struct FPolygonGroupID PolygonGroupID, struct TArray<struct FVertexInstanceID>& VertexInstanceIDs, struct TArray<struct FEdgeID>& NewEdgeIDs); // Function MeshDescription.MeshDescriptionBase.CreateTriangleWithID // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x46d8ec0
	struct FTriangleID CreateTriangle(struct FPolygonGroupID PolygonGroupID, struct TArray<struct FVertexInstanceID>& VertexInstanceIDs, struct TArray<struct FEdgeID>& NewEdgeIDs); // Function MeshDescription.MeshDescriptionBase.CreateTriangle // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x46d8d30
	void CreatePolygonWithID(struct FPolygonID PolygonID, struct FPolygonGroupID PolygonGroupID, struct TArray<struct FVertexInstanceID>& VertexInstanceIDs, struct TArray<struct FEdgeID>& NewEdgeIDs); // Function MeshDescription.MeshDescriptionBase.CreatePolygonWithID // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x46d8b70
	void CreatePolygonGroupWithID(struct FPolygonGroupID PolygonGroupID); // Function MeshDescription.MeshDescriptionBase.CreatePolygonGroupWithID // (Final|Native|Public|BlueprintCallable) // @ game+0x46d8af0
	struct FPolygonGroupID CreatePolygonGroup(); // Function MeshDescription.MeshDescriptionBase.CreatePolygonGroup // (Final|Native|Public|BlueprintCallable) // @ game+0x46d8ab0
	struct FPolygonID CreatePolygon(struct FPolygonGroupID PolygonGroupID, struct TArray<struct FVertexInstanceID>& VertexInstanceIDs, struct TArray<struct FEdgeID>& NewEdgeIDs); // Function MeshDescription.MeshDescriptionBase.CreatePolygon // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x46d8920
	void CreateEdgeWithID(struct FEdgeID EdgeID, struct FVertexID VertexID0, struct FVertexID VertexID1); // Function MeshDescription.MeshDescriptionBase.CreateEdgeWithID // (Final|Native|Public|BlueprintCallable) // @ game+0x46d8800
	struct FEdgeID CreateEdge(struct FVertexID VertexID0, struct FVertexID VertexID1); // Function MeshDescription.MeshDescriptionBase.CreateEdge // (Final|Native|Public|BlueprintCallable) // @ game+0x46d8720
	void ComputePolygonTriangulation(struct FPolygonID PolygonID); // Function MeshDescription.MeshDescriptionBase.ComputePolygonTriangulation // (Final|Native|Public|BlueprintCallable) // @ game+0x46d86a0
};

