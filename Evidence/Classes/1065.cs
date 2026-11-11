public class LevelWinContinueOrQuitButton : MonoBehaviour // TypeDefIndex: 1065
{
	// Fields
	[SerializeField]
	private Button _button; // 0x18
	[SerializeField]
	private float _showDuration; // 0x20
	[SerializeField]
	private AnimationCurve _showAnimationCurve; // 0x28
	[SerializeField]
	private GameObject _parentGameObject; // 0x30
	[SerializeField]
	private AdRequestSource _adRequestSource; // 0x38
	private Tween _showTween; // 0x40

	// Methods

	// RVA: 0x16EDCE4 Offset: 0x16EDCE4 VA: 0x16EDCE4
	public void Awake() { }

	// RVA: 0x16EDD70 Offset: 0x16EDD70 VA: 0x16EDD70
	public void ShowWithAnimation(float delay) { }

	// RVA: 0x16EDF18 Offset: 0x16EDF18 VA: 0x16EDF18
	public void Hide() { }

	[AsyncStateMachine(typeof(LevelWinContinueOrQuitButton.<QuitLevel>d__9))]
	// RVA: 0x16EDF50 Offset: 0x16EDF50 VA: 0x16EDF50
	private void QuitLevel() { }

	// RVA: 0x16EE008 Offset: 0x16EE008 VA: 0x16EE008
	public void OnDestroy() { }

	// RVA: 0x16EE094 Offset: 0x16EE094 VA: 0x16EE094
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x16EE09C Offset: 0x16EE09C VA: 0x16EE09C
	private void <ShowWithAnimation>b__7_0() { }
}

// Namespace: 
[CompilerGenerated]