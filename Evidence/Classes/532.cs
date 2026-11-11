public class TestMono1 : MonoBehaviour // TypeDefIndex: 532
{
	// Fields
	[Inject]
	private ITestService1 _testService1; // 0x18
	[Inject]
	private ITestService2 _testService2; // 0x20

	// Properties
	public ITestService1 TestService1 { get; }
	public ITestService2 TestService2 { get; }

	// Methods

	// RVA: 0x3D303AC Offset: 0x3D303AC VA: 0x3D303AC
	public ITestService1 get_TestService1() { }

	// RVA: 0x3D303B4 Offset: 0x3D303B4 VA: 0x3D303B4
	public ITestService2 get_TestService2() { }

	// RVA: 0x3D303BC Offset: 0x3D303BC VA: 0x3D303BC
	public void .ctor() { }
}

// Namespace: Modules.Infrastructure.DI.Tests