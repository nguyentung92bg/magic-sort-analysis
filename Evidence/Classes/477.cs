public class SocketMessage<T> // TypeDefIndex: 477
{
	// Fields
	[JsonProperty("action")]
	public string Action; // 0x0
	[JsonProperty("connection_id")]
	public string ConnectionId; // 0x0
	[JsonProperty("chat_id")]
	public string ChatId; // 0x0
	[JsonProperty("message_id")]
	public string MessageId; // 0x0
	[JsonProperty("channel")]
	public string Channel; // 0x0
	[JsonProperty("order_id")]
	public long Order; // 0x0
	[JsonProperty("timestamp")]
	public long CreatedAt; // 0x0
	[JsonProperty("content")]
	public T Content; // 0x0

	// Methods

	// RVA: -1 Offset: -1 Slot: 3
	public override string ToString() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x3342FB0 Offset: 0x3342FB0 VA: 0x3342FB0
	|-SocketMessage<EmptyContent>.ToString
	|
	|-RVA: 0x33433D8 Offset: 0x33433D8 VA: 0x33433D8
	|-SocketMessage<object>.ToString
	*/

	// RVA: -1 Offset: -1
	public void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x33433D0 Offset: 0x33433D0 VA: 0x33433D0
	|-SocketMessage<EmptyContent>..ctor
	|
	|-RVA: 0x33437C0 Offset: 0x33437C0 VA: 0x33437C0
	|-SocketMessage<object>..ctor
	*/
}

// Namespace: Modules.Infrastructure.Network.Socketv2