public struct GetTimeResponse : IFlatbufferObject // TypeDefIndex: 5630
{
	// Fields
	private Table __p; // 0x0

	// Properties
	public ByteBuffer ByteBuffer { get; }
	public long CurrentTime { get; }

	// Methods

	// RVA: 0x173ED50 Offset: 0x173ED50 VA: 0x173ED50 Slot: 5
	public ByteBuffer get_ByteBuffer() { }

	// RVA: 0x173ED58 Offset: 0x173ED58 VA: 0x173ED58
	public static void ValidateVersion() { }

	// RVA: 0x173ED60 Offset: 0x173ED60 VA: 0x173ED60
	public static GetTimeResponse GetRootAsGetTimeResponse(ByteBuffer _bb) { }

	// RVA: 0x173ED6C Offset: 0x173ED6C VA: 0x173ED6C
	public static GetTimeResponse GetRootAsGetTimeResponse(ByteBuffer _bb, GetTimeResponse obj) { }

	// RVA: 0x173EDF0 Offset: 0x173EDF0 VA: 0x173EDF0 Slot: 4
	public void __init(int _i, ByteBuffer _bb) { }

	// RVA: 0x173EDB0 Offset: 0x173EDB0 VA: 0x173EDB0
	public GetTimeResponse __assign(int _i, ByteBuffer _bb) { }

	// RVA: 0x173EE2C Offset: 0x173EE2C VA: 0x173EE2C
	public long get_CurrentTime() { }

	// RVA: 0x173EE74 Offset: 0x173EE74 VA: 0x173EE74
	public static Offset<GetTimeResponse> CreateGetTimeResponse(FlatBufferBuilder builder, long current_time = 0) { }

	// RVA: 0x173EF2C Offset: 0x173EF2C VA: 0x173EF2C
	public static void StartGetTimeResponse(FlatBufferBuilder builder) { }

	// RVA: 0x173EEBC Offset: 0x173EEBC VA: 0x173EEBC
	public static void AddCurrentTime(FlatBufferBuilder builder, long currentTime) { }

	// RVA: 0x173EEDC Offset: 0x173EEDC VA: 0x173EEDC
	public static Offset<GetTimeResponse> EndGetTimeResponse(FlatBufferBuilder builder) { }
}

// Namespace: magicsort.schemas.v1.liveops.generics