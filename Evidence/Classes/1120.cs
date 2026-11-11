public class StuckPopupVariantB : AStuckPopupVariant // TypeDefIndex: 1120
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
	[SerializeField]
	private Transform _bottle; // 0x88
	[SerializeField]
	private SpriteRenderer _gradient; // 0x90
	[SerializeField]
	private SpriteRenderer _shine; // 0x98
	private Vector3 _headerStartPosition; // 0xA0
	private Vector3 _playOnButtonStartPosition; // 0xAC
	private Vector3 _giveUpButtonStartPosition; // 0xB8
	private Vector3 _bottleStartPosition; // 0xC4
	private Vector3 _coinStartPosition; // 0xD0
	private Vector3 _bottleStartScale; // 0xDC
	private float _backgroundStartAlpha; // 0xE8
	private float _gradientStartAlpha; // 0xEC
	private float _fullDarkBackgroundStartAlpha; // 0xF0
	private float _shineStartAlpha; // 0xF4

	// Methods

	// RVA: 0x1608DAC Offset: 0x1608DAC VA: 0x1608DAC Slot: 4
	protected override void OnActivatedOnce() { }

	// RVA: 0x1608DC8 Offset: 0x1608DC8 VA: 0x1608DC8
	private void CacheInitialValues() { }

	// RVA: 0x1608EBC Offset: 0x1608EBC VA: 0x1608EBC
	private void OnEntranceComplete() { }

	// RVA: 0x1608FC8 Offset: 0x1608FC8 VA: 0x1608FC8
	private void OnAnyCloseButtonClicked() { }

	// RVA: 0x1609088 Offset: 0x1609088 VA: 0x1609088 Slot: 6
	public override void PlayEnterAnimation() { }

	// RVA: 0x16094B4 Offset: 0x16094B4 VA: 0x16094B4
	private void HideBoostersAndLevelText() { }

	// RVA: 0x16092B4 Offset: 0x16092B4 VA: 0x16092B4
	private void ResetToInitialValues() { }

	// RVA: 0x1609550 Offset: 0x1609550 VA: 0x1609550
	private Tween PlayHeaderTextEnterAnimation() { }

	// RVA: 0x1609654 Offset: 0x1609654 VA: 0x1609654
	private Tween PlayCoinEnterAnimation() { }

	// RVA: 0x1609678 Offset: 0x1609678 VA: 0x1609678
	private Tween PlayPlayOnButtonEnterAnimation() { }

	// RVA: 0x16096B8 Offset: 0x16096B8 VA: 0x16096B8
	private Tween PlayGiveUpButtonEnterAnimation() { }

	// RVA: 0x16097B0 Offset: 0x16097B0 VA: 0x16097B0
	private Tween PlayBottleEnterAnimation() { }

	// RVA: 0x16098A0 Offset: 0x16098A0 VA: 0x16098A0
	private Tween PlayGradientEnterAnimation() { }

	// RVA: 0x1609960 Offset: 0x1609960 VA: 0x1609960
	private Tween PlayShineEnterAnimation() { }

	// RVA: 0x16096DC Offset: 0x16096DC VA: 0x16096DC
	private Tween PlayBackgroundEnterAnimation() { }

	// RVA: 0x1609AAC Offset: 0x1609AAC VA: 0x1609AAC
	private Tween PlayEnterAnimation(AnimationDirection animationDirection, Transform targetTransform, AnimationModel animationModel) { }

	// RVA: 0x1609B94 Offset: 0x1609B94 VA: 0x1609B94 Slot: 7
	public override void PlayGiveUpAnimation() { }

	// RVA: 0x1609DAC Offset: 0x1609DAC VA: 0x1609DAC
	private void CloseAndOpenStuckAreYouSurePopUp() { }

	// RVA: 0x1609C98 Offset: 0x1609C98 VA: 0x1609C98
	private Tween PlayGiveUpAnimations() { }

	// RVA: 0x1609F34 Offset: 0x1609F34 VA: 0x1609F34
	private Tween PlayHeaderTextMoveDownAnimation() { }

	// RVA: 0x1609F58 Offset: 0x1609F58 VA: 0x1609F58
	private Tween PlayPlayOnButtonMoveDownAnimation() { }

	// RVA: 0x1609F7C Offset: 0x1609F7C VA: 0x1609F7C
	private Tween PlayGiveUpButtonMoveDownAnimation() { }

	// RVA: 0x1609FA0 Offset: 0x1609FA0 VA: 0x1609FA0
	private Tween PlayBottleGiveUpAnimation() { }

	// RVA: 0x160A1A4 Offset: 0x160A1A4 VA: 0x160A1A4
	private Tween PlayMoveDownAnimation(AnimationDirection animationDirection, Transform targetTransform, AnimationModel animationModel) { }

	// RVA: 0x160A06C Offset: 0x160A06C VA: 0x160A06C
	private Tween PlayBackgroundMoveDownAnimation() { }

	// RVA: 0x160A258 Offset: 0x160A258 VA: 0x160A258 Slot: 8
	public override void PlayPlayOnAnimation() { }

	// RVA: 0x1609E98 Offset: 0x1609E98 VA: 0x1609E98
	private void ClosePopUp() { }

	// RVA: 0x160A35C Offset: 0x160A35C VA: 0x160A35C
	private Tween OnPlayOnAnimations() { }

	// RVA: 0x160A490 Offset: 0x160A490 VA: 0x160A490
	private Tween PlayHeaderTextExitAnimation() { }

	// RVA: 0x160A4B4 Offset: 0x160A4B4 VA: 0x160A4B4
	private Tween PlayCoinPlayOnAnimation() { }

	// RVA: 0x160A4D8 Offset: 0x160A4D8 VA: 0x160A4D8
	private Tween PlayPlayOnButtonExitAnimation() { }

	// RVA: 0x160A4FC Offset: 0x160A4FC VA: 0x160A4FC
	private Tween PlayGiveUpButtonExitAnimation() { }

	// RVA: 0x160A520 Offset: 0x160A520 VA: 0x160A520
	private Tween PlayBottlePlayOnAnimation() { }

	// RVA: 0x160A5D4 Offset: 0x160A5D4 VA: 0x160A5D4
	private Tween PlayGradientPlayOnAnimation() { }

	// RVA: 0x160A684 Offset: 0x160A684 VA: 0x160A684
	private Tween PlayBackgroundExitAnimation() { }

	// RVA: 0x160A734 Offset: 0x160A734 VA: 0x160A734
	private Tween PlayExitAnimation(AnimationDirection animationDirection, Transform targetTransform, AnimationModel animationModel) { }

	// RVA: 0x1609A20 Offset: 0x1609A20 VA: 0x1609A20
	private Vector3 GetTargetPosition(AnimationDirection animationDirection, Vector3 initialPosition) { }

	// RVA: 0x160A7E8 Offset: 0x160A7E8 VA: 0x160A7E8
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts