public class BoatRushUserView : MonoBehaviour // TypeDefIndex: 4882
{
	// Fields
	[SerializeField]
	private TMP_Text _scoreText; // 0x18
	[SerializeField]
	private Animator _animator; // 0x20
	[SerializeField]
	private string _idleAnimationKey; // 0x28
	[SerializeField]
	private string _progressAnimationKey; // 0x30
	[SerializeField]
	private string _finishAnimationKey; // 0x38
	[SerializeField]
	private BoatRushAnimationConfig _animationConfig; // 0x40
	[SerializeField]
	private GameObject _toolbar; // 0x48
	private Tween _moveTween; // 0x50
	private Tween _scoreTween; // 0x58
	private bool _isFinished; // 0x60
	private Vector3 _startPosition; // 0x64
	private Vector3 _endPosition; // 0x70
	[CompilerGenerated]
	private bool <IsMe>k__BackingField; // 0x7C

	// Properties
	public bool IsMe { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x40FE1F0 Offset: 0x40FE1F0 VA: 0x40FE1F0
	public bool get_IsMe() { }

	[CompilerGenerated]
	// RVA: 0x40FE1F8 Offset: 0x40FE1F8 VA: 0x40FE1F8
	private void set_IsMe(bool value) { }

	// RVA: 0x40FE204 Offset: 0x40FE204 VA: 0x40FE204
	public void Initialize(BoatRushLeaderboardPlayerViewModel viewModel, Vector3 startPosition, Vector3 endPosition, int maxReachableScore) { }

	// RVA: 0x40FE340 Offset: 0x40FE340 VA: 0x40FE340
	public void PlayUserRankIncrease(int score, int maxReachableScore) { }

	// RVA: 0x40FE4E0 Offset: 0x40FE4E0 VA: 0x40FE4E0
	public void PlayUserWin() { }

	// RVA: 0x40FE75C Offset: 0x40FE75C VA: 0x40FE75C
	public void Show() { }

	// RVA: 0x40FE790 Offset: 0x40FE790 VA: 0x40FE790
	public void Hide() { }

	// RVA: 0x40FE7B4 Offset: 0x40FE7B4 VA: 0x40FE7B4
	public void OnDestroy() { }

	// RVA: 0x40FE7B8 Offset: 0x40FE7B8 VA: 0x40FE7B8
	private void Dispose() { }

	// RVA: 0x40FE7F4 Offset: 0x40FE7F4 VA: 0x40FE7F4
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x40FE7FC Offset: 0x40FE7FC VA: 0x40FE7FC
	private void <PlayUserRankIncrease>b__17_0(float value) { }
}

// Namespace: 
[CompilerGenerated]