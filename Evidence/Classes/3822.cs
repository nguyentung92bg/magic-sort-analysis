public class MagicStreakTournamentProgressView : MonoBehaviour // TypeDefIndex: 3822
{
	// Fields
	[SerializeField]
	private Transform _target; // 0x18
	[SerializeField]
	private MagicStreakTournamentBannerAnimationConfig _animationConfig; // 0x20
	[SerializeField]
	private List<TextMeshPro> _multiplierTexts; // 0x28
	[SerializeField]
	private TextMeshPro _targetMultiplierText; // 0x30
	[SerializeField]
	private Transform _hatTransform; // 0x38
	[SerializeField]
	private List<SpriteRenderer> _separators; // 0x40
	[SerializeField]
	private SpriteRenderer _redProgressBar; // 0x48
	[SerializeField]
	private Transform _leftAnchor; // 0x50
	private Tween _rankUpdateTween; // 0x58
	private Tween _followHatTween; // 0x60
	private Tween _redBarTween; // 0x68
	private Sequence _textSequence; // 0x70
	private List<Transform> _multiplierTransforms; // 0x78
	private int _currentMultiplierIndex; // 0x80

	// Methods

	// RVA: 0x3E1C02C Offset: 0x3E1C02C VA: 0x3E1C02C
	public void SetMultiplierPositions(List<Transform> transforms) { }

	// RVA: 0x3E1AB54 Offset: 0x3E1AB54 VA: 0x3E1AB54
	public void ShowProgress(int streakCount, List<int> multipliers) { }

	// RVA: 0x3E1C034 Offset: 0x3E1C034 VA: 0x3E1C034
	private void SetMultiplierTexts(List<int> multipliers) { }

	// RVA: 0x3E1C1C4 Offset: 0x3E1C1C4 VA: 0x3E1C1C4
	private SoundType GetRespectiveSfx(int streakCount) { }

	// RVA: 0x3E1BF88 Offset: 0x3E1BF88 VA: 0x3E1BF88
	public void PlayRespectiveSfx(int streakCount) { }

	// RVA: 0x3E1B4E8 Offset: 0x3E1B4E8 VA: 0x3E1B4E8
	public float GetAdditionalDelayToGoBack(int streakCount) { }

	// RVA: 0x3E1B2EC Offset: 0x3E1B2EC VA: 0x3E1B2EC
	public Tween FollowHatXPosition(float duration) { }

	// RVA: 0x3E1B3D4 Offset: 0x3E1B3D4 VA: 0x3E1B3D4
	public Tween UpdateTargetRank(float duration, bool isWin) { }

	// RVA: 0x3E1C1E4 Offset: 0x3E1C1E4 VA: 0x3E1C1E4
	private Sequence TextSequence(bool isWin) { }

	// RVA: 0x3E1C2C8 Offset: 0x3E1C2C8 VA: 0x3E1C2C8
	private Tween PunchTween() { }

	// RVA: 0x3E1B560 Offset: 0x3E1B560 VA: 0x3E1B560
	public Tween RedBarMoveTween(int currentIndex, float duration) { }

	// RVA: 0x3E1AE94 Offset: 0x3E1AE94 VA: 0x3E1AE94
	public void ToggleRedBar(bool toggle) { }

	// RVA: 0x3E1C150 Offset: 0x3E1C150 VA: 0x3E1C150
	private void SetRedBarLength(int currentRank) { }

	// RVA: 0x3E1C354 Offset: 0x3E1C354 VA: 0x3E1C354
	private Transform GetTransformOfMultiplier(int index) { }

	// RVA: 0x3E1BC78 Offset: 0x3E1BC78 VA: 0x3E1BC78
	public void UpdateSeparatorSprites() { }

	// RVA: 0x3E1AEC4 Offset: 0x3E1AEC4 VA: 0x3E1AEC4
	public void SetDefaultSeparatorSprites() { }

	// RVA: 0x3E1AA14 Offset: 0x3E1AA14 VA: 0x3E1AA14
	public void SetMultiplierColorsForPivot() { }

	// RVA: 0x3E1AD10 Offset: 0x3E1AD10 VA: 0x3E1AD10
	public void SetAllMultiplierColors(Color color) { }

	// RVA: 0x3E19F1C Offset: 0x3E19F1C VA: 0x3E19F1C
	public void Dispose() { }

	// RVA: 0x3E1C3B8 Offset: 0x3E1C3B8 VA: 0x3E1C3B8
	private void OnDestroy() { }

	// RVA: 0x3E1C440 Offset: 0x3E1C440 VA: 0x3E1C440
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x3E1C4D0 Offset: 0x3E1C4D0 VA: 0x3E1C4D0
	private void <FollowHatXPosition>b__20_0(float x) { }
}

// Namespace: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Banner
[CreateAssetMenu(fileName = "MagicStreakTournamentSpriteConfig", menuName = "Configs/MagicStreakTournamentSpriteConfig", order = 1)]