public class SelectionResult // TypeDefIndex: 1153
{
	// Fields
	public ColorAndColorId WaterColorAndColorId; // 0x10
	public int WaterHeightToMove; // 0x18
	public int TargetBottleWaterHeightOld; // 0x1C
	public int TargetBottleWaterHeightNew; // 0x20
	public int OriginBottleWaterHeightOld; // 0x24
	public int OriginBottleWaterHeightNew; // 0x28
	public bool OriginTopWaterWasRainbow; // 0x2C
	public bool TargetTopWaterWasRainbow; // 0x2D

	// Methods

	// RVA: 0x16129D0 Offset: 0x16129D0 VA: 0x16129D0
	public static SelectionResult GetSelectionResult(BottleItem originBottle, WaterItem originBottleTopWater, List<Cell> cells, BottleItem targetBottle) { }

	// RVA: 0x161300C Offset: 0x161300C VA: 0x161300C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.Systems.Scripts.InputSystemNS