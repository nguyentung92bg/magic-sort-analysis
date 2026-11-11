/* IL2CPP: Modules.Contexts.Home.TeamArena.UI.Popups.TeamLeaderboard.TeamArenaTeamView$$SetViewModel
void Modules_Contexts_Home_TeamArena_UI_Popups_TeamLeaderboard_TeamArenaTeamView__SetViewModel (Modules_Contexts_Home_TeamArena_UI_Popups_TeamLeaderboard_TeamArenaTeamView_o* __this, Modules_Contexts_Home_TeamArena_ITeamArenaLeaderboardViewModel_o* viewModel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.TeamArena.UI.Popups.TeamLeaderboard.TeamArenaTeamView$$SetViewModel
   void Modules_Contexts_Home_TeamArena_UI_Popups_TeamLeaderboard_TeamArenaTeamView__SetViewModel
   (Modules_Contexts_Home_TeamArena_UI_Popups_TeamLeaderboard_TeamArenaTeamView_o* __this,
   Modules_Contexts_Home_TeamArena_ITeamArenaLeaderboardViewModel_o* viewModel, const MethodInfo*
   method); */

void Modules_Contexts_Home_TeamArena_UI_Popups_TeamLeaderboard_TeamArenaTeamView__SetViewModel_296a4ac
               (long param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uStack_28;
  
  if ((bRam0000000005c2d67d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057bc5e8);
    FUN_012d0dc8(PTR_DAT_0576f4e0);
    FUN_012d0dc8(PTR_DAT_0577e6f0);
    bRam0000000005c2d67d = 1;
  }
  uStack_28 = 0;
  if (param_2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_0576f4e0 + 300);
    if ((bVar1 <= *(byte *)(*param_2 + 300)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_0576f4e0))
    {
      plVar5 = (long *)(param_1 + 0xa0);
      *plVar5 = (long)param_2;
      FUN_012d0d74(plVar5);
      if ((*plVar5 != 0) && (*(long *)(param_1 + 0x40) != 0)) {
        TMPro_TMP_Text__SetText_3dc1ab4
                  (*(long *)(param_1 + 0x40),*(undefined8 *)(*plVar5 + 0x18),1,0);
        if (*(long *)(param_1 + 0xa0) != 0) {
          lVar6 = *(long *)(param_1 + 0x48);
          uVar4 = System_Int32__ToString_26c9768(*(long *)(param_1 + 0xa0) + 0x24,0);
          if (lVar6 != 0) {
            TMPro_TMP_Text__SetText_3dc1ab4(lVar6,uVar4,1,0);
            if ((*(long *)(param_1 + 0xa0) != 0) && (*(long *)(param_1 + 0x60) != 0)) {
              Modules_Contexts_Home_Teams_Scripts_UI_TeamsBadgeConfig__TryGetBadgeSprite_2efa8d0
                        (*(long *)(param_1 + 0x60),*(undefined4 *)(*(long *)(param_1 + 0xa0) + 0x20)
                         ,&uStack_28,0);
              if (*(long *)(param_1 + 0x58) != 0) {
                UnityEngine_SpriteRenderer__set_sprite_4095b64
                          (*(long *)(param_1 + 0x58),uStack_28,0);
                if ((*(long *)(param_1 + 0xa0) != 0) && (*(long *)(param_1 + 0x78) != 0)) {
                  UnityEngine_GameObject__SetActive_408e318
                            (*(long *)(param_1 + 0x78),
                             *(char *)(*(long *)(param_1 + 0xa0) + 0x34) == '\0',0);
                  if ((*(long *)(param_1 + 0xa0) != 0) && (*(long *)(param_1 + 0x80) != 0)) {
                    UnityEngine_GameObject__SetActive_408e318
                              (*(long *)(param_1 + 0x80),
                               *(char *)(*(long *)(param_1 + 0xa0) + 0x34) == '\0',0);
                    if ((*(long *)(param_1 + 0xa0) != 0) && (*(long *)(param_1 + 0x70) != 0)) {
                      UnityEngine_GameObject__SetActive_408e318
                                (*(long *)(param_1 + 0x70),
                                 *(undefined1 *)(*(long *)(param_1 + 0xa0) + 0x34),0);
                      if ((*(long *)(param_1 + 0xa0) != 0) && (*(long *)(param_1 + 0x88) != 0)) {
                        UnityEngine_GameObject__SetActive_408e318
                                  (*(long *)(param_1 + 0x88),
                                   *(undefined1 *)(*(long *)(param_1 + 0xa0) + 0x34),0);
                        if ((*(long *)(param_1 + 0xa0) != 0) && (*(long *)(param_1 + 0x38) != 0)) {
                          Modules_Contexts_Home_TeamArena_UI_Popups_TeamLeaderboard_TeamArenaLeaderboardRewardView__SetReward_296804c
                                    (*(long *)(param_1 + 0x38),
                                     *(undefined8 *)(*(long *)(param_1 + 0xa0) + 0x28));
                          if (*plVar5 != 0) {
                            Modules_Contexts_Home_TeamArena_UI_Popups_TeamLeaderboard_TeamArenaTeamView__ShowRank_296a6ec
                                      (param_1,*(undefined4 *)(*plVar5 + 0x30));
                            puVar3 = PTR_DAT_057bc5e8;
                            if ((*(long *)(param_1 + 0xa0) != 0) && (*(long *)(param_1 + 0x30) != 0)
                               ) {
                              *(undefined1 *)(*(long *)(param_1 + 0x30) + 0x1c) =
                                   *(undefined1 *)(*(long *)(param_1 + 0xa0) + 0x35);
                              puVar2 = PTR_DAT_0577e6f0;
                              lVar6 = *(long *)(param_1 + 0x90);
                              if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                                thunk_FUN_0130472c();
                              }
                              uVar4 = Modules_Infrastructure_Utils_GrandStringExtensions__Localize_3de2900
                                                (*(undefined8 *)puVar2,0);
                              if (lVar6 != 0) {
                                Modules_Contexts_Home_UI_Toolbar_Scripts_ToolbarButton__SetToolbarModel_2dcb3ac
                                          (lVar6,uVar4,0,0);
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
  }
  return;
}

