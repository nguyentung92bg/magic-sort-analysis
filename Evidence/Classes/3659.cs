public class MergeMiniGameLobbyButton : MonoBehaviour // TypeDefIndex: 3659
{
	// Fields
	[SerializeField]
	private Button _button; // 0x18
	[SerializeField]
	private GameObject _root; // 0x20
	[SerializeField]
	private LobbyIconCollectibleAnimation[] _collectibleAnimations; // 0x28
	[SerializeField]
	private Timer _timer; // 0x30
	[SerializeField]
	private TextMeshPro _collectedKeyCountText; // 0x38
	[SerializeField]
	private Transform _collectedKeyCountParent; // 0x40
	[SerializeField]
	private Transform _alertViewParent; // 0x48
	[SerializeField]
	private MergeMiniGameLobbyButtonAnimationConfig _animationConfig; // 0x50
	private MergeMiniGameService _service; // 0x58

	// Methods

	// RVA: 0x3FBA3BC Offset: 0x3FBA3BC VA: 0x3FBA3BC
	private void Awake() { }

	// RVA: 0x3FBA59C Offset: 0x3FBA59C VA: 0x3FBA59C
	private void OnDestroy() { }

	// RVA: 0x3FBA720 Offset: 0x3FBA720 VA: 0x3FBA720
	private void OnEnable() { }

	// RVA: 0x3FBA724 Offset: 0x3FBA724 VA: 0x3FBA724
	private void OnButtonClick() { }

	// RVA: 0x3FAECCC Offset: 0x3FAECCC VA: 0x3FAECCC
	public void UpdateState() { }

	// RVA: 0x3FBA788 Offset: 0x3FBA788 VA: 0x3FBA788
	public Tween PlayCollectibleAndProgressAnimation(int keyCount) { }

	[Button]
	// RVA: 0x3FBA8A8 Offset: 0x3FBA8A8 VA: 0x3FBA8A8
	private Tween PlayCollectedKeyCountTextAnimation(int keyCount) { }

	// RVA: 0x3FBAB84 Offset: 0x3FBAB84 VA: 0x3FBAB84
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x3FBAB8C Offset: 0x3FBAB8C VA: 0x3FBAB8C
	private void <PlayCollectedKeyCountTextAnimation>b__15_0() { }
}

// Namespace: Modules.Contexts.Home.MergeMiniGame.Scripts.UI.LobbyButton
[CreateAssetMenu(fileName = "MergeMiniGameLobbyButtonAnimationConfig", menuName = "Configs/MergeMiniGameLobbyButtonAnimationConfig", order = 1)]