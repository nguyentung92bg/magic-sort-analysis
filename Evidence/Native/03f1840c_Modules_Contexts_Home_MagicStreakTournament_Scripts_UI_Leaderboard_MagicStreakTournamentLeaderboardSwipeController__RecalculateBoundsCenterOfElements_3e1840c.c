/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Leaderboard.MagicStreakTournamentLeaderboardSwipeController$$RecalculateBoundsCenterOfElements
void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardSwipeController__RecalculateBoundsCenterOfElements (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardSwipeController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Leaderboard.MagicStreakTournamentLeaderboardSwipeController$$RecalculateBoundsCenterOfElements
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardSwipeController__RecalculateBoundsCenterOfElements
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardSwipeController_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardSwipeController__RecalculateBoundsCenterOfElements_3e1840c
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  undefined4 uVar6;
  float fVar7;
  
  if ((bRam0000000005c380bf & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05793f20);
    bRam0000000005c380bf = 1;
  }
  puVar1 = PTR_DAT_05793f20;
  lVar3 = *(long *)(param_4 + 0x20);
  if (lVar3 != 0) {
    iVar5 = 0;
    while( true ) {
      iVar2 = Modules_Infrastructure_UI_Common_Scripts_Scroll_BasicScrollAdapter__GetScrollElementsCount_40076cc
                        (lVar3,0);
      if (iVar2 <= iVar5) {
        return;
      }
      if (*(long *)(param_4 + 0x20) == 0) break;
      lVar3 = Modules_Infrastructure_UI_Common_Scripts_Scroll_BasicScrollAdapter__GetScrollElementAt_4007624
                        (*(long *)(param_4 + 0x20),iVar5,0);
      if ((*(long *)(param_4 + 0x58) == 0) ||
         (uVar6 = System_Collections_Generic_List_Vector3___get_Item_2275a94
                            (*(long *)(param_4 + 0x58),iVar5,*(undefined8 *)puVar1), lVar3 == 0))
      break;
      *(undefined4 *)(lVar3 + 0x10) = uVar6;
      *(float *)(lVar3 + 0x14) = param_2;
      *(float *)(lVar3 + 0x18) = param_3;
      if (*(long *)(param_4 + 0x58) == 0) break;
      fVar7 = (float)System_Collections_Generic_List_Vector3___get_Item_2275a94
                               (*(long *)(param_4 + 0x58),iVar5,*(undefined8 *)puVar1);
      lVar4 = *(long *)(param_4 + 0x18);
      if (lVar4 == 0) break;
      param_2 = param_2 + *(float *)(lVar4 + 0x54);
      param_3 = param_3 + *(float *)(lVar4 + 0x58);
      UnityEngine_Bounds__set_center_383763c(fVar7 + *(float *)(lVar4 + 0x50),lVar3 + 0x1c,0);
      lVar3 = *(long *)(param_4 + 0x20);
      iVar5 = iVar5 + 1;
      if (lVar3 == 0) break;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

