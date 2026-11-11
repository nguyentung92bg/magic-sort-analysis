public class ChampionsLeaguePromotionCupView : MonoBehaviour // TypeDefIndex: 4688
{
	// Fields
	[SerializeField]
	private Transform _pivot; // 0x18
	[SerializeField]
	private int _elo; // 0x20
	[SerializeField]
	private SpriteRenderer _rankUpArrow; // 0x28
	[SerializeField]
	private SpriteRenderer _rankDownArrow; // 0x30
	[SerializeField]
	private ParticleSystem _particleSystem; // 0x38
	[SerializeField]
	private ParticleSystem _particleSystemDemotion; // 0x40
	[SerializeField]
	private ParticleSystem _winBlastParticleSystem; // 0x48
	[SerializeField]
	private Vector3Options _smallScaleOptions; // 0x50
	[FormerlySerializedAs("_bigScaleOptions")]
	[SerializeField]
	private Vector3Options _largeScaleOptions; // 0x58
	[SerializeField]
	private Vector2Options _upArrowMoveOptions; // 0x60
	[SerializeField]
	private FloatOptions _upArrowFadeOptions; // 0x68
	[SerializeField]
	private Vector2Options _downArrowMoveOptions; // 0x70
	[SerializeField]
	private FloatOptions _downArrowFadeOptions; // 0x78
	[SerializeField]
	private Vector3 _idleScale; // 0x80
	[SerializeField]
	private Vector3 _activeScale; // 0x8C

	// Methods

	// RVA: 0x3B21090 Offset: 0x3B21090 VA: 0x3B21090
	public void InitializeState(int elo) { }

	// RVA: 0x3B2146C Offset: 0x3B2146C VA: 0x3B2146C
	public void SetViewDisabledState(int elo) { }

	// RVA: 0x3B216CC Offset: 0x3B216CC VA: 0x3B216CC
	public void SetIdleState() { }

	// RVA: 0x3B21664 Offset: 0x3B21664 VA: 0x3B21664
	public void SetActiveState() { }

	// RVA: 0x3B21144 Offset: 0x3B21144 VA: 0x3B21144
	public Tween GetSmallScalingTween() { }

	// RVA: 0x3B21158 Offset: 0x3B21158 VA: 0x3B21158
	public Tween GetLargeScalingTween() { }

	// RVA: 0x3B2116C Offset: 0x3B2116C VA: 0x3B2116C
	public Tween GetActivateUpArrowTween() { }

	// RVA: 0x3B212C0 Offset: 0x3B212C0 VA: 0x3B212C0
	public Tween ActivateDownArrowTween() { }

	// RVA: 0x3B2141C Offset: 0x3B2141C VA: 0x3B2141C
	public void ActivateWinParticles() { }

	// RVA: 0x3B21794 Offset: 0x3B21794 VA: 0x3B21794
	public void ActivateWinBlastParticles() { }

	// RVA: 0x3B217C0 Offset: 0x3B217C0 VA: 0x3B217C0
	public void ActivateLoseParticles() { }

	// RVA: 0x3B21830 Offset: 0x3B21830 VA: 0x3B21830
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.ChampionsLeague.UI