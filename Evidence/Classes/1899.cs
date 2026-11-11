public class WheelOfFortuneProbabilityPopUp : MonoBehaviour, IPopUp // TypeDefIndex: 1899
{
	// Fields
	[SerializeField]
	private List<WheelOfFortuneProbabilityContentView> _contentViews; // 0x18
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x20
	private WheelOfFortuneService _service; // 0x28
	private WheelOfFortuneProbabilityViewModel _probabilityViewModel; // 0x30

	// Methods

	// RVA: 0x319FA58 Offset: 0x319FA58 VA: 0x319FA58 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x319FC40 Offset: 0x319FC40 VA: 0x319FC40 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x319FD0C Offset: 0x319FD0C VA: 0x319FD0C Slot: 6
	public Task Hide() { }

	// RVA: 0x319FDC0 Offset: 0x319FDC0 VA: 0x319FDC0 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x319FDC8 Offset: 0x319FDC8 VA: 0x319FDC8
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]