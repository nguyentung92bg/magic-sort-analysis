/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Common.Serialization.BottleCollectionConverter$$AddItemToJObject
void Modules_Contexts_GamePlay_Board_Items_Scripts_Common_Serialization_BottleCollectionConverter__AddItemToJObject (Modules_Contexts_GamePlay_Board_Items_Scripts_Common_Serialization_BottleCollectionConverter_o* __this, Modules_Infrastructure_Common_Scripts_Component_AItem_o* item, Newtonsoft_Json_Linq_JObject_o* itemJson, Newtonsoft_Json_JsonSerializer_o* serializer, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.Common.Serialization.BottleCollectionConverter$$AddItemToJObject
   void 
   Modules_Contexts_GamePlay_Board_Items_Scripts_Common_Serialization_BottleCollectionConverter__AddItemToJObject
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Common_Serialization_BottleCollectionConverter_o*
   __this, Modules_Infrastructure_Common_Scripts_Component_AItem_o* item,
   Newtonsoft_Json_Linq_JObject_o* itemJson, Newtonsoft_Json_JsonSerializer_o* serializer, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Common_Serialization_BottleCollectionConverter__AddItemToJObject_2f5543c
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
  undefined *puVar12;
  undefined4 uVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  byte abStack_58 [4];
  undefined4 uStack_54;
  
  if ((bRam0000000005c308a4 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057b4910);
    FUN_012d0dc8(PTR_DAT_057e4648);
    FUN_012d0dc8(PTR_DAT_057e31f0);
    FUN_012d0dc8(PTR_DAT_057de868);
    FUN_012d0dc8(PTR_DAT_057d99c8);
    FUN_012d0dc8(PTR_DAT_0580dab8);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_0577c730);
    FUN_012d0dc8(PTR_DAT_057f4d00);
    FUN_012d0dc8(PTR_DAT_057df9a0);
    FUN_012d0dc8(PTR_DAT_05781708);
    FUN_012d0dc8(PTR_DAT_0575d540);
    FUN_012d0dc8(PTR_DAT_05767220);
    FUN_012d0dc8(PTR_DAT_05760c20);
    FUN_012d0dc8(PTR_DAT_057ba848);
    FUN_012d0dc8(PTR_DAT_057d91a8);
    FUN_012d0dc8(PTR_DAT_057a50a0);
    FUN_012d0dc8(PTR_DAT_0580b248);
    FUN_012d0dc8(PTR_DAT_057f2738);
    FUN_012d0dc8(PTR_DAT_057f1de8);
    FUN_012d0dc8(PTR_DAT_057cde40);
    FUN_012d0dc8(PTR_DAT_057f9a00);
    FUN_012d0dc8(PTR_DAT_05776c50);
    FUN_012d0dc8(PTR_DAT_057c1b30);
    FUN_012d0dc8(PTR_DAT_05771d48);
    bRam0000000005c308a4 = 1;
  }
  puVar12 = PTR_DAT_0580b248;
  puVar11 = PTR_DAT_057f4d00;
  puVar10 = PTR_DAT_057e31f0;
  puVar9 = PTR_DAT_057df9a0;
  puVar8 = PTR_DAT_057cde40;
  puVar7 = PTR_DAT_057c1b30;
  puVar6 = PTR_DAT_057b4910;
  puVar5 = PTR_DAT_05781708;
  puVar4 = PTR_DAT_0577c730;
  puVar3 = PTR_DAT_05760c20;
  if (param_2 == (long *)0x0) goto LAB_03055c54;
  switch((int)param_2[3]) {
  case 2:
    lVar18 = *(long *)PTR_DAT_05760c20;
    if ((*(byte *)(*param_2 + 300) < *(byte *)(lVar18 + 300)) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(lVar18 + 300) * 8 + -8) != lVar18)) {
code_r0x03055c4c:
                    /* WARNING: Subroutine does not return */
      FUN_012d1288(param_2);
    }
    if ((*(byte *)(*param_2 + 300) < *(byte *)(lVar18 + 300)) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(lVar18 + 300) * 8 + -8) != lVar18))
    goto code_r0x03055c4c;
    uStack_54 = Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__GetColorId_1e99788
                          (param_2,0);
    uVar15 = thunk_FUN_01320a8c(*(undefined8 *)puVar10,&uStack_54);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_0130472c(*(long *)puVar4);
    }
    uVar15 = Newtonsoft_Json_Linq_JToken__FromObject_15d4284(uVar15,param_4,0);
    if (param_3 == (long *)0x0) goto LAB_03055c54;
    Newtonsoft_Json_Linq_JObject__set_Item_15c6118(param_3,*(undefined8 *)puVar7,uVar15,0);
    bVar1 = *(byte *)(*(long *)puVar3 + 300);
    if ((*(byte *)(*param_2 + 300) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3))
    goto code_r0x03055c4c;
    abStack_58[0] = *(byte *)((long)param_2 + 0x54);
    uVar15 = *(undefined8 *)puVar6;
    goto code_r0x0305593c;
  case 3:
    lVar18 = *(long *)PTR_DAT_057df9a0;
    if ((*(byte *)(*param_2 + 300) < *(byte *)(lVar18 + 300)) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(lVar18 + 300) * 8 + -8) != lVar18))
    goto code_r0x03055c4c;
    if ((*(byte *)(*param_2 + 300) < *(byte *)(lVar18 + 300)) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(lVar18 + 300) * 8 + -8) != lVar18))
    goto code_r0x03055c4c;
    uStack_54 = Modules_Contexts_GamePlay_Board_Items_Scripts_QuestionMark_QuestionMarkItem__GetColorId_2745c60
                          (param_2,0);
    uVar15 = thunk_FUN_01320a8c(*(undefined8 *)puVar10,&uStack_54);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_0130472c(*(long *)puVar4);
    }
    uVar15 = Newtonsoft_Json_Linq_JToken__FromObject_15d4284(uVar15,param_4,0);
    if (param_3 == (long *)0x0) goto LAB_03055c54;
    Newtonsoft_Json_Linq_JObject__set_Item_15c6118(param_3,*(undefined8 *)puVar7,uVar15,0);
    bVar1 = *(byte *)(*(long *)puVar9 + 300);
    if ((*(byte *)(*param_2 + 300) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar9))
    goto code_r0x03055c4c;
    abStack_58[0] =
         Modules_Contexts_GamePlay_Board_Items_Scripts_QuestionMark_QuestionMarkItem__IsVisible_2745c7c
                   (param_2,0);
    uVar15 = *(undefined8 *)puVar6;
    abStack_58[0] = abStack_58[0] & 1;
