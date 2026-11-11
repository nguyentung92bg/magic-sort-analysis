public class TermData // TypeDefIndex: 5482
{
	// Fields
	public string Term; // 0x10
	public eTermType TermType; // 0x18
	public string Description; // 0x20
	public string[] Languages; // 0x28
	public byte[] Flags; // 0x30
	[SerializeField]
	private string[] Languages_Touch; // 0x38

	// Methods

	// RVA: 0x13963FC Offset: 0x13963FC VA: 0x13963FC
	public string GetTranslation(int idx, string specialization, bool editMode = False) { }

	// RVA: 0x1396510 Offset: 0x1396510 VA: 0x1396510
	public void SetTranslation(int idx, string translation, string specialization) { }

	// RVA: 0x13965F4 Offset: 0x13965F4 VA: 0x13965F4
	public void RemoveSpecialization(string specialization) { }

	// RVA: 0x1396648 Offset: 0x1396648 VA: 0x1396648
	public void RemoveSpecialization(int idx, string specialization) { }

	// RVA: 0x13967E8 Offset: 0x13967E8 VA: 0x13967E8
	public bool IsAutoTranslated(int idx, bool IsTouch) { }

	// RVA: 0x139681C Offset: 0x139681C VA: 0x139681C
	public void Validate() { }

	// RVA: 0x1396A18 Offset: 0x1396A18 VA: 0x1396A18
	public bool IsTerm(string name, bool allowCategoryMistmatch) { }

	// RVA: 0x1396AA0 Offset: 0x1396AA0 VA: 0x1396AA0
	public bool HasSpecializations() { }

	// RVA: 0x1396B68 Offset: 0x1396B68 VA: 0x1396B68
	public List<string> GetAllSpecializations() { }

	// RVA: 0x1396C50 Offset: 0x1396C50 VA: 0x1396C50
	public void .ctor() { }
}

// Namespace: I2.Loc