public class MagicSealView : AItemView // TypeDefIndex: 1678
{
	// Fields
	[SerializeField]
	private GameObject _container; // 0x20
	[SerializeField]
	private GameObject _bottomLocker; // 0x28
	[SerializeField]
	private GameObject _backBottom; // 0x30
	[SerializeField]
	private GameObject _backOther; // 0x38
	[SerializeField]
	private ParticleSystem _particleSystem; // 0x40
	[SerializeField]
	private Transform _snitchTarget; // 0x48
	[SerializeField]
	private SortingGroup _topSortingGroup; // 0x50
	[SerializeField]
	private SortingGroup _belowSortingGroup; // 0x58
	[SerializeField]
	private SortingGroup _frontSortingGroup; // 0x60
	[SerializeField]
	private SortingGroup _bottomBackGroup; // 0x68
	[SerializeField]
	private SortingGroup _lockerSortingGroup; // 0x70
	[SerializeField]
	private Animation _animation; // 0x78
	private const string DefaultAnimStateName = "Default";
	private const string DisappearAnimStateName = "Disappear";
	private const string UnLockAnimStateName = "Unlock";
	private const string LockAnimStateName = "Lock";

	// Methods

	// RVA: 0x274BF8C Offset: 0x274BF8C VA: 0x274BF8C Slot: 5
	public override void Initialize() { }

	// RVA: 0x274BF90 Offset: 0x274BF90 VA: 0x274BF90 Slot: 6
	public override void Spawn() { }

	// RVA: 0x274B65C Offset: 0x274B65C VA: 0x274B65C
	public void Prepare() { }

	// RVA: 0x274C0AC Offset: 0x274C0AC VA: 0x274C0AC Slot: 7
	public override void Recycle() { }

	// RVA: 0x274C0B0 Offset: 0x274C0B0 VA: 0x274C0B0
	public void PlayParticles() { }

	// RVA: 0x274C0CC Offset: 0x274C0CC VA: 0x274C0CC Slot: 8
	public override void Show() { }

	// RVA: 0x274C0F0 Offset: 0x274C0F0 VA: 0x274C0F0 Slot: 9
	public override void Hide() { }

	// RVA: 0x274B6B0 Offset: 0x274B6B0 VA: 0x274B6B0
	public void SetSorting(SealViewSorting sorting) { }

	// RVA: 0x274C144 Offset: 0x274C144 VA: 0x274C144
	private void SetSorting(Sorting front, Sorting top, Sorting bottom, Sorting frontBottom, bool isBottom) { }

	// RVA: 0x274BD28 Offset: 0x274BD28 VA: 0x274BD28
	public void SetBackSorting(int i) { }

	// RVA: 0x274C1D4 Offset: 0x274C1D4 VA: 0x274C1D4
	public Vector3 GetSnitchTargetPosition() { }

	// RVA: 0x274BB30 Offset: 0x274BB30 VA: 0x274BB30
	public void PlayUnLockAnimation(bool isBottomLocked) { }

	// RVA: 0x274BBCC Offset: 0x274BBCC VA: 0x274BBCC
	public void PlayLockAnimation() { }

	// RVA: 0x274C1F0 Offset: 0x274C1F0 VA: 0x274C1F0
	public void PlayDisappearSFX() { }

	// RVA: 0x274C27C Offset: 0x274C27C VA: 0x274C27C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.Board.Items.Scripts.MagicSeal