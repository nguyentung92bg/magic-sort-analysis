public class WindQuestPopup : MonoBehaviour, IPopUp // TypeDefIndex: 1808
{
	// Fields
	[SerializeField]
	private WindQuestController _windQuestController; // 0x18
	[SerializeField]
	private PopupAnimationController _popupAnimationController; // 0x20
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x28
	private WindQuestService _windQuestService; // 0x30
	[CompilerGenerated]
	private WindQuestPopupImpressionSource <PopupSource>k__BackingField; // 0x38

	// Properties
	public WindQuestPopupImpressionSource PopupSource { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x2D9AEE4 Offset: 0x2D9AEE4 VA: 0x2D9AEE4
	public WindQuestPopupImpressionSource get_PopupSource() { }

	[CompilerGenerated]
	// RVA: 0x2D9AEEC Offset: 0x2D9AEEC VA: 0x2D9AEEC
	public void set_PopupSource(WindQuestPopupImpressionSource value) { }

	// RVA: 0x2D9AEF4 Offset: 0x2D9AEF4 VA: 0x2D9AEF4 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x2D9B358 Offset: 0x2D9B358 VA: 0x2D9B358 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x2D9B444 Offset: 0x2D9B444 VA: 0x2D9B444 Slot: 6
	public Task Hide() { }

	// RVA: 0x2D9B508 Offset: 0x2D9B508 VA: 0x2D9B508 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x2D9B510 Offset: 0x2D9B510 VA: 0x2D9B510
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.WindQuest.Scripts