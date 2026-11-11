public class MiniGameBoardOverItem : MiniGameBoardItem // TypeDefIndex: 3544
{
	// Fields
	[SerializeField]
	private SpriteRenderer _spriteRenderer; // 0x38
	[SerializeField]
	private Sprite _destroyedPinkCoralSprite; // 0x40
	[SerializeField]
	private Sprite _destroyedPurpleCoralSprite; // 0x48
	[SerializeField]
	private Sprite _destroyedBlueCoralSprite; // 0x50
	[SerializeField]
	private ParticleSystem _destroyPinkCoralParticle; // 0x58
	[SerializeField]
	private ParticleSystem _destroyPurpleCoralParticle; // 0x60
	[SerializeField]
	private ParticleSystem _destroyBlueCoralParticle; // 0x68
	[SerializeField]
	private MiniGameAnimationConfig _animationConfig; // 0x70
	[CompilerGenerated]
	private bool <IsDestroyed>k__BackingField; // 0x78

	// Properties
	public bool IsDestroyed { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x218BACC Offset: 0x218BACC VA: 0x218BACC
	public bool get_IsDestroyed() { }

	[CompilerGenerated]
	// RVA: 0x218BAD4 Offset: 0x218BAD4 VA: 0x218BAD4
	private void set_IsDestroyed(bool value) { }

	// RVA: 0x218BAE0 Offset: 0x218BAE0 VA: 0x218BAE0 Slot: 4
	public override void Initialize(MiniGameItemData itemData, MiniGameLevelItemPlacementData itemPlacementData) { }

	// RVA: 0x21896D8 Offset: 0x21896D8 VA: 0x21896D8
	public void OnHit() { }

	// RVA: 0x21899E8 Offset: 0x21899E8 VA: 0x21899E8
	public Tween PlayHitAnimation() { }

	// RVA: 0x2189D00 Offset: 0x2189D00 VA: 0x2189D00
	public Tween PlayBoosterHitAnimation() { }

	// RVA: 0x218BB44 Offset: 0x218BB44 VA: 0x218BB44
	private void SetDestroyedSprite() { }

	// RVA: 0x218BB70 Offset: 0x218BB70 VA: 0x218BB70
	private Sprite GetDestroyedSprite() { }

	// RVA: 0x218BBC4 Offset: 0x218BBC4 VA: 0x218BBC4
	private void PlayDestroyParticle() { }

	// RVA: 0x218BBE4 Offset: 0x218BBE4 VA: 0x218BBE4
	private ParticleSystem GetDestroyParticle() { }

	// RVA: 0x2189C64 Offset: 0x2189C64 VA: 0x2189C64
	public bool ShouldBoosterHitAnimationPlay() { }

	// RVA: 0x218A0D0 Offset: 0x218A0D0 VA: 0x218A0D0
	public void UpdateVisual() { }

	// RVA: 0x218BC38 Offset: 0x218BC38 VA: 0x218BC38
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.MiniGame.Scripts.Board