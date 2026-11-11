public class MagicStreakGaeRewardElement : BasicView // TypeDefIndex: 3871
{
	// Fields
	[SerializeField]
	private int _id; // 0x24
	[SerializeField]
	private UIElement _uiElement; // 0x28
	[SerializeField]
	private CurrencyViewFactory _currencyViewFactory; // 0x30
	[SerializeField]
	private GameObject _lockIcon; // 0x38
	[SerializeField]
	private GameObject _bottomStick; // 0x40
	[SerializeField]
	private GameObject _topStick; // 0x48
	[SerializeField]
	private TextMeshPro _rankText; // 0x50
	[SerializeField]
	private Transform _currencyContainer; // 0x58
	[SerializeField]
	private MagicStreakGaeSpriteConfig _spriteConfig; // 0x60
	[SerializeField]
	private SpriteRenderer _backgroundRenderer; // 0x68
	[SerializeField]
	private SpriteRenderer _backgroundTipRenderer; // 0x70
	[SerializeField]
	private SpriteRenderer _rankBackgroundRenderer; // 0x78
	[SerializeField]
	private ParticleSystem _shineParticle; // 0x80
	[SerializeField]
	private GameObject _lastRewardContainer; // 0x88
	[SerializeField]
	private SpriteRenderer _greenTickRenderer; // 0x90
	private CurrencyView _currentCurrencyView; // 0x98

	// Properties
	public override int Id { get; set; }
	public Vector3 Size { get; }

	// Methods

	// RVA: 0x3CFBA1C Offset: 0x3CFBA1C VA: 0x3CFBA1C Slot: 5
	public override int get_Id() { }

	// RVA: 0x3CFBA24 Offset: 0x3CFBA24 VA: 0x3CFBA24 Slot: 6
	public override void set_Id(int value) { }

	// RVA: 0x3CFBA2C Offset: 0x3CFBA2C VA: 0x3CFBA2C
	public Vector3 get_Size() { }

	// RVA: 0x3CFBA54 Offset: 0x3CFBA54 VA: 0x3CFBA54 Slot: 7
	public override void Initialize() { }

	// RVA: 0x3CFBA58 Offset: 0x3CFBA58 VA: 0x3CFBA58
	public void SetModel(MagicStreakGaeRewardElementViewModel model) { }

	// RVA: 0x3CFBCEC Offset: 0x3CFBCEC VA: 0x3CFBCEC
	private void RecycleCurrencyView() { }

	// RVA: 0x3CFBDA4 Offset: 0x3CFBDA4 VA: 0x3CFBDA4 Slot: 8
	public override void Recycle() { }

	// RVA: 0x3CFBE14 Offset: 0x3CFBE14 VA: 0x3CFBE14
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.MagicStreakGAE.Scripts