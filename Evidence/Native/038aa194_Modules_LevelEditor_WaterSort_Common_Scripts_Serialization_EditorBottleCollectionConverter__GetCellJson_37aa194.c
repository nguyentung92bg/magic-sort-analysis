/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.Serialization.EditorBottleCollectionConverter$$GetCellJson
Newtonsoft_Json_Linq_JObject_o* Modules_LevelEditor_WaterSort_Common_Scripts_Serialization_EditorBottleCollectionConverter__GetCellJson (Modules_LevelEditor_WaterSort_Common_Scripts_Serialization_EditorBottleCollectionConverter_o* __this, Modules_LevelEditor_WaterSort_Common_Scripts_EditorCell_o* cell, Newtonsoft_Json_JsonSerializer_o* serializer, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.Serialization.EditorBottleCollectionConverter$$GetCellJson
   Newtonsoft_Json_Linq_JObject_o*
   Modules_LevelEditor_WaterSort_Common_Scripts_Serialization_EditorBottleCollectionConverter__GetCellJson
   (Modules_LevelEditor_WaterSort_Common_Scripts_Serialization_EditorBottleCollectionConverter_o*
   __this, Modules_LevelEditor_WaterSort_Common_Scripts_EditorCell_o* cell,
   Newtonsoft_Json_JsonSerializer_o* serializer, const MethodInfo* method); */

long Modules_LevelEditor_WaterSort_Common_Scripts_Serialization_EditorBottleCollectionConverter__GetCellJson_37aa194
               (undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  puVar2 = PTR_DAT_0581aec8;
  if ((bRam0000000005c33e2b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0581aec8);
    FUN_012d0dc8(PTR_DAT_0577c730);
    FUN_012d0dc8(PTR_DAT_05805c10);
    FUN_012d0dc8(PTR_DAT_0576a538);
    FUN_012d0dc8(PTR_DAT_0575ed20);
    FUN_012d0dc8(PTR_DAT_0577f980);
    FUN_012d0dc8(PTR_DAT_05796fd8);
    bRam0000000005c33e2b = 1;
  }
  lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  if ((lVar7 != 0) &&
     (Newtonsoft_Json_Linq_JObject___ctor_15c1dcc(lVar7,0), puVar4 = PTR_DAT_0577c730,
     puVar3 = PTR_DAT_0576a538, param_2 != 0)) {
    uStack_70 = *(undefined8 *)(param_2 + 0x10);
    uStack_68 = *(undefined4 *)(param_2 + 0x18);
    uVar8 = thunk_FUN_01320a8c(*(undefined8 *)PTR_DAT_05805c10,&uStack_70);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_0130472c(*(long *)puVar4);
    }
    puVar5 = PTR_DAT_0577f980;
    uVar8 = Newtonsoft_Json_Linq_JToken__FromObject_15d4284(uVar8,param_3,0);
    Newtonsoft_Json_Linq_JObject__set_Item_15c6118(lVar7,*(undefined8 *)puVar3,uVar8,0);
    lVar11 = *(long *)(param_2 + 0x20);
    if (lVar11 != 0) {
      lVar12 = *(long *)(param_2 + 0x28);
      lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
      puVar3 = PTR_DAT_05796fd8;
      if (lVar9 == 0) goto LAB_038aa418;
      Newtonsoft_Json_Linq_JObject___ctor_15c1dcc(lVar9,0);
      lVar1 = lVar11;
      if (lVar12 != 0) {
        lVar1 = lVar12;
      }
      uVar8 = *(undefined8 *)puVar5;
      uVar6 = Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemPairs__ToItemId_2304c7c
                        (*(undefined4 *)(lVar1 + 0x18),0);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_0130472c(*(long *)puVar4);
      }
      uVar10 = Newtonsoft_Json_Linq_JToken__op_Implicit_15d360c(uVar6,0);
      uVar8 = Newtonsoft_Json_Linq_JObject__set_Item_15c6118(lVar9,uVar8,uVar10,0);
      Modules_LevelEditor_WaterSort_Common_Scripts_Serialization_EditorBottleCollectionConverter__AddItemToJObject_37aa41c
                (uVar8,lVar11,lVar9,param_3);
      Newtonsoft_Json_Linq_JObject__set_Item_15c6118(lVar7,*(undefined8 *)puVar3,lVar9,0);
    }
    lVar11 = *(long *)(param_2 + 0x30);
    if (lVar11 != 0) {
      lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
      puVar2 = PTR_DAT_0575ed20;
      if (lVar9 == 0) goto LAB_038aa418;
      Newtonsoft_Json_Linq_JObject___ctor_15c1dcc(lVar9,0);
      uVar6 = Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemPairs__ToItemId_2304c7c
                        (*(undefined4 *)(lVar11 + 0x18),0);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_0130472c(*(long *)puVar4);
      }
      uVar8 = Newtonsoft_Json_Linq_JToken__op_Implicit_15d360c(uVar6,0);
      uVar8 = Newtonsoft_Json_Linq_JObject__set_Item_15c6118(lVar9,*(undefined8 *)puVar5,uVar8,0);
      Modules_LevelEditor_WaterSort_Common_Scripts_Serialization_EditorBottleCollectionConverter__AddItemToJObject_37aa41c
                (uVar8,lVar11,lVar9,param_3);
      Newtonsoft_Json_Linq_JObject__set_Item_15c6118(lVar7,*(undefined8 *)puVar2,lVar9,0);
    }
    return lVar7;
  }
LAB_038aa418:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

