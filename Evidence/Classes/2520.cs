public class StrikeShowLobbyButton : MonoBehaviour // TypeDefIndex: 2520
{
	// Fields
	[SerializeField]
	private Button _button; // 0x18
	[SerializeField]
	private Timer _timer; // 0x20
	[SerializeField]
	private LobbyIconCollectibleAnimation[] _collectibleAnimations; // 0x28
	[SerializeField]
	private StrikeShowLobbyButtonAnimationConfig _animationConfig; // 0x30
	[SerializeField]
	private GameObject _root; // 0x38
	[SerializeField]
	private TextMeshPro _playerRankText; // 0x40
	[SerializeField]
	private TextMeshPro _collectAmountText; // 0x48
	[SerializeField]
	private StrikeShowLobbyStreakAnimation _streakAnimation; // 0x50
	[SerializeField]
	private SpriteRenderer _currentLeagueRenderer; // 0x58
	[SerializeField]
	private List<Sprite> _leagueSprites; // 0x60
	[SerializeField]
	private GameObject _notJoinedParent; // 0x68
	private StrikeShowService _service; // 0x70

	// Methods

	// RVA: 0x2B00320 Offset: 0x2B00320 VA: 0x2B00320
	private void Awake() { }

	// RVA: 0x2B005E4 Offset: 0x2B005E4 VA: 0x2B005E4
	private void OnEnable() { }

	// RVA: 0x2B005E8 Offset: 0x2B005E8 VA: 0x2B005E8
	private void OnDestroy() { }

	// RVA: 0x2B0070C Offset: 0x2B0070C VA: 0x2B0070C
	private void OnButtonClick() { }

	// RVA: 0x2B004A4 Offset: 0x2B004A4 VA: 0x2B004A4
	private void UpdateState() { }

	// RVA: 0x2B009A4 Offset: 0x2B009A4 VA: 0x2B009A4
	public Tween PlayCollectableAndProgressAnimation(int mapCount) { }

	// RVA: 0x2B00B2C Offset: 0x2B00B2C VA: 0x2B00B2C
	private Tween PlayCollectedCountTextAnimation(int keyCount) { }

	// RVA: 0x2B01188 Offset: 0x2B01188 VA: 0x2B01188
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x2B01190 Offset: 0x2B01190 VA: 0x2B01190
	private void <PlayCollectedCountTextAnimation>b__18_0() { }
}

// Namespace: Modules.Contexts.Home.StrikeShow.Scripts.UI.LobbyButton
[CreateAssetMenu(fileName = "StrikeShowLobbyButtonAnimationConfig", menuName = "Configs/StrikeShowLobbyButtonAnimationConfig", order = 1)]