public class AdjustInitializer : MonoBehaviour // TypeDefIndex: 4975
{
	// Fields
	private string AdjustAppToken; // 0x18
	private string FacebookAppId; // 0x20
	private string _adid; // 0x28
	private IPlayerService _playerService; // 0x30
	private AdConfigService _adConfigService; // 0x38
	private AdjustAttributionModel _adjustAttributionModel; // 0x40
	private bool _isAttributionModelSynced; // 0x48

	// Methods

	// RVA: 0x3E28BC4 Offset: 0x3E28BC4 VA: 0x3E28BC4
	public void SetServices(IPlayerService playerService, AdConfigService adConfigService) { }

	// RVA: 0x3E28BF4 Offset: 0x3E28BF4 VA: 0x3E28BF4
	public void InitializeAdjust() { }

	// RVA: 0x3E28EC4 Offset: 0x3E28EC4 VA: 0x3E28EC4
	private void OnGetAdid(string adid) { }

	// RVA: 0x3E28FC8 Offset: 0x3E28FC8 VA: 0x3E28FC8
	private void OnGetAttribution(AdjustAttribution attribution) { }

	// RVA: 0x3E290CC Offset: 0x3E290CC VA: 0x3E290CC
	private void OnAttributionChanged(AdjustAttribution attribution) { }

	// RVA: 0x3E291D0 Offset: 0x3E291D0 VA: 0x3E291D0
	public void Update() { }

	// RVA: 0x3E2933C Offset: 0x3E2933C VA: 0x3E2933C
	private void OnAttribution(AdjustAttribution attribution) { }

	// RVA: 0x3E29528 Offset: 0x3E29528 VA: 0x3E29528
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Application.TrackingSystems.Scripts
[Serializable]