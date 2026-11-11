private sealed class SnitchTargetFinder.<>c // TypeDefIndex: 1228
{
	// Fields
	public static readonly SnitchTargetFinder.<>c <>9; // 0x0
	[TupleElementNames(new[] { "Blocker", "Score" })]
	public static Func<ValueTuple<ABlockerItem, int>, bool> <>9__15_1; // 0x8
	[TupleElementNames(new[] { "Blocker", "Score" })]
	public static Func<ValueTuple<ABlockerItem, int>, int> <>9__15_2; // 0x10
	[TupleElementNames(new[] { "Blocker", "Score" })]
	public static Func<ValueTuple<ABlockerItem, int>, ABlockerItem> <>9__15_4; // 0x18
	public static Func<List<BottleItem>, IEnumerable<BottleItem>> <>9__24_0; // 0x20
	public static Func<BottleItem, bool> <>9__24_1; // 0x28
	public static Func<Cell, bool> <>9__24_3; // 0x30
	[TupleElementNames(new[] { "cell", "bottle" })]
	public static Func<BottleItem, IEnumerable<ValueTuple<Cell, BottleItem>>> <>9__24_2; // 0x38

	// Methods

	// RVA: 0x2147810 Offset: 0x2147810 VA: 0x2147810
	private static void .cctor() { }

	// RVA: 0x2147880 Offset: 0x2147880 VA: 0x2147880
	public void .ctor() { }

	// RVA: 0x2147888 Offset: 0x2147888 VA: 0x2147888
	internal bool <SortBlockers>b__15_1(ValueTuple<ABlockerItem, int> pair) { }

	// RVA: 0x2147898 Offset: 0x2147898 VA: 0x2147898
	internal int <SortBlockers>b__15_2(ValueTuple<ABlockerItem, int> pair) { }

	// RVA: 0x21478A0 Offset: 0x21478A0 VA: 0x21478A0
	internal ABlockerItem <SortBlockers>b__15_4(ValueTuple<ABlockerItem, int> pair) { }

	// RVA: 0x21478A8 Offset: 0x21478A8 VA: 0x21478A8
	internal IEnumerable<BottleItem> <GetRandomFallbackSnitchSpawnTarget>b__24_0(List<BottleItem> row) { }

	// RVA: 0x21478B0 Offset: 0x21478B0 VA: 0x21478B0
	internal bool <GetRandomFallbackSnitchSpawnTarget>b__24_1(BottleItem bottle) { }

	// RVA: 0x2147900 Offset: 0x2147900 VA: 0x2147900
	internal IEnumerable<ValueTuple<Cell, BottleItem>> <GetRandomFallbackSnitchSpawnTarget>b__24_2(BottleItem bottle) { }

	// RVA: 0x2147B00 Offset: 0x2147B00 VA: 0x2147B00
	internal bool <GetRandomFallbackSnitchSpawnTarget>b__24_3(Cell cell) { }
}

// Namespace: 
[CompilerGenerated]