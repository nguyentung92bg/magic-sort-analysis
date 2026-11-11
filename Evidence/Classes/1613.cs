public class ToggleView : AItemView // TypeDefIndex: 1613
{
	// Fields
	[SerializeField]
	private ToggleAnimationConfig _config; // 0x20
	[SerializeField]
	private Animation _toggleAnimation; // 0x28
	[SerializeField]
	private ParticleSystem _particleSystem; // 0x30
	[SerializeField]
	private Transform _snitchTarget; // 0x38
	[SerializeField]
	private AnimationClip _toggleClip; // 0x40
	[SerializeField]
	private AnimationClip _returnPoolClip; // 0x48
	[SerializeField]
	private AnimationClip _instantOpenClip; // 0x50
	[SerializeField]
	private AnimationClip _instantCloseClip; // 0x58
	[SerializeField]
	private AnimationClip _completeClip; // 0x60
	[SerializeField]
	private AnimationClip _right1Clip; // 0x68
	[SerializeField]
	private AnimationClip _left1Clip; // 0x70
	[SerializeField]
	private SortingGroup _toggleItemSortingGroup; // 0x78
	[SerializeField]
	private SortingGroup _toggleCapLidSortingGroup; // 0x80
	[SerializeField]
	private SortingGroup _neckRopeSortingGroup; // 0x88
	[SerializeField]
	private SortingGroup _shortRopeSortingGroup; // 0x90
	[SerializeField]
	private SortingGroup _curvedRopeSortingGroup; // 0x98
	private ToggleItemSorting _toggleItemSorting; // 0xA0
	private Sequence _closeToggleEffect; // 0x100
	private Sequence _openToggleEffect; // 0x108
	private BottleItem _belongingBottle; // 0x110
	private bool _isOpen; // 0x118

	// Properties
	public float CompleteAnimationDuration { get; }
	public float SFXDelay { get; }

	// Methods

	// RVA: 0x2609F98 Offset: 0x2609F98 VA: 0x2609F98
	public float get_CompleteAnimationDuration() { }

	// RVA: 0x2609F7C Offset: 0x2609F7C VA: 0x2609F7C
	public float get_SFXDelay() { }

	// RVA: 0x260A618 Offset: 0x260A618 VA: 0x260A618 Slot: 5
	public override void Initialize() { }

	// RVA: 0x260A61C Offset: 0x260A61C VA: 0x260A61C Slot: 6
	public override void Spawn() { }

	// RVA: 0x2608F04 Offset: 0x2608F04 VA: 0x2608F04
	public void Prepare(ToggleItemSorting toggleItemSorting, BottleItem belongingBottle, bool isOn) { }

	// RVA: 0x2609C24 Offset: 0x2609C24 VA: 0x2609C24
	public void SetInitialState(ToggleItemSorting toggleItemSorting, bool isOpened) { }

	// RVA: 0x260A778 Offset: 0x260A778 VA: 0x260A778
	private void OpenCapInstant() { }

	// RVA: 0x2609A1C Offset: 0x2609A1C VA: 0x2609A1C
	public void PlayDefault() { }

	// RVA: 0x260A7B0 Offset: 0x260A7B0 VA: 0x260A7B0
	private void CloseCapInstant() { }

	// RVA: 0x260A7E8 Offset: 0x260A7E8 VA: 0x260A7E8
	private bool IsToggleAnimationAlreadyPlaying() { }

	// RVA: 0x260A288 Offset: 0x260A288 VA: 0x260A288
	public void UpdateState(bool shouldOpen) { }

	// RVA: 0x2609A70 Offset: 0x2609A70 VA: 0x2609A70
	public void PlayBottleMoveToggleAnimation(int pourCount, bool isLeft, float animationDuration) { }

	// RVA: 0x26097D0 Offset: 0x26097D0 VA: 0x26097D0
	public float GetRemainingAnimationTime(bool shouldOpen) { }

	// RVA: 0x2609708 Offset: 0x2609708 VA: 0x2609708
	public float GetAnimationLockDelay(bool shouldOpen) { }

	// RVA: 0x260A820 Offset: 0x260A820 VA: 0x260A820
	private void ReverseCapAnimation(bool shouldOpen) { }

	// RVA: 0x260A980 Offset: 0x260A980 VA: 0x260A980
	private void CloseCap() { }

	// RVA: 0x260A8EC Offset: 0x260A8EC VA: 0x260A8EC
	private void OpenCap() { }

	// RVA: 0x260AA14 Offset: 0x260AA14 VA: 0x260AA14
	public void PlayOpenToggleEffect() { }

	// RVA: 0x260ABE0 Offset: 0x260ABE0 VA: 0x260ABE0
	public void PlayCloseToggleEffect() { }

	// RVA: 0x260ADAC Offset: 0x260ADAC VA: 0x260ADAC Slot: 7
	public override void Recycle() { }

	// RVA: 0x260A450 Offset: 0x260A450 VA: 0x260A450
	public void PlayParticles() { }

	// RVA: 0x260A418 Offset: 0x260A418 VA: 0x260A418
	public void PlayToggleDisappearInstant() { }

	// RVA: 0x260ADE8 Offset: 0x260ADE8 VA: 0x260ADE8 Slot: 8
	public override void Show() { }

	// RVA: 0x260AE0C Offset: 0x260AE0C VA: 0x260AE0C Slot: 9
	public override void Hide() { }

	// RVA: 0x260AE30 Offset: 0x260AE30 VA: 0x260AE30
	public void SetToggleItemSorting() { }

	// RVA: 0x260A724 Offset: 0x260A724 VA: 0x260A724
	private void SetInitialSorting(ToggleItemSorting sorting, bool isOpened) { }

	// RVA: 0x260AE68 Offset: 0x260AE68 VA: 0x260AE68
	private void SetInitialSorting(Sorting toggleOpened, Sorting toggleClosed, Sorting capLid, Sorting neckRope, Sorting shortRope, Sorting curvedRope, bool isOpened) { }

	// RVA: 0x260A054 Offset: 0x260A054 VA: 0x260A054
	public Vector3 GetSnitchTargetPosition() { }

	// RVA: 0x260AF94 Offset: 0x260AF94 VA: 0x260AF94
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.Board.Items.Scripts.Toggle