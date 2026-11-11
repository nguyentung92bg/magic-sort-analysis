public class RainbowTargetPicker // TypeDefIndex: 1188
{
	// Fields
	private readonly BottleCollections _bottleCollections; // 0x10

	// Methods

	// RVA: 0x20EC410 Offset: 0x20EC410 VA: 0x20EC410
	public void .ctor(BottleCollections bottleCollections) { }

	// RVA: 0x20EC440 Offset: 0x20EC440 VA: 0x20EC440
	public RainbowTarget PickWater() { }

	// RVA: 0x20ED098 Offset: 0x20ED098 VA: 0x20ED098
	private static int GetCellIndex(BottleItem bottle, WaterItem water) { }

	// RVA: 0x20EC568 Offset: 0x20EC568 VA: 0x20EC568
	private RainbowTargetPicker.CandidateWaters CollectCandidateWaters() { }

	// RVA: 0x20ECFE0 Offset: 0x20ECFE0 VA: 0x20ECFE0
	private static WaterItem PickRandomWater(RainbowTargetPicker.CandidateWaters candidates, HashSet<ColorId> longBottleColors, HashSet<ColorId> validMoveColors) { }

	// RVA: 0x20ED580 Offset: 0x20ED580 VA: 0x20ED580
	private static List<WaterItem> PreferMinHeightWaters(List<WaterItem> waters) { }

	// RVA: 0x20ED868 Offset: 0x20ED868 VA: 0x20ED868
	private static List<WaterItem> PreferTopWaters(List<WaterItem> waters, List<WaterItem> topWaters) { }

	// RVA: 0x20EDABC Offset: 0x20EDABC VA: 0x20EDABC
	private static List<WaterItem> PreferNonValidMoveColorWaters(List<WaterItem> waters, HashSet<ColorId> validMoveColors) { }

	// RVA: 0x20EDD48 Offset: 0x20EDD48 VA: 0x20EDD48
	private static List<WaterItem> PreferLeastFilledBottleWaters(List<WaterItem> waters, Dictionary<WaterItem, BottleItem> bottleByWater) { }

	// RVA: 0x20EE080 Offset: 0x20EE080 VA: 0x20EE080
	private static List<WaterItem> PreferNonLongBottleColorWaters(List<WaterItem> waters, HashSet<ColorId> longBottleColors) { }

	// RVA: 0x20ECC94 Offset: 0x20ECC94 VA: 0x20ECC94
	private HashSet<ColorId> GetValidMoveColors() { }

	// RVA: 0x20EC9D4 Offset: 0x20EC9D4 VA: 0x20EC9D4
	private HashSet<ColorId> GetLongBottleColors() { }

	// RVA: 0x20EE30C Offset: 0x20EE30C VA: 0x20EE30C
	private static List<WaterItem> PreferLeastSortedBottleWaters(List<WaterItem> waters, Dictionary<WaterItem, BottleItem> bottleByWater, Dictionary<BottleItem, int> waterBlockCountByBottle) { }

	// RVA: 0x20ED364 Offset: 0x20ED364 VA: 0x20ED364
	private static bool IsBottomWaterOfTaggedBottle(BottleItem bottle, WaterItem waterItem) { }

	// RVA: 0x20ED3F0 Offset: 0x20ED3F0 VA: 0x20ED3F0
	private static bool HasQuestionMark(BottleItem bottle, WaterItem waterItem) { }

	// RVA: 0x20ED2A0 Offset: 0x20ED2A0 VA: 0x20ED2A0
	private static bool IsWaterCandidate(BottleItem bottle) { }

	// RVA: 0x20EE6BC Offset: 0x20EE6BC VA: 0x20EE6BC
	private static int GetFilledCellCount(BottleItem bottle) { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]