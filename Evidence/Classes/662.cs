public class RemoteSpriteReference : RemoteAssetReferenceBase // TypeDefIndex: 662
{
	// Fields
	[SerializeField]
	private string _spriteGuid; // 0x18
	[SerializeField]
	private SpriteRenderer _spriteRenderer; // 0x20
	[SerializeField]
	private Vector2 _spriteSize; // 0x28

	// Properties
	public string SpriteGuid { get; }
	public SpriteRenderer Renderer { get; }

	// Methods

	// RVA: 0x40DC2D0 Offset: 0x40DC2D0 VA: 0x40DC2D0
	public string get_SpriteGuid() { }

	// RVA: 0x40DD104 Offset: 0x40DD104 VA: 0x40DD104
	public SpriteRenderer get_Renderer() { }

	// RVA: 0x40DD10C Offset: 0x40DD10C VA: 0x40DD10C
	public void Clear() { }

	// RVA: 0x40DC324 Offset: 0x40DC324 VA: 0x40DC324
	public void SetSprite(Sprite sprite) { }

	// RVA: 0x40DD12C Offset: 0x40DD12C VA: 0x40DD12C
	private void OnValidate() { }

	// RVA: 0x40DD1DC Offset: 0x40DD1DC VA: 0x40DD1DC
	public void .ctor() { }
}

// Namespace: Modules.Infrastructure.AssetManagement