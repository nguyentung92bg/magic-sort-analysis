public class ReferralRemoteService : IRestartableService, IService, IInitializable, IDisposable // TypeDefIndex: 438
{
	// Fields
	private readonly HttpProxy _httpProxy; // 0x10
	private readonly BackendEnvironmentConfig _backendEnvironmentConfig; // 0x18
	private CancellationTokenSource _cts; // 0x20

	// Methods

	// RVA: 0x3D1AA38 Offset: 0x3D1AA38 VA: 0x3D1AA38
	public void .ctor(HttpProxy httpProxy, BackendEnvironmentConfig backendEnvironmentConfig) { }

	// RVA: 0x3D1AA7C Offset: 0x3D1AA7C VA: 0x3D1AA7C Slot: 4
	public void Initialize() { }

	// RVA: 0x3D1AAE4 Offset: 0x3D1AAE4 VA: 0x3D1AAE4 Slot: 5
	public void Dispose() { }

	// RVA: 0x3D1AB1C Offset: 0x3D1AB1C VA: 0x3D1AB1C
	public void CancelRequests() { }

	[AsyncStateMachine(typeof(ReferralRemoteService.<GetMyInviteData>d__7))]
	// RVA: 0x3D1ABA4 Offset: 0x3D1ABA4 VA: 0x3D1ABA4
	public Task<ApiResponse<InviteDataResponse>> GetMyInviteData() { }

	[AsyncStateMachine(typeof(ReferralRemoteService.<ConfirmReferralMilestone>d__8))]
	// RVA: 0x3D1ACB0 Offset: 0x3D1ACB0 VA: 0x3D1ACB0
	public Task<ApiResponse<ReferralWebResponse>> ConfirmReferralMilestone(string referrerPublicId) { }

	[AsyncStateMachine(typeof(ReferralRemoteService.<ClaimInviteRewards>d__9))]
	// RVA: 0x3D1ADDC Offset: 0x3D1ADDC VA: 0x3D1ADDC
	public Task<ApiResponse<ClaimInviteRewardsResponse>> ClaimInviteRewards() { }
}

// Namespace: 
[CompilerGenerated]