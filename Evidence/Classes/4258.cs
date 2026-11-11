public class JetpackRaceJoinPopUp : MonoBehaviour, IPopUp // TypeDefIndex: 4258
{
	// Fields
	private JetpackRaceService _jetpackRaceService; // 0x18
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x20
	[SerializeField]
	private Button _button; // 0x28
	[SerializeField]
	private TextMeshPro _infoText; // 0x30
	[SerializeField]
	private GameObject _joinButtonWithLimitlessLifeView; // 0x38
	[SerializeField]
	private GameObject _joinButtonWithoutLimitlessLifeView; // 0x40

	// Methods

	// RVA: 0x1C6A798 Offset: 0x1C6A798 VA: 0x1C6A798
	private void Awake() { }

	// RVA: 0x1C6A824 Offset: 0x1C6A824 VA: 0x1C6A824
	private void OnDestroy() { }

	// RVA: 0x1C6A8B0 Offset: 0x1C6A8B0 VA: 0x1C6A8B0 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	[AsyncStateMachine(typeof(JetpackRaceJoinPopUp.<OnJoinButtonDown>d__9))]
	// RVA: 0x1C6AAAC Offset: 0x1C6AAAC VA: 0x1C6AAAC
	public void OnJoinButtonDown() { }

	// RVA: 0x1C6AB64 Offset: 0x1C6AB64 VA: 0x1C6AB64 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x1C6AC08 Offset: 0x1C6AC08 VA: 0x1C6AC08 Slot: 6
	public Task Hide() { }

	// RVA: 0x1C6ACBC Offset: 0x1C6ACBC VA: 0x1C6ACBC Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x1C6ACC4 Offset: 0x1C6ACC4 VA: 0x1C6ACC4
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.JetpackRace.Scripts.UI