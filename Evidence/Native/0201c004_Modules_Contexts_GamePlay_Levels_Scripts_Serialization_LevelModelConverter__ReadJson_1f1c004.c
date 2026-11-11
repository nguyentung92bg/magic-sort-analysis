/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.Serialization.LevelModelConverter$$ReadJson
Il2CppObject* Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelModelConverter__ReadJson (Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelModelConverter_o* __this, Newtonsoft_Json_JsonReader_o* reader, System_Type_o* objectType, Il2CppObject* existingValue, Newtonsoft_Json_JsonSerializer_o* serializer, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.Serialization.LevelModelConverter$$ReadJson
   Il2CppObject*
   Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelModelConverter__ReadJson
   (Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelModelConverter_o* __this,
   Newtonsoft_Json_JsonReader_o* reader, System_Type_o* objectType, Il2CppObject* existingValue,
   Newtonsoft_Json_JsonSerializer_o* serializer, const MethodInfo* method); */

long Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelModelConverter__ReadJson_1f1c004
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  
  if ((bRam0000000005c28658 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057b6498);
    FUN_012d0dc8(PTR_DAT_05761328);
    FUN_012d0dc8(PTR_DAT_0577c730);
    FUN_012d0dc8(PTR_DAT_057eb888);
    FUN_012d0dc8(PTR_DAT_0579a748);
    FUN_012d0dc8(PTR_DAT_057f0450);
    FUN_012d0dc8(PTR_DAT_0580c540);
    FUN_012d0dc8(PTR_DAT_057610e0);
    FUN_012d0dc8(PTR_DAT_057c77a0);
    FUN_012d0dc8(PTR_DAT_0578b728);
    FUN_012d0dc8(PTR_DAT_05783ca8);
    FUN_012d0dc8(PTR_DAT_058086d0);
    bRam0000000005c28658 = 1;
  }
  lVar5 = Newtonsoft_Json_Linq_JObject__Load_15c6190(param_2,0);
  if ((lVar5 != 0) &&
     (lVar6 = Newtonsoft_Json_Linq_JObject__get_Item_15c5f78
                        (lVar5,*(undefined8 *)PTR_DAT_057c77a0,0), puVar1 = PTR_DAT_05783ca8,
     lVar6 != 0)) {
    uVar7 = Newtonsoft_Json_Linq_JToken__ToObject_object__29b1c78
                      (lVar6,param_5,*(undefined8 *)PTR_DAT_05761328);
    uVar8 = Newtonsoft_Json_Linq_JObject__ContainsKey_15c6b74(lVar5,*(undefined8 *)puVar1,0);
    if ((uVar8 & 1) == 0) {
      lVar6 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057f0450);
      if (lVar6 == 0) goto LAB_0201c2dc;
      System_Collections_Generic_List_object____ctor_21fc1fc(lVar6,*(undefined8 *)PTR_DAT_0579a748);
    }
    else {
      lVar6 = Newtonsoft_Json_Linq_JObject__get_Item_15c5f78(lVar5,*(undefined8 *)puVar1,0);
      if (lVar6 == 0) goto LAB_0201c2dc;
      lVar6 = Newtonsoft_Json_Linq_JToken__ToObject_object__29b1c78
                        (lVar6,param_5,*(undefined8 *)PTR_DAT_057b6498);
    }
    lVar9 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057eb888);
    puVar3 = PTR_DAT_058086d0;
    puVar2 = PTR_DAT_0577c730;
    puVar1 = PTR_DAT_057610e0;
    if (lVar9 != 0) {
      System_Object___ctor_23dfe5c(lVar9,0);
      uVar10 = Newtonsoft_Json_Linq_JObject__get_Item_15c5f78(lVar5,*(undefined8 *)puVar1,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_0130472c(*(long *)puVar2);
      }
      uVar4 = Newtonsoft_Json_Linq_JToken__op_Explicit_15cf168(uVar10,0);
      *(undefined4 *)(lVar9 + 0x14) = uVar4;
      lVar11 = Newtonsoft_Json_Linq_JObject__get_Item_15c5f78(lVar5,*(undefined8 *)puVar3,0);
      if (lVar11 == 0) {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        uVar10 = Newtonsoft_Json_Linq_JToken__op_Implicit_15d360c(0,0);
      }
      else {
        uVar10 = Newtonsoft_Json_Linq_JObject__get_Item_15c5f78(lVar5,*(undefined8 *)puVar3,0);
      }
      puVar3 = PTR_DAT_0580c540;
      puVar1 = PTR_DAT_0578b728;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar4 = Newtonsoft_Json_Linq_JToken__op_Explicit_15cf168(uVar10,0);
      *(undefined4 *)(lVar9 + 0x18) = uVar4;
      uVar10 = Newtonsoft_Json_Linq_JObject__get_Item_15c5f78(lVar5,*(undefined8 *)puVar1,0);
      uVar4 = Newtonsoft_Json_Linq_JToken__op_Explicit_15cf168(uVar10,0);
      *(undefined4 *)(lVar9 + 0x10) = uVar4;
      *(undefined8 *)(lVar9 + 0x28) = uVar7;
      FUN_012d0d74((undefined8 *)(lVar9 + 0x28),uVar7);
      uVar7 = Newtonsoft_Json_Linq_JObject__get_Item_15c5f78(lVar5,*(undefined8 *)puVar3,0);
      uVar7 = Newtonsoft_Json_Linq_JToken__op_Explicit_15d1830(uVar7,0);
      *(undefined8 *)(lVar9 + 0x20) = uVar7;
      FUN_012d0d74();
      *(long *)(lVar9 + 0x30) = lVar6;
      FUN_012d0d74((long *)(lVar9 + 0x30),lVar6);
      return lVar9;
    }
  }
LAB_0201c2dc:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

