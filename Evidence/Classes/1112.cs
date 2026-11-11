public class PlayOnView : MonoBehaviour // TypeDefIndex: 1112
{
	// Fields
	[SerializeField]
	private GameObject _freeView; // 0x18
	[SerializeField]
	private GameObject _priceView; // 0x20
	[SerializeField]
	private TextMeshPro _priceText; // 0x28
	[SerializeField]
	private GameObject _oneBottleVisuals; // 0x30
	[SerializeField]
	private TMP_Text _oneBottleText; // 0x38
	[SerializeField]
	private GameObject _twoBottlesVisuals; // 0x40
	[SerializeField]
	private TMP_Text _twoBottlesText; // 0x48
	[SerializeField]
	private PlayOnTagView _playOnTagView; // 0x50
	private const string PlayOnDefaultHeaderText = "StuckPopupAddBottle";
	private const string PlayOnTinyBottleHeaderText = "StuckPopupAddTinyBottle";

	// Methods

	// RVA: 0x16FA75C Offset: 0x16FA75C VA: 0x16FA75C
	public void Initialize() { }

	// RVA: 0x16FAAD8 Offset: 0x16FAAD8 VA: 0x16FAAD8
	private void UpdateTwoBottleVisuals(ILevelManager levelManager) { }

	// RVA: 0x16FA930 Offset: 0x16FA930 VA: 0x16FA930
	private void InitializeHeaderText(ILevelManager levelManager) { }

	// RVA: 0x16FACFC Offset: 0x16FACFC VA: 0x16FACFC
	private void OnEnable() { }

	// RVA: 0x16FAE8C Offset: 0x16FAE8C VA: 0x16FAE8C
	private void OnDisable() { }

	// RVA: 0x16FB01C Offset: 0x16FB01C VA: 0x16FB01C
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]