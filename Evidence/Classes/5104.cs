public class PlayIntegrityManager : MonoBehaviour // TypeDefIndex: 5104
{
	// Fields
	private bool _isStartedToInitialize; // 0x18
	private string _token; // 0x20
	private string _erorr; // 0x28
	private string _noncePlain; // 0x30
	private PlayIntegrityRemoteService _playIntegrityRemoteService; // 0x38
	private IPlayerService _playerService; // 0x40

	// Methods

	// RVA: 0x3CEBD04 Offset: 0x3CEBD04 VA: 0x3CEBD04
	public string GetToken() { }

	// RVA: 0x3CEBD0C Offset: 0x3CEBD0C VA: 0x3CEBD0C
	public string GetError() { }

	// RVA: 0x3CEBD14 Offset: 0x3CEBD14 VA: 0x3CEBD14
	public void SetServices(PlayIntegrityRemoteService playIntegrityRemoteService, IPlayerService playerService) { }

	// RVA: 0x3CEBDC0 Offset: 0x3CEBDC0 VA: 0x3CEBDC0
	public void InitializeIntegrity() { }

	// RVA: 0x3CEBF94 Offset: 0x3CEBF94 VA: 0x3CEBF94
	private static string GenerateNonce() { }

	// RVA: 0x3CEC09C Offset: 0x3CEC09C VA: 0x3CEC09C
	private void HandleTokens(string token, string error) { }

	// RVA: 0x3CEC258 Offset: 0x3CEC258 VA: 0x3CEC258
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x3CEC2E8 Offset: 0x3CEC2E8 VA: 0x3CEC2E8
	private void <InitializeIntegrity>b__9_0(string token, string error) { }
}

// Namespace: Modules.Contexts.Application.PlayIntegrity
[Serializable]