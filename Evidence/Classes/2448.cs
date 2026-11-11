public class SuperChargerJoinPopUp : MonoBehaviour, IPopUp // TypeDefIndex: 2448
{
	// Fields
	[SerializeField]
	private SuperChargerProgressView _progressView; // 0x18
	[SerializeField]
	private Button _infoButton; // 0x20
	[SerializeField]
	private List<SuperChargerJoinVariant> _variants; // 0x28
	private SuperChargerService _superChargerService; // 0x30
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x38

	// Methods

	// RVA: 0x2973088 Offset: 0x2973088 VA: 0x2973088 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x2973260 Offset: 0x2973260 VA: 0x2973260
	private void SetVariant(SuperChargerType type) { }

	[AsyncStateMachine(typeof(SuperChargerJoinPopUp.<PlayFirstShowEverAnimations>d__7))]
	// RVA: 0x29734D4 Offset: 0x29734D4 VA: 0x29734D4
	private void PlayFirstShowEverAnimations() { }

	// RVA: 0x297367C Offset: 0x297367C VA: 0x297367C Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	[AsyncStateMachine(typeof(SuperChargerJoinPopUp.<OpenAutomaticallyInfoPopUp>d__9))]
	// RVA: 0x29737B0 Offset: 0x29737B0 VA: 0x29737B0
	private Task OpenAutomaticallyInfoPopUp() { }

	// RVA: 0x2973880 Offset: 0x2973880 VA: 0x2973880 Slot: 6
	public Task Hide() { }

	// RVA: 0x2973A38 Offset: 0x2973A38 VA: 0x2973A38 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x2973A40 Offset: 0x2973A40 VA: 0x2973A40
	private void OnInfoButtonClicked() { }

	// RVA: 0x2973B04 Offset: 0x2973B04 VA: 0x2973B04
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.SuperCharger.Scripts.UI