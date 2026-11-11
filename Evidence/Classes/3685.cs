public class MergeHintController : MonoBehaviour // TypeDefIndex: 3685
{
	// Fields
	[SerializeField]
	private float _idleThreshold; // 0x18
	[SerializeField]
	private int[] _setIdPriority; // 0x20
	[SerializeField]
	protected Transform FingerTransform; // 0x28
	[SerializeField]
	protected Animation FingerAnimation; // 0x30
	[SerializeField]
	private SpriteRenderer _fingerRenderer; // 0x38
	[SerializeField]
	private Transform _clickReferencePosition; // 0x40
	private MergeBoard _board; // 0x48
	private Coroutine _idleRoutine; // 0x50
	private MergeBoardCell _hintOriginCell; // 0x58
	private MergeBoardCell _hintTargetCell; // 0x60
	private bool _suspended; // 0x68
	private CancellationTokenSource _hintCountdownCts; // 0x70

	// Methods

	// RVA: 0x4110E00 Offset: 0x4110E00 VA: 0x4110E00
	private void OnEnable() { }

	// RVA: 0x4110FD4 Offset: 0x4110FD4 VA: 0x4110FD4
	private void OnDisable() { }

	// RVA: 0x41111F8 Offset: 0x41111F8 VA: 0x41111F8
	public void Initialize(MergeBoard board) { }

	// RVA: 0x4111294 Offset: 0x4111294 VA: 0x4111294
	public void Suspend() { }

	// RVA: 0x411133C Offset: 0x411133C VA: 0x411133C
	public void Resume() { }

	// RVA: 0x4111344 Offset: 0x4111344 VA: 0x4111344
	public bool IsHintExists() { }

	// RVA: 0x4111214 Offset: 0x4111214 VA: 0x4111214
	private void RestartIdleTimer() { }

	[AsyncStateMachine(typeof(MergeHintController.<TryShowHintAfterCountdown>d__19))]
	// RVA: 0x41115BC Offset: 0x41115BC VA: 0x41115BC
	private void TryShowHintAfterCountdown(CancellationTokenSource cts) { }

	// RVA: 0x41111B0 Offset: 0x41111B0 VA: 0x41111B0
	private void CancelHintCountdown() { }

	// RVA: 0x4111690 Offset: 0x4111690 VA: 0x4111690
	private void TryShowHint() { }

	// RVA: 0x411136C Offset: 0x411136C VA: 0x411136C
	private bool TryFindHint(out MergeBoardCell origin, out MergeBoardCell target) { }

	// RVA: 0x4111B60 Offset: 0x4111B60 VA: 0x4111B60
	private MergeHintController.HintCandidate BuildCandidate(MergeBoardCell target) { }

	// RVA: 0x4111AE4 Offset: 0x4111AE4 VA: 0x4111AE4
	private void ResolveOriginTarget(MergeBoardCell a, MergeBoardCell b, out MergeBoardCell origin, out MergeBoardCell target) { }

	// RVA: 0x4111E28 Offset: 0x4111E28 VA: 0x4111E28
	private bool IsBetterCandidate(MergeHintController.HintCandidate candidate, MergeHintController.HintCandidate best) { }

	// RVA: 0x4111E90 Offset: 0x4111E90 VA: 0x4111E90
	private int GetSetIdPriority(int setId) { }

	// RVA: 0x41119CC Offset: 0x41119CC VA: 0x41119CC
	private static bool CanCellsMerge(MergeBoardCell a, MergeBoardCell b) { }

	// RVA: 0x4111760 Offset: 0x4111760 VA: 0x4111760
	private void ShowGeneratorHint() { }

	// RVA: 0x411184C Offset: 0x411184C VA: 0x411184C
	private void ShowHint(MergeBoardCell origin, MergeBoardCell target) { }

	// RVA: 0x41112B4 Offset: 0x41112B4 VA: 0x41112B4
	private void HideHint() { }

	// RVA: 0x4112074 Offset: 0x4112074 VA: 0x4112074
	private void OnCancelHintRequested() { }

	// RVA: 0x4111EE4 Offset: 0x4111EE4 VA: 0x4111EE4
	private int GetNeighborBreakableCount(int mergeIndex) { }

	// RVA: 0x411208C Offset: 0x411208C VA: 0x411208C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.MergeMiniGame.Scripts.Board