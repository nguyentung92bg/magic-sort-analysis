public struct LocalizedString // TypeDefIndex: 5495
{
	// Fields
	public string mTerm; // 0x0
	public bool mRTL_IgnoreArabicFix; // 0x8
	public int mRTL_MaxLineLength; // 0xC
	public bool mRTL_ConvertNumbers; // 0x10
	public bool m_DontLocalizeParameters; // 0x11

	// Methods

	// RVA: 0x1398BF0 Offset: 0x1398BF0 VA: 0x1398BF0
	public static string op_Implicit(LocalizedString s) { }

	// RVA: 0x1398CB8 Offset: 0x1398CB8 VA: 0x1398CB8
	public static LocalizedString op_Implicit(string term) { }

	// RVA: 0x1398CF4 Offset: 0x1398CF4 VA: 0x1398CF4
	public void .ctor(LocalizedString str) { }

	// RVA: 0x1398BF4 Offset: 0x1398BF4 VA: 0x1398BF4 Slot: 3
	public override string ToString() { }
}

// Namespace: I2.Loc