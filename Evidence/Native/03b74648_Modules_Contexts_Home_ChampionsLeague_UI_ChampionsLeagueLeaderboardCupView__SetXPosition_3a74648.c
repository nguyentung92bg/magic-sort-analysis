/* IL2CPP: Modules.Contexts.Home.ChampionsLeague.UI.ChampionsLeagueLeaderboardCupView$$SetXPosition
void Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardCupView__SetXPosition (Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardCupView_o* __this, float xPos, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.ChampionsLeague.UI.ChampionsLeagueLeaderboardCupView$$SetXPosition
   void Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardCupView__SetXPosition
   (Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardCupView_o* __this, float
   xPos, const MethodInfo* method); */

void Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardCupView__SetXPosition_3a74648
               (long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    UnityEngine_Transform__get_localPosition_4092c40(lVar1,0);
    if (*(long *)(param_1 + 0x20) != 0) {
      UnityEngine_Transform__get_localPosition_4092c40(*(long *)(param_1 + 0x20),0);
      if (pcRam0000000005c3a620 == (code *)0x0) {
        pcRam0000000005c3a620 = (code *)FUN_012d0d84(&UNK_043eef55,0);
      }
      (*pcRam0000000005c3a620)(lVar1,&stack0xffffffffffffffd0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

