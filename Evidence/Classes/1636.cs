public class ShelfView : AItemView // TypeDefIndex: 1636
{
	// Fields
	[SerializeField]
	private SpriteRenderer _spriteRenderer; // 0x20
	[SerializeField]
	private ShelfConfig _shelfConfig; // 0x28
	[SerializeField]
	private SpriteSetterByDifficultyType _spriteSetterByDifficultyType; // 0x30

	// Methods

	// RVA: 0x2613538 Offset: 0x2613538 VA: 0x2613538 Slot: 5
	public override void Initialize() { }

	// RVA: 0x261353C Offset: 0x261353C VA: 0x261353C Slot: 6
	public override void Spawn() { }

	// RVA: 0x26132D4 Offset: 0x26132D4 VA: 0x26132D4
	public void Prepare(Bounds bounds, LevelDifficultyType levelDifficultyType) { }

	// RVA: 0x2613540 Offset: 0x2613540 VA: 0x2613540 Slot: 7
	public override void Recycle() { }

	// RVA: 0x2613564 Offset: 0x2613564 VA: 0x2613564 Slot: 8
	public override void Show() { }

	// RVA: 0x2613588 Offset: 0x2613588 VA: 0x2613588 Slot: 9
	public override void Hide() { }

	// RVA: 0x26135AC Offset: 0x26135AC VA: 0x26135AC
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.Board.Items.Scripts.Safe
[CreateAssetMenu(fileName = "SafeAnimationConfig", menuName = "Configs/SafeAnimationConfig")]