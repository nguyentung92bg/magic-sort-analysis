public class TowerWinStreakLobbyButton : MonoBehaviour // TypeDefIndex: 2056
{
	// Fields
	[SerializeField]
	private Button _button; // 0x18
	[SerializeField]
	private TowerWinStreakTimer _towerWinStreakTimer; // 0x20
	[SerializeField]
	private CircleProgressBar _circleProgressBar; // 0x28
	[SerializeField]
	private LobbyIconCollectibleAnimation _lobbyIconCollectibleAnimation; // 0x30
	[SerializeField]
	private TowerWinStreakLobbyButtonAnimationConfig _animationConfig; // 0x38
	[SerializeField]
	private Transform _broomTransform; // 0x40
	[SerializeField]
	private GameObject _root; // 0x48
	private TowerWinStreakService _service; // 0x50

	// Methods

	// RVA: 0x359FE70 Offset: 0x359FE70 VA: 0x359FE70
	private void Awake() { }

	// RVA: 0x35A004C Offset: 0x35A004C VA: 0x35A004C
	private void OnDestroy() { }

	// RVA: 0x35A01D0 Offset: 0x35A01D0 VA: 0x35A01D0
	public void OnEnable() { }

	[AsyncStateMachine(typeof(TowerWinStreakLobbyButton.<OnButtonClick>d__11))]
	// RVA: 0x35A036C Offset: 0x35A036C VA: 0x35A036C
	private void OnButtonClick() { }

	// RVA: 0x35A01D4 Offset: 0x35A01D4 VA: 0x35A01D4
	private void UpdateState() { }

	// RVA: 0x35A04A0 Offset: 0x35A04A0 VA: 0x35A04A0
	public Tween PlayCollectableAndProgressAnimation() { }

	[Button]
	// RVA: 0x35A0600 Offset: 0x35A0600 VA: 0x35A0600
	private Tween PlayProgressAnimation() { }

	// RVA: 0x35A0584 Offset: 0x35A0584 VA: 0x35A0584
	private Tween PlayBroomIncreaseAnimation() { }

	// RVA: 0x35A0688 Offset: 0x35A0688 VA: 0x35A0688
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.TowerWinStreak.Scripts.UI
[CreateAssetMenu(fileName = "TowerWinStreakLobbyButtonAnimationConfig", menuName = "Configs/TowerWinStreakLobbyButtonAnimationConfig", order = 1)]