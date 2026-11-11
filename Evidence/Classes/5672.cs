public struct ValidateInAppPurchaseResponse : IFlatbufferObject // TypeDefIndex: 5672
{
	// Fields
	private Table __p; // 0x0

	// Properties
	public ByteBuffer ByteBuffer { get; }
	public bool IsInAppValid { get; }

	// Methods

	// RVA: 0x1600E28 Offset: 0x1600E28 VA: 0x1600E28 Slot: 5
	public ByteBuffer get_ByteBuffer() { }

	// RVA: 0x1600E30 Offset: 0x1600E30 VA: 0x1600E30
	public static void ValidateVersion() { }

	// RVA: 0x1600E38 Offset: 0x1600E38 VA: 0x1600E38
	public static ValidateInAppPurchaseResponse GetRootAsValidateInAppPurchaseResponse(ByteBuffer _bb) { }

	// RVA: 0x1600E44 Offset: 0x1600E44 VA: 0x1600E44
	public static ValidateInAppPurchaseResponse GetRootAsValidateInAppPurchaseResponse(ByteBuffer _bb, ValidateInAppPurchaseResponse obj) { }

	// RVA: 0x1600EC8 Offset: 0x1600EC8 VA: 0x1600EC8
	public static bool VerifyValidateInAppPurchaseResponse(ByteBuffer _bb) { }

	// RVA: 0x1600F9C Offset: 0x1600F9C VA: 0x1600F9C Slot: 4
	public void __init(int _i, ByteBuffer _bb) { }

	// RVA: 0x1600E88 Offset: 0x1600E88 VA: 0x1600E88
	public ValidateInAppPurchaseResponse __assign(int _i, ByteBuffer _bb) { }

	// RVA: 0x1600FD8 Offset: 0x1600FD8 VA: 0x1600FD8
	public bool get_IsInAppValid() { }

	// RVA: 0x1601020 Offset: 0x1601020 VA: 0x1601020
	public static Offset<ValidateInAppPurchaseResponse> CreateValidateInAppPurchaseResponse(FlatBufferBuilder builder, bool is_in_app_valid = False) { }

	// RVA: 0x16010D8 Offset: 0x16010D8 VA: 0x16010D8
	public static void StartValidateInAppPurchaseResponse(FlatBufferBuilder builder) { }

	// RVA: 0x1601068 Offset: 0x1601068 VA: 0x1601068
	public static void AddIsInAppValid(FlatBufferBuilder builder, bool isInAppValid) { }

	// RVA: 0x1601088 Offset: 0x1601088 VA: 0x1601088
	public static Offset<ValidateInAppPurchaseResponse> EndValidateInAppPurchaseResponse(FlatBufferBuilder builder) { }

	// RVA: 0x16010F0 Offset: 0x16010F0 VA: 0x16010F0
	public static void FinishValidateInAppPurchaseResponseBuffer(FlatBufferBuilder builder, Offset<ValidateInAppPurchaseResponse> offset) { }

	// RVA: 0x1601104 Offset: 0x1601104 VA: 0x1601104
	public static void FinishSizePrefixedValidateInAppPurchaseResponseBuffer(FlatBufferBuilder builder, Offset<ValidateInAppPurchaseResponse> offset) { }
}

// Namespace: magicsort.schemas.v1.iap