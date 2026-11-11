/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.MagicStreakTournamentInProgressController$$Show
void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentInProgressController__Show (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentInProgressController_o* __this, int32_t magicStreakTournamentPopupStateType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.MagicStreakTournamentInProgressController$$Show
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentInProgressController__Show
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentInProgressController_o*
   __this, int32_t magicStreakTournamentPopupStateType, const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentInProgressController__Show_3e0e594
               (long param_1,int param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  long *plVar11;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c3806c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_058030e0);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    bRam0000000005c3806c = 1;
  }
  if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
     (lVar5 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar5 != 0)) {
    lVar5 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                      (lVar5,*(undefined8 *)PTR_DAT_058030e0);
    plVar11 = (long *)(param_1 + 0x58);
    *plVar11 = lVar5;
    FUN_012d0d74(plVar11,lVar5);
    if (*plVar11 != 0) {
      uVar2 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__ShouldShowScrollBar_412018c
                        (*plVar11,0);
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (lVar5 = UnityEngine_GameObject__get_gameObject_408e764(*(long *)(param_1 + 0x18),0),
         lVar5 != 0)) {
        UnityEngine_GameObject__SetActive_408e318(lVar5,uVar2 & 1,0);
        if ((*(long *)(param_1 + 0x20) != 0) &&
           (lVar5 = UnityEngine_GameObject__get_gameObject_408e764(*(long *)(param_1 + 0x20),0),
           lVar5 != 0)) {
          UnityEngine_GameObject__SetActive_408e318(lVar5,~uVar2 & 1,0);
          lVar5 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
          if (lVar5 != 0) {
            UnityEngine_GameObject__SetActive_408e318(lVar5,1,0);
            if (*plVar11 != 0) {
              uVar3 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetRankIndex_411fa90
                                (*plVar11,0);
              uVar4 = 0;
              if (param_2 != 2) {
                uVar4 = uVar3;
              }
              if ((uVar2 & 1) == 0) {
                lVar5 = *(long *)(param_1 + 0x30);
              }
              else {
                lVar5 = *(long *)(param_1 + 0x28);
              }
              if ((lVar5 != 0) &&
                 (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardSwipeController__Initialize_3e0e78c
                            (lVar5,uVar4), *(long *)(param_1 + 0x38) != 0)) {
                Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Rewards_MagicStreakTournamentRewardsSwipeController__Initialize_3e0e820
                          ();
                if (*plVar11 != 0) {
                  uVar6 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetProgressbarCurrentReward_411fb60
                                    (*plVar11,0);
                  if (*plVar11 != 0) {
                    uVar4 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetCurrentProgressbarRewardStepScore_411fc10
                                      (*plVar11,0);
                    if (*plVar11 != 0) {
                      uVar3 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetCurrentProgressbarRewardStepMaxScore_411fc34
                                        (*plVar11,0);
                      if (*(long *)(param_1 + 0x48) != 0) {
                        Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentPopupProgressBarView__Show_3e0e8e4
                                  (*(long *)(param_1 + 0x48),uVar6,uVar4,uVar3);
                        lVar5 = *plVar11;
                        if (lVar5 != 0) {
                          uVar6 = *(undefined8 *)(lVar5 + 0x58);
                          uVar4 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetCurrentMultiplierIndex_411f8f8
                                            (lVar5,0);
                          if (*(long *)(param_1 + 0x50) != 0) {
                            Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentMultiplierProgressView__Show_3e0e94c
                                      (*(long *)(param_1 + 0x50),uVar6,uVar4);
                            Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentInProgressController__TryShowRankUpAnimation_3e0eb5c
                                      (param_1);
                            Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentInProgressController__IntroduceFeature_3e0ec10
                                      (param_1,param_2);
                            lVar5 = *(long *)(param_1 + 0x58);
                            if (lVar5 != 0) {
                              if ((bRam0000000005c3ac86 & 1) == 0) {
                                FUN_012d0dc8(PTR_DAT_057636d0,0);
                                bRam0000000005c3ac86 = 1;
                              }
                              lVar10 = *(long *)(lVar5 + 0x28);
                              uVar4 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetRank_411e528
                                                (lVar5);
                              if (lVar10 != 0) {
                                *(undefined4 *)(lVar10 + 0x38) = uVar4;
                                lVar10 = *(long *)(lVar5 + 0x28);
                                uVar4 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetScore_411ffe0
                                                  (lVar5);
                                if (lVar10 != 0) {
                                  *(undefined4 *)(lVar10 + 0x30) = uVar4;
                                  plVar11 = *(long **)(lVar5 + 0x38);
                                  if (plVar11 != (long *)0x0) {
                                    lVar10 = *plVar11;
                                    lVar5 = *(long *)(lVar5 + 0x28);
                                    uVar8 = (ulong)*(ushort *)(lVar10 + 0x12a);
                                    if (uVar8 != 0) {
                                      piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                                      do {
                                        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_057636d0) {
                                          puVar7 = (undefined8 *)
                                                   (lVar10 + (long)(*piVar9 + 1) * 0x10 + 0x138);
                                          goto LAB_0421e2c0;
                                        }
                                        uVar8 = uVar8 - 1;
                                        piVar9 = piVar9 + 4;
                                      } while (uVar8 != 0);
                                    }
                                    puVar7 = (undefined8 *)
                                             FUN_0131971c(plVar11,*(long *)PTR_DAT_057636d0,1);
LAB_0421e2c0:
                                    uVar4 = (*(code *)*puVar7)(plVar11,puVar7[1]);
                                    if (lVar5 != 0) {
                                      *(undefined4 *)(lVar5 + 0x3c) = uVar4;
                                      return;
                                    }
                                  }
                                }
                              }
                    /* WARNING: Subroutine does not return */
                              FUN_012d0ef0();
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
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

