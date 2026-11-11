public class EndlessPortalStepCardRewardContainer : MonoBehaviour // TypeDefIndex: 3392
{
	// Fields
	[SerializeField]
	private ChestView _chestView; // 0x18
	[SerializeField]
	private Transform _singleRewardContainer; // 0x20
	[SerializeField]
	private Transform _doubleRewardContainer1; // 0x28
	[SerializeField]
	private Transform _doubleRewardContainer2; // 0x30
	[SerializeField]
	private Transform _tripleRewardContainer1; // 0x38
	[SerializeField]
	private Transform _tripleRewardContainer2; // 0x40
	[SerializeField]
	private Transform _tripleRewardContainer3; // 0x48
	[SerializeField]
	private CurrencyViewFactory _currencyViewFactory; // 0x50
	[SerializeField]
	private RevealAnimationConfig _animationsConfig; // 0x58
	private List<CurrencyView> _currencyViews; // 0x60
	private Sequence _revealSequence; // 0x68

	// Methods

	// RVA: 0x346FEA8 Offset: 0x346FEA8 VA: 0x346FEA8
	private static bool IsChest(List<RewardModel> rewardModels) { }

	// RVA: 0x346F514 Offset: 0x346F514 VA: 0x346F514
	public void Show(List<RewardModel> rewardModels) { }

	// RVA: 0x346F4D0 Offset: 0x346F4D0 VA: 0x346F4D0
	public void Recycle() { }

	// RVA: 0x3470468 Offset: 0x3470468 VA: 0x3470468
	private void RecycleCurrencyViews() { }

	// RVA: 0x3470258 Offset: 0x3470258 VA: 0x3470258
	private void ShowTripleReward(List<RewardModel> rewardModels) { }

	// RVA: 0x34700D0 Offset: 0x34700D0 VA: 0x34700D0
	private void ShowDoubleReward(List<RewardModel> rewardModels) { }

	// RVA: 0x346FFDC Offset: 0x346FFDC VA: 0x346FFDC
	private void ShowSingleReward(List<RewardModel> rewardModels) { }

	// RVA: 0x3470630 Offset: 0x3470630 VA: 0x3470630
	private CurrencyView CreateCurrencyView(Transform rewardParent, RewardModel rewardModel) { }

	// RVA: 0x346FF5C Offset: 0x346FF5C VA: 0x346FF5C
	private void ShowChest(RewardModel rewardModel) { }

	// RVA: 0x346FF30 Offset: 0x346FF30 VA: 0x346FF30
	private void HideChest() { }

	// RVA: 0x346FADC Offset: 0x346FADC VA: 0x346FADC
	public Sequence PlayRevealAnimations(List<RewardModel> rewardModels) { }

	// RVA: 0x3470854 Offset: 0x3470854 VA: 0x3470854
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Monetization.EndlessPortal.Scripts.UI
[CreateAssetMenu(fileName = "EndlessPortalStepFactory", menuName = "Factory/EndlessPortalStepFactory")]