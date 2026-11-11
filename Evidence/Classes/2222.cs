public class TeamsWarningPopup : MonoBehaviour, IPopUp // TypeDefIndex: 2222
{
	// Fields
	[SerializeField]
	private List<Button> closeButtons; // 0x18
	[SerializeField]
	private TextMeshPro _descriptionText; // 0x20

	// Methods

	// RVA: 0x2F02390 Offset: 0x2F02390 VA: 0x2F02390 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x2F02678 Offset: 0x2F02678 VA: 0x2F02678 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x2F0271C Offset: 0x2F0271C VA: 0x2F0271C Slot: 6
	public Task Hide() { }

	// RVA: 0x2F027C8 Offset: 0x2F027C8 VA: 0x2F027C8 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x2F027D0 Offset: 0x2F027D0 VA: 0x2F027D0
	private void Awake() { }

	// RVA: 0x2F02974 Offset: 0x2F02974 VA: 0x2F02974
	private void OnDestroy() { }

	// RVA: 0x2F02B18 Offset: 0x2F02B18 VA: 0x2F02B18
	private void ClosePopup() { }

	// RVA: 0x2F02434 Offset: 0x2F02434 VA: 0x2F02434
	private void SetDescriptionText(int errorCode) { }

	// RVA: 0x2F02B8C Offset: 0x2F02B8C VA: 0x2F02B8C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Teams.Scripts.UI