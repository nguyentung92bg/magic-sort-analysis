public class NewSecondTimer : ISecondUpdate // TypeDefIndex: 693
{
	// Fields
	private readonly CustomUpdater _customUpdater; // 0x10
	private Action _onTimeIsUp; // 0x18
	private DateTime _endTime; // 0x20
	private bool _isRunning; // 0x28

	// Methods

	// RVA: 0x40E4650 Offset: 0x40E4650 VA: 0x40E4650
	public void .ctor(CustomUpdater customUpdater) { }

	// RVA: 0x40E4680 Offset: 0x40E4680 VA: 0x40E4680
	public void Start(Action onTimeIsUp, DateTime endTime) { }

	// RVA: 0x40E4764 Offset: 0x40E4764 VA: 0x40E4764
	public void Cancel() { }

	// RVA: 0x40E4740 Offset: 0x40E4740 VA: 0x40E4740
	private void Stop() { }

	// RVA: 0x40E4774 Offset: 0x40E4774 VA: 0x40E4774 Slot: 4
	public void SecondUpdate() { }
}

// Namespace: Modules.Infrastructure.Common.Scripts
[Extension]