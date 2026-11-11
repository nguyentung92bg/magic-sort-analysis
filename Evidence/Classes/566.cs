public class HighScorePopUp : MonoBehaviour, IPopUp // TypeDefIndex: 566
{
	// Fields
	private HighScorePopUpArguments _highScorePopUpArguments; // 0x18

	// Methods

	// RVA: 0x4001FF8 Offset: 0x4001FF8 VA: 0x4001FF8 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x4002188 Offset: 0x4002188 VA: 0x4002188 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	[AsyncStateMachine(typeof(HighScorePopUp.<PlayAnimation>d__3))]
	// RVA: 0x40020D0 Offset: 0x40020D0 VA: 0x40020D0
	private void PlayAnimation() { }

	// RVA: 0x400222C Offset: 0x400222C VA: 0x400222C Slot: 6
	public Task Hide() { }

	// RVA: 0x40022D8 Offset: 0x40022D8 VA: 0x40022D8 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x40022E0 Offset: 0x40022E0 VA: 0x40022E0
	public void .ctor() { }
}

// Namespace: Modules.Infrastructure.UI.Common.Scripts