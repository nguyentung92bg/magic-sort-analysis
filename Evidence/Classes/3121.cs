public class WatchAndWinController : MonoBehaviour // TypeDefIndex: 3121
{
	// Fields
	[SerializeField]
	private WatchAndWinView _watchAndWinView; // 0x18
	[SerializeField]
	private DynamicWatchAndWinView _dynamicWatchAndWinView; // 0x20
	[SerializeField]
	private Button _watchAndViewAdButton1; // 0x28
	[SerializeField]
	private Button _watchAndViewAdButton2; // 0x30

	// Methods

	// RVA: 0x316ED28 Offset: 0x316ED28 VA: 0x316ED28
	private void Awake() { }

	// RVA: 0x316EDF4 Offset: 0x316EDF4 VA: 0x316EDF4
	private void OnDestroy() { }

	// RVA: 0x316EEC0 Offset: 0x316EEC0 VA: 0x316EEC0
	public void Show() { }

	// RVA: 0x316F43C Offset: 0x316F43C VA: 0x316F43C
	public void Hide() { }

	[AsyncStateMachine(typeof(WatchAndWinController.<OnWatchAdButtonClicked>d__8))]
	// RVA: 0x316F484 Offset: 0x316F484 VA: 0x316F484
	public void OnWatchAdButtonClicked() { }

	// RVA: 0x316F53C Offset: 0x316F53C VA: 0x316F53C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Monetization.WatchAndWin.Scripts
[Serializable]