public class SecondTimer : ISecondUpdate // TypeDefIndex: 695
{
	// Fields
	private CustomUpdater _customUpdater; // 0x10
	private Action _onTimeIsUp; // 0x18
	private DateTime _endTime; // 0x20
	private bool _isRunning; // 0x28

	// Methods

	// RVA: 0x40E4C9C Offset: 0x40E4C9C VA: 0x40E4C9C
	public void .ctor(CustomUpdater customUpdater) { }

	// RVA: 0x40E4CCC Offset: 0x40E4CCC VA: 0x40E4CCC
	public void Start(Action onTimeIsUp, DateTime endTime) { }

	// RVA: 0x40E4DB0 Offset: 0x40E4DB0 VA: 0x40E4DB0
	public void Cancel() { }

	// RVA: 0x40E4D8C Offset: 0x40E4D8C VA: 0x40E4D8C
	private void Stop() { }

	// RVA: 0x40E4DC0 Offset: 0x40E4DC0 VA: 0x40E4DC0 Slot: 4
	public void SecondUpdate() { }
}

// Namespace: Modules.Infrastructure.Common.Scripts
[Serializable]