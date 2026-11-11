public class MagicStreakTournamentProgressAnimationView : MonoBehaviour // TypeDefIndex: 3819
{
	// Fields
	[SerializeField]
	private Transform _hatContainer; // 0x18
	[SerializeField]
	private List<Transform> _hatPositions; // 0x20
	[SerializeField]
	public MagicStreakTournamentProgressView progressView; // 0x28
	[SerializeField]
	private MagicStreakTournamentBannerAnimationConfig _animationConfig; // 0x30
	private Sequence _loopHatAndProgressReturnAnimationSequence; // 0x38

	// Methods

	// RVA: 0x3E195E8 Offset: 0x3E195E8 VA: 0x3E195E8
	public void Initialize(int streakCount, List<int> multipliers) { }

	// RVA: 0x3E1A9C0 Offset: 0x3E1A9C0 VA: 0x3E1A9C0
	public void SetStreakCount(int streakCount, List<int> multipliers) { }

	// RVA: 0x3E19FCC Offset: 0x3E19FCC VA: 0x3E19FCC
	public void PrepareForWinAnimation() { }

	// RVA: 0x3E1A99C Offset: 0x3E1A99C VA: 0x3E1A99C
	public void SendMultiplierPositions() { }

	[Button]
	// RVA: 0x3E1A094 Offset: 0x3E1A094 VA: 0x3E1A094
	public Sequence PlayHatMoveAnimationToIndex(int initialStreakCount, int targetStreakCount) { }

	// RVA: 0x3E1ACB8 Offset: 0x3E1ACB8 VA: 0x3E1ACB8
	private Transform GetHatPositionByStreakCount(int streakCount) { }

	[Button]
	// RVA: 0x3E19640 Offset: 0x3E19640 VA: 0x3E19640
	public void LoopPlayHatReturnAnimationFromIndex(int index, List<int> multipliers) { }

	[Button]
	// RVA: 0x3E1A388 Offset: 0x3E1A388 VA: 0x3E1A388
	public Sequence PlayHatReturnAnimationFromIndex(int index) { }

	[Button]
	// RVA: 0x3E1B7B0 Offset: 0x3E1B7B0 VA: 0x3E1B7B0
	public void KillHatReturnAnimation() { }

	// RVA: 0x3E1B7C8 Offset: 0x3E1B7C8 VA: 0x3E1B7C8
	private float GetAdditionalDurationForHatMovement(int streakCount, bool useAdditionalTime) { }

	// RVA: 0x3E1B6A4 Offset: 0x3E1B6A4 VA: 0x3E1B6A4
	private Sequence GoBackAnimation(int index, Vector3 initialPosition, Vector3 middlePosition, Vector3 finalPosition) { }

	// RVA: 0x3E1B024 Offset: 0x3E1B024 VA: 0x3E1B024
	private Sequence MoveAlongCurve(Vector3[] pathPoints, int streakCount) { }

	// RVA: 0x3E1B2A4 Offset: 0x3E1B2A4 VA: 0x3E1B2A4
	public float GetTotalDurationForHat(int targetStreakCount) { }

	// RVA: 0x3E1B840 Offset: 0x3E1B840 VA: 0x3E1B840
	private Sequence MoveBackAlongCurve(Vector3[] pathPoints, int streakCount) { }

	[Button]
	// RVA: 0x3E1BAC0 Offset: 0x3E1BAC0 VA: 0x3E1BAC0
	public void Test() { }

	// RVA: 0x3E192CC Offset: 0x3E192CC VA: 0x3E192CC
	public void Hide() { }

	// RVA: 0x3E1BACC Offset: 0x3E1BACC VA: 0x3E1BACC
	private void OnDestroy() { }

	// RVA: 0x3E1BAE4 Offset: 0x3E1BAE4 VA: 0x3E1BAE4
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]