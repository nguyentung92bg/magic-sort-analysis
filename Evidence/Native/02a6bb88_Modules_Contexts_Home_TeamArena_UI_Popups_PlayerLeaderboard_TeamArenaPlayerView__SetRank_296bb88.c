/* IL2CPP: Modules.Contexts.Home.TeamArena.UI.Popups.PlayerLeaderboard.TeamArenaPlayerView$$SetRank
void Modules_Contexts_Home_TeamArena_UI_Popups_PlayerLeaderboard_TeamArenaPlayerView__SetRank (Modules_Contexts_Home_TeamArena_UI_Popups_PlayerLeaderboard_TeamArenaPlayerView_o* __this, int32_t rank, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.TeamArena.UI.Popups.PlayerLeaderboard.TeamArenaPlayerView$$SetRank
   void Modules_Contexts_Home_TeamArena_UI_Popups_PlayerLeaderboard_TeamArenaPlayerView__SetRank
   (Modules_Contexts_Home_TeamArena_UI_Popups_PlayerLeaderboard_TeamArenaPlayerView_o* __this,
   int32_t rank, const MethodInfo* method); */

void Modules_Contexts_Home_TeamArena_UI_Popups_PlayerLeaderboard_TeamArenaPlayerView__SetRank_296bb88
               (long param_1,int param_2)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  int iStack_14;
  
  lVar3 = *(long *)(param_1 + 0x50);
  iStack_14 = param_2;
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) == 0) {
LAB_02a6bcec:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef8();
    }
    if (*(long *)(lVar3 + 0x20) != 0) {
      UnityEngine_GameObject__SetActive_408e318(*(long *)(lVar3 + 0x20),param_2 == 1,0);
      lVar3 = *(long *)(param_1 + 0x50);
      if (lVar3 != 0) {
        if (*(uint *)(lVar3 + 0x18) < 2) goto LAB_02a6bcec;
        if (*(long *)(lVar3 + 0x28) != 0) {
          UnityEngine_GameObject__SetActive_408e318(*(long *)(lVar3 + 0x28),param_2 == 2,0);
          lVar3 = *(long *)(param_1 + 0x50);
          if (lVar3 != 0) {
            if (*(uint *)(lVar3 + 0x18) < 3) goto LAB_02a6bcec;
            if (*(long *)(lVar3 + 0x30) != 0) {
              UnityEngine_GameObject__SetActive_408e318(*(long *)(lVar3 + 0x30),param_2 == 3,0);
              lVar3 = *(long *)(param_1 + 0x50);
              if (lVar3 != 0) {
                if (*(uint *)(lVar3 + 0x18) < 4) goto LAB_02a6bcec;
                if (param_2 < 4) {
                  bVar1 = false;
                }
                else {
                  if (*(long *)(param_1 + 0x88) == 0) goto LAB_02a6bce8;
                  bVar1 = *(char *)(*(long *)(param_1 + 0x88) + 0x58) == '\0';
                }
                if (*(long *)(lVar3 + 0x38) != 0) {
                  UnityEngine_GameObject__SetActive_408e318(*(long *)(lVar3 + 0x38),bVar1,0);
                  lVar3 = *(long *)(param_1 + 0x50);
                  if (lVar3 != 0) {
                    if (*(uint *)(lVar3 + 0x18) < 5) goto LAB_02a6bcec;
                    if (param_2 < 4) {
                      bVar1 = false;
                    }
                    else {
                      if (*(long *)(param_1 + 0x88) == 0) goto LAB_02a6bce8;
                      bVar1 = *(char *)(*(long *)(param_1 + 0x88) + 0x58) != '\0';
                    }
                    if (*(long *)(lVar3 + 0x40) != 0) {
                      UnityEngine_GameObject__SetActive_408e318(*(long *)(lVar3 + 0x40),bVar1,0);
                      lVar3 = *(long *)(param_1 + 0x48);
                      uVar2 = System_Int32__ToString_26c9768(&iStack_14,0);
                      if (lVar3 != 0) {
                        TMPro_TMP_Text__SetText_3dc1ab4(lVar3,uVar2,1,0);
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

