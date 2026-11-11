public class MagicPassBuySuccessPopUp : MonoBehaviour, IPopUp // TypeDefIndex: 3919
{
	// Fields
	[SerializeField]
	private ProfileImageView _profileImageView; // 0x18
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x20

	// Methods

	// RVA: 0x38E2768 Offset: 0x38E2768 VA: 0x38E2768 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x38E2784 Offset: 0x38E2784 VA: 0x38E2784 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x38E282C Offset: 0x38E282C VA: 0x38E282C Slot: 6
	public Task Hide() { }

	// RVA: 0x38E29AC Offset: 0x38E29AC VA: 0x38E29AC Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x38E29B4 Offset: 0x38E29B4 VA: 0x38E29B4
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.MagicPass.Scripts.UI
[CreateAssetMenu(fileName = "MagicPassElementFactory", menuName = "Factory/MagicPassElementFactory")]