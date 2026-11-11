public class EditorManager : MonoBehaviour // TypeDefIndex: 257
{
	// Fields
	private EditorInputSystem _editorInputSystem; // 0x18
	[SerializeField]
	private EventSystem _eventSystem; // 0x20
	private CommandHistoryManager _commandHistoryManager; // 0x28
	private string _fileName; // 0x30
	[SerializeField]
	private Button _returnToEditorButton; // 0x38
	[SerializeField]
	private Camera _camera; // 0x40
	private EditorBottleCollection _bottleCollection; // 0x48
	public GridRenderer GridRenderer; // 0x50
	private EditorItemFactory _editorItemFactory; // 0x58
	private LevelModel _cachedLevelModel; // 0x60
	private bool _isLevelEdited; // 0x68
	[SerializeField]
	private TMP_InputField _uniqueCurtainColorCountInputField; // 0x70
	[SerializeField]
	private TMP_InputField _nonHiddenUniqColorCountInputField; // 0x78
	[SerializeField]
	private TMP_InputField _totalUniqColorCountInputField; // 0x80
	[SerializeField]
	private TMP_InputField _uniqueMosaicColorCountInputField; // 0x88
	private ColorService _colorService; // 0x90

	// Properties
	public EditorBottleCollection BottleCollection { get; }
	public LevelModel CachedLevelModel { get; }
	public bool IsLevelEdited { get; }

	// Methods

	// RVA: 0x37A69D0 Offset: 0x37A69D0 VA: 0x37A69D0
	public EditorBottleCollection get_BottleCollection() { }

	// RVA: 0x37A69D8 Offset: 0x37A69D8 VA: 0x37A69D8
	public LevelModel get_CachedLevelModel() { }

	// RVA: 0x37A69E0 Offset: 0x37A69E0 VA: 0x37A69E0
	public bool get_IsLevelEdited() { }

	// RVA: 0x37A69E8 Offset: 0x37A69E8 VA: 0x37A69E8
	public void Awake() { }

	// RVA: 0x379CDC8 Offset: 0x379CDC8 VA: 0x379CDC8
	public string GetLevelJsonAsString(string levelName) { }

	// RVA: 0x37A6DFC Offset: 0x37A6DFC VA: 0x37A6DFC
	private int GetUniqueColorCount() { }

	// RVA: 0x37A73FC Offset: 0x37A73FC VA: 0x37A73FC
	public int GetNonHiddenUniqColorCount() { }

	// RVA: 0x37A742C Offset: 0x37A742C VA: 0x37A742C
	public int GetTotalUniqColorCount() { }

	// RVA: 0x37A745C Offset: 0x37A745C VA: 0x37A745C
	public LevelModel GetCurrentLevelModel() { }

	// RVA: 0x37A5AE8 Offset: 0x37A5AE8 VA: 0x37A5AE8
	public void DrawBottle(Vector3 position, int height) { }

	// RVA: 0x37A60DC Offset: 0x37A60DC VA: 0x37A60DC
	public void DrawDeterBottle(Vector2 position, int height) { }

	// RVA: 0x37A6170 Offset: 0x37A6170 VA: 0x37A6170
	public void DrawLuckBottle(Vector2 position, int height) { }

	// RVA: 0x37A6238 Offset: 0x37A6238 VA: 0x37A6238
	public void DrawPartialLuckBottle(Vector2 position, int height) { }

	// RVA: 0x37A6094 Offset: 0x37A6094 VA: 0x37A6094
	public void RemoveBottle(Vector3 position) { }

	// RVA: 0x37A5B0C Offset: 0x37A5B0C VA: 0x37A5B0C
	public void DrawWater(Vector3 position, ColorAndColorId colorAndColorId) { }

	// RVA: 0x37A5B30 Offset: 0x37A5B30 VA: 0x37A5B30
	public void DrawQuestionMark(Vector2 position, ColorAndColorId colorAndColorId) { }

	// RVA: 0x37A5B54 Offset: 0x37A5B54 VA: 0x37A5B54
	public void DrawCurtain(Vector2 position, ColorAndColorId colorAndColorId) { }

	// RVA: 0x37A5C3C Offset: 0x37A5C3C VA: 0x37A5C3C
	public void DrawPlaster(Vector2 position) { }

	// RVA: 0x37A5C60 Offset: 0x37A5C60 VA: 0x37A5C60
	public void DrawClay(Vector2 position) { }

	// RVA: 0x37A5C84 Offset: 0x37A5C84 VA: 0x37A5C84
	public void DrawTag(Vector2 position, ColorAndColorId colorAndColorId) { }

	// RVA: 0x37A5DB4 Offset: 0x37A5DB4 VA: 0x37A5DB4
	public void DrawIce(Vector2 position, int id) { }

	// RVA: 0x37A5DFC Offset: 0x37A5DFC VA: 0x37A5DFC
	public void DrawGenerator(Vector2 position) { }

	// RVA: 0x37A5D90 Offset: 0x37A5D90 VA: 0x37A5D90
	public void DrawWoodbox(Vector2 position, WoodboxKeyType woodboxKeyType) { }

	// RVA: 0x37A5D6C Offset: 0x37A5D6C VA: 0x37A5D6C
	public void DrawWoodenBoxKey(Vector2 position, WoodboxKeyType woodboxKeyType) { }

	// RVA: 0x37A5DD8 Offset: 0x37A5DD8 VA: 0x37A5DD8
	public void DrawCarpet(Vector2 position, int id) { }

	// RVA: 0x37A5E20 Offset: 0x37A5E20 VA: 0x37A5E20
	public void DrawToggle(Vector2 position) { }

	// RVA: 0x37A5E44 Offset: 0x37A5E44 VA: 0x37A5E44
	public void DrawIvy(Vector2 position, ColorAndColorId colorAndColorId) { }

	// RVA: 0x37A5F2C Offset: 0x37A5F2C VA: 0x37A5F2C
	public void DrawFrog(Vector2 position, int id) { }

	// RVA: 0x37A5F50 Offset: 0x37A5F50 VA: 0x37A5F50
	public void DrawMagicSeal(Vector2 position) { }

	// RVA: 0x37A5F74 Offset: 0x37A5F74 VA: 0x37A5F74
	public void DrawDuck(Vector2 position, DuckType duckType) { }

	// RVA: 0x37A5F98 Offset: 0x37A5F98 VA: 0x37A5F98
	public void DrawDuckHouse(Vector2 position, DuckType duckType) { }

	// RVA: 0x37A5FBC Offset: 0x37A5FBC VA: 0x37A5FBC
	public void DrawSafe(Vector2 position, SafeType safeType) { }

	// RVA: 0x37A5FE0 Offset: 0x37A5FE0 VA: 0x37A5FE0
	public void DrawBag(Vector2 position) { }

	// RVA: 0x37A6004 Offset: 0x37A6004 VA: 0x37A6004
	public void DrawMosaic(Vector2 position, ColorAndColorId colorAndColorId, MosaicType mosaicType) { }

	// RVA: 0x37A6028 Offset: 0x37A6028 VA: 0x37A6028
	public void DrawFirework(Vector2 position) { }

	// RVA: 0x37A604C Offset: 0x37A604C VA: 0x37A604C
	public void DrawRainbow(Vector2 position) { }

	// RVA: 0x37A6070 Offset: 0x37A6070 VA: 0x37A6070
	public void DrawIcicle(Vector2 position) { }

	// RVA: 0x37A60B8 Offset: 0x37A60B8 VA: 0x37A60B8
	public void RemoveBoardItem(Vector2 position) { }

	// RVA: 0x37A8CB0 Offset: 0x37A8CB0 VA: 0x37A8CB0
	public void MoveBottle(AItem willMoveBottleItem, Vector2 snapPosition) { }

	// RVA: 0x37A7508 Offset: 0x37A7508 VA: 0x37A7508
	private void OnLevelEdited() { }

	// RVA: 0x379DA1C Offset: 0x379DA1C VA: 0x379DA1C
	public void CreateEmptyLevel() { }

	// RVA: 0x379E3B8 Offset: 0x379E3B8 VA: 0x379E3B8
	public void LoadLevel(string content) { }

	// RVA: 0x37A9BB8 Offset: 0x37A9BB8 VA: 0x37A9BB8
	public void OnLevelOpen(LevelModel levelModel) { }

	// RVA: 0x37A9C84 Offset: 0x37A9C84 VA: 0x37A9C84
	public void ClearLevel() { }

	// RVA: 0x379EDF0 Offset: 0x379EDF0 VA: 0x379EDF0
	public bool IsLevelValid() { }

	// RVA: 0x37A9C9C Offset: 0x37A9C9C VA: 0x37A9C9C
	public void CacheLevel() { }

	// RVA: 0x37A3484 Offset: 0x37A3484 VA: 0x37A3484
	public void ReturnToCachedLevel() { }

	// RVA: 0x379FB8C Offset: 0x379FB8C VA: 0x379FB8C
	public void SetBackgroundPath(string backgroundPath) { }

	// RVA: 0x37A9CBC Offset: 0x37A9CBC VA: 0x37A9CBC
	public void .ctor() { }
}

// Namespace: Modules.LevelEditor.WaterSort.Common.Scripts