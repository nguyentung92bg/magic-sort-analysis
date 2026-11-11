private sealed class BottleItem.<>c // TypeDefIndex: 1511
{
	// Fields
	public static readonly BottleItem.<>c <>9; // 0x0
	public static Func<Cell, bool> <>9__106_0; // 0x8
	public static Predicate<Cell> <>9__107_0; // 0x10
	public static Func<Cell, bool> <>9__112_0; // 0x18
	public static Func<Cell, bool> <>9__117_0; // 0x20
	public static Func<ABlockerItem, bool> <>9__118_2; // 0x28
	public static Func<ABlockerItem, bool> <>9__125_0; // 0x30
	public static Func<ABlockerItem, bool> <>9__125_1; // 0x38
	public static Func<WaterAndColor, int> <>9__129_0; // 0x40
	public static Func<WaterAndColor, ColorId> <>9__129_1; // 0x48
	public static Func<WaterAndColor, ColorId> <>9__129_2; // 0x50
	public static Func<WaterAndColor, int> <>9__130_0; // 0x58

	// Methods

	// RVA: 0x22F9A40 Offset: 0x22F9A40 VA: 0x22F9A40
	private static void .cctor() { }

	// RVA: 0x22F9AB0 Offset: 0x22F9AB0 VA: 0x22F9AB0
	public void .ctor() { }

	// RVA: 0x22F9AB8 Offset: 0x22F9AB8 VA: 0x22F9AB8
	internal bool <GetEmptyCellCount>b__106_0(Cell cell) { }

	// RVA: 0x22F9AD8 Offset: 0x22F9AD8 VA: 0x22F9AD8
	internal bool <GetTopFilledCellIndex>b__107_0(Cell cell) { }

	// RVA: 0x22F9AF8 Offset: 0x22F9AF8 VA: 0x22F9AF8
	internal bool <IsFull>b__112_0(Cell cell) { }

	// RVA: 0x22F9B18 Offset: 0x22F9B18 VA: 0x22F9B18
	internal bool <GetFillAmount>b__117_0(Cell cell) { }

	// RVA: 0x22F9B38 Offset: 0x22F9B38 VA: 0x22F9B38
	internal bool <Shuffle>b__118_2(ABlockerItem blocker) { }

	// RVA: 0x22F9B58 Offset: 0x22F9B58 VA: 0x22F9B58
	internal bool <GetHighestPriorityBlocker>b__125_0(ABlockerItem b) { }

	// RVA: 0x22F9B7C Offset: 0x22F9B7C VA: 0x22F9B7C
	internal bool <GetHighestPriorityBlocker>b__125_1(ABlockerItem b) { }

	// RVA: 0x22F9BA0 Offset: 0x22F9BA0 VA: 0x22F9BA0
	internal int <ShuffleWaterUnitsWithGenerator>b__129_0(WaterAndColor _) { }

	// RVA: 0x22F9BB0 Offset: 0x22F9BB0 VA: 0x22F9BB0
	internal ColorId <ShuffleWaterUnitsWithGenerator>b__129_1(WaterAndColor unit) { }

	// RVA: 0x22F9BC8 Offset: 0x22F9BC8 VA: 0x22F9BC8
	internal ColorId <ShuffleWaterUnitsWithGenerator>b__129_2(WaterAndColor unit) { }

	// RVA: 0x22F9BE0 Offset: 0x22F9BE0 VA: 0x22F9BE0
	internal int <GetShuffledWaters>b__130_0(WaterAndColor _) { }
}

// Namespace: 
[CompilerGenerated]