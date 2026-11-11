public class WaterViewConfig : ScriptableObject // TypeDefIndex: 1468
{
	// Fields
	[SerializeField]
	[CompilerGenerated]
	private List<WaterSpriteByBottleHeight> <WaterSpriteByBottleHeights>k__BackingField; // 0x18
	[SerializeField]
	[CompilerGenerated]
	private List<WaterPivotPositionsByBottleHeight> <ValuesByHeights>k__BackingField; // 0x20

	// Properties
	public List<WaterSpriteByBottleHeight> WaterSpriteByBottleHeights { get; set; }
	public List<WaterPivotPositionsByBottleHeight> ValuesByHeights { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x248C9FC Offset: 0x248C9FC VA: 0x248C9FC
	public List<WaterSpriteByBottleHeight> get_WaterSpriteByBottleHeights() { }

	[CompilerGenerated]
	// RVA: 0x248CA04 Offset: 0x248CA04 VA: 0x248CA04
	private void set_WaterSpriteByBottleHeights(List<WaterSpriteByBottleHeight> value) { }

	[CompilerGenerated]
	// RVA: 0x248CA0C Offset: 0x248CA0C VA: 0x248CA0C
	public List<WaterPivotPositionsByBottleHeight> get_ValuesByHeights() { }

	[CompilerGenerated]
	// RVA: 0x248CA14 Offset: 0x248CA14 VA: 0x248CA14
	private void set_ValuesByHeights(List<WaterPivotPositionsByBottleHeight> value) { }

	// RVA: 0x248B788 Offset: 0x248B788 VA: 0x248B788
	public WaterPivotPositionsByBottleHeight GetWaterPivotPositionsByBottleHeight(int bottleHeight) { }

	// RVA: 0x248CA24 Offset: 0x248CA24 VA: 0x248CA24
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.Configs
[Serializable]