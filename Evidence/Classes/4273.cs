public class JetpackRaceUserView : MonoBehaviour // TypeDefIndex: 4273
{
	// Fields
	[SerializeField]
	private TextMeshPro _scoreText; // 0x18
	[SerializeField]
	private Transform _startPosition; // 0x20
	[SerializeField]
	private Transform _endPosition; // 0x28
	[SerializeField]
	private Animation _animator; // 0x30
	[SerializeField]
	private ParticleSystem _playerWinParticle; // 0x38
	[SerializeField]
	private ParticleSystem _playerIdleParticle; // 0x40
	[CompilerGenerated]
	[SerializeField]
	private int <UserColumnIndex>k__BackingField; // 0x48
	[CompilerGenerated]
	[SerializeField]
	private bool <IsMe>k__BackingField; // 0x4C
	private int _initialScore; // 0x50
	private JetpackRaceAnimationConfig _config; // 0x58
	private Tween _moveTween; // 0x60
	private Tween _scoreTween; // 0x68
	private Tween _delayTween; // 0x70

	// Properties
	public int UserColumnIndex { get; set; }
	public bool IsMe { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x1C6EF3C Offset: 0x1C6EF3C VA: 0x1C6EF3C
	public int get_UserColumnIndex() { }

	[CompilerGenerated]
	// RVA: 0x1C6EF44 Offset: 0x1C6EF44 VA: 0x1C6EF44
	private void set_UserColumnIndex(int value) { }

	[CompilerGenerated]
	// RVA: 0x1C6EF4C Offset: 0x1C6EF4C VA: 0x1C6EF4C
	public bool get_IsMe() { }

	[CompilerGenerated]
	// RVA: 0x1C6EF54 Offset: 0x1C6EF54 VA: 0x1C6EF54
	private void set_IsMe(bool value) { }

	// RVA: 0x1C6EF60 Offset: 0x1C6EF60 VA: 0x1C6EF60
	public void Initialize(JetpackRaceLeaderboardPlayerViewModel viewModel) { }

	// RVA: 0x1C6F0F0 Offset: 0x1C6F0F0 VA: 0x1C6F0F0
	public void SetConfig(JetpackRaceAnimationConfig config) { }

	// RVA: 0x1C6F0F8 Offset: 0x1C6F0F8 VA: 0x1C6F0F8
	public void SetPositionForRank(int score, int maxReachableScore) { }

	// RVA: 0x1C6F1B4 Offset: 0x1C6F1B4 VA: 0x1C6F1B4
	public void PlayTo(JetpackRaceLeaderboardPlayerViewModel viewModel) { }

	[Button]
	// RVA: 0x1C6F3C4 Offset: 0x1C6F3C4 VA: 0x1C6F3C4
	public void PlayUserRankIncrease(int score, int maxReachableScore) { }

	[Button]
	// RVA: 0x1C6F6AC Offset: 0x1C6F6AC VA: 0x1C6F6AC
	public void PlayUserLose(int maxReachableScore) { }

	// RVA: 0x1C6F8F8 Offset: 0x1C6F8F8 VA: 0x1C6F8F8
	public void PlayUserWin() { }

	// RVA: 0x1C6FB6C Offset: 0x1C6FB6C VA: 0x1C6FB6C
	public void SetUserColumn(int columnIndex) { }

	// RVA: 0x1C6FB74 Offset: 0x1C6FB74 VA: 0x1C6FB74
	public void Dispose() { }

	// RVA: 0x1C6FBC4 Offset: 0x1C6FBC4 VA: 0x1C6FBC4
	public void Show() { }

	// RVA: 0x1C6FBE8 Offset: 0x1C6FBE8 VA: 0x1C6FBE8
	public void Hide() { }

	// RVA: 0x1C6FC0C Offset: 0x1C6FC0C VA: 0x1C6FC0C
	public void OnDestroy() { }

	// RVA: 0x1C6FC10 Offset: 0x1C6FC10 VA: 0x1C6FC10
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x1C6FC18 Offset: 0x1C6FC18 VA: 0x1C6FC18
	private string <PlayTo>b__22_0() { }

	[CompilerGenerated]
	// RVA: 0x1C6FC3C Offset: 0x1C6FC3C VA: 0x1C6FC3C
	private void <PlayTo>b__22_1(string x) { }

	[CompilerGenerated]
	// RVA: 0x1C6FC60 Offset: 0x1C6FC60 VA: 0x1C6FC60
	private void <PlayUserRankIncrease>b__23_1(float value) { }

	[CompilerGenerated]
	// RVA: 0x1C6FD7C Offset: 0x1C6FD7C VA: 0x1C6FD7C
	private void <PlayUserLose>b__24_0(float value) { }

	[CompilerGenerated]
	// RVA: 0x1C6FE98 Offset: 0x1C6FE98 VA: 0x1C6FE98
	private void <PlayUserLose>b__24_1() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]