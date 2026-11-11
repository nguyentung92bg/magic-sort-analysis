public class EnergyBalanceView : MonoBehaviour // TypeDefIndex: 3592
{
	// Fields
	[SerializeField]
	private Transform _energyIconTransform; // 0x18
	[SerializeField]
	private ParticleSystem _energyParticles; // 0x20
	[SerializeField]
	private AnimationCurve _punchScaleCurve; // 0x28
	[SerializeField]
	private Vector3 _punchScaleAmount; // 0x30
	[SerializeField]
	private float _punchScaleDuration; // 0x3C
	[SerializeField]
	private int _scaleVibrato; // 0x40
	[SerializeField]
	private float _scaleOutTime; // 0x44
	[SerializeField]
	private float _scaleOutDuration; // 0x48
	[SerializeField]
	private Vector3 _scaleOutValue; // 0x4C
	[SerializeField]
	private AnimationCurve _scaleOutCurve; // 0x58
	[SerializeField]
	private float _recycleTime; // 0x60
	[SerializeField]
	private float _delayBetweenEnergies; // 0x64
	[SerializeField]
	private CurrencyViewFactory _factory; // 0x68
	[SerializeField]
	private Vector3 _spawnOffset; // 0x70
	[SerializeField]
	private Transform _energyHolder; // 0x80
	private Tween _punchScaleTween; // 0x88
	private InventoryService _inventoryService; // 0x90

	// Methods

	// RVA: 0x3FA7434 Offset: 0x3FA7434 VA: 0x3FA7434
	private void Awake() { }

	// RVA: 0x3FA7600 Offset: 0x3FA7600 VA: 0x3FA7600
	private void OnDestroy() { }

	// RVA: 0x3FA77A8 Offset: 0x3FA77A8 VA: 0x3FA77A8
	private void OnEnergyArrived() { }

	// RVA: 0x3FA78BC Offset: 0x3FA78BC VA: 0x3FA78BC
	private void OnEnergyCollected(int level, int amount, Vector3 originPos) { }

	// RVA: 0x3FA7B8C Offset: 0x3FA7B8C VA: 0x3FA7B8C
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x3FA7BAC Offset: 0x3FA7BAC VA: 0x3FA7BAC
	private void <OnEnergyArrived>b__19_0() { }
}

// Namespace: Modules.Contexts.Home.MergeMiniGame.Scripts.UI