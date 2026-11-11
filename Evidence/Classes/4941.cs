public class DailyTryAgainPopUp : MonoBehaviour, IPopUp // TypeDefIndex: 4941
{
	// Fields
	[SerializeField]
	private Transform _tryAgainContainer; // 0x18
	[SerializeField]
	private TextMeshPro _coinAmountText; // 0x20
	[SerializeField]
	private TextMeshPro _dateText; // 0x28
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x30
	private Tween _tween; // 0x38

	// Methods

	// RVA: 0x3E24DA0 Offset: 0x3E24DA0 VA: 0x3E24DA0 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x3E24EE8 Offset: 0x3E24EE8 VA: 0x3E24EE8 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x3E24FB4 Offset: 0x3E24FB4 VA: 0x3E24FB4 Slot: 6
	public Task Hide() { }

	// RVA: 0x3E25090 Offset: 0x3E25090 VA: 0x3E25090 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x3E25098 Offset: 0x3E25098 VA: 0x3E25098
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Daily.Scripts.UI