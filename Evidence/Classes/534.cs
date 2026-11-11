public class TestService2Imp : ITestService2 // TypeDefIndex: 534
{
	// Fields
	[Inject]
	private ITestService1 _testService1; // 0x10

	// Properties
	public ITestService1 TestService1 { get; }

	// Methods

	// RVA: 0x3D303D0 Offset: 0x3D303D0 VA: 0x3D303D0
	public ITestService1 get_TestService1() { }

	// RVA: 0x3D303D8 Offset: 0x3D303D8 VA: 0x3D303D8 Slot: 4
	public void DoStaff() { }

	// RVA: 0x3D303DC Offset: 0x3D303DC VA: 0x3D303DC
	public void .ctor() { }
}

// Namespace: Modules.Infrastructure.DI.Tests