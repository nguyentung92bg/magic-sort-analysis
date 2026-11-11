public class SpecialOfferLobbyButton : MonoBehaviour // TypeDefIndex: 3308
{
	// Fields
	[SerializeField]
	private Button _button; // 0x18
	[SerializeField]
	private SpecialOfferTimer _timer; // 0x20
	[SerializeField]
	private List<GameObject> _lobbyButtonVariants; // 0x28
	[SerializeField]
	private GameObject _root; // 0x30
	[SerializeField]
	private LobbyIconVariantController _variantController; // 0x38
	[SerializeField]
	private SpecialOfferLobbyIconThemeVariants[] _themeVariants; // 0x40
	private SpecialOfferService _service; // 0x48

	// Methods

	// RVA: 0x3599080 Offset: 0x3599080 VA: 0x3599080
	private void Awake() { }

	// RVA: 0x35991FC Offset: 0x35991FC VA: 0x35991FC
	private void OnDestroy() { }

	// RVA: 0x3599328 Offset: 0x3599328 VA: 0x3599328
	private void OnEnable() { }

	// RVA: 0x3599420 Offset: 0x3599420 VA: 0x3599420
	private void OnButtonClick() { }

	// RVA: 0x359932C Offset: 0x359932C VA: 0x359932C
	private void UpdateState() { }

	// RVA: 0x3599484 Offset: 0x3599484 VA: 0x3599484
	private void SelectLobbyButtonVariant() { }

	// RVA: 0x3599704 Offset: 0x3599704 VA: 0x3599704
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.UI
[CreateAssetMenu(fileName = "SpecialOfferLobbyButtonAnimationConfig", menuName = "Configs/SpecialOfferLobbyButtonAnimationConfig")]