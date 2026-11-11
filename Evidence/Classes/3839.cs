public class MagicStreakGaeController : MonoBehaviour, IService, IInitializable, IDisposable // TypeDefIndex: 3839
{
	// Fields
	[SerializeField]
	private MagicStreakGaeKeyAnimationView _magicStreakGaeKeyAnimationView; // 0x18
	[SerializeField]
	private MagicStreakGaeProgressBarView _progressBarView; // 0x20
	[SerializeField]
	private MagicStreakGaeMultiplierBarView _multiplierView; // 0x28
	[SerializeField]
	private Button _popupButton; // 0x30
	[SerializeField]
	private Button _multiplierButton; // 0x38
	[SerializeField]
	private MagicStreakGaeTimer _magicStreakGaeTimer; // 0x40
	[SerializeField]
	private Transform _progressBarContainer; // 0x48
	[SerializeField]
	private SortingGroup _sortingGroup; // 0x50
	private MagicStreakGaeService _magicStreakGaeService; // 0x58
	private bool _isMultiplierOpen; // 0x60
	[SerializeField]
	private int _initialSortingOrder; // 0x64
	[SerializeField]
	private int _frontSortingOrder; // 0x68
	private MagicStreakGaeViewCache _viewCache; // 0x70

	// Methods

	// RVA: 0x3CF3950 Offset: 0x3CF3950 VA: 0x3CF3950
	private void Awake() { }

	// RVA: 0x3CF3C78 Offset: 0x3CF3C78 VA: 0x3CF3C78 Slot: 4
	public void Initialize() { }

	// RVA: 0x3CF3C7C Offset: 0x3CF3C7C VA: 0x3CF3C7C Slot: 5
	public void Dispose() { }

	// RVA: 0x3CF3D08 Offset: 0x3CF3D08 VA: 0x3CF3D08
	public void DisposeAnimations() { }

	// RVA: 0x3CF3A3C Offset: 0x3CF3A3C VA: 0x3CF3A3C
	public void UpdateView() { }

	// RVA: 0x3CF4370 Offset: 0x3CF4370 VA: 0x3CF4370
	private void OpenMagicStreakGaePopup() { }

	// RVA: 0x3CF4348 Offset: 0x3CF4348 VA: 0x3CF4348
	private void SetMultiplierViewModel(MagicStreakGaeProgressViewModel viewModel, List<int> multipliers, bool isAllClaimedAndNoAnimation) { }

	// RVA: 0x3CF49C8 Offset: 0x3CF49C8 VA: 0x3CF49C8
	public Tween PlayHatMultiplyAnimation(int streakMultiplier, int defaultKeyCount, List<int> multipliers) { }

	// RVA: 0x3CF51C4 Offset: 0x3CF51C4 VA: 0x3CF51C4
	public void HideOnLastStepRewardComplete() { }

	// RVA: 0x3CF5264 Offset: 0x3CF5264 VA: 0x3CF5264
	public Tween PlayStepIncreaseAnimation(List<MagicStreakGaeStepViewModel> animationSteps, bool isAllStepsClaimed) { }

	// RVA: 0x3CF5B0C Offset: 0x3CF5B0C VA: 0x3CF5B0C
	public Sequence PlayMultiplierChange(bool isAllStepsClaimed) { }

	// RVA: 0x3CF5EB8 Offset: 0x3CF5EB8 VA: 0x3CF5EB8
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x3CF5EC0 Offset: 0x3CF5EC0 VA: 0x3CF5EC0
	private void <PlayHatMultiplyAnimation>b__20_0() { }

	[CompilerGenerated]
	// RVA: 0x3CF5EE4 Offset: 0x3CF5EE4 VA: 0x3CF5EE4
	private void <PlayHatMultiplyAnimation>b__20_1() { }
}

// Namespace: Modules.Contexts.Home.MagicStreakGAE.Scripts
[Serializable]