public class TowerWinStreakBannerIntermediateStep : MonoBehaviour, ITowerStepView, IDisposable // TypeDefIndex: 2047
{
	// Fields
	[SerializeField]
	private SpriteRenderer _intermediateStepRenderer; // 0x18
	private TowerWinStreakBannerConfig _config; // 0x20
	[CompilerGenerated]
	private bool <IsUnlocked>k__BackingField; // 0x28

	// Properties
	public bool IsUnlocked { get; set; }

	// Methods

	// RVA: 0x359CED4 Offset: 0x359CED4 VA: 0x359CED4 Slot: 12
	public void Dispose() { }

	// RVA: 0x359CF40 Offset: 0x359CF40 VA: 0x359CF40
	public void SetConfig(TowerWinStreakBannerConfig config) { }

	// RVA: 0x359CF48 Offset: 0x359CF48 VA: 0x359CF48 Slot: 4
	public void Initialize(TowerWinStreakStepViewModel viewModel) { }

	// RVA: 0x359CF4C Offset: 0x359CF4C VA: 0x359CF4C Slot: 5
	public void SetLocalPosition(Vector3 position) { }

	// RVA: 0x359CF94 Offset: 0x359CF94 VA: 0x359CF94
	public void SetIntermediateSprite(Sprite sprite) { }

	// RVA: 0x359CFB0 Offset: 0x359CFB0 VA: 0x359CFB0 Slot: 6
	public Vector3 GetLocalPosition() { }

	// RVA: 0x359CFD0 Offset: 0x359CFD0 VA: 0x359CFD0 Slot: 7
	public Vector3 GetWorldPosition() { }

	[CompilerGenerated]
	// RVA: 0x359CFF0 Offset: 0x359CFF0 VA: 0x359CFF0 Slot: 8
	public bool get_IsUnlocked() { }

	[CompilerGenerated]
	// RVA: 0x359CFF8 Offset: 0x359CFF8 VA: 0x359CFF8 Slot: 9
	public void set_IsUnlocked(bool value) { }

	// RVA: 0x359D004 Offset: 0x359D004 VA: 0x359D004 Slot: 10
	public void Unlock() { }

	// RVA: 0x359D02C Offset: 0x359D02C VA: 0x359D02C Slot: 11
	public void Lock() { }

	// RVA: 0x359D054 Offset: 0x359D054 VA: 0x359D054
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.TowerWinStreak.Scripts.UI