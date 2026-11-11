private sealed class GrandSDK.<>c // TypeDefIndex: 5527
{
	// Fields
	public static readonly GrandSDK.<>c <>9; // 0x0
	public static Action <>9__22_0; // 0x8
	public static Action <>9__22_1; // 0x10
	public static Action <>9__22_2; // 0x18
	[Nullable(new[] { 0, 1 })]
	public static Action<Exception> <>9__22_3; // 0x20
	public static Action <>9__22_4; // 0x28
	[Nullable(new[] { 0, 1, 1 })]
	public static Action<IReadOnlyList<ExperimentAssignment>> <>9__22_5; // 0x30
	[Nullable(new[] { 0, 1 })]
	public static Action<Exception> <>9__22_6; // 0x38
	public static Action<ConfigStatus> <>9__22_7; // 0x40
	[Nullable(new[] { 0, 1 })]
	public static Action<string> <>9__22_8; // 0x48
	[Nullable(new[] { 0, 1 })]
	public static Action<string> <>9__22_10; // 0x50
	[Nullable(new[] { 0, 1 })]
	public static Action<string> <>9__22_11; // 0x58
	[Nullable(new[] { 0, 1 })]
	public static Action<Exception> <>9__22_12; // 0x60
	public static Action <>9__22_13; // 0x68
	public static Action<EventInfo> <>9__22_14; // 0x70
	public static Action<BatchInfo> <>9__22_15; // 0x78
	[Nullable(new[] { 0, 1 })]
	public static Action<BatchInfo, Exception> <>9__22_16; // 0x80
	public static Action <>9__23_0; // 0x88
	public static Converter<Type, string> <>9__25_0; // 0x90
	public static Converter<Type, string> <>9__30_0; // 0x98
	public static Func<Task> <>9__34_0; // 0xA0

	// Methods

	// RVA: 0x13AA390 Offset: 0x13AA390 VA: 0x13AA390
	private static void .cctor() { }

	// RVA: 0x13AA400 Offset: 0x13AA400 VA: 0x13AA400
	public void .ctor() { }

	// RVA: 0x13AA408 Offset: 0x13AA408 VA: 0x13AA408
	internal void <InitializeSDK>b__22_0() { }

	// RVA: 0x13AA470 Offset: 0x13AA470 VA: 0x13AA470
	internal void <InitializeSDK>b__22_1() { }

	// RVA: 0x13AAB24 Offset: 0x13AAB24 VA: 0x13AAB24
	internal void <InitializeSDK>b__22_2() { }

	[NullableContext(1)]
	// RVA: 0x13AAB8C Offset: 0x13AAB8C VA: 0x13AAB8C
	internal void <InitializeSDK>b__22_3(Exception ex) { }

	// RVA: 0x13AAD64 Offset: 0x13AAD64 VA: 0x13AAD64
	internal void <InitializeSDK>b__22_4() { }

	[NullableContext(1)]
	// RVA: 0x13AADCC Offset: 0x13AADCC VA: 0x13AADCC
	internal void <InitializeSDK>b__22_5(IReadOnlyList<ExperimentAssignment> assignments) { }

	[NullableContext(1)]
	// RVA: 0x13AAEFC Offset: 0x13AAEFC VA: 0x13AAEFC
	internal void <InitializeSDK>b__22_6(Exception ex) { }

	// RVA: 0x13AAFF0 Offset: 0x13AAFF0 VA: 0x13AAFF0
	internal void <InitializeSDK>b__22_7(ConfigStatus status) { }

	[NullableContext(1)]
	// RVA: 0x13AB0B0 Offset: 0x13AB0B0 VA: 0x13AB0B0
	internal void <InitializeSDK>b__22_8(string message) { }

	[NullableContext(1)]
	// RVA: 0x13AB108 Offset: 0x13AB108 VA: 0x13AB108
	internal void <InitializeSDK>b__22_10(string sessionId) { }

	[NullableContext(1)]
	// RVA: 0x13AB1E4 Offset: 0x13AB1E4 VA: 0x13AB1E4
	internal void <InitializeSDK>b__22_11(string sessionId) { }

	[NullableContext(1)]
	// RVA: 0x13AB2C0 Offset: 0x13AB2C0 VA: 0x13AB2C0
	internal void <InitializeSDK>b__22_12(Exception ex) { }

	// RVA: 0x13AB360 Offset: 0x13AB360 VA: 0x13AB360
	internal void <InitializeSDK>b__22_13() { }

	// RVA: 0x13AB424 Offset: 0x13AB424 VA: 0x13AB424
	internal void <InitializeSDK>b__22_14(EventInfo info) { }

	// RVA: 0x13AB654 Offset: 0x13AB654 VA: 0x13AB654
	internal void <InitializeSDK>b__22_15(BatchInfo info) { }

	[NullableContext(1)]
	// RVA: 0x13AB750 Offset: 0x13AB750 VA: 0x13AB750
	internal void <InitializeSDK>b__22_16(BatchInfo info, Exception ex) { }

	// RVA: 0x13AB830 Offset: 0x13AB830 VA: 0x13AB830
	internal void <OnApplicationPause>b__23_0() { }

	// RVA: 0x13AB884 Offset: 0x13AB884 VA: 0x13AB884
	internal string <CreateEventSerializerForGame>b__25_0(Type t) { }

	// RVA: 0x13AB8A8 Offset: 0x13AB8A8 VA: 0x13AB8A8
	internal string <ResolveStableSerializerType>b__30_0(Type m) { }

	[AsyncStateMachine(typeof(GrandSDK.<>c.<<OnApplicationQuit>b__34_0>d))]
	// RVA: 0x13AB95C Offset: 0x13AB95C VA: 0x13AB95C
	internal Task <OnApplicationQuit>b__34_0() { }
}

// Namespace: 