public class CollectionBonusChestBuyButton : MonoBehaviour // TypeDefIndex: 4566
{
	// Fields
	[SerializeField]
	private Button _button; // 0x18
	[SerializeField]
	private TextMeshPro _starCountText; // 0x20
	[SerializeField]
	private Transform _activeButtonTransform; // 0x28
	[SerializeField]
	private Transform _inactiveButtonTransform; // 0x30
	private int _chestIndex; // 0x38
	private int _chestStarCount; // 0x3C
	private bool _isActive; // 0x40

	// Methods

	// RVA: 0x3775538 Offset: 0x3775538 VA: 0x3775538
	public void Initialize(int chestIndex, int starCount, bool isActive) { }

	// RVA: 0x3775658 Offset: 0x3775658 VA: 0x3775658
	private void OnButtonClicked() { }

	// RVA: 0x3775738 Offset: 0x3775738 VA: 0x3775738
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Collection.Scripts.UI