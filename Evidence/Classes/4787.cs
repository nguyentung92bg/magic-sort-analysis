public class BroomStreakLobbyButton : MonoBehaviour // TypeDefIndex: 4787
{
	// Fields
	[SerializeField]
	private Button _button; // 0x18
	[SerializeField]
	private BroomStreakTimer _BroomStreakTimer; // 0x20
	[SerializeField]
	private CircleProgressBar _broomStreakCircleProgressBar; // 0x28
	[SerializeField]
	private LobbyIconCollectibleAnimation _lobbyIconCollectibleAnimation; // 0x30
	[SerializeField]
	private TowerWinStreakLobbyButtonAnimationConfig _animationConfig; // 0x38
	[SerializeField]
	private GameObject _root; // 0x40
	[SerializeField]
	private LobbyIconVariantController _variantController; // 0x48
	private BroomStreakService _service; // 0x50

	// Methods

	// RVA: 0x3FC4504 Offset: 0x3FC4504 VA: 0x3FC4504
	private void Awake() { }

	// RVA: 0x3FC46E0 Offset: 0x3FC46E0 VA: 0x3FC46E0
	private void OnDestroy() { }

	// RVA: 0x3FC4864 Offset: 0x3FC4864 VA: 0x3FC4864
	public void OnEnable() { }

	// RVA: 0x3FC49A4 Offset: 0x3FC49A4 VA: 0x3FC49A4
	private void OnButtonClick() { }

	// RVA: 0x3FC4868 Offset: 0x3FC4868 VA: 0x3FC4868
	private void UpdateState() { }

	// RVA: 0x3FC4AA0 Offset: 0x3FC4AA0 VA: 0x3FC4AA0
	public Tween PlayCollectableAndProgressAnimation() { }

	[Button]
	// RVA: 0x3FC4B5C Offset: 0x3FC4B5C VA: 0x3FC4B5C
	private Tween PlayProgressAnimation() { }

	// RVA: 0x3FC4BE4 Offset: 0x3FC4BE4 VA: 0x3FC4BE4
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.BroomStreak.Scripts.UI
[CreateAssetMenu(fileName = "BroomStreakLobbyButtonAnimationConfig", menuName = "Configs/BroomStreakLobbyButtonAnimationConfig", order = 1)]