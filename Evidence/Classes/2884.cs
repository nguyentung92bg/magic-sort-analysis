public class NavigationBarAnimationConfig : ScriptableObject // TypeDefIndex: 2884
{
	// Fields
	public float tabAnimationDuration; // 0x18
	public float lineAnimationDuration; // 0x1C
	public float selectedIconMoveDuration; // 0x20
	public float iconMoveDuration; // 0x24
	public float selectedIconScaleAmount; // 0x28
	public float selectedIconScaleDuration; // 0x2C
	public AnimationCurve selectedIconScaleEase; // 0x30
	public float oldIconScaleDuration; // 0x38
	public float oldIconMoveDuration; // 0x3C
	public Ease oldIconScaleEase; // 0x40

	// Methods

	// RVA: 0x297C588 Offset: 0x297C588 VA: 0x297C588
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.UI.Common.Scripts
[CreateAssetMenu(fileName = "NavigationManagerAnimationConfig", menuName = "Configs/NavigationManagerAnimationConfig")]