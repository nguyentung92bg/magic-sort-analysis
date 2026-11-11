public class GrandRemoteConfigResponse // TypeDefIndex: 5203
{
	// Fields
	[CompilerGenerated]
	private LevelsConfig <LevelsConfig>k__BackingField; // 0x10
	[CompilerGenerated]
	private LevelsConfig <LoopLevelsConfig>k__BackingField; // 0x18
	[CompilerGenerated]
	private BlockerIntroConfigModel <BlockerIntroLevelsConfig>k__BackingField; // 0x20

	// Properties
	[JsonProperty("levels_config")]
	public LevelsConfig LevelsConfig { get; set; }
	[JsonProperty("loop_levels_config")]
	public LevelsConfig LoopLevelsConfig { get; set; }
	[JsonProperty("blocker_intro_levels_config")]
	public BlockerIntroConfigModel BlockerIntroLevelsConfig { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x1CB6760 Offset: 0x1CB6760 VA: 0x1CB6760
	public LevelsConfig get_LevelsConfig() { }

	[CompilerGenerated]
	// RVA: 0x1CB6768 Offset: 0x1CB6768 VA: 0x1CB6768
	public void set_LevelsConfig(LevelsConfig value) { }

	[CompilerGenerated]
	// RVA: 0x1CB6770 Offset: 0x1CB6770 VA: 0x1CB6770
	public LevelsConfig get_LoopLevelsConfig() { }

	[CompilerGenerated]
	// RVA: 0x1CB6778 Offset: 0x1CB6778 VA: 0x1CB6778
	public void set_LoopLevelsConfig(LevelsConfig value) { }

	[CompilerGenerated]
	// RVA: 0x1CB6780 Offset: 0x1CB6780 VA: 0x1CB6780
	public BlockerIntroConfigModel get_BlockerIntroLevelsConfig() { }

	[CompilerGenerated]
	// RVA: 0x1CB6788 Offset: 0x1CB6788 VA: 0x1CB6788
	public void set_BlockerIntroLevelsConfig(BlockerIntroConfigModel value) { }

	// RVA: 0x1CB6790 Offset: 0x1CB6790 VA: 0x1CB6790
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Application.GrandConfig.Scripts