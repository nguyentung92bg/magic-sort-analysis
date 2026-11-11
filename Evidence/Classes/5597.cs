public struct TaskStationPlayerStage : IFlatbufferObject // TypeDefIndex: 5597
{
	// Fields
	private Table __p; // 0x0

	// Properties
	public ByteBuffer ByteBuffer { get; }
	public int Id { get; }
	public int RewardsLength { get; }
	public int TasksLength { get; }

	// Methods

	// RVA: 0x14460E0 Offset: 0x14460E0 VA: 0x14460E0 Slot: 5
	public ByteBuffer get_ByteBuffer() { }

	// RVA: 0x14460E8 Offset: 0x14460E8 VA: 0x14460E8
	public static void ValidateVersion() { }

	// RVA: 0x14460F0 Offset: 0x14460F0 VA: 0x14460F0
	public static TaskStationPlayerStage GetRootAsTaskStationPlayerStage(ByteBuffer _bb) { }

	// RVA: 0x14460FC Offset: 0x14460FC VA: 0x14460FC
	public static TaskStationPlayerStage GetRootAsTaskStationPlayerStage(ByteBuffer _bb, TaskStationPlayerStage obj) { }

	// RVA: 0x1446140 Offset: 0x1446140 VA: 0x1446140 Slot: 4
	public void __init(int _i, ByteBuffer _bb) { }

	// RVA: 0x144575C Offset: 0x144575C VA: 0x144575C
	public TaskStationPlayerStage __assign(int _i, ByteBuffer _bb) { }

	// RVA: 0x144617C Offset: 0x144617C VA: 0x144617C
	public int get_Id() { }

	// RVA: 0x14461C0 Offset: 0x14461C0 VA: 0x14461C0
	public Nullable<ClientRewardModel> Rewards(int j) { }

	// RVA: 0x1446298 Offset: 0x1446298 VA: 0x1446298
	public int get_RewardsLength() { }

	// RVA: 0x14462CC Offset: 0x14462CC VA: 0x14462CC
	public Nullable<Task> Tasks(int j) { }

	// RVA: 0x14463A0 Offset: 0x14463A0 VA: 0x14463A0
	public int get_TasksLength() { }

	// RVA: 0x14463D4 Offset: 0x14463D4 VA: 0x14463D4
	public static Offset<TaskStationPlayerStage> CreateTaskStationPlayerStage(FlatBufferBuilder builder, int id = 0, VectorOffset rewardsOffset, VectorOffset tasksOffset) { }

	// RVA: 0x14464F4 Offset: 0x14464F4 VA: 0x14464F4
	public static void StartTaskStationPlayerStage(FlatBufferBuilder builder) { }

	// RVA: 0x1446484 Offset: 0x1446484 VA: 0x1446484
	public static void AddId(FlatBufferBuilder builder, int id) { }

	// RVA: 0x1446464 Offset: 0x1446464 VA: 0x1446464
	public static void AddRewards(FlatBufferBuilder builder, VectorOffset rewardsOffset) { }

	// RVA: 0x144650C Offset: 0x144650C VA: 0x144650C
	public static VectorOffset CreateRewardsVector(FlatBufferBuilder builder, Offset<ClientRewardModel>[] data) { }

	// RVA: 0x14465B4 Offset: 0x14465B4 VA: 0x14465B4
	public static VectorOffset CreateRewardsVectorBlock(FlatBufferBuilder builder, Offset<ClientRewardModel>[] data) { }

	// RVA: 0x144663C Offset: 0x144663C VA: 0x144663C
	public static VectorOffset CreateRewardsVectorBlock(FlatBufferBuilder builder, ArraySegment<Offset<ClientRewardModel>> data) { }

	// RVA: 0x1446700 Offset: 0x1446700 VA: 0x1446700
	public static VectorOffset CreateRewardsVectorBlock(FlatBufferBuilder builder, IntPtr dataPtr, int sizeInBytes) { }

	// RVA: 0x1446794 Offset: 0x1446794 VA: 0x1446794
	public static void StartRewardsVector(FlatBufferBuilder builder, int numElems) { }

	// RVA: 0x1446444 Offset: 0x1446444 VA: 0x1446444
	public static void AddTasks(FlatBufferBuilder builder, VectorOffset tasksOffset) { }

	// RVA: 0x14467B4 Offset: 0x14467B4 VA: 0x14467B4
	public static VectorOffset CreateTasksVector(FlatBufferBuilder builder, Offset<Task>[] data) { }

	// RVA: 0x144685C Offset: 0x144685C VA: 0x144685C
	public static VectorOffset CreateTasksVectorBlock(FlatBufferBuilder builder, Offset<Task>[] data) { }

	// RVA: 0x14468E4 Offset: 0x14468E4 VA: 0x14468E4
	public static VectorOffset CreateTasksVectorBlock(FlatBufferBuilder builder, ArraySegment<Offset<Task>> data) { }

	// RVA: 0x14469A8 Offset: 0x14469A8 VA: 0x14469A8
	public static VectorOffset CreateTasksVectorBlock(FlatBufferBuilder builder, IntPtr dataPtr, int sizeInBytes) { }

	// RVA: 0x1446A3C Offset: 0x1446A3C VA: 0x1446A3C
	public static void StartTasksVector(FlatBufferBuilder builder, int numElems) { }

	// RVA: 0x14464A4 Offset: 0x14464A4 VA: 0x14464A4
	public static Offset<TaskStationPlayerStage> EndTaskStationPlayerStage(FlatBufferBuilder builder) { }
}

// Namespace: magicsort.schemas.v1.liveops.task_station