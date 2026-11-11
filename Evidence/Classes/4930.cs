public class DailyPopup : MonoBehaviour, IPopUp // TypeDefIndex: 4930
{
	// Fields
	[SerializeField]
	private DailyController _dailyController; // 0x18

	// Methods

	// RVA: 0x3E20F24 Offset: 0x3E20F24 VA: 0x3E20F24 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x3E20F4C Offset: 0x3E20F4C VA: 0x3E20F4C Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x3E20FE0 Offset: 0x3E20FE0 VA: 0x3E20FE0 Slot: 6
	public Task Hide() { }

	// RVA: 0x3E21098 Offset: 0x3E21098 VA: 0x3E21098 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x3E210A0 Offset: 0x3E210A0 VA: 0x3E210A0
	public void ShowIntroduce() { }

	// RVA: 0x3E210B8 Offset: 0x3E210B8 VA: 0x3E210B8
	public Tween PlayClaimDay(DateTime dateTime) { }

	// RVA: 0x3E210D0 Offset: 0x3E210D0 VA: 0x3E210D0
	public void SetDailyViewModel(DailyViewModel viewModel) { }

	// RVA: 0x3E21108 Offset: 0x3E21108 VA: 0x3E21108
	public void SetUnclaimedViewAtDate(DateTime dateTime) { }

	// RVA: 0x3E21120 Offset: 0x3E21120 VA: 0x3E21120
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]