public class NewBoosterIntroductionPopup : MonoBehaviour, IPopUp // TypeDefIndex: 1445
{
	// Fields
	[SerializeField]
	private TextMeshPro _titleText; // 0x18
	[SerializeField]
	private TextMeshPro _descriptionText; // 0x20
	[SerializeField]
	private GameObject _revealButton; // 0x28
	[SerializeField]
	private GameObject _megaShuffleButton; // 0x30
	private const string mega_shuffle_title_localization_term = "MegaShuffleTitle";
	private const string mega_shuffle_description_localization_term = "MegaShuffleDescription";
	private const string reveal_title_localization_term = "RevealTitle";
	private const string reveal_description_localization_term = "RevealDescription";
	private readonly Vector3 buttonPositionFor2Row; // 0x38
	private readonly Vector3 buttonPositionFor3Row; // 0x44

	// Methods

	// RVA: 0x1E9C6A0 Offset: 0x1E9C6A0 VA: 0x1E9C6A0 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x1E9C98C Offset: 0x1E9C98C VA: 0x1E9C98C Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x1E9CA30 Offset: 0x1E9CA30 VA: 0x1E9CA30 Slot: 6
	public Task Hide() { }

	// RVA: 0x1E9CADC Offset: 0x1E9CADC VA: 0x1E9CADC Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x1E9CAE4 Offset: 0x1E9CAE4 VA: 0x1E9CAE4
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.Boosters.Scripts