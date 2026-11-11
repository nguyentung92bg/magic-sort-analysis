public class AccountDeleteService : IRestartableService, IService, IInitializable, IDisposable, IDataInitializable // TypeDefIndex: 5385
{
	// Fields
	private AccountDeleteDataService _dataService; // 0x10
	private AccountDeleteRemoteService _remoteService; // 0x18
	private RemoteConfigs _remoteConfig; // 0x20
	private LoginService _loginService; // 0x28

	// Methods

	// RVA: 0x185E3DC Offset: 0x185E3DC VA: 0x185E3DC
	public void .ctor(AccountDeleteDataService dataService, AccountDeleteRemoteService remoteService, RemoteConfigs remoteConfig, LoginService loginService) { }

	// RVA: 0x185E450 Offset: 0x185E450 VA: 0x185E450 Slot: 4
	public void Initialize() { }

	// RVA: 0x185E454 Offset: 0x185E454 VA: 0x185E454 Slot: 6
	public void InitializeData() { }

	// RVA: 0x185E4C4 Offset: 0x185E4C4 VA: 0x185E4C4 Slot: 5
	public void Dispose() { }

	[AsyncStateMachine(typeof(AccountDeleteService.<CreateDeleteRequestAsync>d__8))]
	// RVA: 0x185E4C8 Offset: 0x185E4C8 VA: 0x185E4C8
	public Task<bool> CreateDeleteRequestAsync() { }

	[AsyncStateMachine(typeof(AccountDeleteService.<CancelAccountDeleteRequest>d__9))]
	// RVA: 0x185E5DC Offset: 0x185E5DC VA: 0x185E5DC
	public Task<bool> CancelAccountDeleteRequest() { }

	// RVA: 0x185E6F0 Offset: 0x185E6F0 VA: 0x185E6F0
	public bool ShouldShowDeletePopup() { }

	// RVA: 0x185E498 Offset: 0x185E498 VA: 0x185E498
	private void SetDeletionStatus(AccountDeleteStatus deletionStatus) { }

	// RVA: 0x185E720 Offset: 0x185E720 VA: 0x185E720
	public bool IsAccountDeleteEnabled() { }

	// RVA: 0x185E74C Offset: 0x185E74C VA: 0x185E74C
	public bool IsDeleted() { }

	[AsyncStateMachine(typeof(AccountDeleteService.<ClearLocalAndAckServer>d__14))]
	// RVA: 0x185E778 Offset: 0x185E778 VA: 0x185E778
	public Task ClearLocalAndAckServer(bool ackServer = True) { }
}

// Namespace: Modules.Contexts.Application.AccountDelete.UI