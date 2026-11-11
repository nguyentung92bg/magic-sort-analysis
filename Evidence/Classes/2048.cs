public class TowerWinStreakBannerMainStep : MonoBehaviour, ITowerStepView, IDisposable // TypeDefIndex: 2048
{
	// Fields
	[SerializeField]
	private TowerWinStreakBannerConfig _config; // 0x18
	[SerializeField]
	private SpriteRenderer _mainStepRenderer; // 0x20
	[SerializeField]
	private SpriteRenderer _chestSpriteRenderer; // 0x28
	[SerializeField]
	private SpriteRenderer _tickSpriteRenderer; // 0x30
	[SerializeField]
	private TextMeshPro _text; // 0x38
	private Sequence _stepUnlockSequence; // 0x40
	[CompilerGenerated]
	private bool <IsUnlocked>k__BackingField; // 0x48

	// Properties
	public bool IsUnlocked { get; set; }

	// Methods

	// RVA: 0x359D05C Offset: 0x359D05C VA: 0x359D05C Slot: 4
	public void Initialize(TowerWinStreakStepViewModel viewModel) { }

	// RVA: 0x359D060 Offset: 0x359D060 VA: 0x359D060 Slot: 5
	public void SetLocalPosition(Vector3 position) { }

	// RVA: 0x359D0A8 Offset: 0x359D0A8 VA: 0x359D0A8
	public void SetChestSprite(Sprite sprite) { }

	// RVA: 0x359D0C4 Offset: 0x359D0C4 VA: 0x359D0C4 Slot: 6
	public Vector3 GetLocalPosition() { }

	// RVA: 0x359D0E4 Offset: 0x359D0E4 VA: 0x359D0E4 Slot: 7
	public Vector3 GetWorldPosition() { }

	// RVA: 0x359D104 Offset: 0x359D104 VA: 0x359D104
	public void SetText(string text) { }

	[CompilerGenerated]
	// RVA: 0x359D128 Offset: 0x359D128 VA: 0x359D128 Slot: 8
	public bool get_IsUnlocked() { }

	[CompilerGenerated]
	// RVA: 0x359D130 Offset: 0x359D130 VA: 0x359D130 Slot: 9
	public void set_IsUnlocked(bool value) { }

	// RVA: 0x359D13C Offset: 0x359D13C VA: 0x359D13C Slot: 10
	public void Unlock() { }

	// RVA: 0x359D1C8 Offset: 0x359D1C8 VA: 0x359D1C8
	public void UnlockWithAnimation(ParticleSystem particle) { }

	// RVA: 0x359D51C Offset: 0x359D51C VA: 0x359D51C Slot: 11
	public void Lock() { }

	// RVA: 0x359D55C Offset: 0x359D55C VA: 0x359D55C Slot: 12
	public void Dispose() { }

	// RVA: 0x359D5F0 Offset: 0x359D5F0 VA: 0x359D5F0
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x359D5F8 Offset: 0x359D5F8 VA: 0x359D5F8
	private void <UnlockWithAnimation>b__17_0() { }

	[CompilerGenerated]
	// RVA: 0x359D670 Offset: 0x359D670 VA: 0x359D670
	private void <UnlockWithAnimation>b__17_1() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]