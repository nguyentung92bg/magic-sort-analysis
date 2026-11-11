public class DailyStuckPopUpVariantC : ADailyStuckPopUpVariant // TypeDefIndex: 4940
{
	// Fields
	[SerializeField]
	private Transform _headerText; // 0x60
	[SerializeField]
	private Transform _playOnButtonTransform; // 0x68
	[SerializeField]
	private Transform _giveUpButtonTransform; // 0x70
	[SerializeField]
	private PlayOnButton _playOnButton; // 0x78
	[SerializeField]
	private Button _giveUpButton; // 0x80

	// Methods

	// RVA: 0x3E23C18 Offset: 0x3E23C18 VA: 0x3E23C18
	private void OnEntranceComplete() { }

	// RVA: 0x3E23D24 Offset: 0x3E23D24 VA: 0x3E23D24
	private void OnAnyCloseButtonClicked() { }

	// RVA: 0x3E23DE4 Offset: 0x3E23DE4 VA: 0x3E23DE4 Slot: 4
	public override void PlayEnterAnimation() { }

	// RVA: 0x3E23FA8 Offset: 0x3E23FA8 VA: 0x3E23FA8
	private void HideBoostersAndLevelText() { }

	// RVA: 0x3E24044 Offset: 0x3E24044 VA: 0x3E24044
	private Tween PlayHeaderTextEnterAnimation() { }

	// RVA: 0x3E24148 Offset: 0x3E24148 VA: 0x3E24148
	private Tween PlayCoinEnterAnimation() { }

	// RVA: 0x3E2416C Offset: 0x3E2416C VA: 0x3E2416C
	private Tween PlayPlayOnButtonEnterAnimation() { }

	// RVA: 0x3E241AC Offset: 0x3E241AC VA: 0x3E241AC
	private Tween PlayGiveUpButtonEnterAnimation() { }

	// RVA: 0x3E241D0 Offset: 0x3E241D0 VA: 0x3E241D0
	private Tween PlayBackgroundEnterAnimation() { }

	// RVA: 0x3E24330 Offset: 0x3E24330 VA: 0x3E24330
	private Tween PlayEnterAnimation(AnimationDirection animationDirection, Transform targetTransform, AnimationModel animationModel) { }

	// RVA: 0x3E24418 Offset: 0x3E24418 VA: 0x3E24418 Slot: 5
	public override void PlayGiveUpAnimation() { }

	// RVA: 0x3E24614 Offset: 0x3E24614 VA: 0x3E24614
	private void CloseAndEnterLoseState() { }

	// RVA: 0x3E2451C Offset: 0x3E2451C VA: 0x3E2451C
	private Tween PlayGiveUpAnimations() { }

	// RVA: 0x3E2479C Offset: 0x3E2479C VA: 0x3E2479C
	private Tween PlayHeaderTextMoveDownAnimation() { }

	// RVA: 0x3E247C0 Offset: 0x3E247C0 VA: 0x3E247C0
	private Tween PlayPlayOnButtonMoveDownAnimation() { }

	// RVA: 0x3E247E4 Offset: 0x3E247E4 VA: 0x3E247E4
	private Tween PlayGiveUpButtonMoveDownAnimation() { }

	// RVA: 0x3E248F8 Offset: 0x3E248F8 VA: 0x3E248F8
	private Tween PlayMoveDownAnimation(AnimationDirection animationDirection, Transform targetTransform, AnimationModel animationModel) { }

	// RVA: 0x3E24808 Offset: 0x3E24808 VA: 0x3E24808
	private Tween PlayBackgroundMoveDownAnimation() { }

	// RVA: 0x3E249AC Offset: 0x3E249AC VA: 0x3E249AC Slot: 6
	public override void PlayPlayOnAnimation() { }

	// RVA: 0x3E24700 Offset: 0x3E24700 VA: 0x3E24700
	private void ClosePopUp() { }

	// RVA: 0x3E24AB0 Offset: 0x3E24AB0 VA: 0x3E24AB0
	private Tween OnPlayOnAnimations() { }

	// RVA: 0x3E24BA4 Offset: 0x3E24BA4 VA: 0x3E24BA4
	private Tween PlayHeaderTextExitAnimation() { }

	// RVA: 0x3E24BC8 Offset: 0x3E24BC8 VA: 0x3E24BC8
	private Tween PlayCoinPlayOnAnimation() { }

	// RVA: 0x3E24BEC Offset: 0x3E24BEC VA: 0x3E24BEC
	private Tween PlayPlayOnButtonExitAnimation() { }

	// RVA: 0x3E24C10 Offset: 0x3E24C10 VA: 0x3E24C10
	private Tween PlayGiveUpButtonExitAnimation() { }

	// RVA: 0x3E24C34 Offset: 0x3E24C34 VA: 0x3E24C34
	private Tween PlayBackgroundExitAnimation() { }

	// RVA: 0x3E24CE4 Offset: 0x3E24CE4 VA: 0x3E24CE4
	private Tween PlayExitAnimation(AnimationDirection animationDirection, Transform targetTransform, AnimationModel animationModel) { }

	// RVA: 0x3E242A4 Offset: 0x3E242A4 VA: 0x3E242A4
	private Vector3 GetTargetPosition(AnimationDirection animationDirection, Vector3 initialPosition) { }

	// RVA: 0x3E24D98 Offset: 0x3E24D98 VA: 0x3E24D98
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Daily.Scripts.UI