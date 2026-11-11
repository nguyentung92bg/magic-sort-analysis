public class TreasureDrillScrollController : MonoBehaviour // TypeDefIndex: 3226
{
	// Fields
	[SerializeField]
	private VerticalLayout _verticalLayout; // 0x18
	[SerializeField]
	private SimpleScrollBar _scrollBar; // 0x20
	[SerializeField]
	private TreasureDrillStepFactory _factory; // 0x28
	[CompilerGenerated]
	private List<TreasureDrillStepElementView> <StepViews>k__BackingField; // 0x30
	private const int VisibleStepsOnScroll = 5;
	private const int ScrollOffsetStepAmount = 2;
	private const float ScrollOffset = 0.5;
	private const float LastStepBottomStepOffset = 0.5;

	// Properties
	public List<TreasureDrillStepElementView> StepViews { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x330F1B4 Offset: 0x330F1B4 VA: 0x330F1B4
	public List<TreasureDrillStepElementView> get_StepViews() { }

	[CompilerGenerated]
	// RVA: 0x330F1BC Offset: 0x330F1BC VA: 0x330F1BC
	private void set_StepViews(List<TreasureDrillStepElementView> value) { }

	// RVA: 0x3307314 Offset: 0x3307314 VA: 0x3307314
	public void Initialize(TreasureDrillViewModel viewModel) { }

	// RVA: 0x330F600 Offset: 0x330F600 VA: 0x330F600
	private int GetIndexToScroll(int index) { }

	// RVA: 0x330F560 Offset: 0x330F560 VA: 0x330F560
	private void ScrollToDrillStep(TreasureDrillViewModel viewModel) { }

	// RVA: 0x3307D88 Offset: 0x3307D88 VA: 0x3307D88
	public void OnClaimStep(List<TreasureDrillStepViewModel> stepViewModels) { }

	// RVA: 0x3307EA4 Offset: 0x3307EA4 VA: 0x3307EA4
	public void OnUnlocked(List<TreasureDrillStepViewModel> stepViewModels) { }

	// RVA: 0x3307FC0 Offset: 0x3307FC0 VA: 0x3307FC0
	public void OnProgressbarAnimation(List<TreasureDrillStepViewModel> stepViewModels) { }

	// RVA: 0x330F1C4 Offset: 0x330F1C4 VA: 0x330F1C4
	private void CreateStepViews(List<TreasureDrillStepViewModel> stepViewModels) { }

	// RVA: 0x3307A80 Offset: 0x3307A80 VA: 0x3307A80
	public void Dispose() { }

	// RVA: 0x330F658 Offset: 0x330F658 VA: 0x330F658
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Monetization.TreasureDrill.Scripts.UI
[CreateAssetMenu(fileName = "TreasureDrillSpriteConfig", menuName = "Configs/TreasureDrillSpriteConfig")]