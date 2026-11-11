public class SuperchargerTutorialController : MonoBehaviour // TypeDefIndex: 2450
{
	// Fields
	[SerializeField]
	private GameObject _superchargerButtonHolder; // 0x18
	[SerializeField]
	private Transform _tutorialParent; // 0x20
	[SerializeField]
	private SpriteRenderer _backgroundRenderer; // 0x28
	[SerializeField]
	private Transform _descriptionContainer; // 0x30
	[SerializeField]
	private Transform _descriptionPanel; // 0x38
	[SerializeField]
	private SortingGroup _sortingLayer; // 0x40
	[SerializeField]
	private Button _tutorialButton; // 0x48
	[SerializeField]
	private TMP_Text _tutorialText; // 0x50
	[SerializeField]
	private GameObject _tutorialFinger; // 0x58
	private bool _isTutorialRunning; // 0x60
	private ISuperChargerTutorialFlow _activeFlow; // 0x68

	// Methods

	// RVA: 0x297491C Offset: 0x297491C VA: 0x297491C
	public void Show(BottleCollections bottleCollections) { }

	// RVA: 0x2974DAC Offset: 0x2974DAC VA: 0x2974DAC
	public void Hide() { }

	// RVA: 0x2974B8C Offset: 0x2974B8C VA: 0x2974B8C
	private static ISuperChargerTutorialFlow CreateFlow() { }

	// RVA: 0x2974F14 Offset: 0x2974F14 VA: 0x2974F14
	private void OnEnable() { }

	// RVA: 0x2974FA0 Offset: 0x2974FA0 VA: 0x2974FA0
	private void OnDisable() { }

	// RVA: 0x297502C Offset: 0x297502C VA: 0x297502C
	private void OnTutorialButtonSelected() { }

	// RVA: 0x29750FC Offset: 0x29750FC VA: 0x29750FC
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]