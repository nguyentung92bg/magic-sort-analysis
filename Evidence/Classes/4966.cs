public class VibrationRemoteService : IInitializable // TypeDefIndex: 4966
{
	// Fields
	private BackendEnvironmentConfig _backendEnvironmentConfig; // 0x10
	private HttpProxy _httpProxy; // 0x18

	// Methods

	// RVA: 0x3E27014 Offset: 0x3E27014 VA: 0x3E27014
	public void .ctor(BackendEnvironmentConfig backendEnvironmentConfig) { }

	// RVA: 0x3E27044 Offset: 0x3E27044 VA: 0x3E27044 Slot: 4
	public void Initialize() { }

	[AsyncStateMachine(typeof(VibrationRemoteService.<PutFile>d__4))]
	// RVA: 0x3E270B8 Offset: 0x3E270B8 VA: 0x3E270B8
	public Task<ApiResponse<PutFileResponse>> PutFile(string fileName, string serializedData) { }

	[AsyncStateMachine(typeof(VibrationRemoteService.<GetFile>d__5))]
	// RVA: 0x3E271F4 Offset: 0x3E271F4 VA: 0x3E271F4
	public Task<ApiResponse<string>> GetFile(string link) { }
}

// Namespace: Modules.Contexts.Application.Vibration.Scripts