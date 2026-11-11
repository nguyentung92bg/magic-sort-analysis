public interface IWebSocketProxy // TypeDefIndex: 475
{
	// Properties
	public abstract bool IsOpen { get; }
	public abstract WebSocketStates State { get; }

	// Methods

	[CompilerGenerated]
	// RVA: -1 Offset: -1 Slot: 0
	public abstract void add_OnOpen(Action value);

	[CompilerGenerated]
	// RVA: -1 Offset: -1 Slot: 1
	public abstract void remove_OnOpen(Action value);

	[CompilerGenerated]
	// RVA: -1 Offset: -1 Slot: 2
	public abstract void add_OnClose(Action<WebSocketStatusCodes, string> value);

	[CompilerGenerated]
	// RVA: -1 Offset: -1 Slot: 3
	public abstract void remove_OnClose(Action<WebSocketStatusCodes, string> value);

	[CompilerGenerated]
	// RVA: -1 Offset: -1 Slot: 4
	public abstract void add_OnError(Action<string> value);

	[CompilerGenerated]
	// RVA: -1 Offset: -1 Slot: 5
	public abstract void remove_OnError(Action<string> value);

	[CompilerGenerated]
	// RVA: -1 Offset: -1 Slot: 6
	public abstract void add_OnMessage(Action<string> value);

	[CompilerGenerated]
	// RVA: -1 Offset: -1 Slot: 7
	public abstract void remove_OnMessage(Action<string> value);

	[CompilerGenerated]
	// RVA: -1 Offset: -1 Slot: 8
	public abstract void add_OnBinaryMessage(Action<BufferSegment> value);

	[CompilerGenerated]
	// RVA: -1 Offset: -1 Slot: 9
	public abstract void remove_OnBinaryMessage(Action<BufferSegment> value);

	// RVA: -1 Offset: -1 Slot: 10
	public abstract bool get_IsOpen();

	// RVA: -1 Offset: -1 Slot: 11
	public abstract WebSocketStates get_State();

	// RVA: -1 Offset: -1 Slot: 12
	public abstract void SetUri(Uri uri);

	// RVA: -1 Offset: -1 Slot: 13
	public abstract void Open();

	// RVA: -1 Offset: -1 Slot: 14
	public abstract void Close(bool forceCleanUp = False);

	// RVA: -1 Offset: -1 Slot: 15
	public abstract void Send<T>(SocketMessage<T> message);
	/* GenericInstMethod :
	|
	|-RVA: -1 Offset: -1
	|-IWebSocketProxy.Send<object>
	*/
}

// Namespace: Modules.Infrastructure.Network.Socketv2