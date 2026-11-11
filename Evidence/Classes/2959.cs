public class ProfileTokenEquipPopUp : MonoBehaviour, IPopUp // TypeDefIndex: 2959
{
	// Fields
	[SerializeField]
	private TextMeshPro _tokenName; // 0x18
	[SerializeField]
	private Transform _tokenParent; // 0x20
	[SerializeField]
	private Transform _staticTokenParent; // 0x28
	[SerializeField]
	private Transform _tokenUIParent; // 0x30
	[SerializeField]
	private Button _equipButton; // 0x38
	[SerializeField]
	private Transform _equipButtonActiveParent; // 0x40
	[SerializeField]
	private Transform _equipButtonDeactiveParent; // 0x48
	[SerializeField]
	private Button _unequipButton; // 0x50
	private ProfileTokenSprite _tokenSprite; // 0x58
	private bool _isUnequippButtonActive; // 0x60
	private bool _isEquipButtonClickable; // 0x61
	private ProfileTokenSelectionContainer _tokenSelectionContainer; // 0x68
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x70

	// Methods

	// RVA: 0x2ADCC90 Offset: 0x2ADCC90 VA: 0x2ADCC90 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x2ADD038 Offset: 0x2ADD038 VA: 0x2ADD038
	private void CreateToken(GameObject tokenPrefab, Transform parent) { }

	// RVA: 0x2ADD168 Offset: 0x2ADD168 VA: 0x2ADD168
	private void UpdateButtonVisuals() { }

	// RVA: 0x2ADD208 Offset: 0x2ADD208 VA: 0x2ADD208
	private void OnEquipButtonClicked() { }

	// RVA: 0x2ADD37C Offset: 0x2ADD37C VA: 0x2ADD37C
	private void OnUnequipButtonClicked() { }

	// RVA: 0x2ADD404 Offset: 0x2ADD404 VA: 0x2ADD404 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x2ADD4E0 Offset: 0x2ADD4E0 VA: 0x2ADD4E0 Slot: 6
	public Task Hide() { }

	// RVA: 0x2ADD594 Offset: 0x2ADD594 VA: 0x2ADD594 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x2ADD59C Offset: 0x2ADD59C VA: 0x2ADD59C
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]