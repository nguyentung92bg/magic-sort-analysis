/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelWinPopUpNS.Scripts.LevelWinPopUpView$$Show
void Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinPopUpView__Show (Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinPopUpView_o* __this, Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinPopUpArguments_o* levelWinPopUpArguments, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelWinPopUpNS.Scripts.LevelWinPopUpView$$Show
   void Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinPopUpView__Show
   (Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinPopUpView_o* __this,
   Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinPopUpArguments_o*
   levelWinPopUpArguments, const MethodInfo* method); */

void Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinPopUpView__Show_16ef960
               (long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  int *piVar13;
  int iStack_44;
  
  if ((bRam0000000005c24b4e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05808828);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_057bc240);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057bc5e8);
    FUN_012d0dc8(PTR_DAT_057de4f8);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057fea48);
    FUN_012d0dc8(PTR_DAT_057662d8);
    bRam0000000005c24b4e = 1;
  }
  lVar6 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
  if (((lVar6 != 0) &&
      (UnityEngine_GameObject__SetActive_408e318(lVar6,1,0), puVar2 = PTR_DAT_0576aae0, param_2 != 0
      )) && (*(long *)(param_2 + 0x28) != 0)) {
    *(bool *)(param_1 + 0xc0) = *(long *)(*(long *)(param_2 + 0x28) + 0x20) != 0;
    if (((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
        (lVar6 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar6 != 0)) &&
       (plVar7 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                   (lVar6,*(undefined8 *)PTR_DAT_057a1e60),
       puVar1 = PTR_DAT_057636d0, plVar7 != (long *)0x0)) {
      lVar6 = *plVar7;
      uVar12 = (ulong)*(ushort *)(lVar6 + 0x12a);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_057636d0) {
            puVar8 = (undefined8 *)(lVar6 + (long)(*piVar13 + 1) * 0x10 + 0x138);
            goto LAB_017efad4;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)FUN_0131971c(plVar7,*(long *)PTR_DAT_057636d0,1);
LAB_017efad4:
      iVar4 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      lVar6 = *plVar7;
      uVar12 = (ulong)*(ushort *)(lVar6 + 0x12a);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
            puVar8 = (undefined8 *)(lVar6 + (long)(*piVar13 + 0x24) * 0x10 + 0x138);
            goto LAB_017efb34;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)FUN_0131971c(plVar7,*(long *)puVar1,0x24);
LAB_017efb34:
      (*(code *)*puVar8)(plVar7,puVar8[1]);
      if ((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
         (lVar6 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar6 != 0)) {
        lVar6 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                          (lVar6,*(undefined8 *)PTR_DAT_057bc240);
        if ((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
           ((lVar9 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar9 != 0 &&
            (plVar7 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                        (lVar9,*(undefined8 *)PTR_DAT_05808828),
            plVar7 != (long *)0x0)))) {
          lVar9 = *plVar7;
          iVar4 = iVar4 + -1;
          uVar12 = (ulong)*(ushort *)(lVar9 + 0x12a);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_057de4f8) {
                puVar8 = (undefined8 *)(lVar9 + (long)(*piVar13 + 4) * 0x10 + 0x138);
                goto LAB_017efbf8;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar8 = (undefined8 *)FUN_0131971c(plVar7,*(long *)PTR_DAT_057de4f8,4);
LAB_017efbf8:
          uVar5 = (*(code *)*puVar8)(plVar7,iVar4,puVar8[1]);
          if (lVar6 != 0) {
            uVar12 = Modules_Contexts_Home_Multiplier_MultiplierService__ShouldShowMultiplier_315ce7c
                               (lVar6,uVar5,0);
            if (((uVar12 & 1) == 0) || (*(char *)(param_1 + 0xc0) != '\0')) {
              if (*(long *)(param_1 + 0xb8) == 0) goto LAB_017efdcc;
              Modules_Contexts_Home_UI_PreGame_Scripts_Multiplier_MultiplierController__Hide_2979820
                        (*(long *)(param_1 + 0xb8),0);
            }
            else {
              Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinPopUpView__InitializeMultiplierController_16eff68
                        (param_1,iVar4);
            }
            if (*(long *)(param_1 + 0xb0) != 0) {
              Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinEntranceAnimator__PlayAnimation_16ee570
                        (*(long *)(param_1 + 0xb0),*(undefined1 *)(param_1 + 0xc0));
              Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinPopUpView__SelectDifficultyAssets_16f00b0
                        (param_1,iVar4);
              uVar5 = _DAT_04321768;
              if (*(long *)(param_1 + 0x18) != 0) {
                Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinContinueOrQuitButton__ShowWithAnimation_16edd70
                          (_DAT_04321768);
                if ((*(char *)(param_1 + 0xc0) == '\0') &&
                   (uVar12 = Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinPopUpView__ShouldShow2XRewarded_16f06d0
                                       (), (uVar12 & 1) != 0)) {
                  if (*(long *)(param_1 + 0x20) != 0) {
                    Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_Rewarded2xButton__ShowWithAnimation_16f074c
                              (uVar5,*(long *)(param_1 + 0x20),*(undefined4 *)(param_2 + 0x34));
                  }
                }
                else if (*(long *)(param_1 + 0x20) != 0) {
                  Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_Rewarded2xButton__Hide_16f0ab0
                            ();
                }
                puVar3 = PTR_DAT_057fea48;
                puVar1 = PTR_DAT_057db748;
                puVar2 = PTR_DAT_057662d8;
                if (*(char *)(param_1 + 0xc0) == '\0') {
                  plVar7 = *(long **)(param_1 + 0x88);
                  if (*(int *)(*(long *)PTR_DAT_057bc5e8 + 0xe0) == 0) {
                    thunk_FUN_0130472c();
                  }
                  uVar10 = Modules_Infrastructure_Utils_GrandStringExtensions__Localize_3de2900
                                     (*(undefined8 *)puVar2,0);
                  iStack_44 = iVar4;
                  uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar1,&iStack_44);
                  uVar11 = System_String__Format_1ec10a8(*(undefined8 *)puVar3,uVar11,0);
                  uVar10 = System_String__Concat_1ec3580(uVar10,uVar11,0);
                  if (plVar7 != (long *)0x0) {
                    (**(code **)(*plVar7 + 0x558))(plVar7,uVar10,*(undefined8 *)(*plVar7 + 0x560));
                    return;
                  }
                }
                else if (*(long *)(param_2 + 0x28) != 0) {
                  plVar7 = *(long **)(param_1 + 0x88);
                  uVar10 = Modules_Infrastructure_Utils_TimeFormatter__LocalizeDateTime_3de70c4
                                     (*(undefined8 *)(*(long *)(param_2 + 0x28) + 0x40),0,0);
                  if (plVar7 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x017efd04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (**(code **)(*plVar7 + 0x558))(plVar7,uVar10,*(undefined8 *)(*plVar7 + 0x560));
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_017efdcc:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

