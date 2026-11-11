public class KeyAnimationConfig : ScriptableObject // TypeDefIndex: 1490
{
	// Fields
	[SerializeField]
	[Header("Bezier")]
	[CompilerGenerated]
	private float <BezierDuration>k__BackingField; // 0x18
	[SerializeField]
	[CompilerGenerated]
	private float <BezierMoveTime>k__BackingField; // 0x1C
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <BezierSpeedCurve>k__BackingField; // 0x20
	[CompilerGenerated]
	[SerializeField]
	private float <AdditionalCeilingOffset>k__BackingField; // 0x28
	[SerializeField]
	[Header("Prepare Animation")]
	[CompilerGenerated]
	private float <KeyRevealParticleTime>k__BackingField; // 0x2C
	[SerializeField]
	[CompilerGenerated]
	private Vector3 <PrepareTopPosition>k__BackingField; // 0x30
	[SerializeField]
	[CompilerGenerated]
	private float <PrepareDuration>k__BackingField; // 0x3C
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <PrepareCurve>k__BackingField; // 0x40
	[CompilerGenerated]
	[SerializeField]
	private float <PrepareTime>k__BackingField; // 0x48
	[CompilerGenerated]
	[SerializeField]
	private float <EndTime>k__BackingField; // 0x4C
	[CompilerGenerated]
	[SerializeField]
	private float <RotateDuration>k__BackingField; // 0x50
	[SerializeField]
	[CompilerGenerated]
	private float <ScaleDuration>k__BackingField; // 0x54
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <ScaleCurve>k__BackingField; // 0x58
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <RotateCurve>k__BackingField; // 0x60
	[CompilerGenerated]
	[SerializeField]
	private float <RotateTime>k__BackingField; // 0x68
	[CompilerGenerated]
	[SerializeField]
	private float <ScaleTime>k__BackingField; // 0x6C
	[CompilerGenerated]
	[SerializeField]
	private float <KeyUnlockParticleTime>k__BackingField; // 0x70
	[CompilerGenerated]
	[SerializeField]
	private float <UnlockSoundTime>k__BackingField; // 0x74
	[CompilerGenerated]
	[SerializeField]
	private float <KeySfxTime>k__BackingField; // 0x78
	[CompilerGenerated]
	[SerializeField]
	private float <CompletedBySnitchScaleDuration>k__BackingField; // 0x7C
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <CompletedBySnitchScaleCurve>k__BackingField; // 0x80
	[SerializeField]
	[CompilerGenerated]
	[Header("Sprites")]
	private Sprite <WoodKeySprite>k__BackingField; // 0x88
	[SerializeField]
	[CompilerGenerated]
	private Sprite <MetalKeySprite>k__BackingField; // 0x90
	[SerializeField]
	[CompilerGenerated]
	private Sprite <GoldKeySprite>k__BackingField; // 0x98
	[CompilerGenerated]
	[Header("SpriteLibraries")]
	[SerializeField]
	private SpriteLibraryAsset <GrayKeyLibrary>k__BackingField; // 0xA0
	[SerializeField]
	[CompilerGenerated]
	private SpriteLibraryAsset <YellowKeyLibrary>k__BackingField; // 0xA8
	[SerializeField]
	[CompilerGenerated]
	private SpriteLibraryAsset <WhiteKeyLibrary>k__BackingField; // 0xB0
	[CompilerGenerated]
	[SerializeField]
	private SpriteLibraryAsset <OrangeKeyLibrary>k__BackingField; // 0xB8
	[CompilerGenerated]
	[SerializeField]
	private SpriteLibraryAsset <WineKeyLibrary>k__BackingField; // 0xC0
	[SerializeField]
	[CompilerGenerated]
	private SpriteLibraryAsset <GreenKeyLibrary>k__BackingField; // 0xC8
	[CompilerGenerated]
	[SerializeField]
	private SpriteLibraryAsset <GrayLockLibrary>k__BackingField; // 0xD0
	[CompilerGenerated]
	[SerializeField]
	private SpriteLibraryAsset <YellowLockLibrary>k__BackingField; // 0xD8
	[CompilerGenerated]
	[SerializeField]
	private SpriteLibraryAsset <OrangeLockLibrary>k__BackingField; // 0xE0
	[SerializeField]
	[CompilerGenerated]
	private SpriteLibraryAsset <WineLockLibrary>k__BackingField; // 0xE8
	[CompilerGenerated]
	[SerializeField]
	private SpriteLibraryAsset <GreenLockLibrary>k__BackingField; // 0xF0
	[CompilerGenerated]
	[SerializeField]
	private SpriteLibraryAsset <WhiteLockLibrary>k__BackingField; // 0xF8

	// Properties
	public float BezierDuration { get; set; }
	public float BezierMoveTime { get; set; }
	public AnimationCurve BezierSpeedCurve { get; set; }
	public float AdditionalCeilingOffset { get; set; }
	public float KeyRevealParticleTime { get; set; }
	public Vector3 PrepareTopPosition { get; set; }
	public float PrepareDuration { get; set; }
	public AnimationCurve PrepareCurve { get; set; }
	public float PrepareTime { get; set; }
	public float EndTime { get; set; }
	public float RotateDuration { get; set; }
	public float ScaleDuration { get; set; }
	public AnimationCurve ScaleCurve { get; set; }
	public AnimationCurve RotateCurve { get; set; }
	public float RotateTime { get; set; }
	public float ScaleTime { get; set; }
	public float KeyUnlockParticleTime { get; set; }
	public float UnlockSoundTime { get; set; }
	public float KeySfxTime { get; set; }
	public float CompletedBySnitchScaleDuration { get; set; }
	public AnimationCurve CompletedBySnitchScaleCurve { get; set; }
	public Sprite WoodKeySprite { get; set; }
	public Sprite MetalKeySprite { get; set; }
	public Sprite GoldKeySprite { get; set; }
	public SpriteLibraryAsset GrayKeyLibrary { get; set; }
	public SpriteLibraryAsset YellowKeyLibrary { get; set; }
	public SpriteLibraryAsset WhiteKeyLibrary { get; set; }
	public SpriteLibraryAsset OrangeKeyLibrary { get; set; }
	public SpriteLibraryAsset WineKeyLibrary { get; set; }
	public SpriteLibraryAsset GreenKeyLibrary { get; set; }
	public SpriteLibraryAsset GrayLockLibrary { get; set; }
	public SpriteLibraryAsset YellowLockLibrary { get; set; }
	public SpriteLibraryAsset OrangeLockLibrary { get; set; }
	public SpriteLibraryAsset WineLockLibrary { get; set; }
	public SpriteLibraryAsset GreenLockLibrary { get; set; }
	public SpriteLibraryAsset WhiteLockLibrary { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x248F438 Offset: 0x248F438 VA: 0x248F438
	public float get_BezierDuration() { }

	[CompilerGenerated]
	// RVA: 0x248F440 Offset: 0x248F440 VA: 0x248F440
	private void set_BezierDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x248F448 Offset: 0x248F448 VA: 0x248F448
	public float get_BezierMoveTime() { }

	[CompilerGenerated]
	// RVA: 0x248F450 Offset: 0x248F450 VA: 0x248F450
	private void set_BezierMoveTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x248F458 Offset: 0x248F458 VA: 0x248F458
	public AnimationCurve get_BezierSpeedCurve() { }

	[CompilerGenerated]
	// RVA: 0x248F460 Offset: 0x248F460 VA: 0x248F460
	private void set_BezierSpeedCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x248F468 Offset: 0x248F468 VA: 0x248F468
	public float get_AdditionalCeilingOffset() { }

	[CompilerGenerated]
	// RVA: 0x248F470 Offset: 0x248F470 VA: 0x248F470
	private void set_AdditionalCeilingOffset(float value) { }

	[CompilerGenerated]
	// RVA: 0x248F478 Offset: 0x248F478 VA: 0x248F478
	public float get_KeyRevealParticleTime() { }

	[CompilerGenerated]
	// RVA: 0x248F480 Offset: 0x248F480 VA: 0x248F480
	private void set_KeyRevealParticleTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x248F488 Offset: 0x248F488 VA: 0x248F488
	public Vector3 get_PrepareTopPosition() { }

	[CompilerGenerated]
	// RVA: 0x248F494 Offset: 0x248F494 VA: 0x248F494
	private void set_PrepareTopPosition(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x248F4A0 Offset: 0x248F4A0 VA: 0x248F4A0
	public float get_PrepareDuration() { }

	[CompilerGenerated]
	// RVA: 0x248F4A8 Offset: 0x248F4A8 VA: 0x248F4A8
	private void set_PrepareDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x248F4B0 Offset: 0x248F4B0 VA: 0x248F4B0
	public AnimationCurve get_PrepareCurve() { }

	[CompilerGenerated]
	// RVA: 0x248F4B8 Offset: 0x248F4B8 VA: 0x248F4B8
	private void set_PrepareCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x248F4C0 Offset: 0x248F4C0 VA: 0x248F4C0
	public float get_PrepareTime() { }

	[CompilerGenerated]
	// RVA: 0x248F4C8 Offset: 0x248F4C8 VA: 0x248F4C8
	private void set_PrepareTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x248F4D0 Offset: 0x248F4D0 VA: 0x248F4D0
	public float get_EndTime() { }

	[CompilerGenerated]
	// RVA: 0x248F4D8 Offset: 0x248F4D8 VA: 0x248F4D8
	private void set_EndTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x248F4E0 Offset: 0x248F4E0 VA: 0x248F4E0
	public float get_RotateDuration() { }

	[CompilerGenerated]
	// RVA: 0x248F4E8 Offset: 0x248F4E8 VA: 0x248F4E8
	private void set_RotateDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x248F4F0 Offset: 0x248F4F0 VA: 0x248F4F0
	public float get_ScaleDuration() { }

	[CompilerGenerated]
	// RVA: 0x248F4F8 Offset: 0x248F4F8 VA: 0x248F4F8
	private void set_ScaleDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x248F500 Offset: 0x248F500 VA: 0x248F500
	public AnimationCurve get_ScaleCurve() { }

	[CompilerGenerated]
	// RVA: 0x248F508 Offset: 0x248F508 VA: 0x248F508
	private void set_ScaleCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x248F510 Offset: 0x248F510 VA: 0x248F510
	public AnimationCurve get_RotateCurve() { }

	[CompilerGenerated]
	// RVA: 0x248F518 Offset: 0x248F518 VA: 0x248F518
	private void set_RotateCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x248F520 Offset: 0x248F520 VA: 0x248F520
	public float get_RotateTime() { }

	[CompilerGenerated]
	// RVA: 0x248F528 Offset: 0x248F528 VA: 0x248F528
	private void set_RotateTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x248F530 Offset: 0x248F530 VA: 0x248F530
	public float get_ScaleTime() { }

	[CompilerGenerated]
	// RVA: 0x248F538 Offset: 0x248F538 VA: 0x248F538
	private void set_ScaleTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x248F540 Offset: 0x248F540 VA: 0x248F540
	public float get_KeyUnlockParticleTime() { }

	[CompilerGenerated]
	// RVA: 0x248F548 Offset: 0x248F548 VA: 0x248F548
	private void set_KeyUnlockParticleTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x248F550 Offset: 0x248F550 VA: 0x248F550
	public float get_UnlockSoundTime() { }

	[CompilerGenerated]
	// RVA: 0x248F558 Offset: 0x248F558 VA: 0x248F558
	private void set_UnlockSoundTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x248F560 Offset: 0x248F560 VA: 0x248F560
	public float get_KeySfxTime() { }

	[CompilerGenerated]
	// RVA: 0x248F568 Offset: 0x248F568 VA: 0x248F568
	public void set_KeySfxTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x248F570 Offset: 0x248F570 VA: 0x248F570
	public float get_CompletedBySnitchScaleDuration() { }

	[CompilerGenerated]
	// RVA: 0x248F578 Offset: 0x248F578 VA: 0x248F578
	public void set_CompletedBySnitchScaleDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x248F580 Offset: 0x248F580 VA: 0x248F580
	public AnimationCurve get_CompletedBySnitchScaleCurve() { }

	[CompilerGenerated]
	// RVA: 0x248F588 Offset: 0x248F588 VA: 0x248F588
	public void set_CompletedBySnitchScaleCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x248F590 Offset: 0x248F590 VA: 0x248F590
	public Sprite get_WoodKeySprite() { }

	[CompilerGenerated]
	// RVA: 0x248F598 Offset: 0x248F598 VA: 0x248F598
	private void set_WoodKeySprite(Sprite value) { }

	[CompilerGenerated]
	// RVA: 0x248F5A0 Offset: 0x248F5A0 VA: 0x248F5A0
	public Sprite get_MetalKeySprite() { }

	[CompilerGenerated]
	// RVA: 0x248F5A8 Offset: 0x248F5A8 VA: 0x248F5A8
	private void set_MetalKeySprite(Sprite value) { }

	[CompilerGenerated]
	// RVA: 0x248F5B0 Offset: 0x248F5B0 VA: 0x248F5B0
	public Sprite get_GoldKeySprite() { }

	[CompilerGenerated]
	// RVA: 0x248F5B8 Offset: 0x248F5B8 VA: 0x248F5B8
	private void set_GoldKeySprite(Sprite value) { }

	[CompilerGenerated]
	// RVA: 0x248F5C0 Offset: 0x248F5C0 VA: 0x248F5C0
	public SpriteLibraryAsset get_GrayKeyLibrary() { }

	[CompilerGenerated]
	// RVA: 0x248F5C8 Offset: 0x248F5C8 VA: 0x248F5C8
	private void set_GrayKeyLibrary(SpriteLibraryAsset value) { }

	[CompilerGenerated]
	// RVA: 0x248F5D0 Offset: 0x248F5D0 VA: 0x248F5D0
	public SpriteLibraryAsset get_YellowKeyLibrary() { }

	[CompilerGenerated]
	// RVA: 0x248F5D8 Offset: 0x248F5D8 VA: 0x248F5D8
	private void set_YellowKeyLibrary(SpriteLibraryAsset value) { }

	[CompilerGenerated]
	// RVA: 0x248F5E0 Offset: 0x248F5E0 VA: 0x248F5E0
	public SpriteLibraryAsset get_WhiteKeyLibrary() { }

	[CompilerGenerated]
	// RVA: 0x248F5E8 Offset: 0x248F5E8 VA: 0x248F5E8
	private void set_WhiteKeyLibrary(SpriteLibraryAsset value) { }

	[CompilerGenerated]
	// RVA: 0x248F5F0 Offset: 0x248F5F0 VA: 0x248F5F0
	public SpriteLibraryAsset get_OrangeKeyLibrary() { }

	[CompilerGenerated]
	// RVA: 0x248F5F8 Offset: 0x248F5F8 VA: 0x248F5F8
	private void set_OrangeKeyLibrary(SpriteLibraryAsset value) { }

	[CompilerGenerated]
	// RVA: 0x248F600 Offset: 0x248F600 VA: 0x248F600
	public SpriteLibraryAsset get_WineKeyLibrary() { }

	[CompilerGenerated]
	// RVA: 0x248F608 Offset: 0x248F608 VA: 0x248F608
	private void set_WineKeyLibrary(SpriteLibraryAsset value) { }

	[CompilerGenerated]
	// RVA: 0x248F610 Offset: 0x248F610 VA: 0x248F610
	public SpriteLibraryAsset get_GreenKeyLibrary() { }

	[CompilerGenerated]
	// RVA: 0x248F618 Offset: 0x248F618 VA: 0x248F618
	private void set_GreenKeyLibrary(SpriteLibraryAsset value) { }

	[CompilerGenerated]
	// RVA: 0x248F620 Offset: 0x248F620 VA: 0x248F620
	public SpriteLibraryAsset get_GrayLockLibrary() { }

	[CompilerGenerated]
	// RVA: 0x248F628 Offset: 0x248F628 VA: 0x248F628
	private void set_GrayLockLibrary(SpriteLibraryAsset value) { }

	[CompilerGenerated]
	// RVA: 0x248F630 Offset: 0x248F630 VA: 0x248F630
	public SpriteLibraryAsset get_YellowLockLibrary() { }

	[CompilerGenerated]
	// RVA: 0x248F638 Offset: 0x248F638 VA: 0x248F638
	private void set_YellowLockLibrary(SpriteLibraryAsset value) { }

	[CompilerGenerated]
	// RVA: 0x248F640 Offset: 0x248F640 VA: 0x248F640
	public SpriteLibraryAsset get_OrangeLockLibrary() { }

	[CompilerGenerated]
	// RVA: 0x248F648 Offset: 0x248F648 VA: 0x248F648
	private void set_OrangeLockLibrary(SpriteLibraryAsset value) { }

	[CompilerGenerated]
	// RVA: 0x248F650 Offset: 0x248F650 VA: 0x248F650
	public SpriteLibraryAsset get_WineLockLibrary() { }

	[CompilerGenerated]
	// RVA: 0x248F658 Offset: 0x248F658 VA: 0x248F658
	private void set_WineLockLibrary(SpriteLibraryAsset value) { }

	[CompilerGenerated]
	// RVA: 0x248F660 Offset: 0x248F660 VA: 0x248F660
	public SpriteLibraryAsset get_GreenLockLibrary() { }

	[CompilerGenerated]
	// RVA: 0x248F668 Offset: 0x248F668 VA: 0x248F668
	private void set_GreenLockLibrary(SpriteLibraryAsset value) { }

	[CompilerGenerated]
	// RVA: 0x248F670 Offset: 0x248F670 VA: 0x248F670
	public SpriteLibraryAsset get_WhiteLockLibrary() { }

	[CompilerGenerated]
	// RVA: 0x248F678 Offset: 0x248F678 VA: 0x248F678
	private void set_WhiteLockLibrary(SpriteLibraryAsset value) { }

	// RVA: 0x248F680 Offset: 0x248F680 VA: 0x248F680
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.BoardItems.Scripts.KeyAndLock.Key