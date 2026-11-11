/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Leaderboard.MagicStreakTournamentLeaderboardViewAdapter$$GetView
Modules_Infrastructure_Common_Scripts_Generation_Basic_BasicView_o* Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardViewAdapter__GetView (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardViewAdapter_o* __this, int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Leaderboard.MagicStreakTournamentLeaderboardViewAdapter$$GetView
   Modules_Infrastructure_Common_Scripts_Generation_Basic_BasicView_o*
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardViewAdapter__GetView
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardViewAdapter_o*
   __this, int32_t index, const MethodInfo* method); */

long Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardViewAdapter__GetView_3e18e88
               (long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  plVar1 = *(long **)(param_1 + 0x20);
                    /* try { // try from 03f18e90 to 04018e97 has its CatchHandler @ 03f18f70 */
  if (plVar1 != (long *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 0x1c8))(plVar1,1,*(undefined8 *)(*plVar1 + 0x1d0));
                    /* try { // try from 03f18ea4 to 04018ec3 has its CatchHandler @ 03f18f78 */
    if ((lVar2 != 0) && (lVar3 = UnityEngine_Component__get_transform_408b444(lVar2,0), lVar3 != 0))
    {
      UnityEngine_Transform__set_localScale_40932d0(0x3f800000,0x3f800000,0x3f800000,lVar3,0);
      lVar3 = UnityEngine_Component__get_gameObject_408b480(lVar2,0);
      if (lVar3 != 0) {
        UnityEngine_GameObject__SetActive_408e318(lVar3,1,0);
                    /* try { // try from 03f18eec to 04018eef has its CatchHandler @ 03f18f8c */
        return lVar2;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

