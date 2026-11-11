public class ChampionsLeagueLobbyCupView : MonoBehaviour, IIntervalUpdate // TypeDefIndex: 4639
{
	// Fields
	[SerializeField]
	private GameObject _parent; // 0x18
	[SerializeField]
	private int _elo; // 0x20
	[SerializeField]
	private Transform _medalParent; // 0x28
	[SerializeField]
	private AnimationPlayer _animationPlayer; // 0x30
	[SerializeField]
	private float _intervalAsSeconds; // 0x38

	// Methods

	// RVA: 0x3A71DCC Offset: 0x3A71DCC VA: 0x3A71DCC
	private void Awake() { }

	// RVA: 0x3A71E54 Offset: 0x3A71E54 VA: 0x3A71E54
	private void OnEnable() { }

	// RVA: 0x3A71E70 Offset: 0x3A71E70 VA: 0x3A71E70
	private void OnDestroy() { }

	// RVA: 0x3A71EF4 Offset: 0x3A71EF4 VA: 0x3A71EF4
	public void Activate(int elo, Transform transform1) { }

	// RVA: 0x3A720A0 Offset: 0x3A720A0 VA: 0x3A720A0 Slot: 4
	public void IntervalUpdate() { }

	// RVA: 0x3A71F6C Offset: 0x3A71F6C VA: 0x3A71F6C
	public void ReparentMedal(Transform medal) { }

	// RVA: 0x3A720E4 Offset: 0x3A720E4 VA: 0x3A720E4
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.ChampionsLeague.UI