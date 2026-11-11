public class TreasureDrillLobbyButton : MonoBehaviour // TypeDefIndex: 3207
{
	// Fields
	[SerializeField]
	private Button _button; // 0x18
	[SerializeField]
	private TreasureDrillTimer _timer; // 0x20
	[SerializeField]
	private GameObject _root; // 0x28
	[SerializeField]
	private LobbyIconVariantController _variantController; // 0x30
	private TreasureDrillService _service; // 0x38

	// Methods

	// RVA: 0x330AC44 Offset: 0x330AC44 VA: 0x330AC44
	private void Awake() { }

	// RVA: 0x330ADC0 Offset: 0x330ADC0 VA: 0x330ADC0
	private void OnDestroy() { }

	// RVA: 0x330AEEC Offset: 0x330AEEC VA: 0x330AEEC
	public void OnEnable() { }

	[AsyncStateMachine(typeof(TreasureDrillLobbyButton.<OnButtonClick>d__8))]
	// RVA: 0x330AFF4 Offset: 0x330AFF4 VA: 0x330AFF4
	private void OnButtonClick() { }

	// RVA: 0x330AEF0 Offset: 0x330AEF0 VA: 0x330AEF0
	private void UpdateState() { }

	// RVA: 0x330B080 Offset: 0x330B080 VA: 0x330B080
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Monetization.TreasureDrill.Scripts.UI