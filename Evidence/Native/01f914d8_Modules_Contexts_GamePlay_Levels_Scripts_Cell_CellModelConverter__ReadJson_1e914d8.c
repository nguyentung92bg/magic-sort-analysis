/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.Cell.CellModelConverter$$ReadJson
Il2CppObject* Modules_Contexts_GamePlay_Levels_Scripts_Cell_CellModelConverter__ReadJson (Modules_Contexts_GamePlay_Levels_Scripts_Cell_CellModelConverter_o* __this, Newtonsoft_Json_JsonReader_o* reader, System_Type_o* objectType, Il2CppObject* existingValue, Newtonsoft_Json_JsonSerializer_o* serializer, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.Cell.CellModelConverter$$ReadJson
   Il2CppObject* Modules_Contexts_GamePlay_Levels_Scripts_Cell_CellModelConverter__ReadJson
   (Modules_Contexts_GamePlay_Levels_Scripts_Cell_CellModelConverter_o* __this,
   Newtonsoft_Json_JsonReader_o* reader, System_Type_o* objectType, Il2CppObject* existingValue,
   Newtonsoft_Json_JsonSerializer_o* serializer, const MethodInfo* method); */

long Modules_Contexts_GamePlay_Levels_Scripts_Cell_CellModelConverter__ReadJson_1e914d8
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  
  puVar1 = PTR_DAT_058148a0;
  if ((bRam0000000005c28135 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_058148a0);
    FUN_012d0dc8(PTR_DAT_057dcda0);
    FUN_012d0dc8(PTR_DAT_0580bd90);
    FUN_012d0dc8(PTR_DAT_057ce048);
    FUN_012d0dc8(PTR_DAT_0576a538);
    FUN_012d0dc8(PTR_DAT_0575ed20);
    FUN_012d0dc8(PTR_DAT_05796fd8);
    bRam0000000005c28135 = 1;
  }
  lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar2 != 0) {
    System_Object___ctor_23dfe5c(lVar2,0);
    lVar3 = Newtonsoft_Json_Linq_JObject__Load_15c6190(param_5,0);
    if ((lVar3 != 0) &&
       (lVar4 = Newtonsoft_Json_Linq_JObject__get_Item_15c5f78
                          (lVar3,*(undefined8 *)PTR_DAT_0576a538,0), puVar1 = PTR_DAT_05796fd8,
       lVar4 != 0)) {
      uVar6 = Newtonsoft_Json_Linq_JToken__ToObject_Vector3__29b1d44
                        (lVar4,param_8,*(undefined8 *)PTR_DAT_057ce048);
      *(undefined4 *)(lVar2 + 0x10) = uVar6;
      *(undefined4 *)(lVar2 + 0x14) = param_2;
      *(undefined4 *)(lVar2 + 0x18) = param_3;
      lVar4 = Newtonsoft_Json_Linq_JObject__get_Item_15c5f78(lVar3,*(undefined8 *)puVar1,0);
      if (lVar4 != 0) {
        lVar4 = Newtonsoft_Json_Linq_JObject__get_Item_15c5f78(lVar3,*(undefined8 *)puVar1,0);
        if (lVar4 == 0) goto LAB_01f91678;
        uVar5 = Newtonsoft_Json_Linq_JToken__ToObject_object__29b1c78
                          (lVar4,param_8,*(undefined8 *)PTR_DAT_0580bd90);
        *(undefined8 *)(lVar2 + 0x20) = uVar5;
        FUN_012d0d74();
      }
      puVar1 = PTR_DAT_0575ed20;
      lVar4 = Newtonsoft_Json_Linq_JObject__get_Item_15c5f78
                        (lVar3,*(undefined8 *)PTR_DAT_0575ed20,0);
      if (lVar4 != 0) {
        lVar3 = Newtonsoft_Json_Linq_JObject__get_Item_15c5f78(lVar3,*(undefined8 *)puVar1,0);
        if (lVar3 == 0) goto LAB_01f91678;
        uVar5 = Newtonsoft_Json_Linq_JToken__ToObject_object__29b1c78
                          (lVar3,param_8,*(undefined8 *)PTR_DAT_057dcda0);
        *(undefined8 *)(lVar2 + 0x28) = uVar5;
        FUN_012d0d74();
      }
      return lVar2;
    }
  }
LAB_01f91678:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

