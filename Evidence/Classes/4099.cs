public class JourneyHomePosterHandler : MonoBehaviour // TypeDefIndex: 4099
{
	// Fields
	[SerializeField]
	private SpriteRenderer _spriteRenderer; // 0x18
	private int currentIndex; // 0x20
	private AssetManager _assetManager; // 0x28
	private JourneyService _journeyService; // 0x30
	private string _posterId; // 0x38
	private GameObject _instantiatedPoster; // 0x40

	// Methods

	// RVA: 0x3A7ED48 Offset: 0x3A7ED48 VA: 0x3A7ED48
	private void Awake() { }

	// RVA: 0x3A7EED0 Offset: 0x3A7EED0 VA: 0x3A7EED0
	private void OnDestroy() { }

	[AsyncStateMachine(typeof(JourneyHomePosterHandler.<SetPoster>d__8))]
	// RVA: 0x3A7EFB4 Offset: 0x3A7EFB4 VA: 0x3A7EFB4
	public void SetPoster(string id) { }

	// RVA: 0x3A7F088 Offset: 0x3A7F088 VA: 0x3A7F088
	private void SetPosterSprite(string id, GameObject poster) { }

	// RVA: 0x3A7F1D8 Offset: 0x3A7F1D8 VA: 0x3A7F1D8
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Journey.Scripts.UI