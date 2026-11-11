public class TowerIntermediateStepView : MonoBehaviour, ITowerStepView, IDisposable // TypeDefIndex: 2032
{
	// Fields
	[SerializeField]
	private SpriteRenderer _spriteRenderer; // 0x18
	[SerializeField]
	private TowerAnimationsConfig _towerAnimationsConfig; // 0x20
	[CompilerGenerated]
	private bool <IsUnlocked>k__BackingField; // 0x28

	// Properties
	public bool IsUnlocked { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x32E5B3C Offset: 0x32E5B3C VA: 0x32E5B3C Slot: 8
	public bool get_IsUnlocked() { }

	[CompilerGenerated]
	// RVA: 0x32E5B44 Offset: 0x32E5B44 VA: 0x32E5B44 Slot: 9
	public void set_IsUnlocked(bool value) { }

	// RVA: 0x32E5B50 Offset: 0x32E5B50 VA: 0x32E5B50 Slot: 10
	public void Unlock() { }

	// RVA: 0x32E5B78 Offset: 0x32E5B78 VA: 0x32E5B78 Slot: 11
	public void Lock() { }

	// RVA: 0x32E5BA0 Offset: 0x32E5BA0 VA: 0x32E5BA0 Slot: 4
	public void Initialize(TowerWinStreakStepViewModel viewModel) { }

	// RVA: 0x32E5BA4 Offset: 0x32E5BA4 VA: 0x32E5BA4
	public void SetIntermediateStepImage(bool isClaimed) { }

	// RVA: 0x32E5BDC Offset: 0x32E5BDC VA: 0x32E5BDC Slot: 5
	public void SetLocalPosition(Vector3 position) { }

	// RVA: 0x32E5C24 Offset: 0x32E5C24 VA: 0x32E5C24 Slot: 6
	public Vector3 GetLocalPosition() { }

	// RVA: 0x32E5C44 Offset: 0x32E5C44 VA: 0x32E5C44 Slot: 7
	public Vector3 GetWorldPosition() { }

	// RVA: 0x32E5C64 Offset: 0x32E5C64 VA: 0x32E5C64 Slot: 12
	public void Dispose() { }

	// RVA: 0x32E5C68 Offset: 0x32E5C68 VA: 0x32E5C68
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.TowerWinStreak.Scripts.UI