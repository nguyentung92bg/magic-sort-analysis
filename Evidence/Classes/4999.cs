public class BackendEnvironmentConfig : ScriptableObject // TypeDefIndex: 4999
{
	// Fields
	public BackendEnvironmentConfig.EnvironmentSettings testEnvironmentSettings; // 0x18
	public BackendEnvironmentConfig.EnvironmentSettings productionEnvironmentSettings; // 0x20

	// Properties
	public BackendEnvironmentConfig.EnvironmentSettings CurrentSettings { get; }

	// Methods

	// RVA: 0x3E2D93C Offset: 0x3E2D93C VA: 0x3E2D93C
	public BackendEnvironmentConfig.EnvironmentSettings get_CurrentSettings() { }

	// RVA: 0x3E2D944 Offset: 0x3E2D944 VA: 0x3E2D944
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Application.ServerCommunication.Scripts