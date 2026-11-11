public class MiniGameLobbyButton : MonoBehaviour // TypeDefIndex: 3505
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
	private MiniGameLobbyButtonAnimationConfig _animationConfig; // 0x50
	[SerializeField]
	private LobbyIconVariantController _variantController; // 0x58
	private MiniGameService _service; // 0x60

	// Methods

	// RVA: 0x20B95E0 Offset: 0x20B95E0 VA: 0x20B95E0
	private void Awake() { }

	// RVA: 0x20B97C0 Offset: 0x20B97C0 VA: 0x20B97C0
	private void OnDestroy() { }

	// RVA: 0x20B9944 Offset: 0x20B9944 VA: 0x20B9944
	private void OnEnable() { }

	// RVA: 0x20B9A5C Offset: 0x20B9A5C VA: 0x20B9A5C
	private void OnButtonClick() { }

	// RVA: 0x20B9948 Offset: 0x20B9948 VA: 0x20B9948
	public void UpdateState() { }

	// RVA: 0x20B9ABC Offset: 0x20B9ABC VA: 0x20B9ABC
	public Tween PlayCollectibleAndProgressAnimation(int keyCount) { }

	[Button]
	// RVA: 0x20B9BDC Offset: 0x20B9BDC VA: 0x20B9BDC
	private Tween PlayCollectedKeyCountTextAnimation(int keyCount) { }

	// RVA: 0x20B9EB8 Offset: 0x20B9EB8 VA: 0x20B9EB8
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x20B9EC0 Offset: 0x20B9EC0 VA: 0x20B9EC0
	private void <PlayCollectedKeyCountTextAnimation>b__16_0() { }
}

// Namespace: Modules.Contexts.Home.MiniGame.Scripts.UI
[CreateAssetMenu(fileName = "MiniGameLobbyButtonAnimationConfig", menuName = "Configs/MiniGameLobbyButtonAnimationConfig", order = 1)]