public class AuthenticationHeaderProvider : IHeaderProvider // TypeDefIndex: 461
{
	// Fields
	private Dictionary<string, string> _cachedHeader; // 0x10
	private string _userToken; // 0x18
	private string _deviceToken; // 0x20

	// Properties
	private string UserToken { get; set; }
	private string DeviceToken { get; set; }

	// Methods

	// RVA: 0x3D20938 Offset: 0x3D20938 VA: 0x3D20938
	private string get_UserToken() { }

	// RVA: 0x3D20940 Offset: 0x3D20940 VA: 0x3D20940
	public void set_UserToken(string value) { }

	// RVA: 0x3D20A40 Offset: 0x3D20A40 VA: 0x3D20A40
	private string get_DeviceToken() { }

	// RVA: 0x3D20A48 Offset: 0x3D20A48 VA: 0x3D20A48
	public void set_DeviceToken(string value) { }

	// RVA: 0x3D20B48 Offset: 0x3D20B48 VA: 0x3D20B48 Slot: 4
	public Dictionary<string, string> GetHeader() { }

	// RVA: 0x3D20B50 Offset: 0x3D20B50 VA: 0x3D20B50
	public void .ctor() { }
}

// Namespace: Modules.Infrastructure.Network