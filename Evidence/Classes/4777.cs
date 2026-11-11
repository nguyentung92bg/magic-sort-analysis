public class BroomStreakBannerIntermediateStep : MonoBehaviour, IBroomStreakStepView, IDisposable // TypeDefIndex: 4777
{
	// Fields
	[SerializeField]
	private SpriteRenderer _intermediateStepRenderer; // 0x18
	private BroomStreakBannerConfig _config; // 0x20
	[CompilerGenerated]
	private bool <IsUnlocked>k__BackingField; // 0x28

	// Properties
	public bool IsUnlocked { get; set; }

	// Methods

	// RVA: 0x3FC13F0 Offset: 0x3FC13F0 VA: 0x3FC13F0 Slot: 12
	public void Dispose() { }

	// RVA: 0x3FC145C Offset: 0x3FC145C VA: 0x3FC145C
	public void SetConfig(BroomStreakBannerConfig config) { }

	// RVA: 0x3FC1464 Offset: 0x3FC1464 VA: 0x3FC1464 Slot: 4
	public void Initialize(BroomStreakStepViewModel viewModel) { }

	// RVA: 0x3FC1468 Offset: 0x3FC1468 VA: 0x3FC1468 Slot: 5
	public void SetLocalPosition(Vector3 position) { }

	// RVA: 0x3FC14B0 Offset: 0x3FC14B0 VA: 0x3FC14B0
	public void SetIntermediateSprite(Sprite sprite) { }

	// RVA: 0x3FC14CC Offset: 0x3FC14CC VA: 0x3FC14CC Slot: 6
	public Vector3 GetLocalPosition() { }

	// RVA: 0x3FC14EC Offset: 0x3FC14EC VA: 0x3FC14EC Slot: 7
	public Vector3 GetWorldPosition() { }

	[CompilerGenerated]
	// RVA: 0x3FC150C Offset: 0x3FC150C VA: 0x3FC150C Slot: 8
	public bool get_IsUnlocked() { }

	[CompilerGenerated]
	// RVA: 0x3FC1514 Offset: 0x3FC1514 VA: 0x3FC1514 Slot: 9
	public void set_IsUnlocked(bool value) { }

	// RVA: 0x3FC1520 Offset: 0x3FC1520 VA: 0x3FC1520 Slot: 10
	public void Unlock() { }

	// RVA: 0x3FC1548 Offset: 0x3FC1548 VA: 0x3FC1548 Slot: 11
	public void Lock() { }

	// RVA: 0x3FC1570 Offset: 0x3FC1570 VA: 0x3FC1570
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.BroomStreak.Scripts.UI