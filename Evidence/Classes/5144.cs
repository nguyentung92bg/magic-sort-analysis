public class CurrencyRewardTarget : MonoBehaviour // TypeDefIndex: 5144
{
	// Fields
	[SerializeField]
	private ParticleSystem _onCurrencyArrivedParticleSystem; // 0x18
	[SerializeField]
	private AnimationCurve _scaleAnimationCurve; // 0x20
	[SerializeField]
	private float _scaleAmount; // 0x28
	[SerializeField]
	private AnimationCurve _punchScaleCurve; // 0x30
	[SerializeField]
	private Vector3 _punchScaleAmount; // 0x38
	[SerializeField]
	private float _punchScaleDuration; // 0x44
	[SerializeField]
	private int _scaleVibrato; // 0x48
	public GameObject CurrencyImage; // 0x50
	[SerializeField]
	private CurrencyType _currencyType; // 0x58
	private Tween _punchScaleTween; // 0x60
	[SerializeField]
	private CurrencyDisplayerController _currencyDisplayerController; // 0x68

	// Methods

	// RVA: 0x1381464 Offset: 0x1381464 VA: 0x1381464
	public void Awake() { }

	// RVA: 0x13814F8 Offset: 0x13814F8 VA: 0x13814F8
	public void OnDestroy() { }

	// RVA: 0x138158C Offset: 0x138158C VA: 0x138158C
	public void OnCurrencyArrived() { }

	// RVA: 0x1381720 Offset: 0x1381720 VA: 0x1381720
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x1381734 Offset: 0x1381734 VA: 0x1381734
	private void <OnCurrencyArrived>b__13_0() { }
}

// Namespace: Modules.Contexts.Application.Inventory.Scripts.UI
[CreateAssetMenu(fileName = "CurrencyShineAnimationConfig", menuName = "Configs/CurrencyShineAnimationConfig")]