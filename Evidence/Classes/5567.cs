public struct GetUserProfileResponse : IFlatbufferObject // TypeDefIndex: 5567
{
	// Fields
	private Table __p; // 0x0

	// Properties
	public ByteBuffer ByteBuffer { get; }
	public Nullable<Profile> UserProfile { get; }
	public Nullable<BaseResponse> BaseResponse { get; }

	// Methods

	// RVA: 0x143FB18 Offset: 0x143FB18 VA: 0x143FB18 Slot: 5
	public ByteBuffer get_ByteBuffer() { }

	// RVA: 0x143FB20 Offset: 0x143FB20 VA: 0x143FB20
	public static void ValidateVersion() { }

	// RVA: 0x143FB28 Offset: 0x143FB28 VA: 0x143FB28
	public static GetUserProfileResponse GetRootAsGetUserProfileResponse(ByteBuffer _bb) { }

	// RVA: 0x143FB34 Offset: 0x143FB34 VA: 0x143FB34
	public static GetUserProfileResponse GetRootAsGetUserProfileResponse(ByteBuffer _bb, GetUserProfileResponse obj) { }

	// RVA: 0x143FBB8 Offset: 0x143FBB8 VA: 0x143FBB8
	public static bool VerifyGetUserProfileResponse(ByteBuffer _bb) { }

	// RVA: 0x143FC8C Offset: 0x143FC8C VA: 0x143FC8C Slot: 4
	public void __init(int _i, ByteBuffer _bb) { }

	// RVA: 0x143FB78 Offset: 0x143FB78 VA: 0x143FB78
	public GetUserProfileResponse __assign(int _i, ByteBuffer _bb) { }

	// RVA: 0x143FCC8 Offset: 0x143FCC8 VA: 0x143FCC8
	public Nullable<Profile> get_UserProfile() { }

	// RVA: 0x143FD88 Offset: 0x143FD88 VA: 0x143FD88
	public Nullable<BaseResponse> get_BaseResponse() { }

	// RVA: 0x143FE48 Offset: 0x143FE48 VA: 0x143FE48
	public static Offset<GetUserProfileResponse> CreateGetUserProfileResponse(FlatBufferBuilder builder, Offset<Profile> userProfileOffset, Offset<BaseResponse> baseResponseOffset) { }

	// RVA: 0x143FF30 Offset: 0x143FF30 VA: 0x143FF30
	public static void StartGetUserProfileResponse(FlatBufferBuilder builder) { }

	// RVA: 0x143FEC0 Offset: 0x143FEC0 VA: 0x143FEC0
	public static void AddUserProfile(FlatBufferBuilder builder, Offset<Profile> userProfileOffset) { }

	// RVA: 0x143FEA0 Offset: 0x143FEA0 VA: 0x143FEA0
	public static void AddBaseResponse(FlatBufferBuilder builder, Offset<BaseResponse> baseResponseOffset) { }

	// RVA: 0x143FEE0 Offset: 0x143FEE0 VA: 0x143FEE0
	public static Offset<GetUserProfileResponse> EndGetUserProfileResponse(FlatBufferBuilder builder) { }

	// RVA: 0x143FF48 Offset: 0x143FF48 VA: 0x143FF48
	public static void FinishGetUserProfileResponseBuffer(FlatBufferBuilder builder, Offset<GetUserProfileResponse> offset) { }

	// RVA: 0x143FF5C Offset: 0x143FF5C VA: 0x143FF5C
	public static void FinishSizePrefixedGetUserProfileResponseBuffer(FlatBufferBuilder builder, Offset<GetUserProfileResponse> offset) { }
}

// Namespace: magicsort.schemas.v1.profile