public class MosaicAnimationConfig : ScriptableObject // TypeDefIndex: 1654
{
	// Fields
	[SerializeField]
	[Header("Bottle Reveal Animations")]
	[CompilerGenerated]
	private Vector3 <BottleStartScale>k__BackingField; // 0x18
	[SerializeField]
	[CompilerGenerated]
	private float <BottleScaleDuration>k__BackingField; // 0x24
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <BottleScaleCurve>k__BackingField; // 0x28
	[CompilerGenerated]
	[SerializeField]
	private Vector3 <BottlePunchRotationTarget>k__BackingField; // 0x30
	[SerializeField]
	[CompilerGenerated]
	private float <BottlePunchRotationDuration>k__BackingField; // 0x3C
	[CompilerGenerated]
	[SerializeField]
	private int <BottlePunchRotationVibrato>k__BackingField; // 0x40
	[CompilerGenerated]
	[SerializeField]
	private float <BottleWaterShakeDelay>k__BackingField; // 0x44
	[CompilerGenerated]
	[SerializeField]
	private float <BottleYMoveTarget>k__BackingField; // 0x48
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <BottleMoveYCurve>k__BackingField; // 0x50
	[SerializeField]
	[CompilerGenerated]
	private float <BottleYMoveDuration>k__BackingField; // 0x58
	[CompilerGenerated]
	[SerializeField]
	private float <RandomOffsetTimeBetweenBottles>k__BackingField; // 0x5C
	[SerializeField]
	[CompilerGenerated]
	private List<MosaicConfigsForSize> <MosaicConfigs>k__BackingField; // 0x60
	[SerializeField]
	[Header("Progress Animations")]
	[CompilerGenerated]
	private float <TrailMoveDelay>k__BackingField; // 0x68
	[SerializeField]
	[CompilerGenerated]
	private float <TrailMoveDuration>k__BackingField; // 0x6C
	[SerializeField]
	[CompilerGenerated]
	private float <TargetHideDelay>k__BackingField; // 0x70
	[SerializeField]
	[CompilerGenerated]
	private float <ShutterAnimationDelay>k__BackingField; // 0x74
	[SerializeField]
	[CompilerGenerated]
	private float <TrailSpawnRandomDelay>k__BackingField; // 0x78
	[SerializeField]
	[CompilerGenerated]
	private float <TargetSwingRandomDelay>k__BackingField; // 0x7C
	[CompilerGenerated]
	[SerializeField]
	private float <TrailSpawnDelay>k__BackingField; // 0x80
	[Header("Animation Clips")]
	public List<AnimationClip> OpenClips; // 0x88
	public List<AnimationClip> IdleClips; // 0x90
	public List<AnimationClip> TargetBreakClips; // 0x98
	public List<AnimationClip> TargetIdleClips; // 0xA0
	public List<AnimationClip> TargetSwingClips; // 0xA8
	[SerializeField]
	private List<MosaicAnimationConfig.TargetTypeHeight> _pivotHeights; // 0xB0
	[Header("Trail Colors")]
	[SerializeField]
	private MosaicTrailColors _defaultTrailColors; // 0xB8
	[SerializeField]
	private List<MosaicTrailColorsForTargetColor> _trailColors; // 0xC0

