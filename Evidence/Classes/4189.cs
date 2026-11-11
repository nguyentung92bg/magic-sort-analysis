public class JetpackRaceWithStageUserView : MonoBehaviour // TypeDefIndex: 4189
{
	// Fields
	[SerializeField]
	private TextMeshPro _scoreText; // 0x18
	[SerializeField]
	private Vector3 _startPosition; // 0x20
	[SerializeField]
	private Vector3 _endPosition; // 0x2C
	[SerializeField]
	private Animation _animator; // 0x38
	[SerializeField]
	private ParticleSystem _playerWinParticle; // 0x40
	[SerializeField]
	private ParticleSystem _playerIdleParticle; // 0x48
	[SerializeField]
	[CompilerGenerated]
	private int <UserColumnIndex>k__BackingField; // 0x50
	[CompilerGenerated]
	[SerializeField]
	private bool <IsMe>k__BackingField; // 0x54
	private int _initialScore; // 0x58
	private JetpackRaceWithStageAnimationConfig _config; // 0x60
	private Tween _moveTween; // 0x68
	private Tween _scoreTween; // 0x70
	private Tween _delayTween; // 0x78

	// Properties
	public int UserColumnIndex { get; set; }
	public bool IsMe { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x3B12C74 Offset: 0x3B12C74 VA: 0x3B12C74
	public int get_UserColumnIndex() { }

	[CompilerGenerated]
	// RVA: 0x3B12C7C Offset: 0x3B12C7C VA: 0x3B12C7C
	private void set_UserColumnIndex(int value) { }

	[CompilerGenerated]
	// RVA: 0x3B12C84 Offset: 0x3B12C84 VA: 0x3B12C84
	public bool get_IsMe() { }

	[CompilerGenerated]
	// RVA: 0x3B12C8C Offset: 0x3B12C8C VA: 0x3B12C8C
	private void set_IsMe(bool value) { }

	// RVA: 0x3B12C98 Offset: 0x3B12C98 VA: 0x3B12C98
	public void Initialize(JetpackRaceWithStageLeaderboardPlayerViewModel viewModel, Vector3 startPosition, Vector3 endPosition, int stage) { }

	// RVA: 0x3B12E94 Offset: 0x3B12E94 VA: 0x3B12E94
	public void SetConfig(JetpackRaceWithStageAnimationConfig config) { }

	// RVA: 0x3B12E9C Offset: 0x3B12E9C VA: 0x3B12E9C
	public void SetPositionForRank(int score, int maxReachableScore) { }

	// RVA: 0x3B12F10 Offset: 0x3B12F10 VA: 0x3B12F10
	public void PlayTo(JetpackRaceWithStageLeaderboardPlayerViewModel viewModel) { }

	[Button]
	// RVA: 0x3B130F8 Offset: 0x3B130F8 VA: 0x3B130F8
	public void PlayUserRankIncrease(int score, int maxReachableScore) { }

	[Button]
	// RVA: 0x3B13348 Offset: 0x3B13348 VA: 0x3B13348
	public void PlayUserLose(int maxReachableScore) { }

	// RVA: 0x3B13520 Offset: 0x3B13520 VA: 0x3B13520
	public void PlayUserWin() { }

	// RVA: 0x3B13794 Offset: 0x3B13794 VA: 0x3B13794
	public void SetUserColumn(int columnIndex) { }

	// RVA: 0x3B1379C Offset: 0x3B1379C VA: 0x3B1379C
	public void Dispose() { }

	// RVA: 0x3B137EC Offset: 0x3B137EC VA: 0x3B137EC
	public void Show() { }

	// RVA: 0x3B13810 Offset: 0x3B13810 VA: 0x3B13810
	public void Hide() { }

	// RVA: 0x3B13834 Offset: 0x3B13834 VA: 0x3B13834
	public void OnDestroy() { }

	// RVA: 0x3B13838 Offset: 0x3B13838 VA: 0x3B13838
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x3B13840 Offset: 0x3B13840 VA: 0x3B13840
	private string <PlayTo>b__22_0() { }

	[CompilerGenerated]
	// RVA: 0x3B13864 Offset: 0x3B13864 VA: 0x3B13864
	private void <PlayTo>b__22_1(string x) { }

	[CompilerGenerated]
	// RVA: 0x3B13888 Offset: 0x3B13888 VA: 0x3B13888
	private void <PlayUserRankIncrease>b__23_1(float value) { }

	[CompilerGenerated]
	// RVA: 0x3B139A4 Offset: 0x3B139A4 VA: 0x3B139A4
	private void <PlayUserLose>b__24_0(float value) { }

	[CompilerGenerated]
	// RVA: 0x3B13AC0 Offset: 0x3B13AC0 VA: 0x3B13AC0
	private void <PlayUserLose>b__24_1() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]