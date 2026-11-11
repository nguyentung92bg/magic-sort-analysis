public class WheelOfFortuneFinishedClaimPopUp : MonoBehaviour, IPopUp // TypeDefIndex: 1890
{
	// Fields
	[SerializeField]
	private Button _stayButton; // 0x18
	[SerializeField]
	private Button _noButton; // 0x20
	private WheelOfFortuneService _service; // 0x28
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x30

	// Methods

	// RVA: 0x319E738 Offset: 0x319E738 VA: 0x319E738 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x319E874 Offset: 0x319E874 VA: 0x319E874
	private void OnNoButtonClicked() { }

	// RVA: 0x319E8FC Offset: 0x319E8FC VA: 0x319E8FC
	private void OnStayButtonClicked() { }

	// RVA: 0x319E970 Offset: 0x319E970 VA: 0x319E970 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x319EA3C Offset: 0x319EA3C VA: 0x319EA3C Slot: 6
	public Task Hide() { }

	// RVA: 0x319EBA8 Offset: 0x319EBA8 VA: 0x319EBA8 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x319EBB0 Offset: 0x319EBB0 VA: 0x319EBB0
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.WheelOfFortune.Scripts.UI