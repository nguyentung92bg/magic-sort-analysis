public class GrandHttpRequestException : Exception // TypeDefIndex: 486
{
	// Fields
	[CompilerGenerated]
	private readonly int <StatusCode>k__BackingField; // 0x8C
	[CompilerGenerated]
	private readonly string <Data>k__BackingField; // 0x90

	// Properties
	public int StatusCode { get; }
	public string Data { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x3D27ECC Offset: 0x3D27ECC VA: 0x3D27ECC
	public int get_StatusCode() { }

	[CompilerGenerated]
	// RVA: 0x3D27ED4 Offset: 0x3D27ED4 VA: 0x3D27ED4
	public string get_Data() { }

	// RVA: 0x3D27EDC Offset: 0x3D27EDC VA: 0x3D27EDC
	public void .ctor(int statusCode, string message, string data) { }

	// RVA: 0x3D27F68 Offset: 0x3D27F68 VA: 0x3D27F68 Slot: 3
	public override string ToString() { }
}

// Namespace: Modules.Infrastructure.Network.Http