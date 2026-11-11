public class EndlessPortalIAPButtonController : MonoBehaviour // TypeDefIndex: 3382
{
	// Fields
	[SerializeField]
	private IAPPriceView _iapPriceView; // 0x18
	[SerializeField]
	private GameObject _freeText; // 0x20
	[SerializeField]
	private Button _button; // 0x28
	[SerializeField]
	private Transform _iapTextContainer; // 0x30
	[SerializeField]
	private Transform _iapLockedPosition; // 0x38
	[SerializeField]
	private Transform _iapUnlockedPosition; // 0x40
	[SerializeField]
	private Transform _freeTextLockedPosition; // 0x48
	[SerializeField]
	private Transform _freeTextUnlockedPosition; // 0x50
	[SerializeField]
	private EndlessPortalAnimationConfig _animationConfig; // 0x58
	private IAPConfigModel _iapConfigModel; // 0x60
	private EndlessPortalService _endlessPortalService; // 0x68
	private bool _isUnlocked; // 0x70
	private bool _isIAP; // 0x71

	// Methods

	// RVA: 0x346CD84 Offset: 0x346CD84 VA: 0x346CD84
	public void Show(IAPConfigModel iapModel, bool isUnlocked) { }

	// RVA: 0x346CF64 Offset: 0x346CF64 VA: 0x346CF64
	private void ShowIAP(bool isUnlocked) { }

	// RVA: 0x346CE60 Offset: 0x346CE60 VA: 0x346CE60
	private void ShowFree(bool isUnlocked) { }

	// RVA: 0x346D060 Offset: 0x346D060 VA: 0x346D060
	public void Recycle() { }

	// RVA: 0x346D0F4 Offset: 0x346D0F4 VA: 0x346D0F4
	public void UnLock() { }

	[AsyncStateMachine(typeof(EndlessPortalIAPButtonController.<OnButtonClick>d__18))]
	// RVA: 0x346D100 Offset: 0x346D100 VA: 0x346D100
	private void OnButtonClick() { }

	// RVA: 0x346D1B8 Offset: 0x346D1B8 VA: 0x346D1B8
	public Tween PlayTextAnimation() { }

	// RVA: 0x346D22C Offset: 0x346D22C VA: 0x346D22C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Monetization.EndlessPortal.Scripts.UI
[CreateAssetMenu(fileName = "EndlessPortalLobbyButtonAnimationConfig", menuName = "Configs/EndlessPortalLobbyButtonAnimationConfig")]