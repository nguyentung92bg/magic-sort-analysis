public class TowerCatView : MonoBehaviour // TypeDefIndex: 2002
{
	// Fields
	[SerializeField]
	private Animator _animator; // 0x18
	private TowerAnimationsConfig _animationConfig; // 0x20
	private CatState _catState; // 0x28
	private Sequence _catRiseSequence; // 0x30
	private Sequence _catFallSequence; // 0x38

	// Methods

	// RVA: 0x32DFF68 Offset: 0x32DFF68 VA: 0x32DFF68
	public void Initialize() { }

	// RVA: 0x32DFF6C Offset: 0x32DFF6C VA: 0x32DFF6C
	public void PlayCatAnimation(CatState catState) { }

	// RVA: 0x32E002C Offset: 0x32E002C VA: 0x32E002C
	public void PlayCatAnimation(string anim) { }

	// RVA: 0x32E0048 Offset: 0x32E0048 VA: 0x32E0048
	public void PlayAnimationWithTime(CatState catState, float time) { }

	// RVA: 0x32E0084 Offset: 0x32E0084 VA: 0x32E0084
	public void SetConfig(TowerAnimationsConfig config) { }

	// RVA: 0x32E008C Offset: 0x32E008C VA: 0x32E008C
	public void SetLocalPositionY(Vector3 position) { }

	// RVA: 0x32E00F0 Offset: 0x32E00F0 VA: 0x32E00F0
	public Tween CatRiseSequence(Vector3 position) { }

	// RVA: 0x32E02BC Offset: 0x32E02BC VA: 0x32E02BC
	private Tween SampleRotation(float duration) { }

	// RVA: 0x32E0354 Offset: 0x32E0354 VA: 0x32E0354
	public Sequence CatFallSequence(float yPosition, float duration) { }

	// RVA: 0x32DFF94 Offset: 0x32DFF94 VA: 0x32DFF94
	private string GetAnimKeyForState(CatState state) { }

	// RVA: 0x32E0444 Offset: 0x32E0444 VA: 0x32E0444
	public void Dispose() { }

	// RVA: 0x32E0470 Offset: 0x32E0470 VA: 0x32E0470
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x32E0478 Offset: 0x32E0478 VA: 0x32E0478
	private void <SampleRotation>b__12_0(float value) { }
}

// Namespace: Modules.Contexts.Home.TowerWinStreak.Scripts
[Serializable]