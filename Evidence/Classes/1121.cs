public class StuckPopupVariantC : AStuckPopupVariant // TypeDefIndex: 1121
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
	private Vector3 _headerStartPosition; // 0x88
	private Vector3 _playOnButtonStartPosition; // 0x94
	private Vector3 _giveUpButtonStartPosition; // 0xA0
	private Vector3 _coinStartPosition; // 0xAC
	private float _backgroundStartAlpha; // 0xB8
	private float _gradientStartAlpha; // 0xBC
	private float _fullBackgroundStartAlpha; // 0xC0
	private float _shineStartAlpha; // 0xC4

	// Methods

	// RVA: 0x160A7F0 Offset: 0x160A7F0 VA: 0x160A7F0 Slot: 4
	protected override void OnActivatedOnce() { }

	// RVA: 0x160A80C Offset: 0x160A80C VA: 0x160A80C
	private void CacheInitialValues() { }

	// RVA: 0x160A8A8 Offset: 0x160A8A8 VA: 0x160A8A8
	private void ResetToInitialValues() { }

	// RVA: 0x160A960 Offset: 0x160A960 VA: 0x160A960
	private void OnEntranceComplete() { }

	// RVA: 0x160AA6C Offset: 0x160AA6C VA: 0x160AA6C
	private void OnAnyCloseButtonClicked() { }

	// RVA: 0x160AB2C Offset: 0x160AB2C VA: 0x160AB2C Slot: 6
	public override void PlayEnterAnimation() { }

	// RVA: 0x160ACF8 Offset: 0x160ACF8 VA: 0x160ACF8
	private void HideBoostersAndLevelText() { }

	// RVA: 0x160AD94 Offset: 0x160AD94 VA: 0x160AD94
	private Tween PlayHeaderTextEnterAnimation() { }

	// RVA: 0x160AE98 Offset: 0x160AE98 VA: 0x160AE98
	private Tween PlayCoinEnterAnimation() { }

	// RVA: 0x160AEBC Offset: 0x160AEBC VA: 0x160AEBC
	private Tween PlayPlayOnButtonEnterAnimation() { }

	// RVA: 0x160AEFC Offset: 0x160AEFC VA: 0x160AEFC
	private Tween PlayGiveUpButtonEnterAnimation() { }

	// RVA: 0x160AF20 Offset: 0x160AF20 VA: 0x160AF20
	private Tween PlayBackgroundEnterAnimation() { }

	// RVA: 0x160B090 Offset: 0x160B090 VA: 0x160B090
	private Tween PlayEnterAnimation(AnimationDirection animationDirection, Transform targetTransform, AnimationModel animationModel) { }

	// RVA: 0x160B178 Offset: 0x160B178 VA: 0x160B178 Slot: 7
	public override void PlayGiveUpAnimation() { }

	// RVA: 0x160B374 Offset: 0x160B374 VA: 0x160B374
	private void CloseAndOpenStuckAreYouSurePopUp() { }

	// RVA: 0x160B27C Offset: 0x160B27C VA: 0x160B27C
	private Tween PlayGiveUpAnimations() { }

	// RVA: 0x160B4FC Offset: 0x160B4FC VA: 0x160B4FC
	private Tween PlayHeaderTextMoveDownAnimation() { }

	// RVA: 0x160B520 Offset: 0x160B520 VA: 0x160B520
	private Tween PlayPlayOnButtonMoveDownAnimation() { }

	// RVA: 0x160B544 Offset: 0x160B544 VA: 0x160B544
	private Tween PlayGiveUpButtonMoveDownAnimation() { }

	// RVA: 0x160B658 Offset: 0x160B658 VA: 0x160B658
	private Tween PlayMoveDownAnimation(AnimationDirection animationDirection, Transform targetTransform, AnimationModel animationModel) { }

	// RVA: 0x160B568 Offset: 0x160B568 VA: 0x160B568
	private Tween PlayBackgroundMoveDownAnimation() { }

	// RVA: 0x160B70C Offset: 0x160B70C VA: 0x160B70C Slot: 8
	public override void PlayPlayOnAnimation() { }

	// RVA: 0x160B460 Offset: 0x160B460 VA: 0x160B460
	private void ClosePopUp() { }

	// RVA: 0x160B810 Offset: 0x160B810 VA: 0x160B810
	private Tween OnPlayOnAnimations() { }

	// RVA: 0x160B904 Offset: 0x160B904 VA: 0x160B904
	private Tween PlayHeaderTextExitAnimation() { }

	// RVA: 0x160B928 Offset: 0x160B928 VA: 0x160B928
	private Tween PlayCoinPlayOnAnimation() { }

	// RVA: 0x160B94C Offset: 0x160B94C VA: 0x160B94C
	private Tween PlayPlayOnButtonExitAnimation() { }

	// RVA: 0x160B970 Offset: 0x160B970 VA: 0x160B970
	private Tween PlayGiveUpButtonExitAnimation() { }

	// RVA: 0x160B994 Offset: 0x160B994 VA: 0x160B994
	private Tween PlayBackgroundExitAnimation() { }

	// RVA: 0x160BA44 Offset: 0x160BA44 VA: 0x160BA44
	private Tween PlayExitAnimation(AnimationDirection animationDirection, Transform targetTransform, AnimationModel animationModel) { }

	// RVA: 0x160AFF4 Offset: 0x160AFF4 VA: 0x160AFF4
	private Vector3 GetTargetPosition(AnimationDirection animationDirection, Vector3 initialPosition) { }

	// RVA: 0x160BAF8 Offset: 0x160BAF8 VA: 0x160BAF8
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.UI.Common.Scripts