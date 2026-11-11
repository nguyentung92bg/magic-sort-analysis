/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.Serialization.EditorBottleCollectionConverter$$AddItemToJObject
void Modules_LevelEditor_WaterSort_Common_Scripts_Serialization_EditorBottleCollectionConverter__AddItemToJObject (Modules_LevelEditor_WaterSort_Common_Scripts_Serialization_EditorBottleCollectionConverter_o* __this, Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorAItem_o* item, Newtonsoft_Json_Linq_JObject_o* itemJson, Newtonsoft_Json_JsonSerializer_o* serializer, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.Serialization.EditorBottleCollectionConverter$$AddItemToJObject
   void 
   Modules_LevelEditor_WaterSort_Common_Scripts_Serialization_EditorBottleCollectionConverter__AddItemToJObject
   (Modules_LevelEditor_WaterSort_Common_Scripts_Serialization_EditorBottleCollectionConverter_o*
   __this, Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorAItem_o* item,
   Newtonsoft_Json_Linq_JObject_o* itemJson, Newtonsoft_Json_JsonSerializer_o* serializer, const
   MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_Serialization_EditorBottleCollectionConverter__AddItemToJObject_37aa41c
               (undefined8 param_1,long *param_2,long *param_3,undefined8 param_4)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined4 uVar12;
  long *plVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  if ((bRam0000000005c33e2c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057b4910);
    FUN_012d0dc8(PTR_DAT_057e31f0);
    FUN_012d0dc8(PTR_DAT_05760a18);
    FUN_012d0dc8(PTR_DAT_05799bc0);
    FUN_012d0dc8(PTR_DAT_05795bb8);
    FUN_012d0dc8(PTR_DAT_057f9160);
    FUN_012d0dc8(PTR_DAT_05803860);
    FUN_012d0dc8(PTR_DAT_057d86d0);
    FUN_012d0dc8(PTR_DAT_0576a680);
    FUN_012d0dc8(PTR_DAT_057cba38);
    FUN_012d0dc8(PTR_DAT_05801f38);
    FUN_012d0dc8(PTR_DAT_05819150);
    FUN_012d0dc8(PTR_DAT_057f56f0);
    FUN_012d0dc8(PTR_DAT_05790308);
    FUN_012d0dc8(PTR_DAT_05801160);
    FUN_012d0dc8(PTR_DAT_05781ad8);
    FUN_012d0dc8(PTR_DAT_0579f160);
    FUN_012d0dc8(PTR_DAT_057745f8);
    FUN_012d0dc8(PTR_DAT_057e0268);
    FUN_012d0dc8(PTR_DAT_05815588);
    FUN_012d0dc8(PTR_DAT_057c5158);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_0577c730);
    FUN_012d0dc8(PTR_DAT_057fd358);
    FUN_012d0dc8(PTR_DAT_057f4d00);
    FUN_012d0dc8(PTR_DAT_057fff08);
    FUN_012d0dc8(PTR_DAT_057a50a0);
    FUN_012d0dc8(PTR_DAT_0580b248);
    FUN_012d0dc8(PTR_DAT_057f1de8);
    FUN_012d0dc8(PTR_DAT_057b8110);
    FUN_012d0dc8(PTR_DAT_057f9a00);
    FUN_012d0dc8(PTR_DAT_0577ea10);
    FUN_012d0dc8(PTR_DAT_05776c50);
    FUN_012d0dc8(PTR_DAT_057c1b30);
    FUN_012d0dc8(PTR_DAT_057c45f8);
    FUN_012d0dc8(PTR_DAT_057e9950);
    FUN_012d0dc8(PTR_DAT_05771d48);
    FUN_012d0dc8(PTR_DAT_0575a780);
    FUN_012d0dc8(PTR_DAT_057b46d8);
    FUN_012d0dc8(PTR_DAT_05808ba8);
    bRam0000000005c33e2c = 1;
  }
  puVar11 = PTR_DAT_0580b248;
  puVar10 = PTR_DAT_05808ba8;
  puVar9 = PTR_DAT_057f4d00;
  puVar8 = PTR_DAT_057c1b30;
  puVar7 = PTR_DAT_057b46d8;
  puVar6 = PTR_DAT_05790308;
  puVar5 = PTR_DAT_05781ad8;
  puVar4 = PTR_DAT_0577c730;
  puVar3 = PTR_DAT_05776c50;
  if (param_2 == (long *)0x0) goto LAB_038aaf98;
  switch((int)param_2[3]) {
  case 2:
    bVar1 = *(byte *)(*(long *)PTR_DAT_057e0268 + 300);
    if ((*(byte *)(*param_2 + 300) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_057e0268))
    {
code_r0x038aaf9c:
                    /* WARNING: Subroutine does not return */
      FUN_012d1288(param_2);
    }
    lVar14 = param_2[8];
    goto joined_r0x038aa89c;
  case 3:
    bVar1 = *(byte *)(*(long *)PTR_DAT_05801160 + 300);
    if ((*(byte *)(*param_2 + 300) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_05801160))
    goto code_r0x038aaf9c;
    lVar14 = param_2[6];
joined_r0x038aa89c:
    if (lVar14 == 0) goto LAB_038aaf98;
    uStack_54 = *(undefined4 *)(lVar14 + 0x70);
    goto code_r0x038aa984;
  case 4:
    bVar1 = *(byte *)(*(long *)PTR_DAT_057f9160 + 300);
    if ((*(byte *)(*param_2 + 300) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_057f9160))
    goto code_r0x038aaf9c;
    uVar12 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Curtain_EditorCurtainItem__GetColorId_3dddc30
                       (param_2,0);
    lVar14 = thunk_FUN_01320e48(*(undefined8 *)puVar9);
    if (lVar14 != 0) {
      Modules_Contexts_GamePlay_BoardItems_Scripts_Common_Objective_ObjectiveModel___ctor_2307a88
                (lVar14,0);
      *(undefined4 *)(lVar14 + 0x10) = uVar12;
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      lVar14 = Newtonsoft_Json_Linq_JToken__FromObject_15d4284(lVar14,param_4,0);
      if (param_3 != (long *)0x0) {
        uVar15 = *(undefined8 *)PTR_DAT_057f1de8;
        goto code_r0x016c6118;
      }
    }
    goto LAB_038aaf98;
  default:
    goto LAB_038aaf7c;
  case 7:
    bVar1 = *(byte *)(*(long *)PTR_DAT_0579f160 + 300);
    if ((*(byte *)(*param_2 + 300) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0579f160))
    goto code_r0x038aaf9c;
    uStack_54 = (undefined4)param_2[8];
    goto code_r0x038aa984;
  case 8:
    bVar1 = *(byte *)(*(long *)PTR_DAT_05819150 + 300);
    if ((*(byte *)(*param_2 + 300) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_05819150))
    goto code_r0x038aaf9c;
    uStack_54 = (undefined4)param_2[8];
    uVar15 = thunk_FUN_01320a8c(*(undefined8 *)PTR_DAT_057db748,&uStack_54);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_0130472c(*(long *)puVar4);
    }
    uVar15 = Newtonsoft_Json_Linq_JToken__FromObject_15d4284(uVar15,param_4,0);
    puVar2 = (undefined8 *)PTR_DAT_05771d48;
    goto joined_r0x038aae78;
  case 9:
    bVar1 = *(byte *)(*(long *)PTR_DAT_05801f38 + 300);
    if ((*(byte *)(*param_2 + 300) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_05801f38))
    goto code_r0x038aaf9c;
    uVar15 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Generator_EditorGeneratorItem__GetWaterColorIds_3dda320
                       (param_2,0);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_0130472c(*(long *)puVar4);
    }
    lVar14 = Newtonsoft_Json_Linq_JToken__FromObject_15d4284(uVar15,param_4,0);
    if (param_3 != (long *)0x0) {
      uVar15 = *(undefined8 *)puVar3;
code_r0x016c6118:
      plVar13 = (long *)Newtonsoft_Json_Linq_JObject__Property_15c2038(param_3,uVar15,4,0);
      if (plVar13 == (long *)0x0) {
        (**(code **)(*param_3 + 0x918))(param_3,uVar15,*(undefined8 *)(*param_3 + 0x920));
        Newtonsoft_Json_Linq_JObject__Add_15c5930(param_3,uVar15,lVar14);
                    /* WARNING: Could not recover jumptable at 0x016c618c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_3 + 0x908))(param_3,uVar15,*(undefined8 *)(*param_3 + 0x910));
        return;
      }
      Newtonsoft_Json_Linq_JContainer__CheckReentrancy_15bf014();
      if (lVar14 == 0) {
        lVar14 = Newtonsoft_Json_Linq_JValue__CreateNull_1754540(0);
      }
      if (plVar13[0xb] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      lVar17 = *plVar13;
      if (*(long *)(plVar13[0xb] + 0x10) == 0) {
                    /* WARNING: Could not recover jumptable at 0x016c5ad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar17 + 0x648))(plVar13,0,lVar14,0,1,*(undefined8 *)(lVar17 + 0x650));
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x016c5aac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar17 + 0x688))(plVar13,0,lVar14,*(undefined8 *)(lVar17 + 0x690));
      return;
    }
    goto LAB_038aaf98;
  case 10:
    bVar1 = *(byte *)(*(long *)PTR_DAT_05815588 + 300);
    if ((*(byte *)(*param_2 + 300) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_05815588))
    goto code_r0x038aaf9c;
    uStack_54 = (undefined4)param_2[8];
    goto code_r0x038aaad4;
  case 0xb:
    bVar1 = *(byte *)(*(long *)PTR_DAT_057c5158 + 300);
    if ((*(byte *)(*param_2 + 300) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_057c5158))
    goto code_r0x038aaf9c;
    uStack_54 = (undefined4)param_2[9];
code_r0x038aaad4:
    uVar15 = thunk_FUN_01320a8c(*(undefined8 *)PTR_DAT_057a50a0,&uStack_54);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_0130472c(*(long *)puVar4);
    }
    uVar15 = Newtonsoft_Json_Linq_JToken__FromObject_15d4284(uVar15,param_4,0);
    if (param_3 == (long *)0x0) goto LAB_038aaf98;
    uVar16 = *(undefined8 *)puVar11;
    break;
  case 0xc:
    bVar1 = *(byte *)(*(long *)PTR_DAT_05795bb8 + 300);
    if ((*(byte *)(*param_2 + 300) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_05795bb8))
    goto code_r0x038aaf9c;
    uStack_54 = (undefined4)param_2[8];
    uVar15 = thunk_FUN_01320a8c(*(undefined8 *)PTR_DAT_057db748,&uStack_54);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_0130472c(*(long *)puVar4);
    }
    uVar15 = Newtonsoft_Json_Linq_JToken__FromObject_15d4284(uVar15,param_4,0);
    puVar2 = (undefined8 *)PTR_DAT_057f9a00;
    goto joined_r0x038aae78;
  case 0xe:
    bVar1 = *(byte *)(*(long *)PTR_DAT_057745f8 + 300);
    if ((*(byte *)(*param_2 + 300) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_057745f8))
    goto code_r0x038aaf9c;
    uStack_54 = CONCAT31(uStack_54._1_3_,(char)param_2[8]);
    uVar15 = thunk_FUN_01320a8c(*(undefined8 *)PTR_DAT_057b4910,&uStack_54);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_0130472c(*(long *)puVar4);
    }
    uVar15 = Newtonsoft_Json_Linq_JToken__FromObject_15d4284(uVar15,param_4,0);
    puVar2 = (undefined8 *)PTR_DAT_057e9950;
    goto joined_r0x038aae78;
  case 0xf:
    bVar1 = *(byte *)(*(long *)PTR_DAT_057f56f0 + 300);
    if ((*(byte *)(*param_2 + 300) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_057f56f0))
    goto code_r0x038aaf9c;
    uStack_54 = (undefined4)param_2[9];
code_r0x038aa984:
    uVar15 = thunk_FUN_01320a8c(*(undefined8 *)PTR_DAT_057e31f0,&uStack_54);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_0130472c(*(long *)puVar4);
    }
    uVar15 = Newtonsoft_Json_Linq_JToken__FromObject_15d4284(uVar15,param_4,0);
    if (param_3 == (long *)0x0) goto LAB_038aaf98;
    uVar16 = *(undefined8 *)puVar8;
    break;
  case 0x10:
    bVar1 = *(byte *)(*(long *)PTR_DAT_057cba38 + 300);
    if ((*(byte *)(*param_2 + 300) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_057cba38))
    goto code_r0x038aaf9c;
    uStack_54 = *(undefined4 *)((long)param_2 + 0x44);
    uVar15 = thunk_FUN_01320a8c(*(undefined8 *)PTR_DAT_057db748,&uStack_54);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_0130472c(*(long *)puVar4);
    }
    uVar15 = Newtonsoft_Json_Linq_JToken__FromObject_15d4284(uVar15,param_4,0);
    puVar2 = (undefined8 *)PTR_DAT_0575a780;
    goto joined_r0x038aae78;
  case 0x12:
    bVar1 = *(byte *)(*(long *)PTR_DAT_057d86d0 + 300);
    if ((*(byte *)(*param_2 + 300) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_057d86d0))
    goto code_r0x038aaf9c;
    uStack_54 = (undefined4)param_2[9];
    goto code_r0x038aa820;
  case 0x13:
    bVar1 = *(byte *)(*(long *)PTR_DAT_05803860 + 300);
    if ((*(byte *)(*param_2 + 300) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_05803860))
    goto code_r0x038aaf9c;
    uStack_54 = (undefined4)param_2[8];
code_r0x038aa820:
    uVar15 = thunk_FUN_01320a8c(*(undefined8 *)PTR_DAT_05760a18,&uStack_54);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_0130472c(*(long *)puVar4);
    }
    uVar15 = Newtonsoft_Json_Linq_JToken__FromObject_15d4284(uVar15,param_4,0);
    if (param_3 == (long *)0x0) goto LAB_038aaf98;
    uVar16 = *(undefined8 *)puVar10;
    break;
  case 0x14:
    bVar1 = *(byte *)(*(long *)PTR_DAT_05781ad8 + 300);
    if ((*(byte *)(*param_2 + 300) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_05781ad8))
    goto code_r0x038aaf9c;
    uStack_54 = (undefined4)param_2[8];
    uVar15 = thunk_FUN_01320a8c(*(undefined8 *)PTR_DAT_057db748,&uStack_54);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_0130472c(*(long *)puVar4);
    }
    uVar15 = Newtonsoft_Json_Linq_JToken__FromObject_15d4284(uVar15,param_4,0);
    if (param_3 == (long *)0x0) goto LAB_038aaf98;
    Newtonsoft_Json_Linq_JObject__set_Item_15c6118(param_3,*(undefined8 *)puVar7,uVar15,0);
    puVar3 = PTR_DAT_057c45f8;
    bVar1 = *(byte *)(*(long *)puVar5 + 300);
    if ((*(byte *)(*param_2 + 300) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5))
    goto code_r0x038aaf9c;
    uStack_58 = *(undefined4 *)((long)param_2 + 0x44);
    uVar15 = thunk_FUN_01320a8c(*(undefined8 *)PTR_DAT_057fff08,&uStack_58);
    uVar15 = Newtonsoft_Json_Linq_JToken__FromObject_15d4284(uVar15,param_4,0);
    uVar16 = *(undefined8 *)puVar3;
    break;
  case 0x17:
    bVar1 = *(byte *)(*(long *)PTR_DAT_05799bc0 + 300);
    if ((*(byte *)(*param_2 + 300) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_05799bc0))
    goto code_r0x038aaf9c;
    uStack_54 = (undefined4)param_2[8];
    uVar15 = thunk_FUN_01320a8c(*(undefined8 *)PTR_DAT_057db748,&uStack_54);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_0130472c(*(long *)puVar4);
    }
    uVar15 = Newtonsoft_Json_Linq_JToken__FromObject_15d4284(uVar15,param_4,0);
    if (param_3 == (long *)0x0) goto LAB_038aaf98;
    uVar16 = *(undefined8 *)puVar7;
    break;
  case 0x18:
    bVar1 = *(byte *)(*(long *)PTR_DAT_0576a680 + 300);
    if ((*(byte *)(*param_2 + 300) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0576a680))
    goto code_r0x038aaf9c;
    uStack_54 = *(undefined4 *)((long)param_2 + 0x2c);
    uVar15 = thunk_FUN_01320a8c(*(undefined8 *)PTR_DAT_057db748,&uStack_54);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_0130472c(*(long *)puVar4);
    }
    uVar15 = Newtonsoft_Json_Linq_JToken__FromObject_15d4284(uVar15,param_4,0);
    puVar2 = (undefined8 *)PTR_DAT_0577ea10;
joined_r0x038aae78:
    if (param_3 == (long *)0x0) {
LAB_038aaf98:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    uVar16 = *puVar2;
    break;
  case 0x1b:
    bVar1 = *(byte *)(*(long *)PTR_DAT_05790308 + 300);
    if ((*(byte *)(*param_2 + 300) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_05790308))
    goto code_r0x038aaf9c;
    uStack_54 = (undefined4)param_2[8];
    uVar15 = thunk_FUN_01320a8c(*(undefined8 *)PTR_DAT_057fd358,&uStack_54);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_0130472c(*(long *)puVar4);
    }
    uVar15 = Newtonsoft_Json_Linq_JToken__FromObject_15d4284(uVar15,param_4,0);
    if (param_3 == (long *)0x0) goto LAB_038aaf98;
    Newtonsoft_Json_Linq_JObject__set_Item_15c6118(param_3,*(undefined8 *)PTR_DAT_057b8110,uVar15,0)
    ;
    bVar1 = *(byte *)(*(long *)puVar6 + 300);
    if ((*(byte *)(*param_2 + 300) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar6))
    goto code_r0x038aaf9c;
    uVar15 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Mosaic_EditorMosaicItem__GetColorIds_37aafdc
                       (param_2);
    uVar15 = Newtonsoft_Json_Linq_JToken__FromObject_15d4284(uVar15,param_4,0);
    uVar16 = *(undefined8 *)puVar3;
  }
  Newtonsoft_Json_Linq_JObject__set_Item_15c6118(param_3,uVar16,uVar15,0);
LAB_038aaf7c:
  return;
}

