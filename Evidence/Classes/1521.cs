public static class BottlePositionAdjuster // TypeDefIndex: 1521
{
	// Methods

	// RVA: 0x22F9E1C Offset: 0x22F9E1C VA: 0x22F9E1C
	public static void AdjustBoard(BottleCollection bottleCollection, BottleCollectionCameraConfig bottleCollectionCameraConfig, bool setOnlyData, bool useDefaultCalculation, bool isDaily, int distanceBetweenTwoRowAsUnit) { }

	// RVA: 0x22FA474 Offset: 0x22FA474 VA: 0x22FA474
	private static void AdjustBoardForRegularBoard(BottleCollection bottleCollection, BottleCollectionCameraConfig bottleCollectionCameraConfig, bool setOnlyData, bool useDefaultCalculation) { }

	// RVA: 0x22F9EA8 Offset: 0x22F9EA8 VA: 0x22F9EA8
	private static void AdjustBoardWithLongBottles(BottleCollection bottleCollection, BottleCollectionCameraConfig bottleCollectionCameraConfig, bool setOnlyData, bool useDefaultCalculation, int distanceBetweenRowsAsUnit) { }

	// RVA: 0x22FAA54 Offset: 0x22FAA54 VA: 0x22FAA54
	public static void AdjustBoardWithExtraBottle(BottleCollection bottleCollection, BottleCollectionCameraConfig bottleCollectionCameraConfig, int insertionPosX, int insertionPosY, int distanceBetweenRowsAsUnit) { }

	// RVA: 0x22FAF48 Offset: 0x22FAF48 VA: 0x22FAF48
	private static float FindYPosForExtraBottle(BottleCollection bottleCollection, int insertionPosX, int insertionPosY) { }

	// RVA: 0x22FADEC Offset: 0x22FADEC VA: 0x22FADEC
	private static bool RowHasLongBottle(List<BottleItem> row) { }

	// RVA: 0x22FB050 Offset: 0x22FB050 VA: 0x22FB050
	public static Vector3 GetBoardOutPosition(BottleCollection bottleCollection, float screenWidth) { }

	// RVA: 0x22FA830 Offset: 0x22FA830 VA: 0x22FA830
	private static float GetDistanceBetweenBottles(int bottleCount, float bottleWidth, float distanceBetweenBottlesFor6, float distanceBetweenBottles, bool useDefaultCalculation) { }

	// RVA: 0x22FADE0 Offset: 0x22FADE0 VA: 0x22FADE0
	public static float GetDistanceBetweenBottles() { }

	// RVA: 0x22FB114 Offset: 0x22FB114 VA: 0x22FB114
	public static Vector3 GetBottlePosition(int bottleCount, int x, float yPos, BottleCollectionCameraConfig bottleCollectionCameraConfig, bool useDefaultCalculation) { }

	// RVA: 0x22FA7D0 Offset: 0x22FA7D0 VA: 0x22FA7D0
	private static float GetXPosition(int bottleCount, bool useDefaultCalculation, float bottleWidth, float distanceBetweenBottlesFor6, float distanceBetweenBottles) { }

	// RVA: 0x22FB0D0 Offset: 0x22FB0D0 VA: 0x22FB0D0
	public static Vector3 GetBoardPosition() { }

	// RVA: 0x22FB1E4 Offset: 0x22FB1E4 VA: 0x22FB1E4
	public static int GetIntersectedLongBottleCountWithRow(List<List<BottleItem>> board, int rowIndex, int distanceBetweenRowsAsUnit) { }

	// RVA: 0x22FA87C Offset: 0x22FA87C VA: 0x22FA87C
	private static List<BottleItem> FindLongBottlesIntersectedWithRow(List<List<BottleItem>> board, int rowIndex, int distanceBetweenRowsAsUnit) { }

	// RVA: 0x22FB248 Offset: 0x22FB248 VA: 0x22FB248
	private static bool IsBottleReachToDistance(int cellCount, int distance, int distanceBetweenRowsAsUnit) { }

	// RVA: 0x22FB264 Offset: 0x22FB264 VA: 0x22FB264
	public static Vector3 GetBottlePositionWithLongBottles(int bottleCount, int x, int y, float yPos, BottleCollectionCameraConfig bottleCollectionCameraConfig, BottleCollection bottleCollection, bool useDefaultCalculation, int distanceBetweenRowsAsUnit) { }

	// RVA: 0x22FB66C Offset: 0x22FB66C VA: 0x22FB66C
	public static bool HasLongBottleBelowBetween(List<List<BottleItem>> board, BottleItem previousBottleItem, BottleItem bottleItem, int rowIndex, int distanceBetweenRowsAsUnit) { }
}

// Namespace: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle
[CreateAssetMenu(fileName = "BottleRevealAnimationConfig", menuName = "Configs/BottleRevealAnimationConfig")]