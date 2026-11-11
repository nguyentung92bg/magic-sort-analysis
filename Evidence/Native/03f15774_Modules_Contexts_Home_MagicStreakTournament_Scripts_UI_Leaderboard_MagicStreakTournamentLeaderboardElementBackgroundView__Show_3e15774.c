/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Leaderboard.MagicStreakTournamentLeaderboardElementBackgroundView$$Show
void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElementBackgroundView__Show (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElementBackgroundView_o* __this, bool isMe, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Leaderboard.MagicStreakTournamentLeaderboardElementBackgroundView$$Show
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElementBackgroundView__Show
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElementBackgroundView_o*
   __this, bool isMe, const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElementBackgroundView__Show_3e15774
               (long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar2 = 0x28;
    if ((param_2 & 1) == 0) {
      lVar2 = 0x30;
    }
    UnityEngine_SpriteRenderer__set_sprite_4095b64
              (*(long *)(param_1 + 0x18),*(undefined8 *)(param_1 + lVar2),0);
    lVar2 = *(long *)(param_1 + 0x20);
    if (lVar2 != 0) {
      lVar1 = 0x38;
      if ((param_2 & 1) == 0) {
        lVar1 = 0x40;
      }
      uVar3 = *(undefined8 *)(param_1 + lVar1);
      if (pcRam0000000005c3a730 == (code *)0x0) {
        pcRam0000000005c3a730 = (code *)FUN_012d0d84(&UNK_043ef929);
      }
                    /* WARNING: Could not recover jumptable at 0x04195ba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000005c3a730)(lVar2,uVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

