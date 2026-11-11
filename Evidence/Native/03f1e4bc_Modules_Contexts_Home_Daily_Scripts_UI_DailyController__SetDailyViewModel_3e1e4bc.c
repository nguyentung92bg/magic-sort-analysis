/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyController$$SetDailyViewModel
void Modules_Contexts_Home_Daily_Scripts_UI_DailyController__SetDailyViewModel (Modules_Contexts_Home_Daily_Scripts_UI_DailyController_o* __this, Modules_Contexts_Home_Daily_Scripts_DailyViewModel_o viewModel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyController$$SetDailyViewModel
   void Modules_Contexts_Home_Daily_Scripts_UI_DailyController__SetDailyViewModel
   (Modules_Contexts_Home_Daily_Scripts_UI_DailyController_o* __this,
   Modules_Contexts_Home_Daily_Scripts_DailyViewModel_o viewModel, const MethodInfo* method); */

void Modules_Contexts_Home_Daily_Scripts_UI_DailyController__SetDailyViewModel_3e1e4bc
               (long param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000005c380f6 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05766c50);
    FUN_012d0dc8(PTR_DAT_057994c8);
    FUN_012d0dc8(PTR_DAT_05781050);
    FUN_012d0dc8(PTR_DAT_0575eb20);
    bRam0000000005c380f6 = 1;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressBarController__RecycleCurrencyViews_3e1e8d0
              ();
    uVar5 = *param_2;
    uVar10 = param_2[3];
    uVar9 = param_2[2];
    *(undefined8 *)(param_1 + 0x58) = param_2[1];
    *(undefined8 *)(param_1 + 0x50) = uVar5;
    *(undefined8 *)(param_1 + 0x68) = uVar10;
    *(undefined8 *)(param_1 + 0x60) = uVar9;
    FUN_012d0d74(param_1 + 0x60,0);
    uStack_48 = param_2[1];
    uStack_50 = *param_2;
    uStack_38 = param_2[3];
    uStack_40 = param_2[2];
    if (*(long *)(param_1 + 0x20) != 0) {
      uStack_70 = uStack_50;
      uStack_68 = uStack_48;
      uStack_60 = uStack_40;
      uStack_58 = uStack_38;
      Modules_Contexts_Home_Daily_Scripts_UI_DailyCalendarController__SetDailyDateViews_4106e30
                (*(long *)(param_1 + 0x20),&uStack_70,0);
      lVar6 = param_2[2];
      if (lVar6 != 0) {
        if (*(int *)(lVar6 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef8();
        }
        if (*(long *)(param_1 + 0x20) != 0) {
          Modules_Contexts_Home_Daily_Scripts_UI_DailyCalendarController__SetMonthText_4107048
                    (*(long *)(param_1 + 0x20),*(undefined8 *)(lVar6 + 0x28),0);
          uStack_88 = param_2[1];
          uStack_90 = *param_2;
          uStack_78 = param_2[3];
          uStack_80 = param_2[2];
          Modules_Contexts_Home_Daily_Scripts_UI_DailyController__SelectFirstOpenDailyDateView_3e1e420
                    (param_1,&uStack_90);
          puVar2 = PTR_DAT_0575eb20;
          if (*(long *)(param_1 + 0x18) != 0) {
            Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressBarController__SetLastStepDate_3e1ea20
                      (*(long *)(param_1 + 0x18),*(undefined4 *)((long)param_2 + 0x1c));
            lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
            puVar2 = PTR_DAT_05781050;
            if (lVar6 != 0) {
              Modules_Contexts_Application_Reward_Scripts_RewardModel___ctor_3cdfcc4(lVar6,0);
              lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
              puVar2 = PTR_DAT_05766c50;
              if (lVar3 != 0) {
                System_Collections_Generic_List_object____ctor_21fc1fc
                          (lVar3,*(undefined8 *)PTR_DAT_057994c8);
                lVar7 = *(long *)(lVar3 + 0x10);
                lVar8 = *(long *)puVar2;
                *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                if (lVar7 != 0) {
                  uVar1 = *(uint *)(lVar3 + 0x18);
                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                    *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                    puVar4 = (undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
                    *puVar4 = 0;
                    FUN_012d0d74(puVar4,0);
                  }
                  else {
                    (**(code **)(*(long *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x58) + 8))
                              (lVar3,0);
                  }
                  if (*(long *)(param_1 + 0x70) != 0) {
                    uVar5 = Modules_Contexts_Home_Daily_Scripts_DailyService__GetRewardModelByStep_410549c
                                      (*(long *)(param_1 + 0x70),0,0);
                    lVar7 = *(long *)(lVar3 + 0x10);
                    lVar8 = *(long *)puVar2;
                    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                    if (lVar7 != 0) {
                      uVar1 = *(uint *)(lVar3 + 0x18);
                      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                        *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
                        FUN_012d0d74();
                      }
                      else {
                        (**(code **)(*(long *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x58) + 8
                                    ))(lVar3);
                      }
                      if (*(long *)(param_1 + 0x70) != 0) {
                        uVar5 = Modules_Contexts_Home_Daily_Scripts_DailyService__GetRewardModelByStep_410549c
                                          (*(long *)(param_1 + 0x70),1,0);
                        lVar7 = *(long *)(lVar3 + 0x10);
                        lVar8 = *(long *)puVar2;
                        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                        if (lVar7 != 0) {
                          uVar1 = *(uint *)(lVar3 + 0x18);
                          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                            *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                            *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
                            FUN_012d0d74();
                          }
                          else {
                            (**(code **)(*(long *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x58)
                                        + 8))(lVar3);
                          }
                          if (*(long *)(param_1 + 0x70) != 0) {
                            uVar5 = Modules_Contexts_Home_Daily_Scripts_DailyService__GetRewardModelByStep_410549c
                                              (*(long *)(param_1 + 0x70),2,0);
                            lVar7 = *(long *)(lVar3 + 0x10);
                            lVar8 = *(long *)puVar2;
                            *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                            if (lVar7 != 0) {
                              uVar1 = *(uint *)(lVar3 + 0x18);
                              if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
                                FUN_012d0d74();
                              }
                              else {
                                (**(code **)(*(long *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) +
                                                      0x58) + 8))(lVar3);
                              }
                              if (*(long *)(param_1 + 0x70) != 0) {
                                uVar5 = Modules_Contexts_Home_Daily_Scripts_DailyService__GetRewardModelByStep_410549c
                                                  (*(long *)(param_1 + 0x70),3,0);
                                lVar7 = *(long *)(lVar3 + 0x10);
                                lVar8 = *(long *)puVar2;
                                *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                                if (lVar7 != 0) {
                                  uVar1 = *(uint *)(lVar3 + 0x18);
                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                    *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                    *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
                                    FUN_012d0d74();
                                  }
                                  else {
                                    (**(code **)(*(long *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0)
                                                          + 0x58) + 8))(lVar3);
                                  }
                                  *(long *)(lVar6 + 0x20) = lVar3;
                                  FUN_012d0d74((long *)(lVar6 + 0x20),lVar3);
                                  if (*(long *)(param_1 + 0x18) != 0) {
                                    Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressBarController__SetProgressBarStepRewards_3e1ead8
                                              (*(long *)(param_1 + 0x18),
                                               *(undefined4 *)(param_2 + 3),lVar6);
                                    if (*(long *)(param_1 + 0x18) != 0) {
                                      Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressBarController__SetProgressBarToDay_3e1edb8
                                                (*(long *)(param_1 + 0x18),
                                                 *(undefined4 *)(param_2 + 3));
                                      if (*(char *)(param_1 + 0x52) != '\0') {
                                        if (*(long *)(param_1 + 0x20) == 0) goto LAB_03f1e878;
                                        Modules_Contexts_Home_Daily_Scripts_UI_DailyCalendarController__SetDailyPlayButtonViewForState_4106ad0
                                                  (*(long *)(param_1 + 0x20),2,0);
                                      }
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
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_03f1e878:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

