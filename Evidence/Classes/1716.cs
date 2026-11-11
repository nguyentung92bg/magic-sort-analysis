public class DuckAnimationConfig : ScriptableObject // TypeDefIndex: 1716
{
	// Fields
	[Header("Bezier")]
	[SerializeField]
	[CompilerGenerated]
	private float <BezierDuration>k__BackingField; // 0x18
	[SerializeField]
	[CompilerGenerated]
	private float <BezierMoveTime>k__BackingField; // 0x1C
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <BezierSpeedCurve>k__BackingField; // 0x20
	[SerializeField]
	[CompilerGenerated]
	private float <AdditionalCeilingOffset>k__BackingField; // 0x28
	[CompilerGenerated]
	[Header("Prepare Animation")]
	[SerializeField]
	private Vector3 <PrepareTopPosition>k__BackingField; // 0x2C
	[SerializeField]
	[CompilerGenerated]
	private float <PrepareDuration>k__BackingField; // 0x38
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <PrepareCurve>k__BackingField; // 0x40
	[Header("Squeeze Animation")]
	[CompilerGenerated]
	[SerializeField]
	private float <SqueezeAnimTime>k__BackingField; // 0x48
	[SerializeField]
	[CompilerGenerated]
	private float <SqueezeAnimDuration>k__BackingField; // 0x4C
	[CompilerGenerated]
	[SerializeField]
	private Vector3 <SqueezeAnimValue>k__BackingField; // 0x50
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <SqueezeCurve>k__BackingField; // 0x60
	[CompilerGenerated]
	[SerializeField]
	private float <PrepareFadeTime>k__BackingField; // 0x68
	[SerializeField]
	[CompilerGenerated]
	private float <PrepareFadeDuration>k__BackingField; // 0x6C
	[SerializeField]
	[CompilerGenerated]
	private float <RevealTime>k__BackingField; // 0x70
	[SerializeField]
	[Header("Slow Down Animation")]
	[CompilerGenerated]
	private float <SlowDownAnimTime>k__BackingField; // 0x74
	[SerializeField]
	[CompilerGenerated]
	private float <SlowDownDuration>k__BackingField; // 0x78
	[CompilerGenerated]
	[SerializeField]
	private Vector3 <SlowDownScaleValue>k__BackingField; // 0x7C
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <SlowDownCurve>k__BackingField; // 0x88
	[Header("Stretch Back Animation")]
	[SerializeField]
	[CompilerGenerated]
	private float <StretchBackAnimTime>k__BackingField; // 0x90
	[CompilerGenerated]
	[SerializeField]
	private float <StretchBackDuration>k__BackingField; // 0x94
	[CompilerGenerated]
	[SerializeField]
	private Vector3 <StretchBackAnimValue>k__BackingField; // 0x98
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <StretchBackCurve>k__BackingField; // 0xA8
	[SerializeField]
	[Header("Reveal Rotation Animation")]
	[CompilerGenerated]
	private float <RotationAnimTime>k__BackingField; // 0xB0
	[SerializeField]
	[CompilerGenerated]
	private float <RotationAnimDuration>k__BackingField; // 0xB4
	[CompilerGenerated]
	[SerializeField]
	private Vector3 <RotationAnimValue>k__BackingField; // 0xB8
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <RotationAnimCurve>k__BackingField; // 0xC8
	[SerializeField]
	[CompilerGenerated]
	private float <HitParticleTime>k__BackingField; // 0xD0
	[SerializeField]
	[CompilerGenerated]
	private float <PrepareTime>k__BackingField; // 0xD4
	[CompilerGenerated]
	[SerializeField]
	private float <EndTime>k__BackingField; // 0xD8
	[CompilerGenerated]
	[SerializeField]
	private float <RotateDuration>k__BackingField; // 0xDC
	[CompilerGenerated]
	[SerializeField]
	private float <ScaleDuration>k__BackingField; // 0xE0
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <ScaleCurve>k__BackingField; // 0xE8
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <RotateCurve>k__BackingField; // 0xF0
	[SerializeField]
	[CompilerGenerated]
	private float <ScaleTime>k__BackingField; // 0xF8
	[CompilerGenerated]
	[SerializeField]
	private float <KeyUnlockParticleTime>k__BackingField; // 0xFC
	[CompilerGenerated]
	[SerializeField]
	private float <UnlockSoundTime>k__BackingField; // 0x100
	[CompilerGenerated]
	[SerializeField]
	private float <KeySfxTime>k__BackingField; // 0x104
	[CompilerGenerated]
	[Header("Hiding Animation")]
	[SerializeField]
	private float <HideTime>k__BackingField; // 0x108
	[CompilerGenerated]
	[SerializeField]
	private float <HideDuration>k__BackingField; // 0x10C
	[CompilerGenerated]
	[SerializeField]
	private Vector3 <HideAnimScaleValue>k__BackingField; // 0x110
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <HideCurve>k__BackingField; // 0x120
	[CompilerGenerated]
	[SerializeField]
	private float <FadeOutTime>k__BackingField; // 0x128
	[CompilerGenerated]
	[SerializeField]
	private float <FadeOutDuration>k__BackingField; // 0x12C
	[Header("Snitch Animation")]
	[CompilerGenerated]
	[SerializeField]
	private float <CompletedBySnitchScaleDuration>k__BackingField; // 0x130
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <CompletedBySnitchScaleCurve>k__BackingField; // 0x138
	[Header("Duck Sprites")]
	[SerializeField]
	private DuckViewConfigData[] _data; // 0x140

	// Properties
	public float BezierDuration { get; set; }
	public float BezierMoveTime { get; set; }
	public AnimationCurve BezierSpeedCurve { get; set; }
	public float AdditionalCeilingOffset { get; set; }
	public Vector3 PrepareTopPosition { get; set; }
	public float PrepareDuration { get; set; }
	public AnimationCurve PrepareCurve { get; set; }
	public float SqueezeAnimTime { get; set; }
	public float SqueezeAnimDuration { get; set; }
	public Vector3 SqueezeAnimValue { get; set; }
	public AnimationCurve SqueezeCurve { get; set; }
	public float PrepareFadeTime { get; set; }
	public float PrepareFadeDuration { get; set; }
	public float RevealTime { get; set; }
	public float SlowDownAnimTime { get; set; }
	public float SlowDownDuration { get; set; }
	public Vector3 SlowDownScaleValue { get; set; }
	public AnimationCurve SlowDownCurve { get; set; }
	public float StretchBackAnimTime { get; set; }
	public float StretchBackDuration { get; set; }
	public Vector3 StretchBackAnimValue { get; set; }
	public AnimationCurve StretchBackCurve { get; set; }
	public float RotationAnimTime { get; set; }
	public float RotationAnimDuration { get; set; }
	public Vector3 RotationAnimValue { get; set; }
	public AnimationCurve RotationAnimCurve { get; set; }
	public float HitParticleTime { get; set; }
	public float PrepareTime { get; set; }
	public float EndTime { get; set; }
	public float RotateDuration { get; set; }
	public float ScaleDuration { get; set; }
	public AnimationCurve ScaleCurve { get; set; }
	public AnimationCurve RotateCurve { get; set; }
	public float ScaleTime { get; set; }
	public float KeyUnlockParticleTime { get; set; }
	public float UnlockSoundTime { get; set; }
	public float KeySfxTime { get; set; }
	public float HideTime { get; set; }
	public float HideDuration { get; set; }
	public Vector3 HideAnimScaleValue { get; set; }
	public AnimationCurve HideCurve { get; set; }
	public float FadeOutTime { get; set; }
	public float FadeOutDuration { get; set; }
	public float CompletedBySnitchScaleDuration { get; set; }
	public AnimationCurve CompletedBySnitchScaleCurve { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x2755FCC Offset: 0x2755FCC VA: 0x2755FCC
	public float get_BezierDuration() { }

	[CompilerGenerated]
	// RVA: 0x2755FD4 Offset: 0x2755FD4 VA: 0x2755FD4
	private void set_BezierDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x2755FDC Offset: 0x2755FDC VA: 0x2755FDC
	public float get_BezierMoveTime() { }

	[CompilerGenerated]
	// RVA: 0x2755FE4 Offset: 0x2755FE4 VA: 0x2755FE4
	private void set_BezierMoveTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x2755FEC Offset: 0x2755FEC VA: 0x2755FEC
	public AnimationCurve get_BezierSpeedCurve() { }

	[CompilerGenerated]
	// RVA: 0x2755FF4 Offset: 0x2755FF4 VA: 0x2755FF4
	private void set_BezierSpeedCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x2755FFC Offset: 0x2755FFC VA: 0x2755FFC
	public float get_AdditionalCeilingOffset() { }

	[CompilerGenerated]
	// RVA: 0x2756004 Offset: 0x2756004 VA: 0x2756004
	private void set_AdditionalCeilingOffset(float value) { }

	[CompilerGenerated]
	// RVA: 0x275600C Offset: 0x275600C VA: 0x275600C
	public Vector3 get_PrepareTopPosition() { }

	[CompilerGenerated]
	// RVA: 0x2756018 Offset: 0x2756018 VA: 0x2756018
	private void set_PrepareTopPosition(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x2756024 Offset: 0x2756024 VA: 0x2756024
	public float get_PrepareDuration() { }

	[CompilerGenerated]
	// RVA: 0x275602C Offset: 0x275602C VA: 0x275602C
	private void set_PrepareDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x2756034 Offset: 0x2756034 VA: 0x2756034
	public AnimationCurve get_PrepareCurve() { }

	[CompilerGenerated]
	// RVA: 0x275603C Offset: 0x275603C VA: 0x275603C
	private void set_PrepareCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x2756044 Offset: 0x2756044 VA: 0x2756044
	public float get_SqueezeAnimTime() { }

	[CompilerGenerated]
	// RVA: 0x275604C Offset: 0x275604C VA: 0x275604C
	private void set_SqueezeAnimTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x2756054 Offset: 0x2756054 VA: 0x2756054
	public float get_SqueezeAnimDuration() { }

	[CompilerGenerated]
	// RVA: 0x275605C Offset: 0x275605C VA: 0x275605C
	private void set_SqueezeAnimDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x2756064 Offset: 0x2756064 VA: 0x2756064
	public Vector3 get_SqueezeAnimValue() { }

	[CompilerGenerated]
	// RVA: 0x2756070 Offset: 0x2756070 VA: 0x2756070
	private void set_SqueezeAnimValue(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x275607C Offset: 0x275607C VA: 0x275607C
	public AnimationCurve get_SqueezeCurve() { }

	[CompilerGenerated]
	// RVA: 0x2756084 Offset: 0x2756084 VA: 0x2756084
	private void set_SqueezeCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x275608C Offset: 0x275608C VA: 0x275608C
	public float get_PrepareFadeTime() { }

	[CompilerGenerated]
	// RVA: 0x2756094 Offset: 0x2756094 VA: 0x2756094
	private void set_PrepareFadeTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x275609C Offset: 0x275609C VA: 0x275609C
	public float get_PrepareFadeDuration() { }

	[CompilerGenerated]
	// RVA: 0x27560A4 Offset: 0x27560A4 VA: 0x27560A4
	private void set_PrepareFadeDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x27560AC Offset: 0x27560AC VA: 0x27560AC
	public float get_RevealTime() { }

	[CompilerGenerated]
	// RVA: 0x27560B4 Offset: 0x27560B4 VA: 0x27560B4
	private void set_RevealTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x27560BC Offset: 0x27560BC VA: 0x27560BC
	public float get_SlowDownAnimTime() { }

	[CompilerGenerated]
	// RVA: 0x27560C4 Offset: 0x27560C4 VA: 0x27560C4
	private void set_SlowDownAnimTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x27560CC Offset: 0x27560CC VA: 0x27560CC
	public float get_SlowDownDuration() { }

	[CompilerGenerated]
	// RVA: 0x27560D4 Offset: 0x27560D4 VA: 0x27560D4
	private void set_SlowDownDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x27560DC Offset: 0x27560DC VA: 0x27560DC
	public Vector3 get_SlowDownScaleValue() { }

	[CompilerGenerated]
	// RVA: 0x27560E8 Offset: 0x27560E8 VA: 0x27560E8
	private void set_SlowDownScaleValue(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x27560F4 Offset: 0x27560F4 VA: 0x27560F4
	public AnimationCurve get_SlowDownCurve() { }

	[CompilerGenerated]
	// RVA: 0x27560FC Offset: 0x27560FC VA: 0x27560FC
	private void set_SlowDownCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x2756104 Offset: 0x2756104 VA: 0x2756104
	public float get_StretchBackAnimTime() { }

	[CompilerGenerated]
	// RVA: 0x275610C Offset: 0x275610C VA: 0x275610C
	private void set_StretchBackAnimTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x2756114 Offset: 0x2756114 VA: 0x2756114
	public float get_StretchBackDuration() { }

	[CompilerGenerated]
	// RVA: 0x275611C Offset: 0x275611C VA: 0x275611C
	private void set_StretchBackDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x2756124 Offset: 0x2756124 VA: 0x2756124
	public Vector3 get_StretchBackAnimValue() { }

	[CompilerGenerated]
	// RVA: 0x2756130 Offset: 0x2756130 VA: 0x2756130
	private void set_StretchBackAnimValue(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x275613C Offset: 0x275613C VA: 0x275613C
	public AnimationCurve get_StretchBackCurve() { }

	[CompilerGenerated]
	// RVA: 0x2756144 Offset: 0x2756144 VA: 0x2756144
	private void set_StretchBackCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x275614C Offset: 0x275614C VA: 0x275614C
	public float get_RotationAnimTime() { }

	[CompilerGenerated]
	// RVA: 0x2756154 Offset: 0x2756154 VA: 0x2756154
	private void set_RotationAnimTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x275615C Offset: 0x275615C VA: 0x275615C
	public float get_RotationAnimDuration() { }

	[CompilerGenerated]
	// RVA: 0x2756164 Offset: 0x2756164 VA: 0x2756164
	private void set_RotationAnimDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x275616C Offset: 0x275616C VA: 0x275616C
	public Vector3 get_RotationAnimValue() { }

	[CompilerGenerated]
	// RVA: 0x2756178 Offset: 0x2756178 VA: 0x2756178
	private void set_RotationAnimValue(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x2756184 Offset: 0x2756184 VA: 0x2756184
	public AnimationCurve get_RotationAnimCurve() { }

	[CompilerGenerated]
	// RVA: 0x275618C Offset: 0x275618C VA: 0x275618C
	private void set_RotationAnimCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x2756194 Offset: 0x2756194 VA: 0x2756194
	public float get_HitParticleTime() { }

	[CompilerGenerated]
	// RVA: 0x275619C Offset: 0x275619C VA: 0x275619C
	private void set_HitParticleTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x27561A4 Offset: 0x27561A4 VA: 0x27561A4
	public float get_PrepareTime() { }

	[CompilerGenerated]
	// RVA: 0x27561AC Offset: 0x27561AC VA: 0x27561AC
	private void set_PrepareTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x27561B4 Offset: 0x27561B4 VA: 0x27561B4
	public float get_EndTime() { }

	[CompilerGenerated]
	// RVA: 0x27561BC Offset: 0x27561BC VA: 0x27561BC
	private void set_EndTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x27561C4 Offset: 0x27561C4 VA: 0x27561C4
	public float get_RotateDuration() { }

	[CompilerGenerated]
	// RVA: 0x27561CC Offset: 0x27561CC VA: 0x27561CC
	private void set_RotateDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x27561D4 Offset: 0x27561D4 VA: 0x27561D4
	public float get_ScaleDuration() { }

	[CompilerGenerated]
	// RVA: 0x27561DC Offset: 0x27561DC VA: 0x27561DC
	private void set_ScaleDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x27561E4 Offset: 0x27561E4 VA: 0x27561E4
	public AnimationCurve get_ScaleCurve() { }

	[CompilerGenerated]
	// RVA: 0x27561EC Offset: 0x27561EC VA: 0x27561EC
	private void set_ScaleCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x27561F4 Offset: 0x27561F4 VA: 0x27561F4
	public AnimationCurve get_RotateCurve() { }

	[CompilerGenerated]
	// RVA: 0x27561FC Offset: 0x27561FC VA: 0x27561FC
	private void set_RotateCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x2756204 Offset: 0x2756204 VA: 0x2756204
	public float get_ScaleTime() { }

	[CompilerGenerated]
	// RVA: 0x275620C Offset: 0x275620C VA: 0x275620C
	private void set_ScaleTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x2756214 Offset: 0x2756214 VA: 0x2756214
	public float get_KeyUnlockParticleTime() { }

	[CompilerGenerated]
	// RVA: 0x275621C Offset: 0x275621C VA: 0x275621C
	private void set_KeyUnlockParticleTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x2756224 Offset: 0x2756224 VA: 0x2756224
	public float get_UnlockSoundTime() { }

	[CompilerGenerated]
	// RVA: 0x275622C Offset: 0x275622C VA: 0x275622C
	private void set_UnlockSoundTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x2756234 Offset: 0x2756234 VA: 0x2756234
	public float get_KeySfxTime() { }

	[CompilerGenerated]
	// RVA: 0x275623C Offset: 0x275623C VA: 0x275623C
	public void set_KeySfxTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x2756244 Offset: 0x2756244 VA: 0x2756244
	public float get_HideTime() { }

	[CompilerGenerated]
	// RVA: 0x275624C Offset: 0x275624C VA: 0x275624C
	private void set_HideTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x2756254 Offset: 0x2756254 VA: 0x2756254
	public float get_HideDuration() { }

	[CompilerGenerated]
	// RVA: 0x275625C Offset: 0x275625C VA: 0x275625C
	private void set_HideDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x2756264 Offset: 0x2756264 VA: 0x2756264
	public Vector3 get_HideAnimScaleValue() { }

	[CompilerGenerated]
	// RVA: 0x2756274 Offset: 0x2756274 VA: 0x2756274
	private void set_HideAnimScaleValue(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x2756284 Offset: 0x2756284 VA: 0x2756284
	public AnimationCurve get_HideCurve() { }

	[CompilerGenerated]
	// RVA: 0x275628C Offset: 0x275628C VA: 0x275628C
	private void set_HideCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x275629C Offset: 0x275629C VA: 0x275629C
	public float get_FadeOutTime() { }

	[CompilerGenerated]
	// RVA: 0x27562A4 Offset: 0x27562A4 VA: 0x27562A4
	private void set_FadeOutTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x27562AC Offset: 0x27562AC VA: 0x27562AC
	public float get_FadeOutDuration() { }

	[CompilerGenerated]
	// RVA: 0x27562B4 Offset: 0x27562B4 VA: 0x27562B4
	private void set_FadeOutDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x27562BC Offset: 0x27562BC VA: 0x27562BC
	public float get_CompletedBySnitchScaleDuration() { }

	[CompilerGenerated]
	// RVA: 0x27562C4 Offset: 0x27562C4 VA: 0x27562C4
	public void set_CompletedBySnitchScaleDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x27562CC Offset: 0x27562CC VA: 0x27562CC
	public AnimationCurve get_CompletedBySnitchScaleCurve() { }

	[CompilerGenerated]
	// RVA: 0x27562D4 Offset: 0x27562D4 VA: 0x27562D4
	public void set_CompletedBySnitchScaleCurve(AnimationCurve value) { }

	// RVA: 0x27562E4 Offset: 0x27562E4 VA: 0x27562E4
	public bool TryGetDuckSprite(DuckType duckType, out Sprite sprite) { }

	// RVA: 0x275636C Offset: 0x275636C VA: 0x275636C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.Board.Items.Scripts.Duck
[CreateAssetMenu(fileName = "DuckHouseAnimationConfig", menuName = "Configs/DuckHouseAnimationConfig")]