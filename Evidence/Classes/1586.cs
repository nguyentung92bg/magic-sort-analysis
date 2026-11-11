public class BlobView : AItemPartView // TypeDefIndex: 1586
{
	// Fields
	[SerializeField]
	private SpriteRenderer _spriteRenderer; // 0x20
	[SerializeField]
	private SpriteRenderer _glossSpriteRenderer; // 0x28
	[SerializeField]
	private Animator _animator; // 0x30
	[SerializeField]
	private string _upAnimationKey; // 0x38
	[SerializeField]
	private BlobAnimationConfig _animationConfig; // 0x40
	private Material _material; // 0x48
	private Sequence _blobUpSequence; // 0x50
	private Sequence _blobDownTween; // 0x58
	private Sequence _blobDeselectSequence; // 0x60
	private static readonly int BlobColor; // 0x0

	// Methods

	// RVA: 0x2309364 Offset: 0x2309364 VA: 0x2309364 Slot: 5
	public override void Initialize() { }

	// RVA: 0x2309408 Offset: 0x2309408 VA: 0x2309408 Slot: 6
	public override void Spawn() { }

	// RVA: 0x23095B8 Offset: 0x23095B8 VA: 0x23095B8 Slot: 7
	public override void Recycle() { }

	// RVA: 0x2308EE8 Offset: 0x2308EE8 VA: 0x2308EE8
	public void PlayBlobUpAnimation(Vector3 topPosition, int waterHeight, int heightInBottle) { }

	// RVA: 0x230920C Offset: 0x230920C VA: 0x230920C
	public Tween PlayResetScale() { }

	// RVA: 0x2309764 Offset: 0x2309764 VA: 0x2309764
	private Tween BlobSelectScale(int waterHeight) { }

	// RVA: 0x2309850 Offset: 0x2309850 VA: 0x2309850
	private void SelectSizeChangeComplete() { }

	// RVA: 0x2309914 Offset: 0x2309914 VA: 0x2309914
	private void BlobSelectSizeChange(int waterHeight) { }

	// RVA: 0x230963C Offset: 0x230963C VA: 0x230963C
	private Tween BlobSelectMoveUp(Vector3 topPosition) { }

	// RVA: 0x2309B14 Offset: 0x2309B14 VA: 0x2309B14
	private float GetDynamicTopMoveDuration(Vector3 targetTopPosition) { }

	// RVA: 0x2309BF0 Offset: 0x2309BF0 VA: 0x2309BF0
	private void PlayTopMoveAnimationClip(Vector3 targetTopPosition) { }

	// RVA: 0x2308B94 Offset: 0x2308B94 VA: 0x2308B94
	public void PlayBlobDownAnimation(Vector3 targetTopPosition, Vector3 targetBottleInsidePosition, int bottleCountInBetween) { }

	// RVA: 0x2309D18 Offset: 0x2309D18 VA: 0x2309D18
	private void BlobMoveToBottleEntrance(Vector3 targetTopPosition, float duration, int bottleCountInBetween) { }

	// RVA: 0x2309EE0 Offset: 0x2309EE0 VA: 0x2309EE0
	private void BlobEnterBottle(Vector3 targetPosition) { }

	// RVA: 0x2308DA8 Offset: 0x2308DA8 VA: 0x2308DA8
	public float GetTotalBlobPathDuration(Vector3 targetTopPosition, Vector3 endPosition) { }

	// RVA: 0x2308B50 Offset: 0x2308B50 VA: 0x2308B50
	public float GetFirstPathDuration(Vector3 targetTopPosition) { }

	// RVA: 0x2309298 Offset: 0x2309298 VA: 0x2309298
	public Sequence PlayBlobDeselect(float targetY) { }

	// RVA: 0x230A05C Offset: 0x230A05C VA: 0x230A05C
	private Tween BlobDeselectMoveBack(float targetY) { }

	// RVA: 0x2309610 Offset: 0x2309610 VA: 0x2309610
	public void Hide() { }

	// RVA: 0x2309154 Offset: 0x2309154 VA: 0x2309154
	public void SetColor(Color color) { }

	// RVA: 0x2308B34 Offset: 0x2308B34 VA: 0x2308B34
	public void SetSortOrder(int sortOrder) { }

	// RVA: 0x2309458 Offset: 0x2309458 VA: 0x2309458
	private void ResetBlobView() { }

	// RVA: 0x230A0E4 Offset: 0x230A0E4 VA: 0x230A0E4
	public void .ctor() { }

	// RVA: 0x230A0EC Offset: 0x230A0EC VA: 0x230A0EC
	private static void .cctor() { }

	[CompilerGenerated]
	// RVA: 0x230A154 Offset: 0x230A154 VA: 0x230A154
	private Vector2 <BlobSelectSizeChange>b__17_0() { }

	[CompilerGenerated]
	// RVA: 0x230A170 Offset: 0x230A170 VA: 0x230A170
	private void <BlobSelectSizeChange>b__17_1(Vector2 x) { }

	[CompilerGenerated]
	// RVA: 0x230A18C Offset: 0x230A18C VA: 0x230A18C
	private void <BlobSelectMoveUp>b__18_0() { }
}

// Namespace: Modules.Contexts.GamePlay.Board.Items.Scripts.EditorDuck