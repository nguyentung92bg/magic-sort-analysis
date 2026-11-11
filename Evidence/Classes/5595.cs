public struct Task : IFlatbufferObject // TypeDefIndex: 5595
{
	// Fields
	private Table __p; // 0x0

	// Properties
	public ByteBuffer ByteBuffer { get; }
	public TaskType TaskType { get; }
	public long Amount { get; }

	// Methods

	// RVA: 0x1445DE4 Offset: 0x1445DE4 VA: 0x1445DE4 Slot: 5
	public ByteBuffer get_ByteBuffer() { }

	// RVA: 0x1445DEC Offset: 0x1445DEC VA: 0x1445DEC
	public static void ValidateVersion() { }

	// RVA: 0x1445DF4 Offset: 0x1445DF4 VA: 0x1445DF4
	public static Task GetRootAsTask(ByteBuffer _bb) { }

	// RVA: 0x1445E00 Offset: 0x1445E00 VA: 0x1445E00
	public static Task GetRootAsTask(ByteBuffer _bb, Task obj) { }

	// RVA: 0x1445E84 Offset: 0x1445E84 VA: 0x1445E84 Slot: 4
	public void __init(int _i, ByteBuffer _bb) { }

	// RVA: 0x1445E44 Offset: 0x1445E44 VA: 0x1445E44
	public Task __assign(int _i, ByteBuffer _bb) { }

	// RVA: 0x1445EC0 Offset: 0x1445EC0 VA: 0x1445EC0
	public TaskType get_TaskType() { }

	// RVA: 0x1445F04 Offset: 0x1445F04 VA: 0x1445F04
	public long get_Amount() { }

	// RVA: 0x1445F4C Offset: 0x1445F4C VA: 0x1445F4C
	public static Offset<Task> CreateTask(FlatBufferBuilder builder, TaskType task_type = 0, long amount = 0) { }

	// RVA: 0x1446034 Offset: 0x1446034 VA: 0x1446034
	public static void StartTask(FlatBufferBuilder builder) { }

	// RVA: 0x1445FC4 Offset: 0x1445FC4 VA: 0x1445FC4
	public static void AddTaskType(FlatBufferBuilder builder, TaskType taskType) { }

	// RVA: 0x1445FA4 Offset: 0x1445FA4 VA: 0x1445FA4
	public static void AddAmount(FlatBufferBuilder builder, long amount) { }

	// RVA: 0x1445FE4 Offset: 0x1445FE4 VA: 0x1445FE4
	public static Offset<Task> EndTask(FlatBufferBuilder builder) { }
}

// Namespace: magicsort.schemas.v1.liveops.task_station