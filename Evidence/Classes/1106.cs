public class FailFlowAnimationConfig : ScriptableObject // TypeDefIndex: 1106
{
	// Fields
	public AnimationCurve TopPanelIntroduceAnimationCurve; // 0x18
	[Header("LevelText")]
	public float LevelTextInitialShowDelay; // 0x20
	public float LevelTextStuckHideDelay; // 0x24
	public float LevelTextQuitShowDelay; // 0x28
	public float LevelTextStuckShowDelay; // 0x2C
	public float LevelTextQuitHideDelay; // 0x30
	public float LevelTextShowDuration; // 0x34
	public float LevelTextHideDuration; // 0x38
	public float LevelIntroduceDelay; // 0x3C
	public AnimationCurve LevelIntroduceAnimationCurve; // 0x40
	[Header("BoosterButtons")]
	public float BoosterInitialShowDelay; // 0x48
	public float BoosterQuitShowDelay; // 0x4C
	public float BoosterQuitHideDelay; // 0x50
	public ButtonAnimationDirectionKind BoosterButtonDirection; // 0x54
	public AnimationModel LeftBooster; // 0x58
	public AnimationModel MiddleBooster; // 0x60
	public AnimationModel RightBooster; // 0x68
	public float BoosterLevelEnterDuration; // 0x70
	public float _stuckPopupBottleEnterDuration; // 0x74
	public float _stuckPopupBottleEnterDelay; // 0x78
	public Ease _stuckPopupBottleEnterEase; // 0x7C
	public float _stuckPopupBottlePlayOnDuration; // 0x80
	public float _stuckPopupBottlePlayOnDelay; // 0x84
	public Ease _stuckPopupBottlePlayOnEase; // 0x88
	public float _stuckPopupBottleGiveUpDuration; // 0x8C
	public float _stuckPopupBottleGiveUpDelay; // 0x90
	public AnimationCurve _stuckPopupBottleGiveUpEase; // 0x98
	public AnimationModel StuckPopupHeader; // 0xA0
	public AnimationModel StuckPopupPlayOnButton; // 0xA8
	public AnimationModel StuckPopupGiveUpButton; // 0xB0
	public AnimationModel StuckPopUpExitButton; // 0xB8
	public Vector3 _stuckPopupTopTextOffset; // 0xC0
	public Vector3 _stuckPopupBottomButtonsOffset; // 0xCC
	public Vector3 _stuckPopupBottomExitButtonOffset; // 0xD8
	public AnimationModel StuckPopupFilterBackground; // 0xE8
	public float StuckPopupBackgroundSwitchDurationOld; // 0xF0
	public AnimationCurve StuckPopupBackgroundSwitchOldAnimationCurve; // 0xF8
	public float StuckPopupBackgroundSwitchDurationNew; // 0x100
	public AnimationCurve StuckPopupBackgroundSwitchNewAnimationCurve; // 0x108
	[Header("StuckAreYouSurePopup")]
	public AnimationModel StuckAreYouSure; // 0x110
	public AnimationCurve StuckAreYouSureEnterAnimationCurve; // 0x118
	public AnimationCurve StuckAreYouSureMoveDownAnimationCurve; // 0x120
	public float StuckAreYouSureMoveDownDuration; // 0x128
	public float StuckAreYouSureMoveDownDelay; // 0x12C
	public float StuckAreYouSureContineBackgroundDelay; // 0x130
	public float StuckAreYouSureContineBackgroundDuration; // 0x134
	public float StuckAreYouSureCloseButtonScaleDuration; // 0x138
	public float _stuckAreYouSureOfferOffset; // 0x13C
	public float StuckAreYouSureCoinMoveTime; // 0x140
	public float StuckAreYouSureCoinMoveDuration; // 0x144
	public AnimationCurve StuckAreYouSureShowCoinMoveEase; // 0x148
	public AnimationCurve StuckAreYouSureHideCoinMoveEase; // 0x150
	[Header("TryAgain")]
	public AnimationModel TryAgain; // 0x158
	public Vector3 TryAgainInitialScale; // 0x160
	public AnimationCurve TryAgainAnimationCurve; // 0x170
	public float TryAgainQuitEnterDelay; // 0x178
	public float TryAgainStuckEnterDelay; // 0x17C

	// Methods

	// RVA: 0x16F91E8 Offset: 0x16F91E8 VA: 0x16F91E8
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts