/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.Serialization.EditorBottleCollectionConverter$$GetJsonForBlockers
Newtonsoft_Json_Linq_JObject_o* Modules_LevelEditor_WaterSort_Common_Scripts_Serialization_EditorBottleCollectionConverter__GetJsonForBlockers (Modules_LevelEditor_WaterSort_Common_Scripts_Serialization_EditorBottleCollectionConverter_o* __this, Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorAItem_o* item, Newtonsoft_Json_JsonSerializer_o* serializer, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.Serialization.EditorBottleCollectionConverter$$GetJsonForBlockers
   Newtonsoft_Json_Linq_JObject_o*
   Modules_LevelEditor_WaterSort_Common_Scripts_Serialization_EditorBottleCollectionConverter__GetJsonForBlockers
   (Modules_LevelEditor_WaterSort_Common_Scripts_Serialization_EditorBottleCollectionConverter_o*
   __this, Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorAItem_o* item,
   Newtonsoft_Json_JsonSerializer_o* serializer, const MethodInfo* method); */

long Modules_LevelEditor_WaterSort_Common_Scripts_Serialization_EditorBottleCollectionConverter__GetJsonForBlockers_37ab058
               (undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_DAT_0581aec8;
  if ((bRam0000000005c33e2d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0581aec8);
    FUN_012d0dc8(PTR_DAT_0577c730);
    FUN_012d0dc8(PTR_DAT_0577f980);
    bRam0000000005c33e2d = 1;
  }
  lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if ((lVar4 != 0) &&
     (Newtonsoft_Json_Linq_JObject___ctor_15c1dcc(lVar4,0), puVar2 = PTR_DAT_0577f980,
     puVar1 = PTR_DAT_0577c730, param_2 != 0)) {
    uVar3 = Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemPairs__ToItemId_2304c7c
                      (*(undefined4 *)(param_2 + 0x18),0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c(*(long *)puVar1);
    }
    uVar5 = Newtonsoft_Json_Linq_JToken__op_Implicit_15d360c(uVar3,0);
    uVar5 = Newtonsoft_Json_Linq_JObject__set_Item_15c6118(lVar4,*(undefined8 *)puVar2,uVar5,0);
    Modules_LevelEditor_WaterSort_Common_Scripts_Serialization_EditorBottleCollectionConverter__AddItemToJObject_37aa41c
              (uVar5,param_2,lVar4,param_3);
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

