public class SortingService : IService, IInitializable, IDisposable // TypeDefIndex: 573
{
	// Fields
	private const string DefaultSortingLayer = "Default";
	private const string BottleSittingSortingLayer = "BottlesSitting";
	private const string BottleAnimatingSortingLayer = "BottlesAnimating";
	private const string BottleSelectedSortingLayer = "BottlesClicked";
	private const string PopUpSortingLayer = "PopUp";
	private const int BottleBackFirstSortOrder = 1;
	private const int WaterFirstSortOrder = 200;
	private const int BlockerFrontSortOrder = 3000;
	private const int SnitchSortOrder = 3100;
	private const int BlockerBackSortOrder = 500;
	private const int BottleFrontFirstSortOrder = 2000;
	private const int SelectedBottleOriginSortOrder = 1500;
	private const int SelectedBottleTargetSortOrder = 1000;
	private const int BottleSittingSortOrder = 1000;
	private const int BottleAnimatingSortOrder = 1000;

	// Methods

	// RVA: 0x4002798 Offset: 0x4002798 VA: 0x4002798 Slot: 4
	public void Initialize() { }

	// RVA: 0x400279C Offset: 0x400279C VA: 0x400279C Slot: 5
	public void Dispose() { }

	// RVA: 0x40027A0 Offset: 0x40027A0 VA: 0x40027A0
	public int GetBottleBackSortOrder() { }

	// RVA: 0x40027A8 Offset: 0x40027A8 VA: 0x40027A8
	public int GetBackWaterSortOrder(int indexOfWater) { }

	// RVA: 0x40027B4 Offset: 0x40027B4 VA: 0x40027B4
	public Sorting GetWaterSortOrderForEditor(int index) { }

	// RVA: 0x4002840 Offset: 0x4002840 VA: 0x4002840
	public int GetEclipseSortOrder(int indexOfWater) { }

	// RVA: 0x4002848 Offset: 0x4002848 VA: 0x4002848
	public int GetTopEclipseSortOrder(int indexOfWater) { }

	// RVA: 0x4002850 Offset: 0x4002850 VA: 0x4002850
	public int GetQuestionMarkSortOrder(int indexOfWater) { }

	// RVA: 0x4002858 Offset: 0x4002858 VA: 0x4002858
	public int GetOverBoardItemsSortOrder() { }

	// RVA: 0x4002860 Offset: 0x4002860 VA: 0x4002860
	public int GetBottleFrontSortOrder() { }

	// RVA: 0x4002868 Offset: 0x4002868 VA: 0x4002868
	public Sorting GetSorting(Sorting sorting, int offset) { }

	// RVA: 0x4002894 Offset: 0x4002894 VA: 0x4002894
	public Sorting GetSelectedBottleOriginSorting(int offset = 0) { }

	// RVA: 0x40028F8 Offset: 0x40028F8 VA: 0x40028F8
	public Sorting GetSelectedBottleTargetSorting() { }

	// RVA: 0x4002958 Offset: 0x4002958 VA: 0x4002958
	public Sorting GetBottleSittingSorting(int offset = 0) { }

	// RVA: 0x40029BC Offset: 0x40029BC VA: 0x40029BC
	public Sorting GetBottleAnimatingSorting(int offset = 0) { }

	// RVA: 0x4002A20 Offset: 0x4002A20 VA: 0x4002A20
	public Sorting GetBlockerFrontSorting() { }

	// RVA: 0x4002A80 Offset: 0x4002A80 VA: 0x4002A80
	public Sorting GetBlockerBackSorting() { }

	// RVA: 0x4002AE0 Offset: 0x4002AE0 VA: 0x4002AE0
	public Sorting GetIceFillingSorting() { }

	// RVA: 0x4002B40 Offset: 0x4002B40 VA: 0x4002B40
	public Sorting GetWoodBoxKeyMovingSorting() { }

	// RVA: 0x4002BA0 Offset: 0x4002BA0 VA: 0x4002BA0
	public Sorting GetWoodBoxKeyIdleSorting() { }

	// RVA: 0x4002C00 Offset: 0x4002C00 VA: 0x4002C00
	public Sorting GetWoodBoxAnimationSorting() { }

	// RVA: 0x4002C60 Offset: 0x4002C60 VA: 0x4002C60
	public Sorting GetGeneratorAnimationSorting() { }

	// RVA: 0x4002CC0 Offset: 0x4002CC0 VA: 0x4002CC0
	public Sorting GetSnitchItemIdleSorting(int offset = 0) { }

	// RVA: 0x4002D24 Offset: 0x4002D24 VA: 0x4002D24
	public Sorting GetSnitchItemAnimationSorting() { }

	// RVA: 0x4002D84 Offset: 0x4002D84 VA: 0x4002D84
	public Sorting GetSnitchBoxTutorialSorting() { }

	// RVA: 0x4002DE4 Offset: 0x4002DE4 VA: 0x4002DE4
	public Sorting GetSnitchBoxAnimationSorting() { }

	// RVA: 0x4002DEC Offset: 0x4002DEC VA: 0x4002DEC
	public Sorting GetSnitchOutOfBottleAnimationSorting() { }

	// RVA: 0x4002E4C Offset: 0x4002E4C VA: 0x4002E4C
	public Sorting GetSnitchWaterSitSortOrder() { }

	// RVA: 0x4002EAC Offset: 0x4002EAC VA: 0x4002EAC
	public SealViewSorting GetSealSorting(int eclipseSortOrder, bool isTopCell, bool isBottomCell, int bottleHeight) { }

	// RVA: 0x4003050 Offset: 0x4003050 VA: 0x4003050
	public SealViewSorting GetSealDisappearSorting(bool isBottomCell, int bottleHeight) { }

	// RVA: 0x4003140 Offset: 0x4003140 VA: 0x4003140
	public Sorting GetDuckItemHideSorting() { }

	// RVA: 0x40031A0 Offset: 0x40031A0 VA: 0x40031A0
	public ToggleItemSorting GetToggleItemSorting() { }

	// RVA: 0x40032CC Offset: 0x40032CC VA: 0x40032CC
	public Sorting GetSafeAnimationSorting() { }

	// RVA: 0x400332C Offset: 0x400332C VA: 0x400332C
	public Sorting GetChargeableBottleTutorialSorting(int offset = 0) { }

	// RVA: 0x4003390 Offset: 0x4003390 VA: 0x4003390
	public void .ctor() { }
}

// Namespace: Modules.Infrastructure.UI.Common.Scripts