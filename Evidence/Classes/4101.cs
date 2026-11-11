public class JourneyPosterElementView : JourneyElementView // TypeDefIndex: 4101
{
	// Fields
	[SerializeField]
	private TextMeshPro _titleText; // 0x58
	[SerializeField]
	private TextMeshPro _levelText; // 0x60
	[SerializeField]
	private SpriteRenderer _shadingBackgroundSpriteRenderer; // 0x68
	[SerializeField]
	private Button _selectButton; // 0x70
	[SerializeField]
	private SpriteRenderer _selectedSpriteRenderer; // 0x78
	[SerializeField]
	private GameObject _posterParent; // 0x80
	[SerializeField]
	private GameObject _lockParent; // 0x88
	[SerializeField]
	private SpriteRenderer _lockTop; // 0x90
	[SerializeField]
	private SpriteRenderer _lockBottom; // 0x98
	[SerializeField]
	private ShakeableTransform _shakeableTransform; // 0xA0
	[SerializeField]
	private ParticleSystem _particleSystem; // 0xA8
	private string _posterId; // 0xB0
	private GameObject _posterGameObject; // 0xB8
	private ChampionsLeagueService _championsLeagueService; // 0xC0
	private float _initialTrauma; // 0xC8
	private Vector3 _initialLockParentScale; // 0xCC
	private Vector3 _initialLockTopRotation; // 0xD8
	private Vector3 _initialLockTopPosition; // 0xE4
	private Vector3 _initialLockParentPosition; // 0xF0
	private Color _initialLockTopColor; // 0xFC
	private Color _initialLockBottomColor; // 0x10C
	private Color _initialShadingBackgroundSpriteRendererColor; // 0x11C
	[Header("Lock First Scale")]
	[SerializeField]
	private Vector3 _lockFirstScale; // 0x12C
	[SerializeField]
	private float _lockFirstScaleDuration; // 0x138
	[SerializeField]
	private Ease _lockFirstScaleEase; // 0x13C
	[SerializeField]
	[Header("Lock Top Position")]
	private Vector3 _lockTopPosition; // 0x140
	[SerializeField]
	private float _lockTopPositionDuration; // 0x14C
	[SerializeField]
	private Ease _lockTopPositionEase; // 0x150
	[Header("Lock Top Rotation")]
	[SerializeField]
	private Vector3 _lockTopRotation; // 0x154
	[SerializeField]
	private float _lockTopRotationDuration; // 0x160
	[SerializeField]
	private Ease _lockTopRotationEase; // 0x164
	[SerializeField]
	[Header("Lock Scale Punch")]
	private Ease _lockScalePunchEase; // 0x168
	[SerializeField]
	private float _lockScalePunchDuration; // 0x16C
	[SerializeField]
	private Vector3 _lockScalePunchStrength; // 0x170
	[SerializeField]
	[Header("Lock Fade")]
	private float _lockFadeDuration; // 0x17C
	[SerializeField]
	private Ease _lockFadeEase; // 0x180
	[SerializeField]
	private float _lockFadeDelay; // 0x184
	[Header("Background Shading Fade")]
	[SerializeField]
	private float _backgroundShadingFadeDuration; // 0x188
	[SerializeField]
	private Ease _backgroundShadingFadeEase; // 0x18C
	[Header("Particle System")]
	[SerializeField]
	private float _particleSystemDelayAfterMainAnimation; // 0x190

	// Methods

	// RVA: 0x3A7F924 Offset: 0x3A7F924 VA: 0x3A7F924 Slot: 7
	public override void Initialize() { }

	// RVA: 0x3A7FBB8 Offset: 0x3A7FBB8 VA: 0x3A7FBB8
	private void SaveInitialValues() { }

	[Button]
	// RVA: 0x3A7FCC8 Offset: 0x3A7FCC8 VA: 0x3A7FCC8
	private void ResetToInitialValues() { }

	// RVA: 0x3A7FDD4 Offset: 0x3A7FDD4 VA: 0x3A7FDD4 Slot: 9
	public override void SetModel(IJourneyItemViewModel journeyItemViewModel) { }

	// RVA: 0x3A7FE58 Offset: 0x3A7FE58 VA: 0x3A7FE58
	private void SetModelInternal(PosterViewModel posterViewModel) { }

	// RVA: 0x3A80218 Offset: 0x3A80218 VA: 0x3A80218
	private void SetPoster(string id) { }

	// RVA: 0x3A803EC Offset: 0x3A803EC VA: 0x3A803EC
	private void SetPosterSprite(GameObject poster) { }

	[Button]
	// RVA: 0x3A7E5C8 Offset: 0x3A7E5C8 VA: 0x3A7E5C8
	public Tween PlayClaimAnimations() { }

	// RVA: 0x3A800D8 Offset: 0x3A800D8 VA: 0x3A800D8
	private void DisableSelectControls() { }

	// RVA: 0x3A8054C Offset: 0x3A8054C VA: 0x3A8054C
	private void OnSelectPressed() { }

	// RVA: 0x3A80720 Offset: 0x3A80720 VA: 0x3A80720
	private void LeaguePosterSelectionUpdated(bool selected) { }

	// RVA: 0x3A80178 Offset: 0x3A80178 VA: 0x3A80178
	private void SetSelectedState() { }

	// RVA: 0x3A801C8 Offset: 0x3A801C8 VA: 0x3A801C8
	private void SetSelectableState() { }

	// RVA: 0x3A7FFF0 Offset: 0x3A7FFF0 VA: 0x3A7FFF0
	private string GetLevelRangeString(int startLevel, int levelRange) { }

	// RVA: 0x3A7E578 Offset: 0x3A7E578 VA: 0x3A7E578
	public void SetLocked() { }

	// RVA: 0x3A80128 Offset: 0x3A80128 VA: 0x3A80128
	private void SetUnlocked() { }

	// RVA: 0x3A8075C Offset: 0x3A8075C VA: 0x3A8075C Slot: 8
	public override void Recycle() { }

	// RVA: 0x3A808C8 Offset: 0x3A808C8 VA: 0x3A808C8
	private void OnDestroy() { }

	// RVA: 0x3A80334 Offset: 0x3A80334 VA: 0x3A80334
	private void TryRecyclePoster() { }

	// RVA: 0x3A802E8 Offset: 0x3A802E8 VA: 0x3A802E8
	private string AsThumbnailId(string id) { }

	// RVA: 0x3A809AC Offset: 0x3A809AC VA: 0x3A809AC
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x3A809B4 Offset: 0x3A809B4 VA: 0x3A809B4
	private void <PlayClaimAnimations>b__47_0() { }
}

// Namespace: Modules.Contexts.Home.Journey.Scripts.UI