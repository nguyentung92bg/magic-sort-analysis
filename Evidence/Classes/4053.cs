public class MagicBottleLobbyButton : MonoBehaviour // TypeDefIndex: 4053
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
	private TowerWinStreakLobbyButtonAnimationConfig _animationConfig; // 0x40
	private MagicBottleService _service; // 0x48

	// Methods

	// RVA: 0x375FEF8 Offset: 0x375FEF8 VA: 0x375FEF8
	private void Awake() { }

	// RVA: 0x3760074 Offset: 0x3760074 VA: 0x3760074
	private void OnDestroy() { }

	// RVA: 0x37601A0 Offset: 0x37601A0 VA: 0x37601A0
	public void OnEnable() { }

	// RVA: 0x3760348 Offset: 0x3760348 VA: 0x3760348
	private void OnButtonClick() { }

	// RVA: 0x3760474 Offset: 0x3760474 VA: 0x3760474
	public Tween PlayCollectibleAndProgressAnimation() { }

	// RVA: 0x37601A4 Offset: 0x37601A4 VA: 0x37601A4
	private void UpdateState() { }

	[Button]
	// RVA: 0x3760630 Offset: 0x3760630 VA: 0x3760630
	private Tween PlayProgressAnimation() { }

	// RVA: 0x37607C4 Offset: 0x37607C4 VA: 0x37607C4
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x37607CC Offset: 0x37607CC VA: 0x37607CC
	private void <PlayCollectibleAndProgressAnimation>b__11_0() { }
}

// Namespace: Modules.Contexts.Home.MagicBottle.Scripts.UI