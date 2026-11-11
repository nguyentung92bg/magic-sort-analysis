public class LocalizationService : IService, IInitializable, IDisposable // TypeDefIndex: 562
{
	// Fields
	[CompilerGenerated]
	private Language <Language>k__BackingField; // 0x10
	[CompilerGenerated]
	private CultureInfo <CultureInfo>k__BackingField; // 0x18

	// Properties
	public Language Language { get; set; }
	public CultureInfo CultureInfo { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x4001B0C Offset: 0x4001B0C VA: 0x4001B0C
	public Language get_Language() { }

	[CompilerGenerated]
	// RVA: 0x4001B14 Offset: 0x4001B14 VA: 0x4001B14
	private void set_Language(Language value) { }

	[CompilerGenerated]
	// RVA: 0x4001B1C Offset: 0x4001B1C VA: 0x4001B1C
	public CultureInfo get_CultureInfo() { }

	[CompilerGenerated]
	// RVA: 0x4001B24 Offset: 0x4001B24 VA: 0x4001B24
	private void set_CultureInfo(CultureInfo value) { }

	// RVA: 0x4001B2C Offset: 0x4001B2C VA: 0x4001B2C Slot: 4
	public void Initialize() { }

	// RVA: 0x4001FDC Offset: 0x4001FDC VA: 0x4001FDC Slot: 5
	public void Dispose() { }

	// RVA: 0x4001BE0 Offset: 0x4001BE0 VA: 0x4001BE0
	private Language GetLanguage(string languageCode) { }

	// RVA: 0x4001F04 Offset: 0x4001F04 VA: 0x4001F04
	private string GetCultureCode(Language language) { }

	// RVA: 0x4001FE0 Offset: 0x4001FE0 VA: 0x4001FE0
	public void .ctor() { }
}

// Namespace: Modules.Infrastructure.Localization