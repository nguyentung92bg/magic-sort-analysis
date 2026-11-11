public class ClaimPurchaseResponse // TypeDefIndex: 3090
{
	// Fields
	[JsonProperty("purchase_id")]
	public string PurchaseId; // 0x10
	[JsonProperty("status")]
	public string Status; // 0x18
	[JsonProperty("already_claimed")]
	public bool AlreadyClaimed; // 0x20

	// Methods

	// RVA: 0x3169C08 Offset: 0x3169C08 VA: 0x3169C08
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Monetization.WebShop.Scripts