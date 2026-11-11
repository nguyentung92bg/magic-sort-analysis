public class SpecializationManager : BaseSpecializationManager // TypeDefIndex: 5411
{
	// Fields
	public static SpecializationManager Singleton; // 0x0

	// Methods

	// RVA: 0x18658E8 Offset: 0x18658E8 VA: 0x18658E8
	private void .ctor() { }

	// RVA: 0x186590C Offset: 0x186590C VA: 0x186590C
	public static string GetSpecializedText(string text, string specialization) { }

	// RVA: 0x1865B04 Offset: 0x1865B04 VA: 0x1865B04
	public static string SetSpecializedText(string text, string newText, string specialization) { }

	// RVA: 0x1865E90 Offset: 0x1865E90 VA: 0x1865E90
	public static string SetSpecializedText(Dictionary<string, string> specializations) { }

	// RVA: 0x1865C24 Offset: 0x1865C24 VA: 0x1865C24
	public static Dictionary<string, string> GetSpecializations(string text, Dictionary<string, string> buffer) { }

	// RVA: 0x18662A8 Offset: 0x18662A8 VA: 0x18662A8
	public static void AppendSpecializations(string text, List<string> list) { }

	// RVA: 0x18664E0 Offset: 0x18664E0 VA: 0x18664E0
	private static void .cctor() { }
}

// Namespace: I2.Loc
[Serializable]