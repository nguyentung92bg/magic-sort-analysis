public class WatchAndWinPopup : MonoBehaviour, IPopUp // TypeDefIndex: 3154
{
	// Fields
	[SerializeField]
	private WatchAndWinController _watchAndWinController; // 0x18
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x20
	[CompilerGenerated]
	private WatchAndWinPopupImpressionSource <PopupSource>k__BackingField; // 0x28

	// Properties
	public WatchAndWinPopupImpressionSource PopupSource { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x32FE0B8 Offset: 0x32FE0B8 VA: 0x32FE0B8
	public WatchAndWinPopupImpressionSource get_PopupSource() { }

	[CompilerGenerated]
	// RVA: 0x32FE0C0 Offset: 0x32FE0C0 VA: 0x32FE0C0
	public void set_PopupSource(WatchAndWinPopupImpressionSource value) { }

	// RVA: 0x32FE0C8 Offset: 0x32FE0C8 VA: 0x32FE0C8 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x32FE1CC Offset: 0x32FE1CC VA: 0x32FE1CC Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x32FE2A8 Offset: 0x32FE2A8 VA: 0x32FE2A8 Slot: 6
	public Task Hide() { }

	// RVA: 0x32FE370 Offset: 0x32FE370 VA: 0x32FE370 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x32FE378 Offset: 0x32FE378 VA: 0x32FE378
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Monetization.WatchAndWin.Scripts.UI