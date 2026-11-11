public class SkyJumpLobbyButton : MonoBehaviour // TypeDefIndex: 2792
{
	// Fields
	[SerializeField]
	private Button _button; // 0x18
	[SerializeField]
	private SkyJumpLobbyButtonTimer _timer; // 0x20
	[SerializeField]
	private LobbyIconCollectibleAnimation _lobbyIconCollectibleAnimation; // 0x28
	[SerializeField]
	private GameObject _rankObject; // 0x30
	[SerializeField]
	private TextMeshPro _rankText; // 0x38
	[SerializeField]
	private GameObject _root; // 0x40
	private SkyJumpService _service; // 0x48

	// Methods

	// RVA: 0x2F2047C Offset: 0x2F2047C VA: 0x2F2047C
	private void Awake() { }

	// RVA: 0x2F2065C Offset: 0x2F2065C VA: 0x2F2065C
	private void OnDestroy() { }

	// RVA: 0x2F20780 Offset: 0x2F20780 VA: 0x2F20780
	public void OnEnable() { }

	// RVA: 0x2F208B0 Offset: 0x2F208B0 VA: 0x2F208B0
	private void OnButtonClick() { }

	// RVA: 0x2F20784 Offset: 0x2F20784 VA: 0x2F20784
	private void UpdateState() { }

	// RVA: 0x2F20B5C Offset: 0x2F20B5C VA: 0x2F20B5C
	public Tween PlayCollectibleAnimation() { }

	// RVA: 0x2F20600 Offset: 0x2F20600 VA: 0x2F20600
	private void SetStepText() { }

	// RVA: 0x2F20BE8 Offset: 0x2F20BE8 VA: 0x2F20BE8
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.SkyJump.Scripts.UI