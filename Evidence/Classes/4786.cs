public class BroomStreakIntermediateStepView : MonoBehaviour, IBroomStreakStepView, IDisposable // TypeDefIndex: 4786
{
	// Fields
	[SerializeField]
	private SpriteRenderer _spriteRenderer; // 0x18
	[SerializeField]
	private BroomStreakAnimationsConfig _broomStreakAnimationsConfig; // 0x20
	[CompilerGenerated]
	private bool <IsUnlocked>k__BackingField; // 0x28

	// Properties
	public bool IsUnlocked { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x3FC43D0 Offset: 0x3FC43D0 VA: 0x3FC43D0 Slot: 8
	public bool get_IsUnlocked() { }

	[CompilerGenerated]
	// RVA: 0x3FC43D8 Offset: 0x3FC43D8 VA: 0x3FC43D8 Slot: 9
	public void set_IsUnlocked(bool value) { }

	// RVA: 0x3FC43E4 Offset: 0x3FC43E4 VA: 0x3FC43E4 Slot: 10
	public void Unlock() { }

	// RVA: 0x3FC440C Offset: 0x3FC440C VA: 0x3FC440C Slot: 11
	public void Lock() { }

	// RVA: 0x3FC4434 Offset: 0x3FC4434 VA: 0x3FC4434 Slot: 4
	public void Initialize(BroomStreakStepViewModel viewModel) { }

	// RVA: 0x3FC4438 Offset: 0x3FC4438 VA: 0x3FC4438
	public void SetIntermediateStepImage(bool isClaimed) { }

	// RVA: 0x3FC4470 Offset: 0x3FC4470 VA: 0x3FC4470 Slot: 5
	public void SetLocalPosition(Vector3 position) { }

	// RVA: 0x3FC44B8 Offset: 0x3FC44B8 VA: 0x3FC44B8 Slot: 6
	public Vector3 GetLocalPosition() { }

	// RVA: 0x3FC44D8 Offset: 0x3FC44D8 VA: 0x3FC44D8 Slot: 7
	public Vector3 GetWorldPosition() { }

	// RVA: 0x3FC44F8 Offset: 0x3FC44F8 VA: 0x3FC44F8 Slot: 12
	public void Dispose() { }

	// RVA: 0x3FC44FC Offset: 0x3FC44FC VA: 0x3FC44FC
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.BroomStreak.Scripts.UI