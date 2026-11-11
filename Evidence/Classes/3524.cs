public class MiniGameProgressBarTooltipView : MonoBehaviour // TypeDefIndex: 3524
{
	// Fields
	[SerializeField]
	private Button _showButton; // 0x18
	[SerializeField]
	private Button _hideButton; // 0x20
	[SerializeField]
	private Transform _parent; // 0x28
	[SerializeField]
	private ToolbarConfig _toolbarConfig; // 0x30
	[SerializeField]
	private MiniGameTooltipSwipeController _swipeController; // 0x38
	private Tween _toolbarOpeningTween; // 0x40

	// Methods

	// RVA: 0x2184E00 Offset: 0x2184E00 VA: 0x2184E00
	public void Initialize(MiniGameViewModel viewModel) { }

	// RVA: 0x2185494 Offset: 0x2185494 VA: 0x2185494
	public void Show() { }

	// RVA: 0x21853E4 Offset: 0x21853E4 VA: 0x21853E4
	public void Hide() { }

	// RVA: 0x21854B8 Offset: 0x21854B8 VA: 0x21854B8
	private void OnHideButtonSelectSuccess() { }

	// RVA: 0x21854BC Offset: 0x21854BC VA: 0x21854BC
	private void OnShowButtonSelectSuccess() { }

	// RVA: 0x2185500 Offset: 0x2185500 VA: 0x2185500
	private void PlayAnimation() { }

	// RVA: 0x2184EFC Offset: 0x2184EFC VA: 0x2184EFC
	public void UpdateViewModel(MiniGameViewModel viewModel) { }

	// RVA: 0x21852EC Offset: 0x21852EC VA: 0x21852EC
	public void Dispose() { }

	// RVA: 0x218564C Offset: 0x218564C VA: 0x218564C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.MiniGame.Scripts.UI.Tooltip