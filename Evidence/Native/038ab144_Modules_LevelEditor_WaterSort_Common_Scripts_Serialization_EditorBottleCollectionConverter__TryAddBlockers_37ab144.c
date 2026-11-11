/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.Serialization.EditorBottleCollectionConverter$$TryAddBlockers
void Modules_LevelEditor_WaterSort_Common_Scripts_Serialization_EditorBottleCollectionConverter__TryAddBlockers (Modules_LevelEditor_WaterSort_Common_Scripts_Serialization_EditorBottleCollectionConverter_o* __this, Newtonsoft_Json_Linq_JObject_o* jObject, Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o* bottleItem, Newtonsoft_Json_JsonSerializer_o* serializer, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.Serialization.EditorBottleCollectionConverter$$TryAddBlockers
   void 
   Modules_LevelEditor_WaterSort_Common_Scripts_Serialization_EditorBottleCollectionConverter__TryAddBlockers
   (Modules_LevelEditor_WaterSort_Common_Scripts_Serialization_EditorBottleCollectionConverter_o*
   __this, Newtonsoft_Json_Linq_JObject_o* jObject,
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o* bottleItem,
   Newtonsoft_Json_JsonSerializer_o* serializer, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_Serialization_EditorBottleCollectionConverter__TryAddBlockers_37ab144
               (undefined8 param_1,long *param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  
  puVar1 = PTR_DAT_0576fc00;
  if ((bRam0000000005c33e2e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057ccab0);
    FUN_012d0dc8(PTR_DAT_057abfd8);
    FUN_012d0dc8(PTR_DAT_05786628);
    FUN_012d0dc8(PTR_DAT_05771b38);
    FUN_012d0dc8(PTR_DAT_057bbb10);
    FUN_012d0dc8(PTR_DAT_057d3d10);
    FUN_012d0dc8(PTR_DAT_057bb430);
    FUN_012d0dc8(PTR_DAT_057b1718);
    FUN_012d0dc8(PTR_DAT_057f8600);
    FUN_012d0dc8(PTR_DAT_0575c5a0);
    FUN_012d0dc8(PTR_DAT_05775e20);
    FUN_012d0dc8(PTR_DAT_05790780);
    FUN_012d0dc8(PTR_DAT_0576fc00);
    FUN_012d0dc8(PTR_DAT_057b97d0);
    FUN_012d0dc8(PTR_DAT_05784490);
    bRam0000000005c33e2e = 1;
  }
  lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar3 == 0) goto LAB_038ab438;
  System_Object___ctor_23dfe5c(lVar3,0);
  *(undefined8 *)(lVar3 + 0x18) = param_1;
  FUN_012d0d74((undefined8 *)(lVar3 + 0x18),param_1);
  puVar8 = (undefined8 *)(lVar3 + 0x20);
  *puVar8 = param_4;
  FUN_012d0d74(puVar8,param_4);
  if (param_3 == 0) goto LAB_038ab438;
  plVar7 = (long *)(lVar3 + 0x10);
  *plVar7 = *(long *)(param_3 + 0x70);
  FUN_012d0d74(plVar7);
  lVar6 = *(long *)(param_3 + 0x68);
  if (lVar6 == 0) {
LAB_038ab2f4:
    lVar6 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_0575c5a0);
    if (lVar6 == 0) goto LAB_038ab438;
    System_Collections_Generic_List_object____ctor_21fc1fc(lVar6,*(undefined8 *)PTR_DAT_057bb430);
  }
  else {
    lVar4 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057bbb10);
    puVar2 = PTR_DAT_057abfd8;
    puVar1 = PTR_DAT_05786628;
    if (lVar4 == 0) goto LAB_038ab438;
    System_Func_object__bool____ctor_338137c(lVar4,lVar3,*(undefined8 *)PTR_DAT_05775e20,0);
    uVar5 = System_Linq_Enumerable__Where_object__2430e98(lVar6,lVar4,*(undefined8 *)puVar1);
    lVar6 = System_Linq_Enumerable__ToList_object__242f814(uVar5,*(undefined8 *)puVar2);
    if (lVar6 == 0) goto LAB_038ab2f4;
  }
  lVar4 = *plVar7;
  if ((lVar4 != 0) && (*(int *)(lVar4 + 0x18) != 0)) {
    uVar5 = System_Collections_Generic_List_object___get_Item_21fc76c
                      (lVar4,0,*(undefined8 *)PTR_DAT_057f8600);
    uVar5 = Modules_LevelEditor_WaterSort_Common_Scripts_Serialization_EditorBottleCollectionConverter__GetJsonForBlockers_37ab058
                      (uVar5,uVar5,*puVar8);
    if (param_2 == (long *)0x0) goto LAB_038ab438;
    Newtonsoft_Json_Linq_JObject__set_Item_15c6118(param_2,*(undefined8 *)PTR_DAT_05784490,uVar5,0);
  }
  if ((lVar6 == 0) || (*(int *)(lVar6 + 0x18) == 0)) {
    return;
  }
  lVar4 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05771b38);
  puVar2 = PTR_DAT_057d3d10;
  puVar1 = PTR_DAT_057ccab0;
  if (lVar4 != 0) {
    System_Func_object__object____ctor_33820ac(lVar4,lVar3,*(undefined8 *)PTR_DAT_05790780,0);
    uVar5 = System_Linq_Enumerable__Select_object__object__2427df8
                      (lVar6,lVar4,*(undefined8 *)puVar1);
    lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
    if ((lVar3 != 0) &&
       (Newtonsoft_Json_Linq_JArray___ctor_1378574(lVar3,uVar5,0), param_2 != (long *)0x0)) {
      uVar5 = *(undefined8 *)PTR_DAT_057b97d0;
      plVar7 = (long *)Newtonsoft_Json_Linq_JObject__Property_15c2038(param_2,uVar5,4,0);
      if (plVar7 == (long *)0x0) {
        (**(code **)(*param_2 + 0x918))(param_2,uVar5,*(undefined8 *)(*param_2 + 0x920));
        Newtonsoft_Json_Linq_JObject__Add_15c5930(param_2,uVar5,lVar3);
                    /* WARNING: Could not recover jumptable at 0x016c618c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_2 + 0x908))(param_2,uVar5,*(undefined8 *)(*param_2 + 0x910));
        return;
      }
      Newtonsoft_Json_Linq_JContainer__CheckReentrancy_15bf014();
      if (lVar3 == 0) {
        lVar3 = Newtonsoft_Json_Linq_JValue__CreateNull_1754540(0);
      }
      if (plVar7[0xb] != 0) {
        lVar6 = *plVar7;
        if (*(long *)(plVar7[0xb] + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x016c5aac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar6 + 0x688))(plVar7,0,lVar3,*(undefined8 *)(lVar6 + 0x690));
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x016c5ad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar6 + 0x648))(plVar7,0,lVar3,0,1,*(undefined8 *)(lVar6 + 0x650));
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
LAB_038ab438:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

