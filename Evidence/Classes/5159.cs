public class DuckMultiplierCurrencyDisplayerController : CurrencyDisplayerController // TypeDefIndex: 5159
{
	// Fields
	[SerializeField]
	private GameObject _multiplierContainer; // 0x60
	[SerializeField]
	private DuckFestivalLobbyMultiplierAnimation _multiplierAnimation; // 0x68
	private bool _lastState; // 0x70
	private DuckFestivalService _service; // 0x78

	// Methods

	// RVA: 0x1385A94 Offset: 0x1385A94 VA: 0x1385A94 Slot: 5
	protected override void Awake() { }

	// RVA: 0x1385D30 Offset: 0x1385D30 VA: 0x1385D30 Slot: 6
	protected override void UpdateViews(bool active) { }

	// RVA: 0x1385B9C Offset: 0x1385B9C VA: 0x1385B9C
	private void UpdateTimeText() { }

	// RVA: 0x1385D60 Offset: 0x1385D60 VA: 0x1385D60
	private void OnStateChange() { }

	// RVA: 0x1385B68 Offset: 0x1385B68 VA: 0x1385B68
	private void PlayAppearAnimation() { }

	// RVA: 0x1385E8C Offset: 0x1385E8C VA: 0x1385E8C
	private void PlayDisappearAnimation() { }

	// RVA: 0x1385EA8 Offset: 0x1385EA8 VA: 0x1385EA8
	public void TryPlayAnimation() { }

	// RVA: 0x1385E70 Offset: 0x1385E70 VA: 0x1385E70
	private bool HasLevelWin() { }

	// RVA: 0x1385DA4 Offset: 0x1385DA4 VA: 0x1385DA4
	private DateTimeOffset GetClampedEventMultiplierEndDate(DateTime multiplierEndDate) { }

	// RVA: 0x1385EEC Offset: 0x1385EEC VA: 0x1385EEC Slot: 7
	protected override bool HasTime(CurrencyType currencyType) { }

	// RVA: 0x1385FE4 Offset: 0x1385FE4 VA: 0x1385FE4
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Application.Inventory.Scripts.UI