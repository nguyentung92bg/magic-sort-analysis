public class TeamQuestLobbyButton : MonoBehaviour // TypeDefIndex: 2318
{
	// Fields
	[SerializeField]
	private Button _button; // 0x18
	[SerializeField]
	private GameObject _root; // 0x20
	[SerializeField]
	private LobbyIconCollectibleAnimation[] _collectibleAnimations; // 0x28
	[SerializeField]
	private TeamQuestLobbyButtonAnimationConfig _animationConfig; // 0x30
	[SerializeField]
	private TextMeshPro _collectedMapCountText; // 0x38
	[SerializeField]
	private TextMeshPro _lobbyButtonAlertText; // 0x40
	[SerializeField]
	private GameObject _lobbyButtonAlertGO; // 0x48
	[SerializeField]
	private Timer _timer; // 0x50
	[SerializeField]
	private TextMeshPro _joinText; // 0x58
	[SerializeField]
	private LobbyIconVariantController _variantController; // 0x60
	private TeamQuestService _service; // 0x68

	// Methods

	// RVA: 0x2DDFB4C Offset: 0x2DDFB4C VA: 0x2DDFB4C
	private void Awake() { }

	// RVA: 0x2DDFCC8 Offset: 0x2DDFCC8 VA: 0x2DDFCC8
	private void OnDestroy() { }

	// RVA: 0x2DDFDEC Offset: 0x2DDFDEC VA: 0x2DDFDEC
	public void OnEnable() { }

	[AsyncStateMachine(typeof(TeamQuestLobbyButton.<OnButtonClick>d__14))]
	// RVA: 0x2DDFF44 Offset: 0x2DDFF44 VA: 0x2DDFF44
	private void OnButtonClick() { }

	// RVA: 0x2DDFDF0 Offset: 0x2DDFDF0 VA: 0x2DDFDF0
	public void UpdateState() { }

	// RVA: 0x2DE00D8 Offset: 0x2DE00D8 VA: 0x2DE00D8
	public Tween PlayCollectableAndProgressAnimation(int mapCount) { }

	// RVA: 0x2DE01F8 Offset: 0x2DE01F8 VA: 0x2DE01F8
	private Tween PlayCollectedMapCountTextAnimation(int keyCount) { }

	// RVA: 0x2DDFFFC Offset: 0x2DDFFFC VA: 0x2DDFFFC
	private void UpdateTimerView() { }

	// RVA: 0x2DE04D4 Offset: 0x2DE04D4 VA: 0x2DE04D4
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x2DE04DC Offset: 0x2DE04DC VA: 0x2DE04DC
	private void <PlayCollectedMapCountTextAnimation>b__17_0() { }
}

// Namespace: Modules.Contexts.Home.TeamQuest.Scripts.UI.LobbyButton
[CreateAssetMenu(fileName = "TeamQuestLobbyButtonAnimationConfig", menuName = "Configs/TeamQuestLobbyButtonAnimationConfig", order = 1)]