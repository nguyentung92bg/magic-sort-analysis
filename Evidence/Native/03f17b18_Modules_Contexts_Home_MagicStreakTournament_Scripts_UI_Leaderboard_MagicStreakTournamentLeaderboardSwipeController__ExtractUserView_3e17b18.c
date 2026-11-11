/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Leaderboard.MagicStreakTournamentLeaderboardSwipeController$$ExtractUserView
void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardSwipeController__ExtractUserView (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardSwipeController_o* __this, Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElement_o* userView, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Leaderboard.MagicStreakTournamentLeaderboardSwipeController$$ExtractUserView
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardSwipeController__ExtractUserView
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardSwipeController_o*
   __this,
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElement_o*
   userView, const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardSwipeController__ExtractUserView_3e17b18
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
               long param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if ((bRam0000000005c380c0 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057fc5e8);
    bRam0000000005c380c0 = 1;
  }
  if ((param_5 != 0) &&
     (lVar2 = UnityEngine_Component__get_transform_408b444(param_5,0), puVar1 = PTR_DAT_057fc5e8,
     lVar2 != 0)) {
    uVar3 = UnityEngine_Transform__get_position_4092b08(lVar2,0);
    *(undefined4 *)(param_4 + 0x3c) = uVar3;
    *(undefined4 *)(param_4 + 0x40) = param_2;
    *(undefined4 *)(param_4 + 0x44) = param_3;
    Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElement__AddSortingGroup_3e15f94
              (param_5,*(undefined8 *)puVar1,1);
    lVar2 = UnityEngine_Component__get_transform_408b444(param_5,0);
    if (lVar2 != 0) {
      UnityEngine_Transform__set_parent_40933e0(lVar2,0,0);
      lVar2 = UnityEngine_Component__get_transform_408b444(param_5,0);
      if (lVar2 != 0) {
        uStack_2c = *(undefined4 *)(param_4 + 0x40);
        uStack_28 = *(undefined4 *)(param_4 + 0x44);
        uStack_30 = *(undefined4 *)(param_4 + 0x3c);
        if (pcRam0000000005c3a610 == (code *)0x0) {
          pcRam0000000005c3a610 = (code *)FUN_012d0d84(&UNK_043eeeca,0);
        }
        (*pcRam0000000005c3a610)(lVar2,&uStack_30);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

