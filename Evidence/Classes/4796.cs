public class BroomStreakProgressBar : MonoBehaviour // TypeDefIndex: 4796
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

	// RVA: 0x3FC7CAC Offset: 0x3FC7CAC VA: 0x3FC7CAC
	private void Awake() { }

	// RVA: 0x3FC7CC8 Offset: 0x3FC7CC8 VA: 0x3FC7CC8
	public void SetEmpty() { }

	// RVA: 0x3FC7CF8 Offset: 0x3FC7CF8 VA: 0x3FC7CF8
	public void SetProgress(float sizeY) { }

	// RVA: 0x3FC7D34 Offset: 0x3FC7D34 VA: 0x3FC7D34
	public void SetPivotText(int value, bool animate) { }

	// RVA: 0x3FC7D7C Offset: 0x3FC7D7C VA: 0x3FC7D7C
	public void ToggleParticle(bool toggle) { }

	// RVA: 0x3FC7DAC Offset: 0x3FC7DAC VA: 0x3FC7DAC
	public void SetProgressPivot(float positionY) { }

	// RVA: 0x3FC7E14 Offset: 0x3FC7E14 VA: 0x3FC7E14
	public Tween SetProgressPivotTween(float currentPositionY, float targetPositionY, float duration, AnimationCurve curve) { }

	// RVA: 0x3FC7F14 Offset: 0x3FC7F14 VA: 0x3FC7F14
	public Tween MainFillWithAnimation(float currentYSize, float targetYSize, float duration, AnimationCurve curve) { }

	// RVA: 0x3FC8068 Offset: 0x3FC8068 VA: 0x3FC8068
	public void Dispose() { }

	// RVA: 0x3FC80B8 Offset: 0x3FC80B8 VA: 0x3FC80B8
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x3FC80C0 Offset: 0x3FC80C0 VA: 0x3FC80C0
	private void <SetProgressPivotTween>b__14_0(float value) { }
}

// Namespace: Modules.Contexts.Home.BroomStreak.Scripts.UI