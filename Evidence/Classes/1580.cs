public class WaterLineView : AItemPartView // TypeDefIndex: 1580
{
	// Fields
	[SerializeField]
	private SpriteRenderer _spriteRenderer; // 0x20
	[SerializeField]
	private WaterLineAnimationConfig _waterLineAnimationConfig; // 0x28

	// Methods

	// RVA: 0x2308630 Offset: 0x2308630 VA: 0x2308630 Slot: 5
	public override void Initialize() { }

	// RVA: 0x2308634 Offset: 0x2308634 VA: 0x2308634 Slot: 6
	public override void Spawn() { }

	// RVA: 0x23081FC Offset: 0x23081FC VA: 0x23081FC
	public void Prepare(Color color, int sortOrder) { }

	// RVA: 0x2308638 Offset: 0x2308638 VA: 0x2308638 Slot: 7
	public override void Recycle() { }

	// RVA: 0x230835C Offset: 0x230835C VA: 0x230835C
	public void PlayAnimation(float distanceToWater, float duration, bool leftSide) { }

	// RVA: 0x2308274 Offset: 0x2308274 VA: 0x2308274
	public float GetWaterLineEndDuration() { }

	// RVA: 0x2308644 Offset: 0x2308644 VA: 0x2308644
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.BoardItemParts.Scripts.Blob
[CreateAssetMenu(fileName = "BlobAnimationConfig", menuName = "Configs/BlobAnimationConfig")]