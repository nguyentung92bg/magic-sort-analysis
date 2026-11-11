public class CurrencyDisplayerController : MonoBehaviour, ISecondUpdate // TypeDefIndex: 5141
{
	// Fields
	[SerializeField]
	private TextMeshPro _amountText; // 0x18
	[SerializeField]
	private TextMeshPro _remainingDurationText; // 0x20
	[SerializeField]
	protected CurrencyType _currencyType; // 0x28
	protected InventoryService _inventoryService; // 0x30
	private RemoteConfigs _remoteConfigs; // 0x38
	private int _oldAmount; // 0x40
	private Tween _amountChangeTween; // 0x48
	[SerializeField]
	private GameObject _amountImageGameObject; // 0x50
	[SerializeField]
	private GameObject _durationImageGameObject; // 0x58

	// Methods

	// RVA: 0x1380798 Offset: 0x1380798 VA: 0x1380798 Slot: 5
	protected virtual void Awake() { }

	// RVA: 0x1380AA0 Offset: 0x1380AA0 VA: 0x1380AA0
	public void OnDestroy() { }

	// RVA: 0x1380C20 Offset: 0x1380C20 VA: 0x1380C20
	private void PlayAmount(int amount) { }

	// RVA: 0x1380D88 Offset: 0x1380D88 VA: 0x1380D88
	private void SetAmount(int amount) { }

	// RVA: 0x1380DFC Offset: 0x1380DFC VA: 0x1380DFC
	private void OnCurrencyDateIsChanged(CurrencyType currencyType, DateTime endDate) { }

	// RVA: 0x13811E4 Offset: 0x13811E4 VA: 0x13811E4
	private void OnCurrencyAmountIsChanged(CurrencyType currencyType, int amount) { }

	// RVA: 0x13811FC Offset: 0x13811FC VA: 0x13811FC Slot: 4
	public void SecondUpdate() { }

	// RVA: 0x1380E10 Offset: 0x1380E10 VA: 0x1380E10
	public void UpdateView() { }

	// RVA: 0x1380A00 Offset: 0x1380A00 VA: 0x1380A00
	private void SetAmountText(string text) { }

	// RVA: 0x1381200 Offset: 0x1381200 VA: 0x1381200
	protected void SetRemainingDurationText(string text) { }

	// RVA: 0x1381224 Offset: 0x1381224 VA: 0x1381224
	private void OnEnable() { }

	// RVA: 0x13812B0 Offset: 0x13812B0 VA: 0x13812B0
	private void OnDisable() { }

	// RVA: 0x1381334 Offset: 0x1381334 VA: 0x1381334 Slot: 6
	protected virtual void UpdateViews(bool active) { }

	// RVA: 0x1381338 Offset: 0x1381338 VA: 0x1381338 Slot: 7
	protected virtual bool HasTime(CurrencyType currencyType) { }

	// RVA: 0x1381350 Offset: 0x1381350 VA: 0x1381350 Slot: 8
	public virtual void OnCurrencyArrive() { }

	// RVA: 0x1381354 Offset: 0x1381354 VA: 0x1381354
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x138135C Offset: 0x138135C VA: 0x138135C
	private int <PlayAmount>b__11_0() { }

	[CompilerGenerated]
	// RVA: 0x1381364 Offset: 0x1381364 VA: 0x1381364
	private void <PlayAmount>b__11_1(int x) { }
}

// Namespace: Modules.Contexts.Application.Inventory.Scripts.UI
[Serializable]