	// Properties
	public Vector3 BottleStartScale { get; set; }
	public float BottleScaleDuration { get; set; }
	public AnimationCurve BottleScaleCurve { get; set; }
	public Vector3 BottlePunchRotationTarget { get; set; }
	public float BottlePunchRotationDuration { get; set; }
	public int BottlePunchRotationVibrato { get; set; }
	public float BottleWaterShakeDelay { get; set; }
	public float BottleYMoveTarget { get; set; }
	public AnimationCurve BottleMoveYCurve { get; set; }
	public float BottleYMoveDuration { get; set; }
	public float RandomOffsetTimeBetweenBottles { get; set; }
	public List<MosaicConfigsForSize> MosaicConfigs { get; set; }
	public float TrailMoveDelay { get; set; }
	public float TrailMoveDuration { get; set; }
	public float TargetHideDelay { get; set; }
	public float ShutterAnimationDelay { get; set; }
	public float TrailSpawnRandomDelay { get; set; }
	public float TargetSwingRandomDelay { get; set; }
	public float TrailSpawnDelay { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x2745E08 Offset: 0x2745E08 VA: 0x2745E08
	public Vector3 get_BottleStartScale() { }

	[CompilerGenerated]
	// RVA: 0x2745E14 Offset: 0x2745E14 VA: 0x2745E14
	private void set_BottleStartScale(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x2745E20 Offset: 0x2745E20 VA: 0x2745E20
	public float get_BottleScaleDuration() { }

	[CompilerGenerated]
	// RVA: 0x2745E28 Offset: 0x2745E28 VA: 0x2745E28
	private void set_BottleScaleDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x2745E30 Offset: 0x2745E30 VA: 0x2745E30
	public AnimationCurve get_BottleScaleCurve() { }

	[CompilerGenerated]
	// RVA: 0x2745E38 Offset: 0x2745E38 VA: 0x2745E38
	private void set_BottleScaleCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x2745E40 Offset: 0x2745E40 VA: 0x2745E40
	public Vector3 get_BottlePunchRotationTarget() { }

	[CompilerGenerated]
	// RVA: 0x2745E4C Offset: 0x2745E4C VA: 0x2745E4C
	private void set_BottlePunchRotationTarget(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x2745E58 Offset: 0x2745E58 VA: 0x2745E58
	public float get_BottlePunchRotationDuration() { }

	[CompilerGenerated]
	// RVA: 0x2745E60 Offset: 0x2745E60 VA: 0x2745E60
	private void set_BottlePunchRotationDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x2745E68 Offset: 0x2745E68 VA: 0x2745E68
	public int get_BottlePunchRotationVibrato() { }

	[CompilerGenerated]
	// RVA: 0x2745E70 Offset: 0x2745E70 VA: 0x2745E70
	private void set_BottlePunchRotationVibrato(int value) { }

	[CompilerGenerated]
	// RVA: 0x2745E78 Offset: 0x2745E78 VA: 0x2745E78
	public float get_BottleWaterShakeDelay() { }

	[CompilerGenerated]
	// RVA: 0x2745E80 Offset: 0x2745E80 VA: 0x2745E80
	private void set_BottleWaterShakeDelay(float value) { }

	[CompilerGenerated]
	// RVA: 0x2745E88 Offset: 0x2745E88 VA: 0x2745E88
	public float get_BottleYMoveTarget() { }

	[CompilerGenerated]
	// RVA: 0x2745E90 Offset: 0x2745E90 VA: 0x2745E90
	public void set_BottleYMoveTarget(float value) { }

	[CompilerGenerated]
	// RVA: 0x2745E98 Offset: 0x2745E98 VA: 0x2745E98
	public AnimationCurve get_BottleMoveYCurve() { }

	[CompilerGenerated]
	// RVA: 0x2745EA0 Offset: 0x2745EA0 VA: 0x2745EA0
	private void set_BottleMoveYCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x2745EA8 Offset: 0x2745EA8 VA: 0x2745EA8
	public float get_BottleYMoveDuration() { }

	[CompilerGenerated]
	// RVA: 0x2745EB0 Offset: 0x2745EB0 VA: 0x2745EB0
	public void set_BottleYMoveDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x2745EB8 Offset: 0x2745EB8 VA: 0x2745EB8
	public float get_RandomOffsetTimeBetweenBottles() { }

	[CompilerGenerated]
	// RVA: 0x2745EC0 Offset: 0x2745EC0 VA: 0x2745EC0
	private void set_RandomOffsetTimeBetweenBottles(float value) { }

	[CompilerGenerated]
	// RVA: 0x2745EC8 Offset: 0x2745EC8 VA: 0x2745EC8
	public List<MosaicConfigsForSize> get_MosaicConfigs() { }

	[CompilerGenerated]
	// RVA: 0x2745ED0 Offset: 0x2745ED0 VA: 0x2745ED0
	public void set_MosaicConfigs(List<MosaicConfigsForSize> value) { }

	[CompilerGenerated]
	// RVA: 0x2745ED8 Offset: 0x2745ED8 VA: 0x2745ED8
	public float get_TrailMoveDelay() { }

	[CompilerGenerated]
	// RVA: 0x2745EE0 Offset: 0x2745EE0 VA: 0x2745EE0
	private void set_TrailMoveDelay(float value) { }

	[CompilerGenerated]
	// RVA: 0x2745EE8 Offset: 0x2745EE8 VA: 0x2745EE8
	public float get_TrailMoveDuration() { }

	[CompilerGenerated]
	// RVA: 0x2745EF0 Offset: 0x2745EF0 VA: 0x2745EF0
	private void set_TrailMoveDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x2745EF8 Offset: 0x2745EF8 VA: 0x2745EF8
	public float get_TargetHideDelay() { }

	[CompilerGenerated]
	// RVA: 0x2745F00 Offset: 0x2745F00 VA: 0x2745F00
	private void set_TargetHideDelay(float value) { }

	[CompilerGenerated]
	// RVA: 0x2745F08 Offset: 0x2745F08 VA: 0x2745F08
	public float get_ShutterAnimationDelay() { }

	[CompilerGenerated]
	// RVA: 0x2745F10 Offset: 0x2745F10 VA: 0x2745F10
	private void set_ShutterAnimationDelay(float value) { }

	[CompilerGenerated]
	// RVA: 0x2745F18 Offset: 0x2745F18 VA: 0x2745F18
	public float get_TrailSpawnRandomDelay() { }

	[CompilerGenerated]
	// RVA: 0x2745F20 Offset: 0x2745F20 VA: 0x2745F20
	private void set_TrailSpawnRandomDelay(float value) { }

	[CompilerGenerated]
	// RVA: 0x2745F28 Offset: 0x2745F28 VA: 0x2745F28
	public float get_TargetSwingRandomDelay() { }

	[CompilerGenerated]
	// RVA: 0x2745F30 Offset: 0x2745F30 VA: 0x2745F30
	private void set_TargetSwingRandomDelay(float value) { }

	[CompilerGenerated]
	// RVA: 0x2745F38 Offset: 0x2745F38 VA: 0x2745F38
	public float get_TrailSpawnDelay() { }

	[CompilerGenerated]
	// RVA: 0x2745F40 Offset: 0x2745F40 VA: 0x2745F40
	private void set_TrailSpawnDelay(float value) { }

	// RVA: 0x2745F48 Offset: 0x2745F48 VA: 0x2745F48
	public MosaicConfigsForSize GetMosaicConfigsForSize(int size) { }

	// RVA: 0x2745FC4 Offset: 0x2745FC4 VA: 0x2745FC4
	public float GetPivotHeight(MosaicTargetType type) { }

	// RVA: 0x27461CC Offset: 0x27461CC VA: 0x27461CC
	public MosaicTrailColors GetTrailColors(ColorId targetColor) { }

	// RVA: 0x2746368 Offset: 0x2746368 VA: 0x2746368
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.Board.Items.Scripts.Mosaic
[Serializable]