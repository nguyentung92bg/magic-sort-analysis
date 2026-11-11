/* IL2CPP: Modules.Contexts.Home.TeamArena.UI.Popups.TeamLeaderboard.TeamArenaTeamView$$ShowRank
void Modules_Contexts_Home_TeamArena_UI_Popups_TeamLeaderboard_TeamArenaTeamView__ShowRank (Modules_Contexts_Home_TeamArena_UI_Popups_TeamLeaderboard_TeamArenaTeamView_o* __this, int32_t rank, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.TeamArena.UI.Popups.TeamLeaderboard.TeamArenaTeamView$$ShowRank
   void Modules_Contexts_Home_TeamArena_UI_Popups_TeamLeaderboard_TeamArenaTeamView__ShowRank
   (Modules_Contexts_Home_TeamArena_UI_Popups_TeamLeaderboard_TeamArenaTeamView_o* __this, int32_t
   rank, const MethodInfo* method); */

void Modules_Contexts_Home_TeamArena_UI_Popups_TeamLeaderboard_TeamArenaTeamView__ShowRank_296a6ec
               (long param_1,int param_2)

{
  undefined8 uVar1;
  long lVar2;
  int iStack_14;
  
  lVar2 = *(long *)(param_1 + 0x68);
  iStack_14 = param_2;
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) == 0) {
LAB_02a6a7e4:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef8();
    }
    if (*(long *)(lVar2 + 0x20) != 0) {
      UnityEngine_GameObject__SetActive_408e318(*(long *)(lVar2 + 0x20),param_2 == 1,0);
      lVar2 = *(long *)(param_1 + 0x68);
      if (lVar2 != 0) {
        if (*(uint *)(lVar2 + 0x18) < 2) goto LAB_02a6a7e4;
        if (*(long *)(lVar2 + 0x28) != 0) {
          UnityEngine_GameObject__SetActive_408e318(*(long *)(lVar2 + 0x28),param_2 == 2,0);
          lVar2 = *(long *)(param_1 + 0x68);
          if (lVar2 != 0) {
            if (*(uint *)(lVar2 + 0x18) < 3) goto LAB_02a6a7e4;
            if (*(long *)(lVar2 + 0x30) != 0) {
              UnityEngine_GameObject__SetActive_408e318(*(long *)(lVar2 + 0x30),param_2 == 3,0);
              lVar2 = *(long *)(param_1 + 0x68);
              if (lVar2 != 0) {
                if (*(uint *)(lVar2 + 0x18) < 4) goto LAB_02a6a7e4;
                if (*(long *)(lVar2 + 0x38) != 0) {
                  UnityEngine_GameObject__SetActive_408e318(*(long *)(lVar2 + 0x38),3 < param_2,0);
                  lVar2 = *(long *)(param_1 + 0x50);
                  uVar1 = System_Int32__ToString_26c9768(&iStack_14,0);
                  if (lVar2 != 0) {
                    TMPro_TMP_Text__SetText_3dc1ab4(lVar2,uVar1,1,0);
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
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

