public class MagicPassLobbyButton : MonoBehaviour // TypeDefIndex: 3929
{
	// Fields
	[SerializeField]
	private Button _button; // 0x18
	[SerializeField]
	private GameObject _root; // 0x20
	[SerializeField]
	private LobbyIconCollectibleAnimation[] _collectibleAnimations; // 0x28
	[SerializeField]
	private CircleProgressBar _circleProgressBar; // 0x30
	[SerializeField]
	private Timer _timer; // 0x38
	[SerializeField]
	private Transform _unclaimedRewardsIcon; // 0x40
	[SerializeField]
	private TextMeshPro _unclaimedRewardsCountText; // 0x48
	[SerializeField]
	private TextMeshPro _collectedKeyCountText; // 0x50
	[SerializeField]
	private Transform _collectedKeyCountParent; // 0x58
	[SerializeField]
	private MagicPassLobbyButtonAnimationConfig _animationConfig; // 0x60
	[SerializeField]
	private LobbyIconVariantController _variantController; // 0x68
	private MagicPassService _service; // 0x70

	// Methods

	// RVA: 0x38E3AC0 Offset: 0x38E3AC0 VA: 0x38E3AC0
	private void Awake() { }

	// RVA: 0x38E3CA0 Offset: 0x38E3CA0 VA: 0x38E3CA0
	private void OnDestroy() { }

	// RVA: 0x38E3E24 Offset: 0x38E3E24 VA: 0x38E3E24
	private void OnEnable() { }

	// RVA: 0x38E3FC0 Offset: 0x38E3FC0 VA: 0x38E3FC0
	private void OnButtonClick() { }

	// RVA: 0x38E3E28 Offset: 0x38E3E28 VA: 0x38E3E28
	public void UpdateState() { }

	// RVA: 0x38E425C Offset: 0x38E425C VA: 0x38E425C
	public Tween PlayCollectibleAndProgressAnimation(int keyCount) { }

	[Button]
	// RVA: 0x38E44F4 Offset: 0x38E44F4 VA: 0x38E44F4
	private Tween PlayCollectedKeyCountTextAnimation(int keyCount) { }

	// RVA: 0x38E43A4 Offset: 0x38E43A4 VA: 0x38E43A4
	private Tween PlayProgressAnimation() { }

	// RVA: 0x38E47D0 Offset: 0x38E47D0 VA: 0x38E47D0
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x38E47D8 Offset: 0x38E47D8 VA: 0x38E47D8
	private void <PlayCollectedKeyCountTextAnimation>b__18_0() { }
}

// Namespace: Modules.Contexts.Home.MagicPass.Scripts.UI
[CreateAssetMenu(fileName = "MagicPassLobbyButtonAnimationConfig", menuName = "Configs/MagicPassLobbyButtonAnimationConfig", order = 1)]