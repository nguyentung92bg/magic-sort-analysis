public class GetPawTouchOfferResponse // TypeDefIndex: 3405
{
	// Fields
	[JsonProperty("event_id")]
	public string EventId; // 0x10
	[JsonProperty("event_type")]
	public int EventType; // 0x18
	[JsonProperty("segment")]
	public string Segment; // 0x20
	[JsonProperty("end_time")]
	public long EndDate; // 0x28
	[JsonProperty("segmented_offer_package")]
	public PawTouchOfferPackage OfferPackage; // 0x30

	// Methods

	// RVA: 0x3472304 Offset: 0x3472304 VA: 0x3472304 Slot: 3
	public override string ToString() { }

	// RVA: 0x3472504 Offset: 0x3472504 VA: 0x3472504
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Monetization.PawTouchOffer.Scripts