public class MergeBottomUIController : MonoBehaviour // TypeDefIndex: 3594
{
	// Fields
	[SerializeField]
	private MergeMiniGameAnimationConfig _animationConfig; // 0x18
	[SerializeField]
	private TextMeshPro _energyCountText; // 0x20
	[SerializeField]
	private Button generatorButton; // 0x28
	[SerializeField]
	private Button greyGeneratorButton; // 0x30
	[SerializeField]
	private Button[] multiplierButtons; // 0x38
	[SerializeField]
	private ItemInfoButton progressItemInfoButton; // 0x40
	[SerializeField]
	private ItemInfoButton collectibleItemInfoButton; // 0x48
	[SerializeField]
	private Transform _generatorButtonLaunchTransform; // 0x50
	[SerializeField]
	private ToolbarButton _multiplierToolbarButton; // 0x58
	[SerializeField]
	private MergeMiniGameScatterQueue _scatterQueueView; // 0x60
	[SerializeField]
	private ToolbarButton _newMultiplierAvailableToolbar; // 0x68
	private MergeMiniGameScatterQueueViewModel _scatterQueueViewModel; // 0x70
	private MergeMiniGameViewModel _viewModel; // 0x78
	private List<int> _unlockedMultipliers; // 0x80
	private int _currentMultiplierIndex; // 0x88
	private int _currentMultiplier; // 0x8C
	private bool _multipliersUpdated; // 0x90

	// Properties
	public Transform ScatterQueueViewTargetTransform { get; }

	// Methods

	// RVA: 0x3FA8298 Offset: 0x3FA8298 VA: 0x3FA8298
	public Transform get_ScatterQueueViewTargetTransform() { }

	// RVA: 0x3FA82B4 Offset: 0x3FA82B4 VA: 0x3FA82B4
	public void Initialize(MergeMiniGameViewModel viewModel, MergeMiniGameScatterQueueViewModel scatterQueueViewModel) { }

	// RVA: 0x3FA8638 Offset: 0x3FA8638 VA: 0x3FA8638
	public Tween PopulateItemsFromScatterQueueAnimation(MergeMiniGameScatterQueueViewModel viewModel) { }

	// RVA: 0x3FA8A48 Offset: 0x3FA8A48 VA: 0x3FA8A48
	public Tween ScatterItemGoesToQueueAnimation(MergeMiniGameScatterQueueViewModel viewModel, MergeBoardCell targetCell) { }

	// RVA: 0x3FA859C Offset: 0x3FA859C VA: 0x3FA859C
	private void SetUI() { }

	// RVA: 0x3FA9168 Offset: 0x3FA9168 VA: 0x3FA9168
	public void SetMultiplier(List<int> unlockedMultipliers, bool multipliersUpdated = False) { }

	// RVA: 0x3FA95E4 Offset: 0x3FA95E4 VA: 0x3FA95E4
	public void Dispose() { }

	// RVA: 0x3FA98FC Offset: 0x3FA98FC VA: 0x3FA98FC
	private void UpdateEnergyView(int energyCount) { }

	// RVA: 0x3FA93C0 Offset: 0x3FA93C0 VA: 0x3FA93C0
	private void UpdateGeneratorButton() { }

	// RVA: 0x3FA9430 Offset: 0x3FA9430 VA: 0x3FA9430
	private void UpdateMultiplierButton(int multiplier) { }

	// RVA: 0x3FA92F0 Offset: 0x3FA92F0 VA: 0x3FA92F0
	private void UpdateItemInfoButtons(int setID, int level) { }

	// RVA: 0x3FA995C Offset: 0x3FA995C VA: 0x3FA995C
	private void OnGeneratorButtonClicked() { }

	// RVA: 0x3FA99D0 Offset: 0x3FA99D0 VA: 0x3FA99D0
	private void OnGreyGeneratorButtonClicked() { }

	// RVA: 0x3FA9B44 Offset: 0x3FA9B44 VA: 0x3FA9B44
	private void OnMultiplierButtonClicked() { }

	// RVA: 0x3FA9C40 Offset: 0x3FA9C40 VA: 0x3FA9C40
	public Transform GetGeneratorButtonLaunchPosition() { }

	// RVA: 0x3FA9C48 Offset: 0x3FA9C48 VA: 0x3FA9C48
	public void TryShowMultiplierUnlockedToolbar() { }

	// RVA: 0x3FA9CFC Offset: 0x3FA9CFC VA: 0x3FA9CFC
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.MergeMiniGame.Scripts.UI