public class LobbyEventsPositionManager : MonoBehaviour, IService, IInitializable, IDisposable // TypeDefIndex: 2878
{
	// Fields
	[SerializeField]
	private List<Transform> _leftEventButtonPositions; // 0x18
	[SerializeField]
	private List<Transform> _leftButtons; // 0x20
	[SerializeField]
	private List<Transform> _rightEventButtonPositions; // 0x28
	[SerializeField]
	private List<Transform> _rightButtons; // 0x30
	[SerializeField]
	private Transform _iconsLeft; // 0x38
	[SerializeField]
	private Transform _iconsRight; // 0x40
	[SerializeField]
	private Transform _magicStreakGaeProgressbar; // 0x48
	[SerializeField]
	private Transform _rightFixedButton; // 0x50
	[SerializeField]
	private Transform _rightFixedPosition; // 0x58
	[SerializeField]
	private Vector3 _iconsLeftPosition; // 0x60
	[SerializeField]
	private Vector3 _iconsRightPosition; // 0x6C
	[SerializeField]
	private Vector3 _iconsLeftPositionWithMagicStreakGae; // 0x78
	[SerializeField]
	private Vector3 _iconsRightPositionWithMagicStreakGae; // 0x84

	// Methods

	// RVA: 0x297BE38 Offset: 0x297BE38 VA: 0x297BE38 Slot: 4
	public void Initialize() { }

	// RVA: 0x297BF10 Offset: 0x297BF10 VA: 0x297BF10
	private void OnEventStateChanged() { }

	// RVA: 0x297BFCC Offset: 0x297BFCC VA: 0x297BFCC
	private void RepositionButtons(List<Transform> buttons, List<Transform> positions) { }

	// RVA: 0x297C0E4 Offset: 0x297C0E4 VA: 0x297C0E4
	private void RepositionButton(Transform button, Transform buttonPosition) { }

	// RVA: 0x297C148 Offset: 0x297C148 VA: 0x297C148
	private void OnDestroy() { }

	// RVA: 0x297C220 Offset: 0x297C220 VA: 0x297C220 Slot: 5
	public void Dispose() { }

	// RVA: 0x297C224 Offset: 0x297C224 VA: 0x297C224
	public void .ctor() { }
}

// Namespace: 
[Serializable]