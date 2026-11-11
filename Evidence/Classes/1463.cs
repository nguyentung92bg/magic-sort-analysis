public class WaterDailyRiseConfig : ScriptableObject // TypeDefIndex: 1463
{
	// Fields
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <DailyWaterRiseCurve>k__BackingField; // 0x18
	[SerializeField]
	[CompilerGenerated]
	private Vector2 <DailyRiseMinMaxDuration>k__BackingField; // 0x20

	// Properties
	public AnimationCurve DailyWaterRiseCurve { get; set; }
	public Vector2 DailyRiseMinMaxDuration { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x248C864 Offset: 0x248C864 VA: 0x248C864
	public AnimationCurve get_DailyWaterRiseCurve() { }

	[CompilerGenerated]
	// RVA: 0x248C86C Offset: 0x248C86C VA: 0x248C86C
	private void set_DailyWaterRiseCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x248C874 Offset: 0x248C874 VA: 0x248C874
	public Vector2 get_DailyRiseMinMaxDuration() { }

	[CompilerGenerated]
	// RVA: 0x248C87C Offset: 0x248C87C VA: 0x248C87C
	private void set_DailyRiseMinMaxDuration(Vector2 value) { }

	// RVA: 0x248C884 Offset: 0x248C884 VA: 0x248C884
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.Configs
[CreateAssetMenu(fileName = "WaterParticleConfig", menuName = "Configs/WaterParticleConfig")]