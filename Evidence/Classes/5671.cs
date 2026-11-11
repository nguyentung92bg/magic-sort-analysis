public struct Position : IFlatbufferObject // TypeDefIndex: 5671
{
	// Fields
	private Struct __p; // 0x0

	// Properties
	public ByteBuffer ByteBuffer { get; }
	public double X { get; }
	public double Y { get; }
	public double Z { get; }

	// Methods

	// RVA: 0x1600C80 Offset: 0x1600C80 VA: 0x1600C80 Slot: 5
	public ByteBuffer get_ByteBuffer() { }

	// RVA: 0x1600C88 Offset: 0x1600C88 VA: 0x1600C88 Slot: 4
	public void __init(int _i, ByteBuffer _bb) { }

	// RVA: 0x1600CC4 Offset: 0x1600CC4 VA: 0x1600CC4
	public Position __assign(int _i, ByteBuffer _bb) { }

	// RVA: 0x1600D04 Offset: 0x1600D04 VA: 0x1600D04
	public double get_X() { }

	// RVA: 0x1600D28 Offset: 0x1600D28 VA: 0x1600D28
	public double get_Y() { }

	// RVA: 0x1600D50 Offset: 0x1600D50 VA: 0x1600D50
	public double get_Z() { }

	// RVA: 0x1600D78 Offset: 0x1600D78 VA: 0x1600D78
	public static Offset<Position> CreatePosition(FlatBufferBuilder builder, double X, double Y, double Z) { }
}

// Namespace: magicsort.schemas.v1.iap