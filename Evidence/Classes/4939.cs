public class DailyStuckPopUpVariantA : ADailyStuckPopUpVariant // TypeDefIndex: 4939
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

	// RVA: 0x3E22BE8 Offset: 0x3E22BE8 VA: 0x3E22BE8
	private void OnEntranceComplete() { }

	// RVA: 0x3E22CF4 Offset: 0x3E22CF4 VA: 0x3E22CF4
	private void OnAnyButtonClicked() { }

	// RVA: 0x3E22DB4 Offset: 0x3E22DB4 VA: 0x3E22DB4 Slot: 4
	public override void PlayEnterAnimation() { }

	// RVA: 0x3E22F78 Offset: 0x3E22F78 VA: 0x3E22F78
	private void HideBoostersAndLevelText() { }

	// RVA: 0x3E23014 Offset: 0x3E23014 VA: 0x3E23014
	private Tween PlayHeaderTextEnterAnimation() { }

	// RVA: 0x3E23038 Offset: 0x3E23038 VA: 0x3E23038
	private Tween PlayCoinEnterAnimation() { }

	// RVA: 0x3E2305C Offset: 0x3E2305C VA: 0x3E2305C
	private Tween PlayPlayOnButtonEnterAnimation() { }

	// RVA: 0x3E2309C Offset: 0x3E2309C VA: 0x3E2309C
	private Tween PlayGiveUpButtonEnterAnimation() { }

	// RVA: 0x3E230C0 Offset: 0x3E230C0 VA: 0x3E230C0
	private Tween PlayBackgroundEnterAnimation() { }

	// RVA: 0x3E23194 Offset: 0x3E23194 VA: 0x3E23194
	private Tween PlayEnterAnimation(AnimationDirection animationDirection, Transform targetTransform, AnimationModel animationModel) { }

	// RVA: 0x3E23308 Offset: 0x3E23308 VA: 0x3E23308 Slot: 5
	public override void PlayGiveUpAnimation() { }

	// RVA: 0x3E234D0 Offset: 0x3E234D0 VA: 0x3E234D0
	private void CloseAndEnterLoseState() { }

	// RVA: 0x3E2340C Offset: 0x3E2340C VA: 0x3E2340C
	private Tween PlayGiveUpAnimations() { }

	// RVA: 0x3E23658 Offset: 0x3E23658 VA: 0x3E23658
	private Tween PlayHeaderTextMoveDownAnimation() { }

	// RVA: 0x3E2367C Offset: 0x3E2367C VA: 0x3E2367C
	private Tween PlayPlayOnButtonMoveDownAnimation() { }

	// RVA: 0x3E236A0 Offset: 0x3E236A0 VA: 0x3E236A0
	private Tween PlayGiveUpButtonMoveDownAnimation() { }

	// RVA: 0x3E237B4 Offset: 0x3E237B4 VA: 0x3E237B4
	private Tween PlayMoveDownAnimation(AnimationDirection animationDirection, Transform targetTransform, AnimationModel animationModel) { }

	// RVA: 0x3E236C4 Offset: 0x3E236C4 VA: 0x3E236C4
	private Tween PlayBackgroundMoveDownAnimation() { }

	// RVA: 0x3E23868 Offset: 0x3E23868 VA: 0x3E23868 Slot: 6
	public override void PlayPlayOnAnimation() { }

	// RVA: 0x3E235BC Offset: 0x3E235BC VA: 0x3E235BC
	private void ClosePopUp() { }

	// RVA: 0x3E2396C Offset: 0x3E2396C VA: 0x3E2396C
	private Tween OnPlayOnAnimations() { }

	// RVA: 0x3E23A40 Offset: 0x3E23A40 VA: 0x3E23A40
	private Tween PlayHeaderTextExitAnimation() { }

	// RVA: 0x3E23A64 Offset: 0x3E23A64 VA: 0x3E23A64
	private Tween PlayPlayOnButtonExitAnimation() { }

	// RVA: 0x3E23A88 Offset: 0x3E23A88 VA: 0x3E23A88
	private Tween PlayGiveUpButtonExitAnimation() { }

	// RVA: 0x3E23AAC Offset: 0x3E23AAC VA: 0x3E23AAC
	private Tween PlayBackgroundExitAnimation() { }

	// RVA: 0x3E23B5C Offset: 0x3E23B5C VA: 0x3E23B5C
	private Tween PlayExitAnimation(AnimationDirection animationDirection, Transform targetTransform, AnimationModel animationModel) { }

	// RVA: 0x3E2327C Offset: 0x3E2327C VA: 0x3E2327C
	private Vector3 GetTargetPosition(AnimationDirection animationDirection, Vector3 initialPosition) { }

	// RVA: 0x3E23C10 Offset: 0x3E23C10 VA: 0x3E23C10
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Daily.Scripts.UI