public class CollectionResponseModel // TypeDefIndex: 4536
{
	// Fields
	[JsonProperty("eventID")]
	public string EventId; // 0x10
	[JsonProperty("eventType")]
	public int EventType; // 0x18
	[JsonProperty("startTime")]
	public long StartTime; // 0x20
	[JsonProperty("finishTime")]
	public long FinishTime; // 0x28
	[JsonProperty("segment")]
	public string Segment; // 0x30
	[JsonProperty("eventName")]
	public string CollectionId; // 0x38

	// Methods

	// RVA: 0x3769EF0 Offset: 0x3769EF0 VA: 0x3769EF0
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Collection.Scripts