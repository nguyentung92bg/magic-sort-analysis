public class CircleProgressBar : MonoBehaviour // TypeDefIndex: 2024
{
	// Fields
	[SerializeField]
	private SpriteRenderer _spriteRenderer; // 0x18
	[SerializeField]
	private float _progressEmptyValue; // 0x20
	[SerializeField]
	private float _progressFillValue; // 0x24

	// Methods

	[Button]
	// RVA: 0x32E4C20 Offset: 0x32E4C20 VA: 0x32E4C20
	public void SetProgress(float progress) { }

	[Button]
	// RVA: 0x32E4CB0 Offset: 0x32E4CB0 VA: 0x32E4CB0
	public Tween PlayProgressAnimation(float progress, float duration, AnimationCurve animationCurve) { }

	// RVA: 0x32E4D70 Offset: 0x32E4D70 VA: 0x32E4D70
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.TowerWinStreak.Scripts.UI