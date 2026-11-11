public class DuckFestivalPreJoinPopUp : MonoBehaviour, IPopUp // TypeDefIndex: 4415
{
	// Fields
	[SerializeField]
	private Timer _timer; // 0x18
	[SerializeField]
	private TextMeshPro _descriptionText; // 0x20
	[SerializeField]
	private DuckFestivalProgressView _duckFestivalProgressView; // 0x28
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x30
	private DuckFestivalService _duckFestivalService; // 0x38

	// Methods

	// RVA: 0x1B9C73C Offset: 0x1B9C73C VA: 0x1B9C73C Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	[AsyncStateMachine(typeof(DuckFestivalPreJoinPopUp.<ShowAsync>d__6))]
	// RVA: 0x1B9CDB8 Offset: 0x1B9CDB8 VA: 0x1B9CDB8 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x1B9CEB8 Offset: 0x1B9CEB8 VA: 0x1B9CEB8 Slot: 6
	public Task Hide() { }

	// RVA: 0x1B9CFF0 Offset: 0x1B9CFF0 VA: 0x1B9CFF0 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x1B9CFF8 Offset: 0x1B9CFF8 VA: 0x1B9CFF8
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.DuckFestival.Scripts.UI