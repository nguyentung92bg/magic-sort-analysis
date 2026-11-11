public enum CardSendRequestState // TypeDefIndex: 4562
{
	// Fields
	public int value__; // 0x0
	public const CardSendRequestState SendActive = 0;
	public const CardSendRequestState SendNotActiveDailyLimit = 1;
	public const CardSendRequestState SendNotActiveNoDuplicate = 2;
	public const CardSendRequestState SendNotActiveGoldCard = 3;
	public const CardSendRequestState RequestActive = 4;
	public const CardSendRequestState RequestNotActiveDailyLimit = 5;
	public const CardSendRequestState RequestNotActiveGoldCard = 6;
	public const CardSendRequestState TeamsNotEnabled = 7;
}

// Namespace: Modules.Contexts.Home.Collection.Scripts