public class LevelTimer : ISecondUpdate // TypeDefIndex: 1417
{
	// Fields
	private CustomUpdater _customUpdater; // 0x10
	private int _remainingTime; // 0x18
	private bool _isPaused; // 0x1C
	[CompilerGenerated]
	private bool <IsActive>k__BackingField; // 0x1D

	// Properties
	public bool IsActive { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x1E90870 Offset: 0x1E90870 VA: 0x1E90870
	public bool get_IsActive() { }

	[CompilerGenerated]
	// RVA: 0x1E90878 Offset: 0x1E90878 VA: 0x1E90878
	private void set_IsActive(bool value) { }

	// RVA: 0x1E8FD40 Offset: 0x1E8FD40 VA: 0x1E8FD40
	public bool IsTimeUp() { }

	// RVA: 0x1E8F51C Offset: 0x1E8F51C VA: 0x1E8F51C
	public void .ctor(CustomUpdater customUpdater) { }

	// RVA: 0x1E90884 Offset: 0x1E90884 VA: 0x1E90884 Slot: 4
	public void SecondUpdate() { }

	// RVA: 0x1E8F54C Offset: 0x1E8F54C VA: 0x1E8F54C
	public void Start(int duration) { }

	// RVA: 0x1E8FAE8 Offset: 0x1E8FAE8 VA: 0x1E8FAE8
	public void Pause() { }

	// RVA: 0x1E8FD50 Offset: 0x1E8FD50 VA: 0x1E8FD50
	public void Resume() { }

	// RVA: 0x1E901CC Offset: 0x1E901CC VA: 0x1E901CC
	public void Stop() { }

	// RVA: 0x1E90948 Offset: 0x1E90948 VA: 0x1E90948
	public int GetRemainingTime() { }

	// RVA: 0x1E908B8 Offset: 0x1E908B8 VA: 0x1E908B8
	private void OnTimeTick() { }
}

// Namespace: Modules.Contexts.GamePlay.Levels.Scripts.Cell