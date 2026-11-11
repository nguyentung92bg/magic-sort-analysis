public class DuckFestivalCircleProgressBar : MonoBehaviour // TypeDefIndex: 4401
{
	// Fields
	[SerializeField]
	private SpriteRenderer _spriteRenderer; // 0x18
	[SerializeField]
	private float _progressEmptyValue; // 0x20
	[SerializeField]
	private float _progressFillValue; // 0x24

	// Methods

	// RVA: 0x1B99F70 Offset: 0x1B99F70 VA: 0x1B99F70
	public void SetProgress(DuckFestivalProgressViewModel progress) { }

	// RVA: 0x1B9A010 Offset: 0x1B9A010 VA: 0x1B9A010
	public Tween PlayProgressAnimation(DuckFestivalProgressViewModel progress, float duration, AnimationCurve animationCurve) { }

	[Button]
	// RVA: 0x1B9A0E4 Offset: 0x1B9A0E4 VA: 0x1B9A0E4
	public void SetProgress(float ratio) { }

	[Button]
	// RVA: 0x1B9A174 Offset: 0x1B9A174 VA: 0x1B9A174
	public Tween PlayProgressAnimation(float ratio, float duration, AnimationCurve animationCurve) { }

	// RVA: 0x1B9A234 Offset: 0x1B9A234 VA: 0x1B9A234
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.DuckFestival.Scripts.UI