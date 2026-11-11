public class BottleStopperView : MonoBehaviour // TypeDefIndex: 1525
{
	// Fields
	[SerializeField]
	private List<BottleStopperVariant> _variants; // 0x18
	[SerializeField]
	private BottleCompleteAnimationController _bottleCompleteAnimationController; // 0x20
	private BottleStopperVariant _currentVariant; // 0x28

	// Methods

	// RVA: 0x22FBA28 Offset: 0x22FBA28 VA: 0x22FBA28
	public void PlayStopperAnimation(bool isNewAnimation) { }

	// RVA: 0x22FBAFC Offset: 0x22FBAFC VA: 0x22FBAFC
	public void SetVariant(int variantId) { }

	// RVA: 0x22FBCE4 Offset: 0x22FBCE4 VA: 0x22FBCE4
	public void Hide() { }

	// RVA: 0x22FBD98 Offset: 0x22FBD98 VA: 0x22FBD98
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle
[Serializable]