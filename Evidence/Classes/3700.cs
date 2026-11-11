public class GeneratorItem : MergeItem, IMergeable // TypeDefIndex: 3700
{
	// Fields
	[CompilerGenerated]
	private int <SetID>k__BackingField; // 0x90
	[CompilerGenerated]
	private int <ItemLevel>k__BackingField; // 0x94
	[CompilerGenerated]
	private int <Id>k__BackingField; // 0x98
	[SerializeField]
	private Transform _generatorIdleParticle; // 0xA0
	[SerializeField]
	private Transform _generatorClickParticle; // 0xA8
	private List<MergeMiniGameItemViewModel> _itemsToGenerate; // 0xB0
	private Sequence _generatorDestroySequence; // 0xB8
	private Sequence _generatorItemClickedSequence; // 0xC0

	// Properties
	public int SetID { get; set; }
	public int ItemLevel { get; set; }
	public override int Id { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x411A360 Offset: 0x411A360 VA: 0x411A360 Slot: 19
	public int get_SetID() { }

	[CompilerGenerated]
	// RVA: 0x411A368 Offset: 0x411A368 VA: 0x411A368 Slot: 20
	public void set_SetID(int value) { }

	[CompilerGenerated]
	// RVA: 0x411A370 Offset: 0x411A370 VA: 0x411A370 Slot: 21
	public int get_ItemLevel() { }

	[CompilerGenerated]
	// RVA: 0x411A378 Offset: 0x411A378 VA: 0x411A378 Slot: 22
	public void set_ItemLevel(int value) { }

	[CompilerGenerated]
	// RVA: 0x411A380 Offset: 0x411A380 VA: 0x411A380 Slot: 5
	public override int get_Id() { }

	[CompilerGenerated]
	// RVA: 0x411A388 Offset: 0x411A388 VA: 0x411A388 Slot: 6
	public override void set_Id(int value) { }

	// RVA: 0x411A390 Offset: 0x411A390 VA: 0x411A390 Slot: 7
	public override void Initialize() { }

	// RVA: 0x411A394 Offset: 0x411A394 VA: 0x411A394 Slot: 15
	public override void Prepare(MergeMiniGameItemViewModel viewModel, Transform parent, Sprite sprite, MergeMiniGameSelectionSystem selectionSystem) { }

	// RVA: 0x411A444 Offset: 0x411A444 VA: 0x411A444 Slot: 9
	public override bool CanMove() { }

	// RVA: 0x411A44C Offset: 0x411A44C VA: 0x411A44C Slot: 10
	public override bool CanMerge() { }

	// RVA: 0x411A454 Offset: 0x411A454 VA: 0x411A454 Slot: 11
	public override void OnMerge() { }

	// RVA: 0x411A458 Offset: 0x411A458 VA: 0x411A458
	private void DestroyGenerator() { }

	// RVA: 0x411A62C Offset: 0x411A62C VA: 0x411A62C Slot: 13
	public override bool HasTapAction() { }

	// RVA: 0x411A634 Offset: 0x411A634 VA: 0x411A634 Slot: 14
	public override void ExecuteTapAction() { }

	// RVA: 0x411A768 Offset: 0x411A768 VA: 0x411A768
	private void PlayGeneratorItemClickedAnimation() { }

	// RVA: 0x411A928 Offset: 0x411A928 VA: 0x411A928 Slot: 23
	public bool CanMergeWith(IMergeable item) { }

	// RVA: 0x411A930 Offset: 0x411A930 VA: 0x411A930 Slot: 24
	public Tween MoveTargetWithScale(Transform target) { }

	// RVA: 0x4116D10 Offset: 0x4116D10 VA: 0x4116D10
	public void OnGenerateItem() { }

	// RVA: 0x411A938 Offset: 0x411A938 VA: 0x411A938 Slot: 16
	public override void Dispose() { }

	// RVA: 0x411A97C Offset: 0x411A97C VA: 0x411A97C Slot: 8
	public override void Recycle() { }

	// RVA: 0x411AADC Offset: 0x411AADC VA: 0x411AADC
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x411AAE4 Offset: 0x411AAE4 VA: 0x411AAE4
	private void <DestroyGenerator>b__22_0() { }

	[CompilerGenerated]
	// RVA: 0x411AB30 Offset: 0x411AB30 VA: 0x411AB30
	private void <DestroyGenerator>b__22_1() { }

	[CompilerGenerated]
	// RVA: 0x411AB80 Offset: 0x411AB80 VA: 0x411AB80
	private void <PlayGeneratorItemClickedAnimation>b__25_0() { }

	[CompilerGenerated]
	// RVA: 0x411ABAC Offset: 0x411ABAC VA: 0x411ABAC
	private void <PlayGeneratorItemClickedAnimation>b__25_1(float t) { }

	[CompilerGenerated]
	// RVA: 0x411AC4C Offset: 0x411AC4C VA: 0x411AC4C
	private void <PlayGeneratorItemClickedAnimation>b__25_2() { }
}

// Namespace: 
[CompilerGenerated]