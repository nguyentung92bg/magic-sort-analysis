public class SpecialOfferResponse // TypeDefIndex: 3289
{
	// Fields
	[JsonProperty("event_id")]
	public string EventId; // 0x10
	[JsonProperty("event_start_time")]
	public long StartTime; // 0x18
	[JsonProperty("event_end_time")]
	public long FinishTime; // 0x20
	[JsonProperty("is_finished")]
	public bool IsFinished; // 0x28
	[JsonProperty("is_claimed")]
	public bool IsClaimed; // 0x29
	[JsonProperty("segmented_offer_package")]
	public SegmentedOfferPackage SegmentedOfferPackage; // 0x30
	[CompilerGenerated]
	private int <PopupType>k__BackingField; // 0x38
	[CompilerGenerated]
	private string <Segment>k__BackingField; // 0x40
	[CompilerGenerated]
	private SpecialOfferThemeTpye <ThemeType>k__BackingField; // 0x48

	// Properties
	[JsonProperty("ui_type")]
	public int PopupType { get; set; }
	[JsonProperty("segment")]
	public string Segment { get; set; }
	[JsonProperty("theme_type")]
	public SpecialOfferThemeTpye ThemeType { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x359438C Offset: 0x359438C VA: 0x359438C
	public int get_PopupType() { }

	[CompilerGenerated]
	// RVA: 0x3594394 Offset: 0x3594394 VA: 0x3594394
	public void set_PopupType(int value) { }

	[CompilerGenerated]
	// RVA: 0x359439C Offset: 0x359439C VA: 0x359439C
	public string get_Segment() { }

	[CompilerGenerated]
	// RVA: 0x35943A4 Offset: 0x35943A4 VA: 0x35943A4
	public void set_Segment(string value) { }

	[CompilerGenerated]
	// RVA: 0x35943AC Offset: 0x35943AC VA: 0x35943AC
	public SpecialOfferThemeTpye get_ThemeType() { }

	[CompilerGenerated]
	// RVA: 0x35943B4 Offset: 0x35943B4 VA: 0x35943B4
	public void set_ThemeType(SpecialOfferThemeTpye value) { }

	// RVA: 0x35943BC Offset: 0x35943BC VA: 0x35943BC
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]