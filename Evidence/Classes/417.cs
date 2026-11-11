public class FacebookLoginResponseModel // TypeDefIndex: 417
{
	// Fields
	[CompilerGenerated]
	private FacebookLoginResult <Result>k__BackingField; // 0x10
	[CompilerGenerated]
	private string <Id>k__BackingField; // 0x18
	[CompilerGenerated]
	private string <ImageUrl>k__BackingField; // 0x20
	[CompilerGenerated]
	private string <Name>k__BackingField; // 0x28
	[CompilerGenerated]
	private List<string> <Friends>k__BackingField; // 0x30

	// Properties
	public FacebookLoginResult Result { get; set; }
	public string Id { get; set; }
	public string ImageUrl { get; set; }
	public string Name { get; set; }
	public List<string> Friends { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x3D168CC Offset: 0x3D168CC VA: 0x3D168CC
	public FacebookLoginResult get_Result() { }

	[CompilerGenerated]
	// RVA: 0x3D168D4 Offset: 0x3D168D4 VA: 0x3D168D4
	private void set_Result(FacebookLoginResult value) { }

	[CompilerGenerated]
	// RVA: 0x3D168DC Offset: 0x3D168DC VA: 0x3D168DC
	public string get_Id() { }

	[CompilerGenerated]
	// RVA: 0x3D168E4 Offset: 0x3D168E4 VA: 0x3D168E4
	private void set_Id(string value) { }

	[CompilerGenerated]
	// RVA: 0x3D168EC Offset: 0x3D168EC VA: 0x3D168EC
	public string get_ImageUrl() { }

	[CompilerGenerated]
	// RVA: 0x3D168F4 Offset: 0x3D168F4 VA: 0x3D168F4
	private void set_ImageUrl(string value) { }

	[CompilerGenerated]
	// RVA: 0x3D168FC Offset: 0x3D168FC VA: 0x3D168FC
	public string get_Name() { }

	[CompilerGenerated]
	// RVA: 0x3D16904 Offset: 0x3D16904 VA: 0x3D16904
	private void set_Name(string value) { }

	[CompilerGenerated]
	// RVA: 0x3D1690C Offset: 0x3D1690C VA: 0x3D1690C
	public List<string> get_Friends() { }

	[CompilerGenerated]
	// RVA: 0x3D16914 Offset: 0x3D16914 VA: 0x3D16914
	private void set_Friends(List<string> value) { }

	// RVA: 0x3D1691C Offset: 0x3D1691C VA: 0x3D1691C
	public void .ctor(FacebookLoginResult result, string id, string imageUrl, string name, List<string> friends) { }

	// RVA: 0x3D169A0 Offset: 0x3D169A0 VA: 0x3D169A0
	public static FacebookLoginResponseModel CreateFailResponseModel() { }

	// RVA: 0x3D16A20 Offset: 0x3D16A20 VA: 0x3D16A20
	public static FacebookLoginResponseModel CreateCancelResponseModel() { }

	// RVA: 0x3D16AA0 Offset: 0x3D16AA0 VA: 0x3D16AA0
	public static FacebookLoginResponseModel CreateSuccessResponseModel(string id, string imageUrl, string name, List<string> friends) { }
}

// Namespace: 
[CompilerGenerated]