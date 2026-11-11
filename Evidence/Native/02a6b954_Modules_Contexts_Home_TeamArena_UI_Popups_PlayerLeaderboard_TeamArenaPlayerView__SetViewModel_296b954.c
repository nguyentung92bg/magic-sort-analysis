/* IL2CPP: Modules.Contexts.Home.TeamArena.UI.Popups.PlayerLeaderboard.TeamArenaPlayerView$$SetViewModel
void Modules_Contexts_Home_TeamArena_UI_Popups_PlayerLeaderboard_TeamArenaPlayerView__SetViewModel (Modules_Contexts_Home_TeamArena_UI_Popups_PlayerLeaderboard_TeamArenaPlayerView_o* __this, Modules_Contexts_Home_TeamArena_ITeamArenaLeaderboardViewModel_o* viewModel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.TeamArena.UI.Popups.PlayerLeaderboard.TeamArenaPlayerView$$SetViewModel
   void 
   Modules_Contexts_Home_TeamArena_UI_Popups_PlayerLeaderboard_TeamArenaPlayerView__SetViewModel
   (Modules_Contexts_Home_TeamArena_UI_Popups_PlayerLeaderboard_TeamArenaPlayerView_o* __this,
   Modules_Contexts_Home_TeamArena_ITeamArenaLeaderboardViewModel_o* viewModel, const MethodInfo*
   method); */

