public class DeleteFriendCommand : ICommand // TypeDefIndex: 4375
{
	// Fields
	private readonly string _friendPublicId; // 0x10
	private readonly FriendsService _friendsService; // 0x18
	private readonly IPopUpService _popUpService; // 0x20
	private readonly TaskCompletionSource<bool> _deleteTcs; // 0x28

	// Methods

	// RVA: 0x1B922C0 Offset: 0x1B922C0 VA: 0x1B922C0
	public void .ctor(string friendPublicId, TaskCompletionSource<bool> deleteTcs) { }

	[AsyncStateMachine(typeof(DeleteFriendCommand.<ExecuteAsync>d__5))]
	// RVA: 0x1B923C4 Offset: 0x1B923C4 VA: 0x1B923C4 Slot: 4
	public Task ExecuteAsync() { }

	// RVA: 0x1B924B4 Offset: 0x1B924B4 VA: 0x1B924B4 Slot: 5
	public void Dispose() { }
}

// Namespace: Modules.Contexts.Home.DuckFestival.Scripts