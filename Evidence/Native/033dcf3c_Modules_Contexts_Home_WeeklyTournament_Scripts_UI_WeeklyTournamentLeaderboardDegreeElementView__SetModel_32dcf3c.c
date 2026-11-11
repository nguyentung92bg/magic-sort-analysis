/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.UI.WeeklyTournamentLeaderboardDegreeElementView$$SetModel
void Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardDegreeElementView__SetModel (Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardDegreeElementView_o* __this, Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardPlayerViewModel_o* viewModel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.WeeklyTournament.Scripts.UI.WeeklyTournamentLeaderboardDegreeElementView$$SetModel
   void 
   Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardDegreeElementView__SetModel
   (Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardDegreeElementView_o*
   __this,
   Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardPlayerViewModel_o*
   viewModel, const MethodInfo* method); */

void Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardDegreeElementView__SetModel_32dcf3c
               (long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 uStack_34;
  
  if ((bRam0000000005c31da0 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057bc5e8);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_0575eb20);
    FUN_012d0dc8(PTR_DAT_05812b78);
    FUN_012d0dc8(PTR_DAT_057c9498);
    bRam0000000005c31da0 = 1;
  }
  puVar2 = PTR_DAT_05812b78;
  puVar1 = PTR_DAT_057bc5e8;
  if ((param_2 != 0) && (*(long *)(param_1 + 0x20) != 0)) {
    UnityEngine_GameObject__SetActive_408e318
              (*(long *)(param_1 + 0x20),*(undefined1 *)(param_2 + 0x28),0);
    lVar4 = *(long *)puVar2;
    lVar6 = *(long *)(param_1 + 0x28);
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_0130472c();
      lVar4 = *(long *)puVar2;
    }
    puVar3 = PTR_DAT_057db748;
    puVar2 = PTR_DAT_057c9498;
    uVar7 = **(undefined8 **)(lVar4 + 0xb8);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c(*(long *)puVar1);
    }
    uVar7 = Modules_Infrastructure_Utils_GrandStringExtensions__Localize_3de2900(uVar7,0);
    uStack_34 = *(undefined4 *)(param_2 + 0x24);
    uVar5 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_34);
    uVar7 = System_String__Format_1ed15b8(*(undefined8 *)puVar2,uVar7,uVar5,0);
    if (lVar6 != 0) {
      TMPro_TMP_Text__SetText_3dc1ab4(lVar6,uVar7,1,0);
      if (*(long *)(param_1 + 0x18) != 0) {
        Modules_Contexts_Home_UI_Common_Scripts_UserProfileView__Initialize_2981064
                  (*(long *)(param_1 + 0x18),*(undefined1 *)(param_2 + 0x28),
                   *(undefined8 *)(param_2 + 0x30),*(undefined1 *)(param_2 + 0x68),0);
        if (*(long *)(param_1 + 0x18) != 0) {
          Modules_Contexts_Home_UI_Common_Scripts_UserProfileView__SetUserName_2981644
                    (*(long *)(param_1 + 0x18),*(undefined8 *)(param_2 + 0x18),0);
          if (*(long *)(param_1 + 0x18) != 0) {
            Modules_Contexts_Home_UI_Common_Scripts_UserProfileView__SetTeamName_2981904
                      (*(long *)(param_1 + 0x18),*(undefined8 *)(param_2 + 0x60),0);
            if (*(long *)(param_1 + 0x18) != 0) {
              Modules_Contexts_Home_UI_Common_Scripts_UserProfileView__SetProfileImage_298160c
                        (*(long *)(param_1 + 0x18),*(undefined8 *)(param_2 + 0x40),0);
              if (*(long *)(param_1 + 0x18) != 0) {
                Modules_Contexts_Home_UI_Common_Scripts_UserProfileView__SetTokenImage_2981720
                          (*(long *)(param_1 + 0x18),*(undefined8 *)(param_2 + 0x48),0);
                if (*(long *)(param_1 + 0x18) != 0) {
                  Modules_Contexts_Home_UI_Common_Scripts_UserProfileView__SetFrameView_2981abc
                            (*(long *)(param_1 + 0x18),*(undefined8 *)(param_2 + 0x50),0);
                  if (*(long *)(param_1 + 0x18) != 0) {
                    Modules_Contexts_Home_UI_Common_Scripts_UserProfileView__SetNameStyleView_2981bec
                              (*(long *)(param_1 + 0x18),*(undefined8 *)(param_2 + 0x58),
                               *(undefined8 *)(param_2 + 0x18),0);
                    lVar4 = *(long *)(param_2 + 0x70);
                    lVar6 = *(long *)(param_1 + 0x30);
                    if (lVar4 == 0) {
                      lVar4 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_0575eb20);
                      if (lVar4 == 0) goto LAB_033dd168;
                      Modules_Contexts_Application_Reward_Scripts_RewardModel___ctor_3cdfcc4
                                (lVar4,0);
                      *(undefined4 *)(lVar4 + 0x10) = 1;
                      *(undefined4 *)(lVar4 + 0x14) = *(undefined4 *)(param_2 + 0x20);
                    }
                    if (lVar6 != 0) {
                      Modules_Contexts_Home_Monetization_WatchAndWin_Scripts_UI_WatchAndWinDynamicRewardView__SetReward_32fc0a0
                                (lVar6,lVar4,0);
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
LAB_033dd168:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

