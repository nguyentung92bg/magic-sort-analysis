public class ChampionsLeagueJoinPopup : MonoBehaviour, IPopUp // TypeDefIndex: 4642
{
	// Fields
	[SerializeField]
	private Button _enterButton; // 0x18
	[SerializeField]
	private GameObject _enterButtonGameObject; // 0x20
	[SerializeField]
	private GameObject _closeButtonGameObject; // 0x28
	[SerializeField]
	private Animation _animation; // 0x30
	[SerializeField]
	private string _entranceAnimationName; // 0x38
	[SerializeField]
	private string _idleAnimationName; // 0x40
	[SerializeField]
	private UIElementScaler _uIElementScalerForBackground; // 0x48
	[SerializeField]
	private SpriteRenderer _cupSpriteRenderer; // 0x50
	[SerializeField]
	private List<Sprite> _cupSprites; // 0x58
	private ChampionsLeagueService _championsLeagueService; // 0x60
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x68

	// Methods

	// RVA: 0x3A72218 Offset: 0x3A72218 VA: 0x3A72218
	private void Awake() { }

	// RVA: 0x3A7237C Offset: 0x3A7237C VA: 0x3A7237C
	private void OnDestroy() { }

	[AsyncStateMachine(typeof(ChampionsLeagueJoinPopup.<OnEnterButtonClicked>d__13))]
	// RVA: 0x3A72408 Offset: 0x3A72408 VA: 0x3A72408
	private void OnEnterButtonClicked() { }

	// RVA: 0x3A724C0 Offset: 0x3A724C0 VA: 0x3A724C0 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x3A7255C Offset: 0x3A7255C VA: 0x3A7255C Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x3A72680 Offset: 0x3A72680 VA: 0x3A72680 Slot: 6
	public Task Hide() { }

	// RVA: 0x3A72734 Offset: 0x3A72734 VA: 0x3A72734 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x3A7273C Offset: 0x3A7273C VA: 0x3A7273C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.ChampionsLeague.UI