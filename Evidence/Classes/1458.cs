public abstract class WaterShapeRenderer : MonoBehaviour // TypeDefIndex: 1458
{
	// Fields
	[SerializeField]
	private Color _color; // 0x18
	private SpriteRenderer _spriteRenderer; // 0x28
	private float _speed; // 0x30
	private float _aboveWaveLength; // 0x34
	protected float _aboveWaveHeight; // 0x38
	private float _aboveWaveDirectionX; // 0x3C
	private float _aboveWaveDirectionY; // 0x40
	private float _belowWaveLength; // 0x44
	protected float _belowWaveHeight; // 0x48
	private float _belowWaveDirectionX; // 0x4C
	private float _belowWaveDirectionY; // 0x50
	private float _belowWaveCustomTime; // 0x54
	protected float _belowAdditionalWaveHeight; // 0x58
	private MaterialPropertyBlock _propertiesCache; // 0x60
	[SerializeField]
	private EclipseAnimationConfig _defaultAnimation; // 0x68
	[SerializeField]
	protected EclipseAnimationConfig _onRisingAnimationEndEnd; // 0x70
	[SerializeField]
	private EclipseAnimationConfig _bottleSelectionAnimation; // 0x78
	[SerializeField]
	private EclipseAnimationConfig _bottleEntranceAnimation; // 0x80
	[SerializeField]
	private EclipseAnimationConfig _risingAnimationStart; // 0x88
	[SerializeField]
	protected EclipseAnimationConfig _risingAnimationEnd; // 0x90
	[SerializeField]
	protected EclipseAnimationConfig _risingAnimationEndStart; // 0x98
	private static readonly int Color1; // 0x0
	private static readonly int Speed; // 0x4
	private static readonly int AboveWaveLength; // 0x8
	private static readonly int AboveWaveHeight; // 0xC
	private static readonly int AboveWaveDirectionX; // 0x10
	private static readonly int AboveWaveDirectionY; // 0x14
	private static readonly int BelowWaveLength; // 0x18
	private static readonly int BelowWaveHeight; // 0x1C
	private static readonly int BelowWaveDirectionX; // 0x20
	private static readonly int BelowWaveDirectionY; // 0x24
	private static readonly int BelowWaveCustomTime; // 0x28
	private static readonly int BelowAdditionalWaveHeight; // 0x2C
	private Tween _playAnimationTween; // 0xA0
	private Tween _startRisingAnimationTween; // 0xA8
	private Tween _colorChangeTween; // 0xB0
	protected Tween SlowDownRisingAnimationTween; // 0xB8
	protected Tween SlowDownRisingAnimationEndTween; // 0xC0
	protected Sequence ActiveSequence; // 0xC8

	// Methods

	// RVA: 0x1E9E8EC Offset: 0x1E9E8EC VA: 0x1E9E8EC
	public void OnEnable() { }

	// RVA: 0x1E9E904 Offset: 0x1E9E904 VA: 0x1E9E904
	private void Initialize() { }

	// RVA: 0x1E9EBEC Offset: 0x1E9EBEC VA: 0x1E9EBEC
	public void ToggleWaterShape(bool active) { }

	// RVA: 0x1E9E9B0 Offset: 0x1E9E9B0 VA: 0x1E9E9B0
	private void UpdateMaterialProperties() { }

	// RVA: 0x1E9EC14 Offset: 0x1E9EC14 VA: 0x1E9EC14
	public void SetColorSprite(Sprite sprite) { }

	// RVA: 0x1E9EC68 Offset: 0x1E9EC68 VA: 0x1E9EC68
	public void OnBottleSelected(bool canPlayAnimation) { }

	// RVA: 0x1E9EE28 Offset: 0x1E9EE28 VA: 0x1E9EE28
	public void OnRisingAnimationStart() { }

	// RVA: 0x1E9EF60 Offset: 0x1E9EF60 VA: 0x1E9EF60 Slot: 4
	public virtual void OnRisingAnimationEnd() { }

	// RVA: 0x1E9F098 Offset: 0x1E9F098 VA: 0x1E9F098
	public void PlayLevelStartAnimation() { }

	// RVA: 0x1E9EC78 Offset: 0x1E9EC78 VA: 0x1E9EC78
	protected void PlayAnimation(EclipseAnimationConfig config) { }

	// RVA: 0x1E9EE48 Offset: 0x1E9EE48 VA: 0x1E9EE48
	protected void StartRisingAnimation(EclipseAnimationConfig animationConfig, float duration) { }

	// RVA: 0x1E9F0A0 Offset: 0x1E9F0A0 VA: 0x1E9F0A0
	private void ClearTweens() { }

	// RVA: 0x1E9EF90 Offset: 0x1E9EF90 VA: 0x1E9EF90
	protected Tween EndRisingAnimation(EclipseAnimationConfig animationConfig, float duration) { }

	// RVA: 0x1E9F104 Offset: 0x1E9F104 VA: 0x1E9F104 Slot: 5
	public virtual void PlayDailyBlobBelowWaterShake() { }

	// RVA: 0x1E9EBB0 Offset: 0x1E9EBB0 VA: 0x1E9EBB0
	private void ApplyConfig(EclipseAnimationConfig config) { }

	// RVA: 0x1E9F108 Offset: 0x1E9F108 VA: 0x1E9F108
	public void SetSortOrder(int sortOrder) { }

	// RVA: 0x1E9F124 Offset: 0x1E9F124 VA: 0x1E9F124
	public void FadeInSprite(Sprite sprite, float duration) { }

	// RVA: 0x1E9F2C4 Offset: 0x1E9F2C4 VA: 0x1E9F2C4
	public void PlayColor(ColorAndColorId colorAndColorId, float duration) { }

	// RVA: 0x1E9F13C Offset: 0x1E9F13C VA: 0x1E9F13C
	private void PlayColorFrom(Sprite sprite, Color startColor, float duration) { }

	// RVA: 0x1E9F2F0 Offset: 0x1E9F2F0 VA: 0x1E9F2F0
	public Vector3 GetTopPosition() { }

	// RVA: 0x1E9F310 Offset: 0x1E9F310 VA: 0x1E9F310
	public Vector3 GetTopLocalPosition() { }

	// RVA: 0x1E9F330 Offset: 0x1E9F330 VA: 0x1E9F330
	public int GetSortOrder() { }

	// RVA: 0x1E9F34C Offset: 0x1E9F34C VA: 0x1E9F34C
	protected void .ctor() { }

	// RVA: 0x1E9F35C Offset: 0x1E9F35C VA: 0x1E9F35C
	private static void .cctor() { }

	[CompilerGenerated]
	// RVA: 0x1E9F5C8 Offset: 0x1E9F5C8 VA: 0x1E9F5C8
	private Color <PlayColorFrom>b__57_0() { }

	[CompilerGenerated]
	// RVA: 0x1E9F5D4 Offset: 0x1E9F5D4 VA: 0x1E9F5D4
	private void <PlayColorFrom>b__57_1(Color x) { }
}

// Namespace: Modules.Contexts.GamePlay.BoardItems.Scripts.Water