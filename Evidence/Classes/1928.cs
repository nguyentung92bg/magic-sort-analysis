public class WheelOfFortuneViewAdapter : MonoBehaviour // TypeDefIndex: 1928
{
	// Fields
	[SerializeField]
	private List<WheelOfFortuneStageView> _stageViews; // 0x18
	private WheelOfFortuneStageView _currentStage; // 0x20
	private WheelOfFortuneViewModel _viewModel; // 0x28
	private int _currentlyShowingStage; // 0x30

	// Methods

	// RVA: 0x319AC8C Offset: 0x319AC8C VA: 0x319AC8C
	public void InitializeViews(WheelOfFortuneViewModel viewModel) { }

	// RVA: 0x319CE60 Offset: 0x319CE60 VA: 0x319CE60
	public void UpdateViews(WheelOfFortuneViewModel viewModel) { }

	// RVA: 0x31A2534 Offset: 0x31A2534 VA: 0x31A2534
	public void UpdateCurrentView(int index) { }

	// RVA: 0x31A7A04 Offset: 0x31A7A04 VA: 0x31A7A04
	public int GetCurrentlyOpenedStageIndex() { }

	// RVA: 0x319C530 Offset: 0x319C530 VA: 0x319C530
	public WheelOfFortuneStageView GetCurrentlyOpenedStage() { }

	// RVA: 0x31A7A0C Offset: 0x31A7A0C VA: 0x31A7A0C
	public WheelOfFortuneStageView GetNextStage() { }

	// RVA: 0x31A24A4 Offset: 0x31A24A4 VA: 0x31A24A4
	public int GetScrollElementsCount() { }

	// RVA: 0x319B4F0 Offset: 0x319B4F0 VA: 0x319B4F0
	public WheelOfFortuneStageView GetStageView(int index) { }

	// RVA: 0x31A2310 Offset: 0x31A2310 VA: 0x31A2310
	public int GetStageViewCount() { }

	// RVA: 0x319E1B4 Offset: 0x319E1B4 VA: 0x319E1B4
	public void Dispose() { }

	// RVA: 0x31A7A8C Offset: 0x31A7A8C VA: 0x31A7A8C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.WheelOfFortune.Scripts.UI