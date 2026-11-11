/* IL2CPP: Modules.Contexts.Home.DuckFestival.Scripts.UI.Leaderboard.DuckFestivalLeaderboardElementView$$SetModel
void Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardElementView__SetModel (Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardElementView_o* __this, Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardViewModel_o* duckLeaderboardViewModel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.DuckFestival.Scripts.UI.Leaderboard.DuckFestivalLeaderboardElementView$$SetModel
   void 
   Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardElementView__SetModel
   (Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardElementView_o*
   __this,
   Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardViewModel_o*
   duckLeaderboardViewModel, const MethodInfo* method); */

void Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardElementView__SetModel_38ccf58
               (long param_1,long param_2)

{
  undefined8 uVar1;
  long *plVar2;
  undefined4 uStack_24;
  
  uStack_24 = 0;
  if ((param_2 != 0) && (*(long *)(param_1 + 0x70) != 0)) {
    Modules_Contexts_Home_UI_Common_Scripts_UserProfileView__Initialize_2981064
              (*(long *)(param_1 + 0x70),*(undefined1 *)(param_2 + 0x14),
               *(undefined8 *)(param_2 + 0x40),*(undefined1 *)(param_2 + 0x50),0);
    if (*(long *)(param_1 + 0x70) != 0) {
      Modules_Contexts_Home_UI_Common_Scripts_UserProfileView__SetUserName_2981644
                (*(long *)(param_1 + 0x70),*(undefined8 *)(param_2 + 0x38),0);
      if (*(long *)(param_1 + 0x70) != 0) {
        Modules_Contexts_Home_UI_Common_Scripts_UserProfileView__SetTeamName_2981904
                  (*(long *)(param_1 + 0x70),*(undefined8 *)(param_2 + 0x18),0);
        if (*(long *)(param_1 + 0x70) != 0) {
          Modules_Contexts_Home_UI_Common_Scripts_UserProfileView__SetProfileImage_298160c
                    (*(long *)(param_1 + 0x70),*(undefined8 *)(param_2 + 0x48),0);
          if (*(long *)(param_1 + 0x70) != 0) {
            Modules_Contexts_Home_UI_Common_Scripts_UserProfileView__SetTokenImage_2981720
                      (*(long *)(param_1 + 0x70),*(undefined8 *)(param_2 + 0x20),0);
            if (*(long *)(param_1 + 0x70) != 0) {
              Modules_Contexts_Home_UI_Common_Scripts_UserProfileView__SetFrameView_2981abc
                        (*(long *)(param_1 + 0x70),*(undefined8 *)(param_2 + 0x58),0);
              if (*(long *)(param_1 + 0x70) != 0) {
                Modules_Contexts_Home_UI_Common_Scripts_UserProfileView__SetNameStyleView_2981bec
                          (*(long *)(param_1 + 0x70),*(undefined8 *)(param_2 + 0x60),
                           *(undefined8 *)(param_2 + 0x38),0);
                if (*(long *)(param_1 + 0x38) != 0) {
                  UnityEngine_GameObject__SetActive_408e318
                            (*(long *)(param_1 + 0x38),*(undefined1 *)(param_2 + 0x14),0);
                  if (*(long *)(param_1 + 0x40) != 0) {
                    UnityEngine_GameObject__SetActive_408e318
                              (*(long *)(param_1 + 0x40),*(char *)(param_2 + 0x14) == '\0',0);
                    if (*(long *)(param_1 + 0x48) != 0) {
                      UnityEngine_GameObject__SetActive_408e318
                                (*(long *)(param_1 + 0x48),*(undefined1 *)(param_2 + 0x14),0);
                      if (*(long *)(param_1 + 0x50) != 0) {
                        UnityEngine_GameObject__SetActive_408e318
                                  (*(long *)(param_1 + 0x50),*(char *)(param_2 + 0x14) == '\0',0);
                        uStack_24 = *(undefined4 *)(param_2 + 0x10);
                        plVar2 = *(long **)(param_1 + 0x28);
                        uVar1 = System_Int32__ToString_26c9768(&uStack_24,0);
                        if (plVar2 != (long *)0x0) {
                          (**(code **)(*plVar2 + 0x558))
                                    (plVar2,uVar1,*(undefined8 *)(*plVar2 + 0x560));
                          uStack_24 = *(undefined4 *)(param_2 + 0x28);
                          plVar2 = *(long **)(param_1 + 0x30);
                          uVar1 = System_Int32__ToString_26c9768(&uStack_24,0);
                          if (plVar2 != (long *)0x0) {
                            (**(code **)(*plVar2 + 0x558))
                                      (plVar2,uVar1,*(undefined8 *)(*plVar2 + 0x560));
                            if (*(long *)(param_1 + 0x60) != 0) {
                              Modules_Contexts_Home_DuckFestival_Scripts_UI_Rewards_DuckFestivalLeaderboardElementRankImageSelector__Select_38c62b0
                                        (*(long *)(param_1 + 0x60),*(undefined4 *)(param_2 + 0x10),0
                                        );
                              if (*(long *)(param_1 + 0x58) != 0) {
                                Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardElementRewardView__Show_38c984c
                                          (*(long *)(param_1 + 0x58),*(undefined8 *)(param_2 + 0x30)
                                          );
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
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