void Modules_Contexts_Home_TeamArena_UI_Popups_PlayerLeaderboard_TeamArenaPlayerView__SetViewModel_296b954
               (long param_1,long *param_2)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  
  if ((bRam0000000005c2d691 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578e838);
    bRam0000000005c2d691 = 1;
  }
  if (param_2 != (long *)0x0) {
    bVar2 = *(byte *)(*(long *)PTR_DAT_0578e838 + 300);
    if ((bVar2 <= *(byte *)(*param_2 + 300)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)PTR_DAT_0578e838))
    {
      plVar6 = (long *)(param_1 + 0x88);
      *plVar6 = (long)param_2;
      FUN_012d0d74(plVar6);
      lVar5 = *plVar6;
      if ((lVar5 != 0) && (*(long *)(param_1 + 0x30) != 0)) {
        Modules_Contexts_Home_UI_Common_Scripts_UserProfileView__Initialize_2981064
                  (*(long *)(param_1 + 0x30),*(undefined1 *)(lVar5 + 0x58),
                   *(undefined8 *)(lVar5 + 0x10),1,0);
        if ((*(long *)(param_1 + 0x88) != 0) && (*(long *)(param_1 + 0x30) != 0)) {
          Modules_Contexts_Home_UI_Common_Scripts_UserProfileView__SetUserName_2981644
                    (*(long *)(param_1 + 0x30),*(undefined8 *)(*(long *)(param_1 + 0x88) + 0x18),0);
          if ((*(long *)(param_1 + 0x88) != 0) && (*(long *)(param_1 + 0x30) != 0)) {
            Modules_Contexts_Home_UI_Common_Scripts_UserProfileView__SetProfileImage_298160c
                      (*(long *)(param_1 + 0x30),*(undefined8 *)(*(long *)(param_1 + 0x88) + 0x30),0
                      );
            if ((*(long *)(param_1 + 0x88) != 0) && (*(long *)(param_1 + 0x30) != 0)) {
              Modules_Contexts_Home_UI_Common_Scripts_UserProfileView__SetTokenImage_2981720
                        (*(long *)(param_1 + 0x30),*(undefined8 *)(*(long *)(param_1 + 0x88) + 0x38)
                         ,0);
              if ((*(long *)(param_1 + 0x88) != 0) && (*(long *)(param_1 + 0x30) != 0)) {
                Modules_Contexts_Home_UI_Common_Scripts_UserProfileView__SetFrameView_2981abc
                          (*(long *)(param_1 + 0x30),
                           *(undefined8 *)(*(long *)(param_1 + 0x88) + 0x48),0);
                lVar5 = *(long *)(param_1 + 0x88);
                if ((lVar5 != 0) && (*(long *)(param_1 + 0x30) != 0)) {
                  Modules_Contexts_Home_UI_Common_Scripts_UserProfileView__SetNameStyleView_2981bec
                            (*(long *)(param_1 + 0x30),*(undefined8 *)(lVar5 + 0x40),
                             *(undefined8 *)(lVar5 + 0x18),0);
                  if ((*(long *)(param_1 + 0x88) != 0) && (*(long *)(param_1 + 0x58) != 0)) {
                    UnityEngine_GameObject__SetActive_408e318
                              (*(long *)(param_1 + 0x58),
                               *(char *)(*(long *)(param_1 + 0x88) + 0x58) == '\0',0);
                    if ((*(long *)(param_1 + 0x88) != 0) && (*(long *)(param_1 + 0x68) != 0)) {
                      UnityEngine_GameObject__SetActive_408e318
                                (*(long *)(param_1 + 0x68),
                                 *(char *)(*(long *)(param_1 + 0x88) + 0x58) == '\0',0);
                      if ((*(long *)(param_1 + 0x88) != 0) && (*(long *)(param_1 + 0x60) != 0)) {
                        UnityEngine_GameObject__SetActive_408e318
                                  (*(long *)(param_1 + 0x60),
                                   *(undefined1 *)(*(long *)(param_1 + 0x88) + 0x58),0);
                        if ((*(long *)(param_1 + 0x88) != 0) && (*(long *)(param_1 + 0x70) != 0)) {
                          UnityEngine_GameObject__SetActive_408e318
                                    (*(long *)(param_1 + 0x70),
                                     *(undefined1 *)(*(long *)(param_1 + 0x88) + 0x58),0);
                          if (*(long *)(param_1 + 0x88) != 0) {
                            lVar5 = *(long *)(param_1 + 0x40);
                            uVar4 = System_Int32__ToString_26c9768
                                              (*(long *)(param_1 + 0x88) + 0x50,0);
                            if (lVar5 != 0) {
                              TMPro_TMP_Text__SetText_3dc1ab4(lVar5,uVar4,1,0);
                              if ((*(long *)(param_1 + 0x88) != 0) &&
                                 (*(long *)(param_1 + 0x38) != 0)) {
                                Modules_Contexts_Home_TeamArena_UI_Popups_TeamLeaderboard_TeamArenaLeaderboardRewardView__SetReward_296804c
                                          (*(long *)(param_1 + 0x38),
                                           *(undefined8 *)(*(long *)(param_1 + 0x88) + 0x60));
                                lVar5 = *(long *)(param_1 + 0x88);
                                if ((lVar5 != 0) && (*(long *)(param_1 + 0x78) != 0)) {
                                  *(undefined1 *)(*(long *)(param_1 + 0x78) + 0x1c) =
                                       *(undefined1 *)(lVar5 + 0x68);
                                  iVar1 = *(int *)(lVar5 + 0x54);
                                  lVar5 = *(long *)(param_1 + 0x50);
                                  if (lVar5 != 0) {
                                    if (*(int *)(lVar5 + 0x18) == 0) {
LAB_02a6bcec:
                    /* WARNING: Subroutine does not return */
                                      FUN_012d0ef8();
                                    }
                                    if (*(long *)(lVar5 + 0x20) != 0) {
                                      UnityEngine_GameObject__SetActive_408e318
                                                (*(long *)(lVar5 + 0x20),iVar1 == 1,0);
                                      lVar5 = *(long *)(param_1 + 0x50);
                                      if (lVar5 != 0) {
                                        if (*(uint *)(lVar5 + 0x18) < 2) goto LAB_02a6bcec;
                                        if (*(long *)(lVar5 + 0x28) != 0) {
                                          UnityEngine_GameObject__SetActive_408e318
                                                    (*(long *)(lVar5 + 0x28),iVar1 == 2,0);
                                          lVar5 = *(long *)(param_1 + 0x50);
                                          if (lVar5 != 0) {
                                            if (*(uint *)(lVar5 + 0x18) < 3) goto LAB_02a6bcec;
                                            if (*(long *)(lVar5 + 0x30) != 0) {
                                              UnityEngine_GameObject__SetActive_408e318
                                                        (*(long *)(lVar5 + 0x30),iVar1 == 3,0);
                                              lVar5 = *(long *)(param_1 + 0x50);
                                              if (lVar5 != 0) {
                                                if (*(uint *)(lVar5 + 0x18) < 4) goto LAB_02a6bcec;
                                                if (iVar1 < 4) {
                                                  bVar3 = false;
                                                }
                                                else {
                                                  if (*(long *)(param_1 + 0x88) == 0)
                                                  goto LAB_02a6bce8;
                                                  bVar3 = *(char *)(*(long *)(param_1 + 0x88) + 0x58
                                                                   ) == '\0';
                                                }
                                                if (*(long *)(lVar5 + 0x38) != 0) {
                                                  UnityEngine_GameObject__SetActive_408e318
                                                            (*(long *)(lVar5 + 0x38),bVar3,0);
                                                  lVar5 = *(long *)(param_1 + 0x50);
                                                  if (lVar5 != 0) {
                                                    if (*(uint *)(lVar5 + 0x18) < 5)
                                                    goto LAB_02a6bcec;
                                                    if (iVar1 < 4) {
                                                      bVar3 = false;
                                                    }
                                                    else {
                                                      if (*(long *)(param_1 + 0x88) == 0)
                                                      goto LAB_02a6bce8;
                                                      bVar3 = *(char *)(*(long *)(param_1 + 0x88) +
                                                                       0x58) != '\0';
                                                    }
                                                    if (*(long *)(lVar5 + 0x40) != 0) {
                                                      UnityEngine_GameObject__SetActive_408e318
                                                                (*(long *)(lVar5 + 0x40),bVar3,0);
                                                      lVar5 = *(long *)(param_1 + 0x48);
                                                      uVar4 = System_Int32__ToString_26c9768
                                                                        (&stack0xffffffffffffffec,0)
                                                      ;
                                                      if (lVar5 != 0) {
                                                        TMPro_TMP_Text__SetText_3dc1ab4
                                                                  (lVar5,uVar4,1,0);
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
LAB_02a6bce8:
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
  }
  return;
}

