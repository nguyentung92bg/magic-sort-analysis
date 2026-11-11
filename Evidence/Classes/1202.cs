public class BottleSolution // TypeDefIndex: 1202
{
	// Fields
	public BottleItem Bottle; // 0x10
	public List<ColorId> OriginalColorsTopToBottom; // 0x18
	public List<ColorId> NewColorsTopToBottom; // 0x20
	public bool IsCompletelyFilled; // 0x28
	public bool CanReverseAfterPlacement; // 0x29
	public int Capacity; // 0x2C
	public int BottomLockedCount; // 0x30

	// Properties
	public int FreeSpace { get; }

	// Methods

	// RVA: 0x20F3BC8 Offset: 0x20F3BC8 VA: 0x20F3BC8
	public int get_FreeSpace() { }

	// RVA: 0x20F3E28 Offset: 0x20F3E28 VA: 0x20F3E28
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.SuperCharger.Strategies.BestSort