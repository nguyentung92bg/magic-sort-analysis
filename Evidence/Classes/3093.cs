public class FulfilledPurchase // TypeDefIndex: 3093
{
	// Fields
	[JsonProperty("purchase_id")]
	public string TransactionId; // 0x10
	[JsonProperty("offer_id")]
	public string WebProductId; // 0x18
	[JsonProperty("fulfilled_at")]
	public long FulfilledAt; // 0x20

	// Methods

	// RVA: 0x3169C20 Offset: 0x3169C20 VA: 0x3169C20
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Monetization.WebShop.Scripts