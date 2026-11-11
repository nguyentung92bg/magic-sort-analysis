public class MiniGameOfferPopup : MonoBehaviour // TypeDefIndex: 3516
{
	// Fields
	[SerializeField]
	private TextMeshPro _offText; // 0x18
	[SerializeField]
	private SpriteRenderer _rewardBg; // 0x20
	[SerializeField]
	private GameObject _offParent; // 0x28
	[SerializeField]
	private IAPPriceView _iapPriceView; // 0x30
	[SerializeField]
	private Button _iapButton; // 0x38
	[SerializeField]
	private TextMeshPro _purhcaseLimitText; // 0x40
	[SerializeField]
	private Button _closeButton; // 0x48
	[SerializeField]
	private MiniGameOfferPopup.RewardContainer[] _rewardContainers; // 0x50
	[SerializeField]
	private GameObject _tridentIcon; // 0x58
	[SerializeField]
	private MiniGameOfferPopup.RewardContainerConfigForCount[] _containerConfigs; // 0x60
	private IAPConfigModel _iapConfigModel; // 0x68
	private string _availableTerm; // 0x70

	// Methods

	// RVA: 0x20BB490 Offset: 0x20BB490 VA: 0x20BB490
	public void Show(MiniGameOfferViewModel offerViewModel) { }

	// RVA: 0x20BBDEC Offset: 0x20BBDEC VA: 0x20BBDEC
	public void Hide() { }

	// RVA: 0x20BBE10 Offset: 0x20BBE10 VA: 0x20BBE10
	private void Awake() { }

	// RVA: 0x20BBEF0 Offset: 0x20BBEF0 VA: 0x20BBEF0
	private void OnDestroy() { }

	[AsyncStateMachine(typeof(MiniGameOfferPopup.<OnClick>d__16))]
	// RVA: 0x20BBFD0 Offset: 0x20BBFD0 VA: 0x20BBFD0
	private void OnClick() { }

	// RVA: 0x20BB6B0 Offset: 0x20BB6B0 VA: 0x20BB6B0
	private void ShowRewards(List<RewardModel> rewardModels) { }

	// RVA: 0x20BC088 Offset: 0x20BC088 VA: 0x20BC088
	private MiniGameOfferPopup.RewardContainerConfigForCount GetConfig(int count) { }

	// RVA: 0x20BC148 Offset: 0x20BC148 VA: 0x20BC148
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.MiniGame.Scripts.UI