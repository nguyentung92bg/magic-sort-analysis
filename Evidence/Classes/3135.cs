public class DynamicWatchAndWinView : MonoBehaviour // TypeDefIndex: 3135
{
	// Fields
	[SerializeField]
	private ScrollBar _scrollBar; // 0x18
	[SerializeField]
	private BasicScrollAdapter _scrollAdapter; // 0x20
	[SerializeField]
	private WatchAndWinStageScrollViewAdapter _viewAdapter; // 0x28
	[SerializeField]
	private TMP_Text _stageText; // 0x30
	[SerializeField]
	private WatchAndWinGrandPrizeView _grandPrizeView; // 0x38
	[SerializeField]
	private WatchAndWinAnimationConfig _animationConfig; // 0x40

	// Methods

	// RVA: 0x32FB4AC Offset: 0x32FB4AC VA: 0x32FB4AC
	public void Show(WatchAndWinStagesViewModel viewModel) { }

	// RVA: 0x32FB6F8 Offset: 0x32FB6F8 VA: 0x32FB6F8
	public void Hide() { }

	// RVA: 0x32FB774 Offset: 0x32FB774 VA: 0x32FB774
	public Sequence IncreaseProgressAnimation(WatchAndWinProgressViewModel progressViewModel) { }

	// RVA: 0x32FBB44 Offset: 0x32FBB44 VA: 0x32FBB44
	private WatchAndWinStageView GetViewByStageIndex(int stageIndex) { }

	// RVA: 0x32FC090 Offset: 0x32FC090 VA: 0x32FC090
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Monetization.WatchAndWin.Scripts.UI