public class BroomStreakCatView : MonoBehaviour // TypeDefIndex: 4747
{
	// Fields
	[SerializeField]
	private Animator _animator; // 0x18
	[SerializeField]
	private GameObject _mainCat; // 0x20
	[SerializeField]
	private GameObject _failCat; // 0x28
	private BroomStreakAnimationsConfig _animationConfig; // 0x30
	private BroomStreakCatState _catState; // 0x38
	private Sequence _catRiseSequence; // 0x40
	private Sequence _catFallSequence; // 0x48

	// Methods

	// RVA: 0x3B31B68 Offset: 0x3B31B68 VA: 0x3B31B68
	public void Initialize() { }

	// RVA: 0x3B31B6C Offset: 0x3B31B6C VA: 0x3B31B6C
	public void SetMainCatType(bool isMainCat) { }

	// RVA: 0x3B31BC4 Offset: 0x3B31BC4 VA: 0x3B31BC4
	public void PlayCatAnimation(BroomStreakCatState catState) { }

	// RVA: 0x3B31C84 Offset: 0x3B31C84 VA: 0x3B31C84
	public void PlayCatAnimation(string anim) { }

	// RVA: 0x3B31CA0 Offset: 0x3B31CA0 VA: 0x3B31CA0
	public void PlayAnimationWithTime(BroomStreakCatState catState, float time) { }

	// RVA: 0x3B31CDC Offset: 0x3B31CDC VA: 0x3B31CDC
	public void SetConfig(BroomStreakAnimationsConfig config) { }

	// RVA: 0x3B31CE4 Offset: 0x3B31CE4 VA: 0x3B31CE4
	public void SetLocalPositionY(Vector3 position) { }

	// RVA: 0x3B31D48 Offset: 0x3B31D48 VA: 0x3B31D48
	public Tween CatRiseSequence(Vector3 position) { }

	// RVA: 0x3B31E30 Offset: 0x3B31E30 VA: 0x3B31E30
	private Tween SampleRotation(float duration) { }

	// RVA: 0x3B31EC8 Offset: 0x3B31EC8 VA: 0x3B31EC8
	public Sequence CatFallSequence(float yPosition, float duration) { }

	// RVA: 0x3B31BEC Offset: 0x3B31BEC VA: 0x3B31BEC
	private string GetAnimKeyForState(BroomStreakCatState state) { }

	// RVA: 0x3B31F98 Offset: 0x3B31F98 VA: 0x3B31F98
	public void Dispose() { }

	// RVA: 0x3B31FC4 Offset: 0x3B31FC4 VA: 0x3B31FC4
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x3B31FCC Offset: 0x3B31FCC VA: 0x3B31FCC
	private void <SampleRotation>b__15_0(float value) { }
}

// Namespace: Modules.Contexts.Home.BroomStreak.Scripts
[Serializable]