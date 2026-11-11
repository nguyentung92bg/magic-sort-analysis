public class MagicLabPopUp : MonoBehaviour, IPopUp // TypeDefIndex: 4022
{
	// Fields
	[SerializeField]
	private Button _infoPopupButton; // 0x18
	[SerializeField]
	private MagicLabController _magicLabController; // 0x20
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x28
	private Sequence _sequence; // 0x30

	// Methods

	// RVA: 0x375A67C Offset: 0x375A67C VA: 0x375A67C
	private void Awake() { }

	// RVA: 0x375A708 Offset: 0x375A708 VA: 0x375A708
	private void OpenInfoPopUp() { }

	// RVA: 0x375A7F0 Offset: 0x375A7F0 VA: 0x375A7F0
	private void OnDestroy() { }

	// RVA: 0x375A87C Offset: 0x375A87C VA: 0x375A87C Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	[AsyncStateMachine(typeof(MagicLabPopUp.<PlayFirstShowEverAnimations>d__8))]
	// RVA: 0x375A9D0 Offset: 0x375A9D0 VA: 0x375A9D0
	private void PlayFirstShowEverAnimations() { }

	[AsyncStateMachine(typeof(MagicLabPopUp.<OpenAutomaticallyInfoPopUp>d__9))]
	// RVA: 0x375AC58 Offset: 0x375AC58 VA: 0x375AC58
	private Task OpenAutomaticallyInfoPopUp() { }

	// RVA: 0x375AD28 Offset: 0x375AD28 VA: 0x375AD28 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x375ADF4 Offset: 0x375ADF4 VA: 0x375ADF4 Slot: 6
	public Task Hide() { }

	// RVA: 0x375AEE8 Offset: 0x375AEE8 VA: 0x375AEE8 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x375AEF0 Offset: 0x375AEF0 VA: 0x375AEF0
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.MagicLab.Scripts.UI
[Serializable]