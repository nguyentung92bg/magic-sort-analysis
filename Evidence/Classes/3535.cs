public class MiniGameBoardCell : MonoBehaviour // TypeDefIndex: 3535
{
	// Fields
	[SerializeField]
	private SpriteRenderer _viewParent; // 0x18
	[SerializeField]
	private Button _button; // 0x20
	[SerializeField]
	private ParticleSystem _destroyParticle; // 0x28
	[SerializeField]
	private ParticleSystem _boosterHitParticle; // 0x30
	[SerializeField]
	private MiniGameAnimationConfig _animationConfig; // 0x38
	[CompilerGenerated]
	private int <Id>k__BackingField; // 0x40
	[CompilerGenerated]
	private int <Health>k__BackingField; // 0x44
	[CompilerGenerated]
	private MiniGameBoardOverItem <OverItem>k__BackingField; // 0x48
	public Action<int> OnCellSelected; // 0x50

	// Properties
	public int Id { get; set; }
	public int Health { get; set; }
	public MiniGameBoardOverItem OverItem { get; set; }
	public Button Button { get; }
	public bool IsDestroyed { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x21895D0 Offset: 0x21895D0 VA: 0x21895D0
	public int get_Id() { }

	[CompilerGenerated]
	// RVA: 0x21895D8 Offset: 0x21895D8 VA: 0x21895D8
	private void set_Id(int value) { }

	[CompilerGenerated]
	// RVA: 0x21895E0 Offset: 0x21895E0 VA: 0x21895E0
	public int get_Health() { }

	[CompilerGenerated]
	// RVA: 0x21895E8 Offset: 0x21895E8 VA: 0x21895E8
	private void set_Health(int value) { }

	[CompilerGenerated]
	// RVA: 0x21895F0 Offset: 0x21895F0 VA: 0x21895F0
	public MiniGameBoardOverItem get_OverItem() { }

	[CompilerGenerated]
	// RVA: 0x21895F8 Offset: 0x21895F8 VA: 0x21895F8
	private void set_OverItem(MiniGameBoardOverItem value) { }

	// RVA: 0x2189600 Offset: 0x2189600 VA: 0x2189600
	public Button get_Button() { }

	// RVA: 0x2189608 Offset: 0x2189608 VA: 0x2189608
	public bool get_IsDestroyed() { }

	// RVA: 0x21868B0 Offset: 0x21868B0 VA: 0x21868B0
	public void Initialize(int id) { }

	// RVA: 0x2189618 Offset: 0x2189618 VA: 0x2189618
	private void OnCellButtonClicked() { }

	// RVA: 0x2189638 Offset: 0x2189638 VA: 0x2189638
	public void OnHit() { }

	// RVA: 0x2186B54 Offset: 0x2186B54 VA: 0x2186B54
	public void AddOverItem(MiniGameBoardOverItem overItem) { }

	// RVA: 0x21896E8 Offset: 0x21896E8 VA: 0x21896E8
	public Tween PlayHitAnimation(bool isLastHit, bool isRevealSequence = False) { }

	// RVA: 0x218929C Offset: 0x218929C VA: 0x218929C
	public Tween PlayBoosterHitAnimation() { }

	// RVA: 0x2189F74 Offset: 0x2189F74 VA: 0x2189F74
	public void Hide() { }

	// RVA: 0x218A028 Offset: 0x218A028 VA: 0x218A028
	public void UpdateVisual() { }

	// RVA: 0x218A0E0 Offset: 0x218A0E0 VA: 0x218A0E0
	public int GetSortingOrder() { }

	// RVA: 0x218A0FC Offset: 0x218A0FC VA: 0x218A0FC
	public void SetSortingOrder(int order) { }

	// RVA: 0x2187720 Offset: 0x2187720 VA: 0x2187720
	public void Dispose() { }

	// RVA: 0x218A118 Offset: 0x218A118 VA: 0x218A118
	private void OnDrawGizmos() { }

	// RVA: 0x218A11C Offset: 0x218A11C VA: 0x218A11C
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x218A124 Offset: 0x218A124 VA: 0x218A124
	private void <PlayHitAnimation>b__26_0() { }

	[CompilerGenerated]
	// RVA: 0x218A144 Offset: 0x218A144 VA: 0x218A144
	private void <PlayBoosterHitAnimation>b__27_0() { }

	[CompilerGenerated]
	// RVA: 0x218A164 Offset: 0x218A164 VA: 0x218A164
	private void <PlayBoosterHitAnimation>b__27_1() { }
}

// Namespace: 
[Serializable]