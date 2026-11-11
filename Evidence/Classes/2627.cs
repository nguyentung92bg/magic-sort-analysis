public class SnitchLobbyButton : MonoBehaviour // TypeDefIndex: 2627
{
	// Fields
	[SerializeField]
	private Button _button; // 0x18
	[SerializeField]
	private GameObject _root; // 0x20
	[SerializeField]
	private LobbyIconCollectibleAnimation _lobbyIconCollectibleAnimation; // 0x28
	[SerializeField]
	private CircleProgressBar _circleProgressBar; // 0x30
	[SerializeField]
	private TextMeshPro _progressText; // 0x38
	[SerializeField]
	private SnitchLobbyButtonAnimationConfig _animationConfig; // 0x40
	[SerializeField]
	private Animation _animation; // 0x48
	[SerializeField]
	private GameObject[] _animationObjects; // 0x50
	[SerializeField]
	private LobbyIconVariantController _variantController; // 0x58
	private SnitchService _service; // 0x60

	// Methods

	// RVA: 0x24700A0 Offset: 0x24700A0 VA: 0x24700A0
	private void Awake() { }

	// RVA: 0x247021C Offset: 0x247021C VA: 0x247021C
	private void OnDestroy() { }

	// RVA: 0x2470348 Offset: 0x2470348 VA: 0x2470348
	private void OnEnable() { }

	// RVA: 0x24705A0 Offset: 0x24705A0 VA: 0x24705A0
	private void OnButtonClick() { }

	// RVA: 0x2470664 Offset: 0x2470664 VA: 0x2470664
	public Tween PlayCollectibleAndProgressAnimation() { }

	// RVA: 0x247034C Offset: 0x247034C VA: 0x247034C
	public void UpdateState() { }

	[Button]
	// RVA: 0x2470978 Offset: 0x2470978 VA: 0x2470978
	private Tween PlayProgressAnimation() { }

	// RVA: 0x24708C4 Offset: 0x24708C4 VA: 0x24708C4
	private void SetAnimationActive(bool isActive) { }

	// RVA: 0x2470AF4 Offset: 0x2470AF4 VA: 0x2470AF4
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Snitch.Scripts.UI
[CreateAssetMenu(fileName = "SnitchLobbyButtonAnimationConfig", menuName = "Configs/SnitchLobbyButtonAnimationConfig", order = 1)]