public class SelectionView : MonoBehaviour // TypeDefIndex: 1140
{
	// Fields
	private Pool<SelectionSuccessFailView> _selectionSuccessPool; // 0x18
	private Pool<SelectionSuccessFailView> _selectionFailPool; // 0x20
	[FormerlySerializedAs("_selectionSuccessGo")]
	[SerializeField]
	private GameObject _selectionSuccessPrefab; // 0x28
	[FormerlySerializedAs("_selectionFailGo")]
	[SerializeField]
	private GameObject _selectionFailPrefab; // 0x30
	private List<SelectionSuccessFailView> _selectionSuccessUsingPool; // 0x38
	private List<SelectionSuccessFailView> _selectionFailPoolUsingPool; // 0x40

	// Methods

	// RVA: 0x160E478 Offset: 0x160E478 VA: 0x160E478
	private void Awake() { }

	// RVA: 0x160E624 Offset: 0x160E624 VA: 0x160E624
	public void ShowSelectionAt(Vector3 rootTransformPosition, bool isSuccess) { }

	// RVA: 0x160E630 Offset: 0x160E630 VA: 0x160E630
	private void ShowSelectionSuccessAt(Vector3 position) { }

	// RVA: 0x160E764 Offset: 0x160E764 VA: 0x160E764
	private void ShowSelectionFailAt(Vector3 position) { }

	// RVA: 0x160E898 Offset: 0x160E898 VA: 0x160E898
	public void HideAll() { }

	// RVA: 0x160EB98 Offset: 0x160EB98 VA: 0x160EB98
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.Tutorial.Scripts