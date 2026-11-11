public class SwipeMenuScaleHandler : MonoBehaviour // TypeDefIndex: 2853
{
	// Fields
	[SerializeField]
	private SwipePageController _originPage; // 0x18

	// Methods

	// RVA: 0x2DD0A48 Offset: 0x2DD0A48 VA: 0x2DD0A48
	public void Scale(Vector3 scaleRatio, List<SwipePageController> swipePageControllers) { }

	// RVA: 0x2DD0BAC Offset: 0x2DD0BAC VA: 0x2DD0BAC
	private float CalculateShiftAmount(SwipePageController originPage, Vector3 scaleRatio) { }

	// RVA: 0x2DD0C04 Offset: 0x2DD0C04 VA: 0x2DD0C04
	private void ShiftPagePositions(List<SwipePageController> swipePageControllers, int originIndex, float originShiftAmount) { }

	// RVA: 0x2DD0AEC Offset: 0x2DD0AEC VA: 0x2DD0AEC
	private int GetOriginPageIndex(List<SwipePageController> swipePageControllers) { }

	// RVA: 0x2DD0D28 Offset: 0x2DD0D28 VA: 0x2DD0D28
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.UI.SwipeMenu.Scripts