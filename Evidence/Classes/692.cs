public class LoadSceneCommand : ICommand // TypeDefIndex: 692
{
	// Fields
	private bool _isLoaded; // 0x10
	[CompilerGenerated]
	private bool <IsAdditive>k__BackingField; // 0x11
	[CompilerGenerated]
	private bool <IsAsync>k__BackingField; // 0x12
	[CompilerGenerated]
	private string <SceneName>k__BackingField; // 0x18
	[CompilerGenerated]
	private bool <StartActive>k__BackingField; // 0x20

	// Properties
	public bool IsAdditive { get; set; }
	public bool IsAsync { get; set; }
	public string SceneName { get; set; }
	public bool StartActive { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x40E3EC8 Offset: 0x40E3EC8 VA: 0x40E3EC8
	public bool get_IsAdditive() { }

	[CompilerGenerated]
	// RVA: 0x40E3ED0 Offset: 0x40E3ED0 VA: 0x40E3ED0
	public void set_IsAdditive(bool value) { }

	[CompilerGenerated]
	// RVA: 0x40E3EDC Offset: 0x40E3EDC VA: 0x40E3EDC
	public bool get_IsAsync() { }

	[CompilerGenerated]
	// RVA: 0x40E3EE4 Offset: 0x40E3EE4 VA: 0x40E3EE4
	public void set_IsAsync(bool value) { }

	[CompilerGenerated]
	// RVA: 0x40E3EF0 Offset: 0x40E3EF0 VA: 0x40E3EF0
	public string get_SceneName() { }

	[CompilerGenerated]
	// RVA: 0x40E3EF8 Offset: 0x40E3EF8 VA: 0x40E3EF8
	public void set_SceneName(string value) { }

	[CompilerGenerated]
	// RVA: 0x40E3F00 Offset: 0x40E3F00 VA: 0x40E3F00
	public bool get_StartActive() { }

	[CompilerGenerated]
	// RVA: 0x40E3F08 Offset: 0x40E3F08 VA: 0x40E3F08
	public void set_StartActive(bool value) { }

	[AsyncStateMachine(typeof(LoadSceneCommand.<ExecuteAsync>d__17))]
	// RVA: 0x40E3F14 Offset: 0x40E3F14 VA: 0x40E3F14 Slot: 4
	public Task ExecuteAsync() { }

	// RVA: 0x40E4004 Offset: 0x40E4004 VA: 0x40E4004
	private void SceneLoaded(Scene scene, LoadSceneMode arg1) { }

	// RVA: 0x40E4104 Offset: 0x40E4104 VA: 0x40E4104 Slot: 5
	public void Dispose() { }

	// RVA: 0x40E4108 Offset: 0x40E4108 VA: 0x40E4108
	public void .ctor() { }
}

// Namespace: Modules.Infrastructure.Common.Scripts