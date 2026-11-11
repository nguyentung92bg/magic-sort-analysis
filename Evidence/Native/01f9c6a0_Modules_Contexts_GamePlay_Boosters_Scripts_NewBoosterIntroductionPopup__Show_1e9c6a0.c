/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.NewBoosterIntroductionPopup$$Show
void Modules_Contexts_GamePlay_Boosters_Scripts_NewBoosterIntroductionPopup__Show (Modules_Contexts_GamePlay_Boosters_Scripts_NewBoosterIntroductionPopup_o* __this, Modules_Infrastructure_UI_Common_Scripts_PopUp_PopUpArguments_o* popUpArguments, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.NewBoosterIntroductionPopup$$Show
   void Modules_Contexts_GamePlay_Boosters_Scripts_NewBoosterIntroductionPopup__Show
   (Modules_Contexts_GamePlay_Boosters_Scripts_NewBoosterIntroductionPopup_o* __this,
   Modules_Infrastructure_UI_Common_Scripts_PopUp_PopUpArguments_o* popUpArguments, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Boosters_Scripts_NewBoosterIntroductionPopup__Show_1e9c6a0
               (long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  
  if ((bRam0000000005c28187 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057bc5e8);
    FUN_012d0dc8(PTR_DAT_05789658);
    FUN_012d0dc8(PTR_DAT_0578ac38);
    FUN_012d0dc8(PTR_DAT_05796318);
    FUN_012d0dc8(PTR_DAT_057e3690);
    FUN_012d0dc8(PTR_DAT_05774758);
    bRam0000000005c28187 = 1;
  }
  lVar8 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
  if (lVar8 == 0) {
LAB_01f9c988:
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  UnityEngine_GameObject__SetActive_408e318(lVar8,1,0);
  puVar6 = PTR_DAT_057e3690;
  puVar5 = PTR_DAT_0578ac38;
  if (param_2 != (long *)0x0) {
    bVar4 = *(byte *)(*(long *)PTR_DAT_05789658 + 300);
    if ((bVar4 <= *(byte *)(*param_2 + 300)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar4 * 8 + -8) == *(long *)PTR_DAT_05789658))
    {
      if (param_2 != (long *)0x0) {
        if (*(int *)((long)param_2 + 0x24) == 0x13) {
          plVar10 = *(long **)(param_1 + 0x18);
          if (*(int *)(*(long *)PTR_DAT_057bc5e8 + 0xe0) == 0) {
            thunk_FUN_0130472c();
          }
          uVar9 = Modules_Infrastructure_Utils_GrandStringExtensions__Localize_3de2900
                            (*(undefined8 *)puVar5,0);
          puVar5 = PTR_DAT_05774758;
          if (plVar10 != (long *)0x0) {
            (**(code **)(*plVar10 + 0x558))(plVar10,uVar9,*(undefined8 *)(*plVar10 + 0x560));
            plVar10 = *(long **)(param_1 + 0x20);
            uVar9 = Modules_Infrastructure_Utils_GrandStringExtensions__Localize_3de2900
                              (*(undefined8 *)puVar5,0);
            if (plVar10 != (long *)0x0) {
              (**(code **)(*plVar10 + 0x558))(plVar10,uVar9,*(undefined8 *)(*plVar10 + 0x560));
              if ((*(long *)(param_1 + 0x28) != 0) &&
                 (lVar8 = UnityEngine_GameObject__get_transform_408e25c(*(long *)(param_1 + 0x28),0)
                 , lVar8 != 0)) {
                bVar7 = (char)param_2[5] != '\0';
                lVar1 = 0x40;
                if (bVar7) {
                  lVar1 = 0x4c;
                }
                lVar2 = 0x3c;
                if (bVar7) {
                  lVar2 = 0x48;
                }
                lVar3 = 0x38;
                if (bVar7) {
                  lVar3 = 0x44;
                }
                UnityEngine_Transform__set_localPosition_4092ce0
                          (*(undefined4 *)(param_1 + lVar3),*(undefined4 *)(param_1 + lVar2),
                           *(undefined4 *)(param_1 + lVar1),lVar8,0);
                if (*(long *)(param_1 + 0x28) != 0) {
                  UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x28),1,0);
                  lVar8 = *(long *)(param_1 + 0x30);
                  if (lVar8 != 0) {
                    uVar9 = 0;
                    goto LAB_01f9c974;
                  }
                }
              }
            }
          }
        }
        else {
          if (*(int *)((long)param_2 + 0x24) != 0x12) {
            return;
          }
          plVar10 = *(long **)(param_1 + 0x18);
          if (*(int *)(*(long *)PTR_DAT_057bc5e8 + 0xe0) == 0) {
            thunk_FUN_0130472c();
          }
          uVar9 = Modules_Infrastructure_Utils_GrandStringExtensions__Localize_3de2900
                            (*(undefined8 *)puVar6,0);
          puVar5 = PTR_DAT_05796318;
          if (plVar10 != (long *)0x0) {
            (**(code **)(*plVar10 + 0x558))(plVar10,uVar9,*(undefined8 *)(*plVar10 + 0x560));
            plVar10 = *(long **)(param_1 + 0x20);
            uVar9 = Modules_Infrastructure_Utils_GrandStringExtensions__Localize_3de2900
                              (*(undefined8 *)puVar5,0);
            if (plVar10 != (long *)0x0) {
              (**(code **)(*plVar10 + 0x558))(plVar10,uVar9,*(undefined8 *)(*plVar10 + 0x560));
              if ((*(long *)(param_1 + 0x30) != 0) &&
                 (lVar8 = UnityEngine_GameObject__get_transform_408e25c(*(long *)(param_1 + 0x30),0)
                 , lVar8 != 0)) {
                bVar7 = (char)param_2[5] != '\0';
                lVar1 = 0x40;
                if (bVar7) {
                  lVar1 = 0x4c;
                }
                lVar2 = 0x3c;
                if (bVar7) {
                  lVar2 = 0x48;
                }
                lVar3 = 0x38;
                if (bVar7) {
                  lVar3 = 0x44;
                }
                UnityEngine_Transform__set_localPosition_4092ce0
                          (*(undefined4 *)(param_1 + lVar3),*(undefined4 *)(param_1 + lVar2),
                           *(undefined4 *)(param_1 + lVar1),lVar8,0);
                if (*(long *)(param_1 + 0x28) != 0) {
                  UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x28),0,0);
                  lVar8 = *(long *)(param_1 + 0x30);
                  if (lVar8 != 0) {
                    uVar9 = 1;
LAB_01f9c974:
                    if (pcRam0000000005c3a388 == (code *)0x0) {
                      pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
                    }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (*pcRam0000000005c3a388)(lVar8,uVar9);
                    return;
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_01f9c988;
    }
  }
  return;
}

