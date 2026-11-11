public class CollectibleItem : MergeItem, IMergeable // TypeDefIndex: 3668
{
	// Fields
	[SerializeField]
	private GameObject _crownIcon; // 0x90
	[SerializeField]
	private Transform _viewTransform; // 0x98
	[SerializeField]
	private MergeMiniGameCollectibleItemAnimationConfig _config; // 0xA0
	[SerializeField]
	private RevealAnimationView _revealAnimationView; // 0xA8
	[SerializeField]
	private Material _glowMaterial; // 0xB0
	[SerializeField]
	private Material _basicMaterial; // 0xB8
	[CompilerGenerated]
	private int <SetID>k__BackingField; // 0xC0
	[CompilerGenerated]
	private int <ItemLevel>k__BackingField; // 0xC4
	[CompilerGenerated]
	private int <Id>k__BackingField; // 0xC8
	private RewardModel _rewardModel; // 0xD0
	private bool _collected; // 0xD8

	// Properties
	public int SetID { get; set; }
	public int ItemLevel { get; set; }
	public override int Id { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x41096A4 Offset: 0x41096A4 VA: 0x41096A4 Slot: 19
	public int get_SetID() { }

	[CompilerGenerated]
	// RVA: 0x41096AC Offset: 0x41096AC VA: 0x41096AC Slot: 20
	public void set_SetID(int value) { }

	[CompilerGenerated]
	// RVA: 0x41096B4 Offset: 0x41096B4 VA: 0x41096B4 Slot: 21
	public int get_ItemLevel() { }

	[CompilerGenerated]
	// RVA: 0x41096BC Offset: 0x41096BC VA: 0x41096BC Slot: 22
	public void set_ItemLevel(int value) { }

	[CompilerGenerated]
	// RVA: 0x41096C4 Offset: 0x41096C4 VA: 0x41096C4 Slot: 5
	public override int get_Id() { }

	[CompilerGenerated]
	// RVA: 0x41096CC Offset: 0x41096CC VA: 0x41096CC Slot: 6
	public override void set_Id(int value) { }

	// RVA: 0x41096D4 Offset: 0x41096D4 VA: 0x41096D4 Slot: 7
	public override void Initialize() { }

	// RVA: 0x41096D8 Offset: 0x41096D8 VA: 0x41096D8 Slot: 15
	public override void Prepare(MergeMiniGameItemViewModel itemViewModel, Transform parent, Sprite sprite, MergeMiniGameSelectionSystem selectionSystem) { }

	// RVA: 0x410993C Offset: 0x410993C VA: 0x410993C Slot: 9
	public override bool CanMove() { }

	// RVA: 0x4109944 Offset: 0x4109944 VA: 0x4109944 Slot: 10
	public override bool CanMerge() { }

	// RVA: 0x410994C Offset: 0x410994C VA: 0x410994C Slot: 11
	public override void OnMerge() { }

	// RVA: 0x410995C Offset: 0x410995C VA: 0x410995C Slot: 13
	public override bool HasTapAction() { }

	// RVA: 0x4109964 Offset: 0x4109964 VA: 0x4109964 Slot: 14
	public override void ExecuteTapAction() { }

	// RVA: 0x4109AB4 Offset: 0x4109AB4 VA: 0x4109AB4
	public Tween StartCollectAnimation() { }

	// RVA: 0x4109C20 Offset: 0x4109C20 VA: 0x4109C20
	private void OnDisable() { }

	// RVA: 0x4109C7C Offset: 0x4109C7C VA: 0x4109C7C Slot: 16
	public override void Dispose() { }

	// RVA: 0x4109C9C Offset: 0x4109C9C VA: 0x4109C9C Slot: 23
	public bool CanMergeWith(IMergeable item) { }

	// RVA: 0x4109DE0 Offset: 0x4109DE0 VA: 0x4109DE0 Slot: 24
	public Tween MoveTargetWithScale(Transform target) { }

	// RVA: 0x4109BD0 Offset: 0x4109BD0 VA: 0x4109BD0
	private Tween PlayCollectAnimation() { }

	// RVA: 0x410A068 Offset: 0x410A068 VA: 0x410A068
	private Tween PlayDefaultCollectAnimation() { }

	// RVA: 0x410A1C4 Offset: 0x410A1C4 VA: 0x410A1C4
	private Tween PlayRevealAnimation() { }

	// RVA: 0x4109ED8 Offset: 0x4109ED8 VA: 0x4109ED8
	private Tween PlayMiniGameEnergyCollectAnimation() { }

	// RVA: 0x410A3AC Offset: 0x410A3AC VA: 0x410A3AC Slot: 8
	public override void Recycle() { }

	// RVA: 0x410A6B4 Offset: 0x410A6B4 VA: 0x410A6B4
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x410A6BC Offset: 0x410A6BC VA: 0x410A6BC
	private void <StartCollectAnimation>b__27_0() { }

	[CompilerGenerated]
	// RVA: 0x410A6FC Offset: 0x410A6FC VA: 0x410A6FC
	private void <PlayMiniGameEnergyCollectAnimation>b__35_0() { }
}

// Namespace: Modules.Contexts.Home.MergeMiniGame.Scripts.Board
[CreateAssetMenu(fileName = "CollectibleItemAnimationConfig", menuName = "Configs/MergeMiniGameCollectibleItemAnimationConfig")]