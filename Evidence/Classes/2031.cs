public class ProgressBar : MonoBehaviour // TypeDefIndex: 2031
{
	// Fields
	[SerializeField]
	private SpriteRenderer _progressSpriteRenderer; // 0x18
	[SerializeField]
	private SpriteRenderer _progressBackgroundSpriteRenderer; // 0x20
	[SerializeField]
	private Transform _progressPivot; // 0x28
	[SerializeField]
	private TextMeshPro _pivotText; // 0x30
	[SerializeField]
	private ParticleSystem _pivotParticle; // 0x38
	private Tween _fillTween; // 0x40
	private Tween _pivotTween; // 0x48
	private Tween _textTween; // 0x50

	// Methods

	// RVA: 0x32E56A4 Offset: 0x32E56A4 VA: 0x32E56A4
	private void Awake() { }

	// RVA: 0x32E56C0 Offset: 0x32E56C0 VA: 0x32E56C0
	public void SetEmpty() { }

	// RVA: 0x32E56F0 Offset: 0x32E56F0 VA: 0x32E56F0
	public void SetProgress(float sizeY) { }

	// RVA: 0x32E572C Offset: 0x32E572C VA: 0x32E572C
	public void SetPivotText(int value, bool animate) { }

	// RVA: 0x32E5774 Offset: 0x32E5774 VA: 0x32E5774
	public void ToggleParticle(bool toggle) { }

	// RVA: 0x32E57A4 Offset: 0x32E57A4 VA: 0x32E57A4
	public void SetProgressPivot(float positionY) { }

	// RVA: 0x32E580C Offset: 0x32E580C VA: 0x32E580C
	public Tween SetProgressPivotTween(float currentPositionY, float targetPositionY, float duration, AnimationCurve curve) { }

	// RVA: 0x32E590C Offset: 0x32E590C VA: 0x32E590C
	public Tween MainFillWithAnimation(float currentYSize, float targetYSize, float duration, AnimationCurve curve) { }

	// RVA: 0x32E5A54 Offset: 0x32E5A54 VA: 0x32E5A54
	public void Dispose() { }

	// RVA: 0x32E5AA4 Offset: 0x32E5AA4 VA: 0x32E5AA4
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x32E5AAC Offset: 0x32E5AAC VA: 0x32E5AAC
	private void <SetProgressPivotTween>b__14_0(float value) { }
}

// Namespace: Modules.Contexts.Home.TowerWinStreak.Scripts.UI