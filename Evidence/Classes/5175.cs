public class IAPPriceView : MonoBehaviour // TypeDefIndex: 5175
{
	// Fields
	[SerializeField]
	private TextMeshPro _priceText; // 0x18
	[SerializeField]
	private TextMeshPro _priceTextShadow; // 0x20
	private IAPConfigModel _iapConfigModel; // 0x28

	// Methods

	// RVA: 0x138AA24 Offset: 0x138AA24 VA: 0x138AA24
	private void Awake() { }

	// RVA: 0x138AAF4 Offset: 0x138AAF4 VA: 0x138AAF4
	private void OnDestroy() { }

	// RVA: 0x138ABC4 Offset: 0x138ABC4 VA: 0x138ABC4
	public void Show(IAPConfigModel iapConfigModel) { }

	// RVA: 0x138AE8C Offset: 0x138AE8C VA: 0x138AE8C
	public void Hide() { }

	// RVA: 0x138AC00 Offset: 0x138AC00 VA: 0x138AC00
	private void FetchAndSetIAPModel() { }

	// RVA: 0x138AEB0 Offset: 0x138AEB0 VA: 0x138AEB0
	private bool TryFetchPrice(out string priceString) { }

	// RVA: 0x138AFBC Offset: 0x138AFBC VA: 0x138AFBC
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Application.IAP.Scripts
[Serializable]