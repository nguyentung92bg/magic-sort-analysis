public class ToolbarService : MonoBehaviour // TypeDefIndex: 2849
{
	// Fields
	[SerializeField]
	private GameObject _toolbarObject; // 0x18
	[SerializeField]
	private ToolbarConfig _toolbarConfig; // 0x20
	[SerializeField]
	private SpriteRenderer _bodySprite; // 0x28
	[SerializeField]
	private SpriteRenderer _arrowSprite; // 0x30
	[SerializeField]
	private List<SpriteRenderer> _plusSigns; // 0x38
	[SerializeField]
	private CurrencyViewFactory _currencyViewFactory; // 0x40
	[SerializeField]
	private List<CurrencyView> _currentCurrencyViews; // 0x48
	[SerializeField]
	private TextMeshPro _toolbarText; // 0x50
	[CompilerGenerated]
	private bool <IsToolBarOpen>k__BackingField; // 0x58
	[CompilerGenerated]
	private object <Requester>k__BackingField; // 0x60
	private bool _isToolbarRequested; // 0x68
	private bool _tryCloseToolBar; // 0x69
	private InputService _inputService; // 0x70
	private GameObject _toolbarPivotParent; // 0x78
	private Tween _toolbarOpeningTween; // 0x80
	private ToolbarModel _currentToolbarModel; // 0x88

	// Properties
	public bool IsToolBarOpen { get; set; }
	public object Requester { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x2DCBE0C Offset: 0x2DCBE0C VA: 0x2DCBE0C
	public bool get_IsToolBarOpen() { }

	[CompilerGenerated]
	// RVA: 0x2DCBE14 Offset: 0x2DCBE14 VA: 0x2DCBE14
	private void set_IsToolBarOpen(bool value) { }

	[CompilerGenerated]
	// RVA: 0x2DCBE20 Offset: 0x2DCBE20 VA: 0x2DCBE20
	public object get_Requester() { }

	[CompilerGenerated]
	// RVA: 0x2DCBE28 Offset: 0x2DCBE28 VA: 0x2DCBE28
	private void set_Requester(object value) { }

	// RVA: 0x2DCBE30 Offset: 0x2DCBE30 VA: 0x2DCBE30
	private void Awake() { }

	// RVA: 0x2DCC00C Offset: 0x2DCC00C VA: 0x2DCC00C
	private void OnUIElementTouchDown() { }

	// RVA: 0x2DCC018 Offset: 0x2DCC018 VA: 0x2DCC018
	private void LateUpdate() { }

	// RVA: 0x2DCC01C Offset: 0x2DCC01C VA: 0x2DCC01C
	private void CheckForInput() { }

	// RVA: 0x2DCC218 Offset: 0x2DCC218 VA: 0x2DCC218
	public void SetToolbarModel(ToolbarModel toolbarModel) { }

	// RVA: 0x2DCC134 Offset: 0x2DCC134 VA: 0x2DCC134
	private void ShowToolbar() { }

	// RVA: 0x2DCC25C Offset: 0x2DCC25C VA: 0x2DCC25C
	private void ConstructToolbarBody() { }

	// RVA: 0x2DCC924 Offset: 0x2DCC924 VA: 0x2DCC924
	private void ConstructPlainTextToolbarBody() { }

	// RVA: 0x2DCCB60 Offset: 0x2DCCB60 VA: 0x2DCCB60
	private void ConstructJetpackToolbarBody() { }

	// RVA: 0x2DCD268 Offset: 0x2DCD268 VA: 0x2DCD268
	private void ConstructDailyToolbarBody() { }

	// RVA: 0x2DCCE88 Offset: 0x2DCCE88 VA: 0x2DCCE88
	private void ConstructSkyJumpToolbarBody() { }

	// RVA: 0x2DCD0C4 Offset: 0x2DCD0C4 VA: 0x2DCD0C4
	private void ConstructTowerToolbarBody() { }

	// RVA: 0x2DCD4F4 Offset: 0x2DCD4F4 VA: 0x2DCD4F4
	private void ConstructMagicPassToolbarBody() { }

	// RVA: 0x2DCD878 Offset: 0x2DCD878 VA: 0x2DCD878
	private void ConstructTeamQuestToolbarBody() { }

	// RVA: 0x2DCD87C Offset: 0x2DCD87C VA: 0x2DCD87C
	private void ConstructBoatRushToolbarBody() { }

	// RVA: 0x2DCDD0C Offset: 0x2DCDD0C VA: 0x2DCDD0C
	private void ConstructWindQuestToolbarBody() { }

	// RVA: 0x2DCE090 Offset: 0x2DCE090 VA: 0x2DCE090
	private void ConstructStrikeShowToolbarBody() { }

	// RVA: 0x2DCC2E0 Offset: 0x2DCC2E0 VA: 0x2DCC2E0
	private void SetArrowPositionAndRotation() { }

	// RVA: 0x2DCC3C0 Offset: 0x2DCC3C0 VA: 0x2DCC3C0
	private void ParentToolbar() { }

	// RVA: 0x2DCC658 Offset: 0x2DCC658 VA: 0x2DCC658
	private void ToolbarOpenAnimation() { }

	// RVA: 0x2DCE83C Offset: 0x2DCE83C VA: 0x2DCE83C
	private void SetModelScales(List<CurrencyView> currencyViews) { }

	// RVA: 0x2DCE9C4 Offset: 0x2DCE9C4 VA: 0x2DCE9C4
	private void SetRewardModelPositions(int rewardCount) { }

	// RVA: 0x2DCE640 Offset: 0x2DCE640 VA: 0x2DCE640
	private void GetCurrencyModelViews(RewardModel rewardModel) { }

	// RVA: 0x2DCEC44 Offset: 0x2DCEC44 VA: 0x2DCEC44
	private void SetBodySizeForRewards(int contentCount) { }

	// RVA: 0x2DCE414 Offset: 0x2DCE414 VA: 0x2DCE414
	private void SetBodySize(Vector2 size) { }

	// RVA: 0x2DCC070 Offset: 0x2DCC070 VA: 0x2DCC070
	private void CloseToolBar() { }

	// RVA: 0x2DCED18 Offset: 0x2DCED18 VA: 0x2DCED18
	private void OffsetRewards(Vector3 offset) { }

	// RVA: 0x2DCF0C4 Offset: 0x2DCF0C4 VA: 0x2DCF0C4
	private void ReturnViews() { }

	// RVA: 0x2DCF2A0 Offset: 0x2DCF2A0 VA: 0x2DCF2A0
	private void DisablePlusSigns() { }

	// RVA: 0x2DCE5A4 Offset: 0x2DCE5A4 VA: 0x2DCE5A4
	private void GetRowCounts(int contentCount, out int topRowCount, out int bottomRowCount) { }

	// RVA: 0x2DCE33C Offset: 0x2DCE33C VA: 0x2DCE33C
	private void SetToolbarText(string text) { }

	// RVA: 0x2DCE360 Offset: 0x2DCE360 VA: 0x2DCE360
	private void SetTextModel(ToolbarTextModel textModel) { }

	// RVA: 0x2DCE430 Offset: 0x2DCE430 VA: 0x2DCE430
	private float GetXOffsetForScreenCenter(Vector2 requestedPosition) { }

	// RVA: 0x2DCF404 Offset: 0x2DCF404 VA: 0x2DCF404
	private void OnDestroy() { }

	// RVA: 0x2DCF59C Offset: 0x2DCF59C VA: 0x2DCF59C
	private RewardModel GetRandomRewardModel() { }

	// RVA: 0x2DCF60C Offset: 0x2DCF60C VA: 0x2DCF60C
	private List<RewardModel> GetRandomRewards() { }

	// RVA: 0x2DCC80C Offset: 0x2DCC80C VA: 0x2DCC80C
	public void SetToolbarAssetForColor() { }

	// RVA: 0x2DCFC60 Offset: 0x2DCFC60 VA: 0x2DCFC60
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x2DCFCE8 Offset: 0x2DCFCE8 VA: 0x2DCFCE8
	private bool <ConstructPlainTextToolbarBody>b__29_0(ToolbarTextModel t) { }

	[CompilerGenerated]
	// RVA: 0x2DCFD14 Offset: 0x2DCFD14 VA: 0x2DCFD14
	private bool <ConstructJetpackToolbarBody>b__30_0(ToolbarTextModel t) { }

	[CompilerGenerated]
	// RVA: 0x2DCFD40 Offset: 0x2DCFD40 VA: 0x2DCFD40
	private bool <ConstructDailyToolbarBody>b__31_0(ToolbarTextModel t) { }

	[CompilerGenerated]
	// RVA: 0x2DCFD6C Offset: 0x2DCFD6C VA: 0x2DCFD6C
	private bool <ConstructSkyJumpToolbarBody>b__32_0(ToolbarTextModel t) { }

	[CompilerGenerated]
	// RVA: 0x2DCFD98 Offset: 0x2DCFD98 VA: 0x2DCFD98
	private bool <ConstructMagicPassToolbarBody>b__34_0(ToolbarTextModel t) { }

	[CompilerGenerated]
	// RVA: 0x2DCFDC4 Offset: 0x2DCFDC4 VA: 0x2DCFDC4
	private bool <ConstructMagicPassToolbarBody>b__34_1(ToolbarTextModel t) { }

	[CompilerGenerated]
	// RVA: 0x2DCFDF0 Offset: 0x2DCFDF0 VA: 0x2DCFDF0
	private bool <ConstructBoatRushToolbarBody>b__36_0(ToolbarTextModel t) { }

	[CompilerGenerated]
	// RVA: 0x2DCFE1C Offset: 0x2DCFE1C VA: 0x2DCFE1C
	private bool <ConstructBoatRushToolbarBody>b__36_1(ToolbarTextModel t) { }

	[CompilerGenerated]
	// RVA: 0x2DCFE48 Offset: 0x2DCFE48 VA: 0x2DCFE48
	private bool <ConstructWindQuestToolbarBody>b__37_0(ToolbarTextModel t) { }

	[CompilerGenerated]
	// RVA: 0x2DCFE74 Offset: 0x2DCFE74 VA: 0x2DCFE74
	private bool <ConstructWindQuestToolbarBody>b__37_1(ToolbarTextModel t) { }

	[CompilerGenerated]
	// RVA: 0x2DCFEA0 Offset: 0x2DCFEA0 VA: 0x2DCFEA0
	private bool <ConstructStrikeShowToolbarBody>b__38_0(ToolbarTextModel t) { }

	[CompilerGenerated]
	// RVA: 0x2DCEEBC Offset: 0x2DCEEBC VA: 0x2DCEEBC
	private void <SetRewardModelPositions>g__PositionRow|43_0(int rowCount, float rowY, ref ToolbarService.<>c__DisplayClass43_0 ) { }
}

// Namespace: Modules.Contexts.Home.UI.Toolbar.Scripts
[Serializable]