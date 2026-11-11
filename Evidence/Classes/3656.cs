public class MergeStagesProgressBarView : MonoBehaviour // TypeDefIndex: 3656
{
	// Fields
	[SerializeField]
	private ScrollBar _scrollBar; // 0x18
	[SerializeField]
	private BasicScrollAdapter _scrollAdapter; // 0x20
	[SerializeField]
	private MergeStageScrollViewAdapter _viewAdapter; // 0x28
	[SerializeField]
	private TMP_Text _stageText; // 0x30
	[SerializeField]
	private ToolbarButton _toolbarButton; // 0x38
	[SerializeField]
	private ParticleSystem _stageCompletedParticle; // 0x40
	[SerializeField]
	private GameObject _grandPrizeView; // 0x48
	[SerializeField]
	private WatchAndWinAnimationConfig _animationConfig; // 0x50
	[SerializeField]
	private MergeMiniGameAnimationConfig _miniGameAnimationConfig; // 0x58
	[SerializeField]
	private Transform _inputBlocker; // 0x60

	// Methods

	// RVA: 0x3FB8E28 Offset: 0x3FB8E28 VA: 0x3FB8E28
	public void Show(MergeStagesViewModel viewModel) { }

	// RVA: 0x3FB8FD0 Offset: 0x3FB8FD0 VA: 0x3FB8FD0
	public void ShowGrandPrizeToolbar() { }

	// RVA: 0x3FB8FEC Offset: 0x3FB8FEC VA: 0x3FB8FEC
	public void UpdateStageText(MergeStagesViewModel viewModel) { }

	// RVA: 0x3FB9108 Offset: 0x3FB9108 VA: 0x3FB9108
	public void DisableInput() { }

	// RVA: 0x3FB9134 Offset: 0x3FB9134 VA: 0x3FB9134
	public void EnableInput() { }

	// RVA: 0x3FB9160 Offset: 0x3FB9160 VA: 0x3FB9160
	public void Hide() { }

	// RVA: 0x3FB91DC Offset: 0x3FB91DC VA: 0x3FB91DC
	public Sequence IncreaseProgressAnimation(int stageIndex, Vector3 position) { }

	// RVA: 0x3FB9380 Offset: 0x3FB9380 VA: 0x3FB9380
	private float GetStageAnimationDuration() { }

	// RVA: 0x3FB93E0 Offset: 0x3FB93E0 VA: 0x3FB93E0
	private MergeStageView GetViewByStageIndex(int stageIndex) { }

	// RVA: 0x3FB94CC Offset: 0x3FB94CC VA: 0x3FB94CC
	public Tween MoveStageCompletedParticlesToTarget(Vector3 fromPosition, Transform targetTransform) { }

	// RVA: 0x3FB975C Offset: 0x3FB975C VA: 0x3FB975C
	public void Dispose() { }

	// RVA: 0x3FB97B8 Offset: 0x3FB97B8 VA: 0x3FB97B8
	public void .ctor() { }
}

// Namespace: 
[Serializable]