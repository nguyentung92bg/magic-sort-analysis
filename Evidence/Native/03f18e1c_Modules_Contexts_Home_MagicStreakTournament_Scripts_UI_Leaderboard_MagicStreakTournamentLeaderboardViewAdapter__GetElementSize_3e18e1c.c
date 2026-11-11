/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Leaderboard.MagicStreakTournamentLeaderboardViewAdapter$$GetElementSize
UnityEngine_Vector3_o Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardViewAdapter__GetElementSize (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardViewAdapter_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Leaderboard.MagicStreakTournamentLeaderboardViewAdapter$$GetElementSize
   UnityEngine_Vector3_o
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardViewAdapter__GetElementSize
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardViewAdapter_o*
   __this, const MethodInfo* method); */

undefined1  [16]
Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardViewAdapter__GetElementSize_3e18e1c
          (long param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  
  plVar1 = *(long **)(param_1 + 0x20);
  if (plVar1 != (long *)0x0) {
    plVar1 = (long *)(**(code **)(*plVar1 + 0x1c8))(plVar1,1,*(undefined8 *)(*plVar1 + 0x1d0));
    if (plVar1 != (long *)0x0) {
      auVar2 = Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElement__get_Size_3e16158
                         ();
      uVar3 = auVar2._8_8_;
                    /* try { // try from 03f18e4c to 04018e4f has its CatchHandler @ 03f18f84 */
                    /* try { // try from 03f18e60 to 04018e63 has its CatchHandler @ 03f18f80 */
      (**(code **)(*plVar1 + 0x1b8))(plVar1,*(undefined8 *)(*plVar1 + 0x1c0));
      auVar2._8_8_ = uVar3;
                    /* try { // try from 03f18e74 to 04018e7b has its CatchHandler @ 03f18f7c */
      return auVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

