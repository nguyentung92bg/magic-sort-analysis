public class RainbowWaterView : MonoBehaviour // TypeDefIndex: 1192
{
	// Fields
	[SerializeField]
	private List<SpriteRenderer> _rainbowSprites; // 0x18
	[SerializeField]
	private GameObject _rainbow; // 0x20
	[SerializeField]
	private RainbowWaterAnimationConfig _rainbowAnimationConfig; // 0x28
	private Tween _activeFadeTween; // 0x30

	// Methods

	// RVA: 0x20EEFD0 Offset: 0x20EEFD0 VA: 0x20EEFD0
	public void Initialize() { }

	// RVA: 0x20EEFD4 Offset: 0x20EEFD4 VA: 0x20EEFD4
	public void SetSortOrder(int sortOrder) { }

	// RVA: 0x20EF124 Offset: 0x20EF124 VA: 0x20EF124
	public void SetActiveRainbow(bool active) { }

	// RVA: 0x20EF190 Offset: 0x20EF190 VA: 0x20EF190
	public void SetAsRainbow() { }

	// RVA: 0x20EF33C Offset: 0x20EF33C VA: 0x20EF33C
	public void ConsumeRainbow(TweenCallback onComplete) { }

	// RVA: 0x20EF158 Offset: 0x20EF158 VA: 0x20EF158
	private void KillActiveFadeTween() { }

	// RVA: 0x20EF524 Offset: 0x20EF524 VA: 0x20EF524
	public void UpdateRainbow(bool isRainbow) { }

	// RVA: 0x20EF560 Offset: 0x20EF560 VA: 0x20EF560
	private void RestoreRainbowSpriteAlphas() { }

	// RVA: 0x20EF304 Offset: 0x20EF304 VA: 0x20EF304
	private static void SetSpriteAlpha(SpriteRenderer sprite, float alpha) { }

	// RVA: 0x20EF65C Offset: 0x20EF65C VA: 0x20EF65C
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]