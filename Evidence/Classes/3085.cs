public class CreateSessionRequest // TypeDefIndex: 3085
{
	// Fields
	[JsonProperty("offer_id")]
	public string OfferId; // 0x10
	[JsonProperty("platform")]
	public string Platform; // 0x18
	[JsonProperty("client_version")]
	public string ClientVersion; // 0x20
	[JsonProperty("country_code_2", NullValueHandling = 1)]
	public string CountryCode; // 0x28

	// Methods

	// RVA: 0x3169BE0 Offset: 0x3169BE0 VA: 0x3169BE0
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Monetization.WebShop.Scripts