code_r0x0305593c:
    uVar15 = thunk_FUN_01320a8c(uVar15,abStack_58);
    uVar15 = Newtonsoft_Json_Linq_JToken__FromObject_15d4284(uVar15,param_4,0);
    uVar16 = *(undefined8 *)puVar8;
    goto code_r0x03055c24;
  case 4:
    bVar1 = *(byte *)(*(long *)PTR_DAT_057de868 + 300);
    if ((*(byte *)(*param_2 + 300) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_057de868))
    goto code_r0x03055c4c;
    uVar13 = Modules_Contexts_GamePlay_BoardItems_Scripts_Curtain_CurtainItem__GetColorId_2490a80
                       (param_2,0);
    lVar18 = thunk_FUN_01320e48(*(undefined8 *)puVar11);
    if (lVar18 == 0) goto LAB_03055c54;
    Modules_Contexts_GamePlay_BoardItems_Scripts_Common_Objective_ObjectiveModel___ctor_2307a88
              (lVar18,0);
    *(undefined4 *)(lVar18 + 0x10) = uVar13;
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    lVar18 = Newtonsoft_Json_Linq_JToken__FromObject_15d4284(lVar18,param_4,0);
    puVar2 = (undefined8 *)PTR_DAT_057f1de8;
    goto joined_r0x030557fc;
  default:
    goto LAB_03055c30;
  case 7:
    bVar1 = *(byte *)(*(long *)PTR_DAT_05767220 + 300);
    if ((*(byte *)(*param_2 + 300) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_05767220))
    goto code_r0x03055c4c;
    uStack_54 = (undefined4)param_2[0xb];
    uVar15 = thunk_FUN_01320a8c(*(undefined8 *)PTR_DAT_057e31f0,&uStack_54);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_0130472c(*(long *)puVar4);
    }
    uVar15 = Newtonsoft_Json_Linq_JToken__FromObject_15d4284(uVar15,param_4,0);
    if (param_3 == (long *)0x0) goto LAB_03055c54;
    uVar16 = *(undefined8 *)puVar7;
    goto code_r0x03055c24;
  case 8:
    bVar1 = *(byte *)(*(long *)PTR_DAT_0580dab8 + 300);
    if ((*(byte *)(*param_2 + 300) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0580dab8))
    goto code_r0x03055c4c;
    uStack_54 = (undefined4)param_2[0xc];
    uVar15 = thunk_FUN_01320a8c(*(undefined8 *)PTR_DAT_057db748,&uStack_54);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_0130472c(*(long *)puVar4);
    }
    uVar15 = Newtonsoft_Json_Linq_JToken__FromObject_15d4284(uVar15,param_4,0);
    puVar2 = (undefined8 *)PTR_DAT_05771d48;
    break;
  case 9:
    bVar1 = *(byte *)(*(long *)PTR_DAT_057d99c8 + 300);
    if ((*(byte *)(*param_2 + 300) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_057d99c8))
    goto code_r0x03055c4c;
    lVar18 = param_2[0xb];
    if (*(int *)(*(long *)PTR_DAT_0577c730 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    lVar18 = Newtonsoft_Json_Linq_JToken__FromObject_15d4284(lVar18,param_4,0);
    puVar2 = (undefined8 *)PTR_DAT_05776c50;
joined_r0x030557fc:
    if (param_3 != (long *)0x0) {
      uVar15 = *puVar2;
      plVar14 = (long *)Newtonsoft_Json_Linq_JObject__Property_15c2038(param_3,uVar15,4,0);
      if (plVar14 == (long *)0x0) {
        (**(code **)(*param_3 + 0x918))(param_3,uVar15,*(undefined8 *)(*param_3 + 0x920));
        Newtonsoft_Json_Linq_JObject__Add_15c5930(param_3,uVar15,lVar18);
                    /* WARNING: Could not recover jumptable at 0x016c618c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_3 + 0x908))(param_3,uVar15,*(undefined8 *)(*param_3 + 0x910));
        return;
      }
      Newtonsoft_Json_Linq_JContainer__CheckReentrancy_15bf014();
      if (lVar18 == 0) {
        lVar18 = Newtonsoft_Json_Linq_JValue__CreateNull_1754540(0);
      }
      if (plVar14[0xb] != 0) {
        lVar17 = *plVar14;
        if (*(long *)(plVar14[0xb] + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x016c5aac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar17 + 0x688))(plVar14,0,lVar18,*(undefined8 *)(lVar17 + 0x690));
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x016c5ad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar17 + 0x648))(plVar14,0,lVar18,0,1,*(undefined8 *)(lVar17 + 0x650));
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    goto LAB_03055c54;
  case 10:
    bVar1 = *(byte *)(*(long *)PTR_DAT_057ba848 + 300);
    if ((*(byte *)(*param_2 + 300) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_057ba848))
    goto code_r0x03055c4c;
    uStack_54 = *(undefined4 *)((long)param_2 + 0x44);
    goto code_r0x03055ac4;
  case 0xb:
    bVar1 = *(byte *)(*(long *)PTR_DAT_057d91a8 + 300);
    if ((*(byte *)(*param_2 + 300) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_057d91a8))
    goto code_r0x03055c4c;
    uStack_54 = (undefined4)param_2[0xd];
code_r0x03055ac4:
    uVar15 = thunk_FUN_01320a8c(*(undefined8 *)PTR_DAT_057a50a0,&uStack_54);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_0130472c(*(long *)puVar4);
    }
    uVar15 = Newtonsoft_Json_Linq_JToken__FromObject_15d4284(uVar15,param_4,0);
    if (param_3 == (long *)0x0) goto LAB_03055c54;
    uVar16 = *(undefined8 *)puVar12;
    goto code_r0x03055c24;
  case 0xc:
    bVar1 = *(byte *)(*(long *)PTR_DAT_057e4648 + 300);
    if ((*(byte *)(*param_2 + 300) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_057e4648))
    goto code_r0x03055c4c;
    uStack_54 = *(undefined4 *)((long)param_2 + 0x44);
    uVar15 = thunk_FUN_01320a8c(*(undefined8 *)PTR_DAT_057db748,&uStack_54);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_0130472c(*(long *)puVar4);
    }
    uVar15 = Newtonsoft_Json_Linq_JToken__FromObject_15d4284(uVar15,param_4,0);
    puVar2 = (undefined8 *)PTR_DAT_057f9a00;
    break;
  case 0xd:
    bVar1 = *(byte *)(*(long *)PTR_DAT_0575d540 + 300);
    if ((*(byte *)(*param_2 + 300) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0575d540))
    goto code_r0x03055c4c;
    uStack_54 = Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItem__GetSnitchType_260e0e0
                          (param_2,0);
    uVar15 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_54);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_0130472c(*(long *)puVar4);
    }
    uVar15 = Newtonsoft_Json_Linq_JToken__FromObject_15d4284(uVar15,param_4,0);
    puVar2 = (undefined8 *)PTR_DAT_057f2738;
  }
  if (param_3 == (long *)0x0) {
LAB_03055c54:
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  uVar16 = *puVar2;
code_r0x03055c24:
  Newtonsoft_Json_Linq_JObject__set_Item_15c6118(param_3,uVar16,uVar15,0);
LAB_03055c30:
  return;
}

