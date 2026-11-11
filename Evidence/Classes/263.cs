public class EditorBottleCollectionConverter : JsonConverter // TypeDefIndex: 263
{
	// Methods

	// RVA: 0x37AA0B4 Offset: 0x37AA0B4 VA: 0x37AA0B4 Slot: 5
	public override object ReadJson(JsonReader reader, Type objectType, object existingValue, JsonSerializer serializer) { }

	// RVA: 0x37AA10C Offset: 0x37AA10C VA: 0x37AA10C Slot: 6
	public override bool CanConvert(Type objectType) { }

	// RVA: 0x37AA194 Offset: 0x37AA194 VA: 0x37AA194
	private JObject GetCellJson(EditorCell cell, JsonSerializer serializer) { }

	// RVA: 0x37AA41C Offset: 0x37AA41C VA: 0x37AA41C
	private void AddItemToJObject(EditorAItem item, JObject itemJson, JsonSerializer serializer) { }

	// RVA: 0x37AB058 Offset: 0x37AB058 VA: 0x37AB058
	private JObject GetJsonForBlockers(EditorAItem item, JsonSerializer serializer) { }

	// RVA: 0x37AB144 Offset: 0x37AB144 VA: 0x37AB144
	private void TryAddBlockers(JObject jObject, EditorBottleItem bottleItem, JsonSerializer serializer) { }

	// RVA: 0x37AB444 Offset: 0x37AB444 VA: 0x37AB444 Slot: 4
	public override void WriteJson(JsonWriter writer, object value, JsonSerializer serializer) { }

	// RVA: 0x37AC11C Offset: 0x37AC11C VA: 0x37AC11C
	public void .ctor() { }
}

// Namespace: Modules.LevelEditor.WaterSort.Common.Scripts.Rainbow