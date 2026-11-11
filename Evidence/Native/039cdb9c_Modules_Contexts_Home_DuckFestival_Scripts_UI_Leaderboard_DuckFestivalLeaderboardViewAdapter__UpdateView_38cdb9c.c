/* IL2CPP: Modules.Contexts.Home.DuckFestival.Scripts.UI.Leaderboard.DuckFestivalLeaderboardViewAdapter$$UpdateView
void Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardViewAdapter__UpdateView (Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardViewAdapter_o* __this, Modules_Infrastructure_Common_Scripts_Generation_Basic_BasicView_o* view, int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.DuckFestival.Scripts.UI.Leaderboard.DuckFestivalLeaderboardViewAdapter$$UpdateView
   void 
   Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardViewAdapter__UpdateView
   (Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardViewAdapter_o*
   __this, Modules_Infrastructure_Common_Scripts_Generation_Basic_BasicView_o* view, int32_t index,
   const MethodInfo* method); */

void Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardViewAdapter__UpdateView_38cdb9c
               (long param_1,long *param_2,undefined4 param_3)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined4 uStack_24;
  
  if ((bRam0000000005c34b81 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f93b0);
    FUN_012d0dc8(PTR_DAT_057e6c38);
    bRam0000000005c34b81 = 1;
  }
  if ((*(long *)(param_1 + 0x40) != 0) &&
     (lVar3 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (*(long *)(param_1 + 0x40),param_3,*(undefined8 *)PTR_DAT_057e6c38),
     param_2 != (long *)0x0)) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_057f93b0 + 300);
    if ((bVar1 <= *(byte *)(*param_2 + 300)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_057f93b0))
    {
      uStack_24 = 0;
      if ((lVar3 != 0) && (param_2[0xe] != 0)) {
        Modules_Contexts_Home_UI_Common_Scripts_UserProfileView__Initialize_2981064
                  (param_2[0xe],*(undefined1 *)(lVar3 + 0x14),*(undefined8 *)(lVar3 + 0x40),
                   *(undefined1 *)(lVar3 + 0x50),0);
        if (param_2[0xe] != 0) {
          Modules_Contexts_Home_UI_Common_Scripts_UserProfileView__SetUserName_2981644
                    (param_2[0xe],*(undefined8 *)(lVar3 + 0x38),0);
          if (param_2[0xe] != 0) {
            Modules_Contexts_Home_UI_Common_Scripts_UserProfileView__SetTeamName_2981904
                      (param_2[0xe],*(undefined8 *)(lVar3 + 0x18),0);
            if (param_2[0xe] != 0) {
              Modules_Contexts_Home_UI_Common_Scripts_UserProfileView__SetProfileImage_298160c
                        (param_2[0xe],*(undefined8 *)(lVar3 + 0x48),0);
              if (param_2[0xe] != 0) {
                Modules_Contexts_Home_UI_Common_Scripts_UserProfileView__SetTokenImage_2981720
                          (param_2[0xe],*(undefined8 *)(lVar3 + 0x20),0);
                if (param_2[0xe] != 0) {
                  Modules_Contexts_Home_UI_Common_Scripts_UserProfileView__SetFrameView_2981abc
                            (param_2[0xe],*(undefined8 *)(lVar3 + 0x58),0);
                  if (param_2[0xe] != 0) {
                    Modules_Contexts_Home_UI_Common_Scripts_UserProfileView__SetNameStyleView_2981bec
                              (param_2[0xe],*(undefined8 *)(lVar3 + 0x60),
                               *(undefined8 *)(lVar3 + 0x38),0);
                    if (param_2[7] != 0) {
                      UnityEngine_GameObject__SetActive_408e318
                                (param_2[7],*(undefined1 *)(lVar3 + 0x14),0);
                      if (param_2[8] != 0) {
                        UnityEngine_GameObject__SetActive_408e318
                                  (param_2[8],*(char *)(lVar3 + 0x14) == '\0',0);
                        if (param_2[9] != 0) {
                          UnityEngine_GameObject__SetActive_408e318
                                    (param_2[9],*(undefined1 *)(lVar3 + 0x14),0);
                          if (param_2[10] != 0) {
                            UnityEngine_GameObject__SetActive_408e318
                                      (param_2[10],*(char *)(lVar3 + 0x14) == '\0',0);
                            uStack_24 = *(undefined4 *)(lVar3 + 0x10);
                            plVar4 = (long *)param_2[5];
                            uVar2 = System_Int32__ToString_26c9768(&uStack_24,0);
                            if (plVar4 != (long *)0x0) {
                              (**(code **)(*plVar4 + 0x558))
                                        (plVar4,uVar2,*(undefined8 *)(*plVar4 + 0x560));
                              uStack_24 = *(undefined4 *)(lVar3 + 0x28);
                              plVar4 = (long *)param_2[6];
                              uVar2 = System_Int32__ToString_26c9768(&uStack_24,0);
                              if (plVar4 != (long *)0x0) {
                                (**(code **)(*plVar4 + 0x558))
                                          (plVar4,uVar2,*(undefined8 *)(*plVar4 + 0x560));
                                if (param_2[0xc] != 0) {
                                  Modules_Contexts_Home_DuckFestival_Scripts_UI_Rewards_DuckFestivalLeaderboardElementRankImageSelector__Select_38c62b0
                                            (param_2[0xc],*(undefined4 *)(lVar3 + 0x10),0);
                                  if (param_2[0xb] != 0) {
                                    Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardElementRewardView__Show_38c984c
                                              (param_2[0xb],*(undefined8 *)(lVar3 + 0x30));
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
    FUN_012d1288(param_2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

