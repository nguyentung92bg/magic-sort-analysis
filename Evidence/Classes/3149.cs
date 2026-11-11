public class WatchAndWinStageView : WatchAndWinScrollItemBase // TypeDefIndex: 3149
{
	// Fields
	[SerializeField]
	private BasicUIElement _uiElement; // 0x30
	[SerializeField]
	private TMP_Text _targetText; // 0x38
	[SerializeField]
	private WatchAndWinStageView.WatchAndWinProgressItemHolder[] _progressItems; // 0x40
	[SerializeField]
	private WatchAndWinDynamicRewardView _rewardView; // 0x48
	[SerializeField]
	private GameObject _targetContainer; // 0x50
	[SerializeField]
	private GameObject _rewardIndicator; // 0x58
	[SerializeField]
	private GameObject _dividerDefault; // 0x60
	[SerializeField]
	private GameObject _dividerCompleted; // 0x68
	[SerializeField]
	private GameObject _shineObject; // 0x70
	[SerializeField]
	private GameObject _progressParent; // 0x78
	[SerializeField]
	private Transform _progressIndicator; // 0x80
	[SerializeField]
	private TMP_Text _progressText; // 0x88
	[SerializeField]
	private SpriteRenderer _completedCheckMark; // 0x90
	[SerializeField]
	private Transform _completedCheckMarkParent; // 0x98
	[SerializeField]
	private WatchAndWinAnimationConfig _animationConfig; // 0xA0
	[CompilerGenerated]
	private int <Id>k__BackingField; // 0xA8
	private WatchAndWinStageViewModel _viewModel; // 0xB0
	private WatchAndWinStageView.WatchAndWinProgressItemHolder _progressItem; // 0xB8

	// Properties
	public override int Id { get; set; }
	public override Vector3 Size { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x32FCCE4 Offset: 0x32FCCE4 VA: 0x32FCCE4 Slot: 5
	public override int get_Id() { }

	[CompilerGenerated]
	// RVA: 0x32FCCEC Offset: 0x32FCCEC VA: 0x32FCCEC Slot: 6
	public override void set_Id(int value) { }

	// RVA: 0x32FCCF4 Offset: 0x32FCCF4 VA: 0x32FCCF4 Slot: 9
	public override Vector3 get_Size() { }

	// RVA: 0x32FCD1C Offset: 0x32FCD1C VA: 0x32FCD1C Slot: 7
	public override void Initialize() { }

	// RVA: 0x32FCD20 Offset: 0x32FCD20 VA: 0x32FCD20 Slot: 8
	public override void Recycle() { }

	// RVA: 0x32FCDB8 Offset: 0x32FCDB8 VA: 0x32FCDB8 Slot: 10
	public override void SetModel(IWatchAndWinStageScrollViewModel scrollViewModel) { }

	// RVA: 0x32FCE74 Offset: 0x32FCE74 VA: 0x32FCE74
	private void UpdateView(WatchAndWinStageViewModel scrollViewModel) { }

	// RVA: 0x32FD24C Offset: 0x32FD24C VA: 0x32FD24C
	private void SetProgress(float progress) { }

	// RVA: 0x32FD290 Offset: 0x32FD290 VA: 0x32FD290
	private void SetProgressIndicatorPos(float progress) { }

	// RVA: 0x32FD314 Offset: 0x32FD314 VA: 0x32FD314
	public void UpdateViewModel(WatchAndWinStageViewModel viewModel) { }

	// RVA: 0x32FBC30 Offset: 0x32FBC30 VA: 0x32FBC30
	public Tween IncreaseProgressAnimation() { }

	[Button]
	// RVA: 0x32FBE18 Offset: 0x32FBE18 VA: 0x32FBE18
	public Tween CompleteStageAnimation() { }

	// RVA: 0x32FD31C Offset: 0x32FD31C VA: 0x32FD31C
	public void StartStageAnimation() { }

	// RVA: 0x32FD394 Offset: 0x32FD394 VA: 0x32FD394
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x32FD39C Offset: 0x32FD39C VA: 0x32FD39C
	private void <IncreaseProgressAnimation>b__30_0() { }

	[CompilerGenerated]
	// RVA: 0x32FD408 Offset: 0x32FD408 VA: 0x32FD408
	private void <CompleteStageAnimation>b__31_0() { }
}

// Namespace: Modules.Contexts.Home.Monetization.WatchAndWin.Scripts.UI
[CreateAssetMenu(fileName = "WatchAndWinAnimationConfig", menuName = "Configs/WatchAndWinAnimationConfig")]