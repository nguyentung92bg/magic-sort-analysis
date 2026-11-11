public static class GrandStringExtensions // TypeDefIndex: 341
{
	// Fields
	private static readonly Regex EmojiRegex; // 0x0

	// Methods

	[Extension]
	// RVA: 0x3DE2900 Offset: 0x3DE2900 VA: 0x3DE2900
	public static string Localize(string str) { }

	[Extension]
	// RVA: 0x3DE29A0 Offset: 0x3DE29A0 VA: 0x3DE29A0
	public static string Localize(string str, object[] args) { }

	[Extension]
	// RVA: 0x3DE2A54 Offset: 0x3DE2A54 VA: 0x3DE2A54
	public static string CapitalizeFirstLetter(string str) { }

	[Extension]
	// RVA: 0x3DE2B28 Offset: 0x3DE2B28 VA: 0x3DE2B28
	public static string StripEmojis(string str) { }

	[Extension]
	// RVA: 0x3DE2BAC Offset: 0x3DE2BAC VA: 0x3DE2BAC
	public static string ProfanityFilter(string str) { }

	[Extension]
	// RVA: 0x3DE2CB0 Offset: 0x3DE2CB0 VA: 0x3DE2CB0
	public static bool HasBadWords(string str) { }

	[Extension]
	// RVA: 0x3DE2D94 Offset: 0x3DE2D94 VA: 0x3DE2D94
	public static string RemainSingleNewLine(string str) { }

	[Extension]
	// RVA: 0x3DE2E1C Offset: 0x3DE2E1C VA: 0x3DE2E1C
	public static string ReplaceUnsupportedEmoji(string input, TMP_SpriteAsset primaryAsset, TMP_FontAsset[] fontAsset) { }

	// RVA: 0x3DE30C0 Offset: 0x3DE30C0 VA: 0x3DE30C0
	private static bool HasSpriteFor(int unicode, TMP_SpriteAsset asset, TMP_FontAsset[] fontAssets) { }

	// RVA: 0x3DE31D0 Offset: 0x3DE31D0 VA: 0x3DE31D0
	private static void .cctor() { }
}

// Namespace: Modules.Infrastructure.Utils