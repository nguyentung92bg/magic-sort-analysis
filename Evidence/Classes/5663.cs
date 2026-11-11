public struct GetGivenSeedsResponse : IFlatbufferObject // TypeDefIndex: 5663
{
	// Fields
	private Table __p; // 0x0

	// Properties
	public ByteBuffer ByteBuffer { get; }
	public int SeedsLength { get; }

	// Methods

	// RVA: 0x1746ACC Offset: 0x1746ACC VA: 0x1746ACC Slot: 5
	public ByteBuffer get_ByteBuffer() { }

	// RVA: 0x1746AD4 Offset: 0x1746AD4 VA: 0x1746AD4
	public static void ValidateVersion() { }

	// RVA: 0x1746ADC Offset: 0x1746ADC VA: 0x1746ADC
	public static GetGivenSeedsResponse GetRootAsGetGivenSeedsResponse(ByteBuffer _bb) { }

	// RVA: 0x1746AE8 Offset: 0x1746AE8 VA: 0x1746AE8
	public static GetGivenSeedsResponse GetRootAsGetGivenSeedsResponse(ByteBuffer _bb, GetGivenSeedsResponse obj) { }

	// RVA: 0x1746B6C Offset: 0x1746B6C VA: 0x1746B6C
	public static bool VerifyGetGivenSeedsResponse(ByteBuffer _bb) { }

	// RVA: 0x1746C40 Offset: 0x1746C40 VA: 0x1746C40 Slot: 4
	public void __init(int _i, ByteBuffer _bb) { }

	// RVA: 0x1746B2C Offset: 0x1746B2C VA: 0x1746B2C
	public GetGivenSeedsResponse __assign(int _i, ByteBuffer _bb) { }

	// RVA: 0x1746C7C Offset: 0x1746C7C VA: 0x1746C7C
	public Nullable<EditorJSON> Seeds(int j) { }

	// RVA: 0x1746D50 Offset: 0x1746D50 VA: 0x1746D50
	public int get_SeedsLength() { }

	// RVA: 0x1746D84 Offset: 0x1746D84 VA: 0x1746D84
	public static Offset<GetGivenSeedsResponse> CreateGetGivenSeedsResponse(FlatBufferBuilder builder, VectorOffset seedsOffset) { }

	// RVA: 0x1746E3C Offset: 0x1746E3C VA: 0x1746E3C
	public static void StartGetGivenSeedsResponse(FlatBufferBuilder builder) { }

	// RVA: 0x1746DCC Offset: 0x1746DCC VA: 0x1746DCC
	public static void AddSeeds(FlatBufferBuilder builder, VectorOffset seedsOffset) { }

	// RVA: 0x1746E54 Offset: 0x1746E54 VA: 0x1746E54
	public static VectorOffset CreateSeedsVector(FlatBufferBuilder builder, Offset<EditorJSON>[] data) { }

	// RVA: 0x1746EFC Offset: 0x1746EFC VA: 0x1746EFC
	public static VectorOffset CreateSeedsVectorBlock(FlatBufferBuilder builder, Offset<EditorJSON>[] data) { }

	// RVA: 0x1746F84 Offset: 0x1746F84 VA: 0x1746F84
	public static VectorOffset CreateSeedsVectorBlock(FlatBufferBuilder builder, ArraySegment<Offset<EditorJSON>> data) { }

	// RVA: 0x1747048 Offset: 0x1747048 VA: 0x1747048
	public static VectorOffset CreateSeedsVectorBlock(FlatBufferBuilder builder, IntPtr dataPtr, int sizeInBytes) { }

	// RVA: 0x17470DC Offset: 0x17470DC VA: 0x17470DC
	public static void StartSeedsVector(FlatBufferBuilder builder, int numElems) { }

	// RVA: 0x1746DEC Offset: 0x1746DEC VA: 0x1746DEC
	public static Offset<GetGivenSeedsResponse> EndGetGivenSeedsResponse(FlatBufferBuilder builder) { }

	// RVA: 0x17470FC Offset: 0x17470FC VA: 0x17470FC
	public static void FinishGetGivenSeedsResponseBuffer(FlatBufferBuilder builder, Offset<GetGivenSeedsResponse> offset) { }

	// RVA: 0x1747110 Offset: 0x1747110 VA: 0x1747110
	public static void FinishSizePrefixedGetGivenSeedsResponseBuffer(FlatBufferBuilder builder, Offset<GetGivenSeedsResponse> offset) { }
}

// Namespace: magicsort.schemas.v1.level