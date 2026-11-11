public class MagicLabLobbyButton : MonoBehaviour // TypeDefIndex: 4018
{
	// Fields
	[SerializeField]
	private Button _button; // 0x18
	[SerializeField]
	private MagicLabTimer _magicLabTimer; // 0x20
	[SerializeField]
	private GameObject _root; // 0x28
	[SerializeField]
	private GameObject[] _cauldrons; // 0x30
	[SerializeField]
	private LobbyIconVariantController _variantController; // 0x38
	private MagicLabService _service; // 0x40

	// Methods

	// RVA: 0x3759B78 Offset: 0x3759B78 VA: 0x3759B78
	private void Awake() { }

	// RVA: 0x3759D60 Offset: 0x3759D60 VA: 0x3759D60
	private void OnDestroy() { }

	// RVA: 0x3759EF0 Offset: 0x3759EF0 VA: 0x3759EF0
	public void OnEnable() { }

	[AsyncStateMachine(typeof(MagicLabLobbyButton.<OnButtonClick>d__9))]
	// RVA: 0x375A00C Offset: 0x375A00C VA: 0x375A00C
	private void OnButtonClick() { }

	// RVA: 0x3759EF4 Offset: 0x3759EF4 VA: 0x3759EF4
	private void UpdateState() { }

	// RVA: 0x375A0A4 Offset: 0x375A0A4 VA: 0x375A0A4
	public void SetCauldronImage() { }

	// RVA: 0x375A120 Offset: 0x375A120 VA: 0x375A120
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.MagicLab.Scripts.UI