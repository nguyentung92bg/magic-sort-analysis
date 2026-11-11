/* IL2CPP: Modules.Contexts.Home.DuckFestival.Scripts.UI.Leaderboard.DuckFestivalLeaderboardViewAdapter$$UpdateView
void Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardViewAdapter__UpdateView (Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardViewAdapter_o* __this, Modules_Infrastructure_Common_Scripts_Generation_Basic_BasicView_o* basicView, Il2CppObject* viewModel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.DuckFestival.Scripts.UI.Leaderboard.DuckFestivalLeaderboardViewAdapter$$UpdateView
   void 
   Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardViewAdapter__UpdateView
   (Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardViewAdapter_o*
   __this, Modules_Infrastructure_Common_Scripts_Generation_Basic_BasicView_o* basicView,
   Il2CppObject* viewModel, const MethodInfo* method); */

void Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardViewAdapter__UpdateView_38cdc5c
               (undefined8 param_1,long *param_2,long *param_3)

{
  byte bVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined4 uStack_24;
  
  if ((bRam0000000005c34b82 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f93b0);
    FUN_012d0dc8(PTR_DAT_057a3bd8);
    bRam0000000005c34b82 = 1;
  }
  if (param_2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_057f93b0 + 300);
    if ((*(byte *)(*param_2 + 300) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_057f93b0))
    {
                    /* WARNING: Subroutine does not return */
      FUN_012d1288(param_2);
    }
    if (param_3 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_057a3bd8 + 300);
      if ((*(byte *)(*param_3 + 300) < bVar1) ||
         (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_057a3bd8)
         ) {
                    /* WARNING: Subroutine does not return */
        FUN_012d1288(param_3);
      }
    }
    uStack_24 = 0;
    if ((param_3 != (long *)0x0) && (param_2[0xe] != 0)) {
      Modules_Contexts_Home_UI_Common_Scripts_UserProfileView__Initialize_2981064
                (param_2[0xe],*(undefined1 *)((long)param_3 + 0x14),param_3[8],(char)param_3[10],0);
      if (param_2[0xe] != 0) {
        Modules_Contexts_Home_UI_Common_Scripts_UserProfileView__SetUserName_2981644
                  (param_2[0xe],param_3[7],0);
        if (param_2[0xe] != 0) {
          Modules_Contexts_Home_UI_Common_Scripts_UserProfileView__SetTeamName_2981904
                    (param_2[0xe],param_3[3],0);
          if (param_2[0xe] != 0) {
            Modules_Contexts_Home_UI_Common_Scripts_UserProfileView__SetProfileImage_298160c
                      (param_2[0xe],param_3[9],0);
            if (param_2[0xe] != 0) {
              Modules_Contexts_Home_UI_Common_Scripts_UserProfileView__SetTokenImage_2981720
                        (param_2[0xe],param_3[4],0);
              if (param_2[0xe] != 0) {
                Modules_Contexts_Home_UI_Common_Scripts_UserProfileView__SetFrameView_2981abc
                          (param_2[0xe],param_3[0xb],0);
                if (param_2[0xe] != 0) {
                  Modules_Contexts_Home_UI_Common_Scripts_UserProfileView__SetNameStyleView_2981bec
                            (param_2[0xe],param_3[0xc],param_3[7],0);
                  if (param_2[7] != 0) {
                    UnityEngine_GameObject__SetActive_408e318
                              (param_2[7],*(undefined1 *)((long)param_3 + 0x14),0);
                    if (param_2[8] != 0) {
                      UnityEngine_GameObject__SetActive_408e318
                                (param_2[8],*(char *)((long)param_3 + 0x14) == '\0',0);
                      if (param_2[9] != 0) {
                        UnityEngine_GameObject__SetActive_408e318
                                  (param_2[9],*(undefined1 *)((long)param_3 + 0x14),0);
                        if (param_2[10] != 0) {
                          UnityEngine_GameObject__SetActive_408e318
                                    (param_2[10],*(char *)((long)param_3 + 0x14) == '\0',0);
                          uStack_24 = (undefined4)param_3[2];
                          plVar3 = (long *)param_2[5];
                          uVar2 = System_Int32__ToString_26c9768(&uStack_24,0);
                          if (plVar3 != (long *)0x0) {
                            (**(code **)(*plVar3 + 0x558))
                                      (plVar3,uVar2,*(undefined8 *)(*plVar3 + 0x560));
                            uStack_24 = (undefined4)param_3[5];
                            plVar3 = (long *)param_2[6];
                            uVar2 = System_Int32__ToString_26c9768(&uStack_24,0);
                            if (plVar3 != (long *)0x0) {
                              (**(code **)(*plVar3 + 0x558))
                                        (plVar3,uVar2,*(undefined8 *)(*plVar3 + 0x560));
                              if (param_2[0xc] != 0) {
                                Modules_Contexts_Home_DuckFestival_Scripts_UI_Rewards_DuckFestivalLeaderboardElementRankImageSelector__Select_38c62b0
                                          (param_2[0xc],(int)param_3[2],0);
                                if (param_2[0xb] != 0) {
                                  Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardElementRewardView__Show_38c984c
                                            (param_2[0xb],param_3[6]);
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
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

