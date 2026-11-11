public class TeamArenaLobbyButton : MonoBehaviour // TypeDefIndex: 2407
{
	// Fields
	[SerializeField]
	private GameObject _root; // 0x18
	[SerializeField]
	private Button _button; // 0x20
	[SerializeField]
	private GameObject _notificationContainer; // 0x28
	[SerializeField]
	private TMP_Text _notificationText; // 0x30
	[SerializeField]
	private GameObject _rankContainer; // 0x38
	[SerializeField]
	private TMP_Text _rankText; // 0x40
	[SerializeField]
	private TMP_Text _earnedProgressText; // 0x48
	[SerializeField]
	private Timer _timer; // 0x50
	[SerializeField]
	private GameObject _timerContainer; // 0x58
	[SerializeField]
	private GameObject _joinTextContainer; // 0x60
	[SerializeField]
	private LobbyIconCollectibleAnimation[] _collectibleAnimations; // 0x68
	[SerializeField]
	private TeamArenaLobbyButtonAnimationConfig _animationConfig; // 0x70
	[SerializeField]
	private LobbyIconVariantController _variantController; // 0x78
	private TeamArenaService _teamArenaService; // 0x80
	private bool _isVisible; // 0x88
	private TeamArenaLobbyIconViewModel _viewModel; // 0x90

	// Methods

	// RVA: 0x296BD88 Offset: 0x296BD88 VA: 0x296BD88
	private void Awake() { }

	// RVA: 0x296BF68 Offset: 0x296BF68 VA: 0x296BF68
	private void OnDestroy() { }

	// RVA: 0x296C0EC Offset: 0x296C0EC VA: 0x296C0EC
	private void OnEnable() { }

	// RVA: 0x296C0F0 Offset: 0x296C0F0 VA: 0x296C0F0
	private void UpdateView() { }

	// RVA: 0x296C324 Offset: 0x296C324 VA: 0x296C324
	private void OnButtonSelected() { }

	// RVA: 0x296C70C Offset: 0x296C70C VA: 0x296C70C
	public Tween PlayCollectableAnimation() { }

	[Button]
	// RVA: 0x296C738 Offset: 0x296C738 VA: 0x296C738
	public Tween PlayProgressAnimation(int progressToShow) { }

	[Button]
	// RVA: 0x296C86C Offset: 0x296C86C VA: 0x296C86C
	private Tween PlayCollectedKeyCountTextAnimation(int progressCount) { }

	// RVA: 0x296CB48 Offset: 0x296CB48 VA: 0x296CB48
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x296CB50 Offset: 0x296CB50 VA: 0x296CB50
	private void <PlayCollectedKeyCountTextAnimation>b__23_0() { }
}

// Namespace: Modules.Contexts.Home.TeamArena.UI.Lobby
[CreateAssetMenu(fileName = "TeamArenaLobbyButtonAnimationConfig", menuName = "Configs/TeamArenaLobbyButtonAnimationConfig", order = 1)]