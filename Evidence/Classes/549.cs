public static class ContextsContainer // TypeDefIndex: 549
{
	// Fields
	public static SceneContext CurrentContext; // 0x0
	public static SceneContext ApplicationContext; // 0x8
	public static SceneContext HomeContext; // 0x10
	public static SceneContext GamePlayContext; // 0x18
	public static SceneContext DailyContext; // 0x20
	[CompilerGenerated]
	private static SceneContext <EditorContext>k__BackingField; // 0x28

	// Properties
	public static SceneContext EditorContext { get; set; }
	public static bool IsHomeContext { get; }
	public static bool IsGamePlayContext { get; }
	public static bool IsDailyContext { get; }
	public static bool IsApplicationContext { get; }
	public static bool IsEditorContext { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x40015F0 Offset: 0x40015F0 VA: 0x40015F0
	public static SceneContext get_EditorContext() { }

	[CompilerGenerated]
	// RVA: 0x4001638 Offset: 0x4001638 VA: 0x4001638
	public static void set_EditorContext(SceneContext value) { }

	// RVA: 0x4001688 Offset: 0x4001688 VA: 0x4001688
	public static bool get_IsHomeContext() { }

	// RVA: 0x4001704 Offset: 0x4001704 VA: 0x4001704
	public static bool get_IsGamePlayContext() { }

	// RVA: 0x4001780 Offset: 0x4001780 VA: 0x4001780
	public static bool get_IsDailyContext() { }

	// RVA: 0x40017FC Offset: 0x40017FC VA: 0x40017FC
	public static bool get_IsApplicationContext() { }

	// RVA: 0x4001874 Offset: 0x4001874 VA: 0x4001874
	public static bool get_IsEditorContext() { }
}

// Namespace: Modules.Infrastructure.DI.Injection