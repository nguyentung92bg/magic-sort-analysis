public class GeneratorItem : ABlockerItem // TypeDefIndex: 1697
{
	// Fields
	private GeneratorView _generatorView; // 0x48
	private BottleItem _belongingBottle; // 0x50
	private Stack<ColorId> _colorIds; // 0x58
	private SortingService _sortingService; // 0x60
	private Bounds _bounds; // 0x68
	private int _lastPouredWaterHeight; // 0x80

	// Properties
	public override bool IsOverlay { get; }
	private int _height { get; }
	public bool FillsFromBottom { get; }

	// Methods

	// RVA: 0x274F4F8 Offset: 0x274F4F8 VA: 0x274F4F8 Slot: 22
	public override bool get_IsOverlay() { }

	// RVA: 0x274F500 Offset: 0x274F500 VA: 0x274F500
	private int get__height() { }

	// RVA: 0x274F51C Offset: 0x274F51C VA: 0x274F51C
	public bool get_FillsFromBottom() { }

	// RVA: 0x274F540 Offset: 0x274F540 VA: 0x274F540 Slot: 4
	protected override void OnInitialize() { }

	// RVA: 0x274F69C Offset: 0x274F69C VA: 0x274F69C Slot: 5
	protected override void OnSpawn() { }

	// RVA: 0x274F6A4 Offset: 0x274F6A4 VA: 0x274F6A4
	public void Prepare(Vector3 viewOffset, Sorting frontSorting, Sorting backSorting, BottleItem belongingBottle, Stack<ColorId> colorIds) { }

	// RVA: 0x274F7F8 Offset: 0x274F7F8 VA: 0x274F7F8 Slot: 6
	protected override void OnRecycle() { }

	// RVA: 0x274F8A0 Offset: 0x274F8A0 VA: 0x274F8A0 Slot: 37
	public override void OnShuffleSelected() { }

	// RVA: 0x274F9A8 Offset: 0x274F9A8 VA: 0x274F9A8 Slot: 38
	public override void OnShuffleDeselected() { }

	// RVA: 0x274FA20 Offset: 0x274FA20 VA: 0x274FA20 Slot: 33
	public override void OnBottleSelectedAsOrigin() { }

	// RVA: 0x274FA78 Offset: 0x274FA78 VA: 0x274FA78 Slot: 35
	public override void OnBottleDeselectedAsOrigin() { }

	// RVA: 0x274FAB4 Offset: 0x274FAB4 VA: 0x274FAB4 Slot: 16
	public override void OnOriginBottleReturnToInitialPosition(Selection selection) { }

	// RVA: 0x2750178 Offset: 0x2750178 VA: 0x2750178
	private void PlayFillAnimation(List<ValueTuple<int, ColorId>> spawnedWaters) { }

	// RVA: 0x2750514 Offset: 0x2750514 VA: 0x2750514
	public Tween PlayExplosionAnimation(int previousWaterHeight, ColorId colorId) { }

	// RVA: 0x27507AC Offset: 0x27507AC VA: 0x27507AC
	private Tween PlayExplosionAnimation(List<ValueTuple<int, ColorId>> spawnedWaters) { }

	// RVA: 0x2750A3C Offset: 0x2750A3C VA: 0x2750A3C
	private SoundType GetSoundType() { }

	// RVA: 0x274FE08 Offset: 0x274FE08 VA: 0x274FE08
	private List<ValueTuple<int, ColorId>> GetNextSpawnWaters() { }

	// RVA: 0x2750A74 Offset: 0x2750A74 VA: 0x2750A74
	public void PlayShuffleAnimation() { }

	// RVA: 0x2750AF4 Offset: 0x2750AF4 VA: 0x2750AF4
	public void ResetExplosion() { }

	// RVA: 0x274FFF8 Offset: 0x274FFF8 VA: 0x274FFF8
	private void Complete(List<ValueTuple<int, ColorId>> spawnedWaters) { }

	// RVA: 0x2750BAC Offset: 0x2750BAC VA: 0x2750BAC Slot: 41
	public override void OnBeforeUndoLastWaterPour(int waterHeight, ColorId topWaterColorId) { }

	// RVA: 0x2750DA4 Offset: 0x2750DA4 VA: 0x2750DA4
	private void OnBeforeUndoBottomFill(List<ColorId> colorIdsFromBottom) { }

	// RVA: 0x2751050 Offset: 0x2751050 VA: 0x2751050 Slot: 24
	public override bool IsAllowShuffle() { }

	// RVA: 0x2751058 Offset: 0x2751058 VA: 0x2751058
	public Stack<ColorId> GetWaterColorIds() { }

	// RVA: 0x2751060 Offset: 0x2751060 VA: 0x2751060
	public int GetWaterHeight() { }

	// RVA: 0x2750FB4 Offset: 0x2750FB4 VA: 0x2750FB4
	public void AddWaterColorId(int height, ColorId colorId) { }

	// RVA: 0x27510A8 Offset: 0x27510A8 VA: 0x27510A8
	public void RemoveWaterColorIds() { }

	// RVA: 0x27510F8 Offset: 0x27510F8 VA: 0x27510F8 Slot: 30
	public override bool HasHidingWaters() { }

	// RVA: 0x2751100 Offset: 0x2751100 VA: 0x2751100 Slot: 42
	public override bool IsIntersect(Vector3 worldPosition) { }

	// RVA: 0x275110C Offset: 0x275110C VA: 0x275110C Slot: 43
	public override void UpdateBounds() { }

	// RVA: 0x2751288 Offset: 0x2751288 VA: 0x2751288 Slot: 45
	public override bool HasReturnOffset() { }

	// RVA: 0x2751290 Offset: 0x2751290 VA: 0x2751290 Slot: 44
	public override Vector3 GetBottleReturnOffset() { }

	// RVA: 0x27512E8 Offset: 0x27512E8 VA: 0x27512E8 Slot: 20
	public override void Show() { }

	// RVA: 0x2751308 Offset: 0x2751308 VA: 0x2751308 Slot: 21
	public override void Hide() { }

	// RVA: 0x2751328 Offset: 0x2751328 VA: 0x2751328 Slot: 46
	public override bool IsParentedToBottle() { }

	// RVA: 0x2751330 Offset: 0x2751330 VA: 0x2751330
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x2751338 Offset: 0x2751338 VA: 0x2751338
	private void <PlayFillAnimation>b__21_0() { }

	[CompilerGenerated]
	// RVA: 0x27514FC Offset: 0x27514FC VA: 0x27514FC
	private void <PlayFillAnimation>b__21_2() { }

	[CompilerGenerated]
	// RVA: 0x2751598 Offset: 0x2751598 VA: 0x2751598
	private void <PlayFillAnimation>b__21_1() { }

	[CompilerGenerated]
	// RVA: 0x2751634 Offset: 0x2751634 VA: 0x2751634
	private void <PlayExplosionAnimation>b__22_0() { }

	[CompilerGenerated]
	// RVA: 0x275180C Offset: 0x275180C VA: 0x275180C
	private void <PlayExplosionAnimation>b__22_2() { }

	[CompilerGenerated]
	// RVA: 0x27518A8 Offset: 0x27518A8 VA: 0x27518A8
	private void <PlayExplosionAnimation>b__23_0() { }

	[CompilerGenerated]
	// RVA: 0x2751A18 Offset: 0x2751A18 VA: 0x2751A18
	private void <PlayExplosionAnimation>b__23_2() { }
}

// Namespace: Modules.Contexts.GamePlay.Board.Items.Scripts.Generator
[Serializable]