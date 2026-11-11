/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.Serialization.EditorBottleCollectionConverter$$ReadJson
Il2CppObject* Modules_LevelEditor_WaterSort_Common_Scripts_Serialization_EditorBottleCollectionConverter__ReadJson (Modules_LevelEditor_WaterSort_Common_Scripts_Serialization_EditorBottleCollectionConverter_o* __this, Newtonsoft_Json_JsonReader_o* reader, System_Type_o* objectType, Il2CppObject* existingValue, Newtonsoft_Json_JsonSerializer_o* serializer, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.Serialization.EditorBottleCollectionConverter$$ReadJson
   Il2CppObject*
   Modules_LevelEditor_WaterSort_Common_Scripts_Serialization_EditorBottleCollectionConverter__ReadJson
   (Modules_LevelEditor_WaterSort_Common_Scripts_Serialization_EditorBottleCollectionConverter_o*
   __this, Newtonsoft_Json_JsonReader_o* reader, System_Type_o* objectType, Il2CppObject*
   existingValue, Newtonsoft_Json_JsonSerializer_o* serializer, const MethodInfo* method); */

long Modules_LevelEditor_WaterSort_Common_Scripts_Serialization_EditorBottleCollectionConverter__ReadJson_37aa0b4
               (void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_057d0c00;
  if ((bRam0000000005c33e29 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d0c00);
    bRam0000000005c33e29 = 1;
  }
  lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar2 != 0) {
    Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection___ctor_37a6b70();
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

