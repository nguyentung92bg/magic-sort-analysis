/* IL2CPP: Modules.Contexts.Home.TeamQuest.Scripts.UI.Leaderboard.TeamQuestLeaderboardElementView$$SetModel
void Modules_Contexts_Home_TeamQuest_Scripts_UI_Leaderboard_TeamQuestLeaderboardElementView__SetModel (Modules_Contexts_Home_TeamQuest_Scripts_UI_Leaderboard_TeamQuestLeaderboardElementView_o* __this, Modules_Contexts_Home_TeamQuest_Scripts_UI_Leaderboard_ITeamQuestLeaderboardItemViewModel_o* teamQuestLeaderboardItemViewModel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.TeamQuest.Scripts.UI.Leaderboard.TeamQuestLeaderboardElementView$$SetModel
   void 
   Modules_Contexts_Home_TeamQuest_Scripts_UI_Leaderboard_TeamQuestLeaderboardElementView__SetModel
   (Modules_Contexts_Home_TeamQuest_Scripts_UI_Leaderboard_TeamQuestLeaderboardElementView_o*
   __this,
   Modules_Contexts_Home_TeamQuest_Scripts_UI_Leaderboard_ITeamQuestLeaderboardItemViewModel_o*
   teamQuestLeaderboardItemViewModel, const MethodInfo* method); */

void Modules_Contexts_Home_TeamQuest_Scripts_UI_Leaderboard_TeamQuestLeaderboardElementView__SetModel_2de0850
               (long param_1,long *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined4 uStack_24;
  
  if ((bRam0000000005c2fd44 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_058103e0);
    bRam0000000005c2fd44 = 1;
  }
  if (param_2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_058103e0 + 300);
    if ((*(byte *)(*param_2 + 300) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_058103e0))
    {
                    /* WARNING: Subroutine does not return */
      FUN_012d1288(param_2);
    }
  }
  uStack_24 = 0;
  if ((param_2 != (long *)0x0) && (*(long *)(param_1 + 0x78) != 0)) {
    Modules_Contexts_Home_UI_Common_Scripts_UserProfileView__Initialize_2981064
              (*(long *)(param_1 + 0x78),*(undefined1 *)((long)param_2 + 0x14),param_2[6],
               (char)param_2[0xb],0);
    if (*(long *)(param_1 + 0x78) != 0) {
      Modules_Contexts_Home_UI_Common_Scripts_UserProfileView__SetUserName_2981644
                (*(long *)(param_1 + 0x78),param_2[5],0);
      if (*(long *)(param_1 + 0x78) != 0) {
        Modules_Contexts_Home_UI_Common_Scripts_UserProfileView__SetProfileImage_298160c
                  (*(long *)(param_1 + 0x78),param_2[7],0);
        if (*(long *)(param_1 + 0x78) != 0) {
          Modules_Contexts_Home_UI_Common_Scripts_UserProfileView__SetTokenImage_2981720
                    (*(long *)(param_1 + 0x78),param_2[3],0);
          if (*(long *)(param_1 + 0x78) != 0) {
            Modules_Contexts_Home_UI_Common_Scripts_UserProfileView__SetFrameView_2981abc
                      (*(long *)(param_1 + 0x78),param_2[10],0);
            if (*(long *)(param_1 + 0x78) != 0) {
              Modules_Contexts_Home_UI_Common_Scripts_UserProfileView__SetNameStyleView_2981bec
                        (*(long *)(param_1 + 0x78),param_2[9],param_2[5],0);
              if (*(long *)(param_1 + 0x48) != 0) {
                UnityEngine_GameObject__SetActive_408e318
                          (*(long *)(param_1 + 0x48),*(undefined1 *)((long)param_2 + 0x14),0);
                if (*(long *)(param_1 + 0x50) != 0) {
                  UnityEngine_GameObject__SetActive_408e318
                            (*(long *)(param_1 + 0x50),*(char *)((long)param_2 + 0x14) == '\0',0);
                  if (*(long *)(param_1 + 0x58) != 0) {
                    UnityEngine_GameObject__SetActive_408e318
                              (*(long *)(param_1 + 0x58),*(undefined1 *)((long)param_2 + 0x14),0);
                    if (*(long *)(param_1 + 0x60) != 0) {
                      UnityEngine_GameObject__SetActive_408e318
                                (*(long *)(param_1 + 0x60),*(char *)((long)param_2 + 0x14) == '\0',0
                                );
                      uStack_24 = (undefined4)param_2[2];
                      plVar3 = *(long **)(param_1 + 0x38);
                      uVar2 = System_Int32__ToString_26c9768(&uStack_24,0);
                      if (plVar3 != (long *)0x0) {
                        (**(code **)(*plVar3 + 0x558))
                                  (plVar3,uVar2,*(undefined8 *)(*plVar3 + 0x560));
                        uStack_24 = (undefined4)param_2[4];
                        plVar3 = *(long **)(param_1 + 0x40);
                        uVar2 = System_Int32__ToString_26c9768(&uStack_24,0);
                        if (plVar3 != (long *)0x0) {
                          (**(code **)(*plVar3 + 0x558))
                                    (plVar3,uVar2,*(undefined8 *)(*plVar3 + 0x560));
                          if (*(long *)(param_1 + 0x68) != 0) {
                            Modules_Contexts_Home_DuckFestival_Scripts_UI_Rewards_DuckFestivalLeaderboardElementRankImageSelector__Select_38c62b0
                                      (*(long *)(param_1 + 0x68),(int)param_2[2],
                                       *(undefined1 *)((long)param_2 + 0x14),0);
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
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

