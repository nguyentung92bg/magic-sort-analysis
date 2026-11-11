public class QuestionMarkView : AItemView // TypeDefIndex: 1652
{
	// Fields
	[SerializeField]
	private SpriteRenderer _questionMarkSpriteRenderer; // 0x20
	[SerializeField]
	private ParticleSystem _revealParticleSystem; // 0x28
	[SerializeField]
	private QuestionMarkAnimationConfig _config; // 0x30
	private Tween _sequence; // 0x38

	// Methods

	// RVA: 0x2745D1C Offset: 0x2745D1C VA: 0x2745D1C Slot: 5
	public override void Initialize() { }

	// RVA: 0x2745D20 Offset: 0x2745D20 VA: 0x2745D20 Slot: 6
	public override void Spawn() { }

	// RVA: 0x274598C Offset: 0x274598C VA: 0x274598C
	public void Prepare(int sortOrder) { }

	// RVA: 0x2745D68 Offset: 0x2745D68 VA: 0x2745D68 Slot: 7
	public override void Recycle() { }

	// RVA: 0x2745B84 Offset: 0x2745B84 VA: 0x2745B84
	public void PlayCompleteAnimation() { }

	// RVA: 0x2745AB8 Offset: 0x2745AB8 VA: 0x2745AB8
	public void ShowQuestionMark() { }

	// RVA: 0x2745A74 Offset: 0x2745A74 VA: 0x2745A74
	public void HideQuestionMark() { }

	// RVA: 0x2745A40 Offset: 0x2745A40 VA: 0x2745A40
	public void SetSortOrder(int sortOrder) { }

	// RVA: 0x2745D80 Offset: 0x2745D80 VA: 0x2745D80 Slot: 8
	public override void Show() { }

	// RVA: 0x2745DA4 Offset: 0x2745DA4 VA: 0x2745DA4 Slot: 9
	public override void Hide() { }

	// RVA: 0x2745CEC Offset: 0x2745CEC VA: 0x2745CEC
	public Vector3 GetSnitchTargetPosition() { }

	// RVA: 0x2745DC8 Offset: 0x2745DC8 VA: 0x2745DC8
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x2745DD0 Offset: 0x2745DD0 VA: 0x2745DD0
	private void <PlayCompleteAnimation>b__8_0() { }
}

// Namespace: 
[Serializable]