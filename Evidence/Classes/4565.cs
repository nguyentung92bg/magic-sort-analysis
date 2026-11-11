public class CollectionAnimationConfig : ScriptableObject // TypeDefIndex: 4565
{
	// Fields
	[Header("Pack Opening Sequence")]
	public Vector3 OpeningPosition; // 0x18
	public float OpeningPositionMoveDuration; // 0x24
	public AnimationCurve OpeningPositionMoveCurve; // 0x28
	public float OpeningCardMoveInterval; // 0x30
	public float OpeningCardMoveDuration; // 0x34
	public float OpeningCardMoveXDuration; // 0x38
	public float OpeningCardMoveYDuration; // 0x3C
	public float OpeningCardScaleDuration; // 0x40
	public AnimationCurve OpeningCardMoveXCurve; // 0x48
	public AnimationCurve OpeningCardMoveYCurve; // 0x50
	public float OpeningCardScale; // 0x58
	public float OpeningTitleHideDelay; // 0x5C
	public Vector3 OpeningOtherPackMoveStartPosition; // 0x60
	public float CardRevealAnimationDelay; // 0x6C
	public float CardRevealAnimationStartScale; // 0x70
	public AnimationClip CardPackOpenClip; // 0x78
	public AnimationClip CardPackOpenInstantClip; // 0x80
	public AnimationClip CardPackExitClip; // 0x88
	public AnimationClip CardPackIdleAnim; // 0x90
	public float PackCapSoundFxTime; // 0x98
	public float OpeningCardRotationTime; // 0x9C
	public float OpeningCardRotationDuration; // 0xA0
	public float OpeningCardRotationResetTime; // 0xA4
	public float CardPackOpenInstantTime; // 0xA8
	[Header("Claim Sequence - New Cards")]
	public float NewCardScaleOutDuration; // 0xAC
	public AnimationCurve NewCardScaleOutCurve; // 0xB0
	public float NewCardParticleDelay; // 0xB8
	public float NewCardParticleStopDelay; // 0xBC
	public float NewCardDuplicatedWaitDuration; // 0xC0
	[Header("Claim Sequence - Duplicate Cards")]
	public float DuplicateCardScaleOutDuration; // 0xC4
	public AnimationCurve DuplicateCardScaleOutCurve; // 0xC8
	public float DuplicateCardParticleDelay; // 0xD0
	public float DuplicateCardParticleStopDelay; // 0xD4
	public float DuplicateStarsCreateDelay; // 0xD8
	public float DuplicateStarsMoveDelay; // 0xDC
	[Header("Claim Sequence - Bonus Chest")]
	public float BonusChestShowDelay; // 0xE0
	public float BonusChestShowDuration; // 0xE4
	public float BonusChestHideMoveDelay; // 0xE8
	public float BonusChestDisableDelay; // 0xEC
	public float BonusChestEndDelay; // 0xF0
	public Vector3 BonusChestHideMovePosition; // 0xF4
	[Header("Complete Sequence")]
	public AnimationClip CompleteChestIntroAnimClip; // 0x100
	public float CompleteBottomTextScaleInTime; // 0x108
	public float CompleteBottomTextScaleInDuration; // 0x10C
	public AnimationCurve CompleteBottomTextScaleInCurve; // 0x110
	public AnimationCurve CompleteBottomTextScaleOutCurve; // 0x118
	public float CompleteBottomTextScaleOutDuration; // 0x120
	public AnimationCurve CompleteBackgroundFadeInCurve; // 0x128
	public float CompleteBackgroundFadeInDuration; // 0x130
	public float CompleteBackgroundFadeInValue; // 0x134
	public float CompleteBackgroundFadeOutDuration; // 0x138
	public AnimationCurve CompleteBackgroundFadeOutCurve; // 0x140
	public float CompleteTokenCurrencyMoveDelay; // 0x148
	public float CompleteTokenCurrencyMoveDuration; // 0x14C
	public AnimationCurve CompleteTokenCurrencyMoveCurve; // 0x150
	public float CompleteTokenCurrencyScaleDuration; // 0x158
	public AnimationCurve CompleteTokenCurrencyScaleCurve; // 0x160
	public Vector3 CompleteTokenTargetRotation; // 0x168
	public float CompleteTokenRotationDuration; // 0x174
	public float CompleteTokenRotationLoopDuration; // 0x178
	public Vector3 CompleteTokenTargetLoopRotation; // 0x17C
	public Vector3 CompleteTokenPositionOffset; // 0x188
	public float CompleteCurrencyMoveDelay; // 0x194
	public float CompleteCurrencyMoveDuration; // 0x198
	public AnimationCurve CompleteCurrencyMoveCurve; // 0x1A0
	public float CompleteCurrencyScaleDuration; // 0x1A8
	public AnimationCurve CompleteCurrencyScaleCurve; // 0x1B0
	public int CurrencySortOrder; // 0x1B8
	public float CompleteTokenMoveDelay; // 0x1BC
	public float CompleteTokenMoveDuration; // 0x1C0
	public AnimationCurve CompleteTokenMoveCurve; // 0x1C8
	public float CompleteTokenScale; // 0x1D0
	public float CompleteTokenScaleDuration; // 0x1D4
	public AnimationCurve CompleteTokenScaleCurve; // 0x1D8
	public float CompleteChestScaleOutDuration; // 0x1E0
	public float CompleteInfoTextScaleInDelay; // 0x1E4
	public float CompleteInfoTextScaleInDuration; // 0x1E8
	public AnimationCurve CompleteInfoTextScaleInCurve; // 0x1F0
	public float CompleteProfileInfoScaleInDelay; // 0x1F8
	public float CompleteProfileInfoScaleInDuration; // 0x1FC
	public AnimationCurve CompleteProfileInfoScaleInCurve; // 0x200
	public float CompleteEquipButtonScaleInDelay; // 0x208
	public float CompleteEquipButtonScaleInDuration; // 0x20C
	public AnimationCurve CompleteEquipButtonScaleInCurve; // 0x210
	public Vector3 CompleteTokenSpotlightOffset; // 0x218
	[Header("Themes Popup - Card Select")]
	public AnimationCurve CardSelectMoveCurve; // 0x228
	public float CardSelectMoveDuration; // 0x230
	public float CardSelectScaleAmount; // 0x234

	// Methods

	// RVA: 0x37752BC Offset: 0x37752BC VA: 0x37752BC
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Collection.Scripts.UI