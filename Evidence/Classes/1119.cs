public class StuckPopupVariantA : AStuckPopupVariant // TypeDefIndex: 1119
{
	// Fields
	[SerializeField]
	private Transform _headerText; // 0x60
	[SerializeField]
	private Transform _playOnButtonTransform; // 0x68
	[SerializeField]
	private Transform _playOnWithRewardedButtonTransform; // 0x70
	[SerializeField]
	private Transform _giveUpButtonTransform; // 0x78
	[SerializeField]
	private Transform _exitButtonTransform; // 0x80
	[SerializeField]
	private PlayOnButton _playOnButton; // 0x88
	[SerializeField]
	private PlayOnWithRewardedButton _playOnWithRewardedButton; // 0x90
	[SerializeField]
	private Button _closeButton; // 0x98
	[SerializeField]
	private Button _giveUpButton; // 0xA0
	private Vector3 _headerStartPosition; // 0xA8
	private Vector3 _playOnButtonStartPosition; // 0xB4
	private Vector3 _playOnWithRewardedButtonStartPosition; // 0xC0
	private Vector3 _giveUpButtonStartPosition; // 0xCC
	private Vector3 _exitButtonStartPosition; // 0xD8
	private Vector3 _coinStartPosition; // 0xE4
	private float _backgroundStartAlpha; // 0xF0
	private float _fullBackgroundStartAlpha; // 0xF4
	private bool _isPlayOnWithRewardedActive; // 0xF8

	// Methods

	// RVA: 0x16072A8 Offset: 0x16072A8 VA: 0x16072A8 Slot: 4
	protected override void OnActivatedOnce() { }

	// RVA: 0x1607390 Offset: 0x1607390 VA: 0x1607390 Slot: 5
	public override void Initialize() { }

	// RVA: 0x1607394 Offset: 0x1607394 VA: 0x1607394
	private void HandlePlayOnAB() { }

	// RVA: 0x16072C4 Offset: 0x16072C4 VA: 0x16072C4
	private void CacheInitialValues() { }

	// RVA: 0x16074C0 Offset: 0x16074C0 VA: 0x16074C0
	private void OnAnyButtonClicked() { }

	// RVA: 0x16075F8 Offset: 0x16075F8 VA: 0x16075F8 Slot: 6
	public override void PlayEnterAnimation() { }

	// RVA: 0x16077E4 Offset: 0x16077E4 VA: 0x16077E4
	private void ResetToInitialValues() { }

	// RVA: 0x1607D9C Offset: 0x1607D9C VA: 0x1607D9C
	private void OnEntranceComplete() { }

	// RVA: 0x16078D8 Offset: 0x16078D8 VA: 0x16078D8
	private void HideBoostersAndLevelText() { }

	// RVA: 0x1607974 Offset: 0x1607974 VA: 0x1607974
	private Tween PlayHeaderTextEnterAnimation() { }

	// RVA: 0x1607A78 Offset: 0x1607A78 VA: 0x1607A78
	private Tween PlayCoinEnterAnimation() { }

	// RVA: 0x1607A9C Offset: 0x1607A9C VA: 0x1607A9C
	private Tween PlayRightButtonAnimation() { }

	// RVA: 0x1607BB0 Offset: 0x1607BB0 VA: 0x1607BB0
	private Tween PlayPlayOnButtonEnterAnimation() { }

	// RVA: 0x16080A4 Offset: 0x16080A4 VA: 0x16080A4
	private Tween PlayPlayOnWithRewardedButtonEnterAnimation() { }

	// RVA: 0x16081BC Offset: 0x16081BC VA: 0x16081BC
	private Tween PlayGiveUpButtonEnterAnimation() { }

	// RVA: 0x1607AAC Offset: 0x1607AAC VA: 0x1607AAC
	private Tween PlayCloseButtonAnimation() { }

	// RVA: 0x1607CC8 Offset: 0x1607CC8 VA: 0x1607CC8
	private Tween PlayBackgroundEnterAnimation() { }

	// RVA: 0x1607FBC Offset: 0x1607FBC VA: 0x1607FBC
	private Tween PlayEnterAnimation(AnimationDirection animationDirection, Transform targetTransform, AnimationModel animationModel) { }

	// RVA: 0x16082C0 Offset: 0x16082C0 VA: 0x16082C0 Slot: 7
	public override void PlayGiveUpAnimation() { }

	// RVA: 0x16084CC Offset: 0x16084CC VA: 0x16084CC
	private void CloseAndOpenStuckAreYouSurePopUp() { }

	// RVA: 0x16083C4 Offset: 0x16083C4 VA: 0x16083C4
	private Tween PlayGiveUpAnimations() { }

	// RVA: 0x1608628 Offset: 0x1608628 VA: 0x1608628
	private Tween PlayHeaderTextMoveDownAnimation() { }

	// RVA: 0x1608604 Offset: 0x1608604 VA: 0x1608604
	private Tween PlayCoinTextMoveUpAnimation() { }

	// RVA: 0x160864C Offset: 0x160864C VA: 0x160864C
	private Tween PlayPlayOnButtonMoveDownAnimation() { }

	// RVA: 0x1608670 Offset: 0x1608670 VA: 0x1608670
	private Tween PlayRightButtonMoveDownAnimation() { }

	// RVA: 0x1608770 Offset: 0x1608770 VA: 0x1608770
	private Tween PlayExitButtonMoveUpAnimation() { }

	// RVA: 0x160885C Offset: 0x160885C VA: 0x160885C
	private Tween PlayPlayOnWithRewardedMoveDownAnimation() { }

	// RVA: 0x1608880 Offset: 0x1608880 VA: 0x1608880
	private Tween PlayGiveUpButtonMoveDownAnimation() { }

	// RVA: 0x16087A8 Offset: 0x16087A8 VA: 0x16087A8
	private Tween PlayMoveDownAnimation(AnimationDirection animationDirection, Transform targetTransform, AnimationModel animationModel) { }

	// RVA: 0x1608680 Offset: 0x1608680 VA: 0x1608680
	private Tween PlayBackgroundMoveDownAnimation() { }

	// RVA: 0x16088A4 Offset: 0x16088A4 VA: 0x16088A4 Slot: 8
	public override void PlayPlayOnAnimation() { }

	// RVA: 0x1608ABC Offset: 0x1608ABC VA: 0x1608ABC
	private void ClosePopUp() { }

	// RVA: 0x16089A8 Offset: 0x16089A8 VA: 0x16089A8
	private Tween OnPlayOnAnimations() { }

	// RVA: 0x1608B58 Offset: 0x1608B58 VA: 0x1608B58
	private Tween PlayHeaderTextExitAnimation() { }

	// RVA: 0x1608B7C Offset: 0x1608B7C VA: 0x1608B7C
	private Tween PlayPlayOnButtonExitAnimation() { }

	// RVA: 0x1608BA0 Offset: 0x1608BA0 VA: 0x1608BA0
	private Tween PlayRightButtonExitAnimation() { }

	// RVA: 0x1608D80 Offset: 0x1608D80 VA: 0x1608D80
	private Tween PlayGiveUpButtonExitAnimation() { }

	// RVA: 0x1608D5C Offset: 0x1608D5C VA: 0x1608D5C
	private Tween PlayOnWithRewardedExitAnimation() { }

	// RVA: 0x1608C60 Offset: 0x1608C60 VA: 0x1608C60
	private Tween PlayExitButtonExitAnimation() { }

	// RVA: 0x1608C84 Offset: 0x1608C84 VA: 0x1608C84
	private Tween PlayCoinExitAnimation() { }

	// RVA: 0x1608BB0 Offset: 0x1608BB0 VA: 0x1608BB0
	private Tween PlayBackgroundExitAnimation() { }

	// RVA: 0x1608CA8 Offset: 0x1608CA8 VA: 0x1608CA8
	private Tween PlayExitAnimation(AnimationDirection animationDirection, Transform targetTransform, AnimationModel animationModel) { }

	// RVA: 0x1607F20 Offset: 0x1607F20 VA: 0x1607F20
	private Vector3 GetTargetPosition(AnimationDirection animationDirection, Vector3 initialPosition) { }

	// RVA: 0x1608DA4 Offset: 0x1608DA4 VA: 0x1608DA4
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts