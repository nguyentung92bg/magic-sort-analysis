public enum CollectionStateType // TypeDefIndex: 4563
{
	// Fields
	public int value__; // 0x0
	public const CollectionStateType NoCachedEvent = 0;
	public const CollectionStateType NotIntroduced = 1;
	public const CollectionStateType InProgress = 2;
	public const CollectionStateType TimeIsUp = 3;
	public const CollectionStateType Claimed = 4;
	public const CollectionStateType ClaimedAndTimeIsUp = 5;
	public const CollectionStateType InsufficientLevel = 6;
	public const CollectionStateType Disable = 7;
}

// Namespace: Modules.Contexts.Home.Collection.Scripts