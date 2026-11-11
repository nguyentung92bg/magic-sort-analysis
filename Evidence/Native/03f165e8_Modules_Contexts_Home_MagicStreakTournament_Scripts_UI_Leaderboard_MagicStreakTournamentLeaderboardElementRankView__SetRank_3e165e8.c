/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Leaderboard.MagicStreakTournamentLeaderboardElementRankView$$SetRank
void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElementRankView__SetRank (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElementRankView_o* __this, int32_t rank, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Leaderboard.MagicStreakTournamentLeaderboardElementRankView$$SetRank
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElementRankView__SetRank
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElementRankView_o*
   __this, int32_t rank, const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElementRankView__SetRank_3e165e8
               (long param_1,int param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int *piVar3;
  long *plVar4;
  undefined8 *puVar5;
  int aiStack_2c [3];
  
  aiStack_2c[2] = param_2;
  if ((bRam0000000005c380b1 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_0578af90);
    FUN_012d0dc8(PTR_DAT_057e05a0);
    bRam0000000005c380b1 = 1;
  }
  plVar4 = *(long **)(param_1 + 0x38);
  uVar2 = System_Int32__ToString_26c9768(aiStack_2c + 2,0);
  puVar1 = PTR_DAT_057db748;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x558))(plVar4,uVar2,*(undefined8 *)(*plVar4 + 0x560));
    plVar4 = *(long **)(param_1 + 0x48);
    if (aiStack_2c[2] < 0x3e9) {
      uVar2 = *(undefined8 *)puVar1;
      aiStack_2c[0] = aiStack_2c[2];
      piVar3 = aiStack_2c;
      puVar5 = (undefined8 *)PTR_DAT_0578af90;
    }
    else {
      uVar2 = *(undefined8 *)puVar1;
      piVar3 = aiStack_2c + 1;
      aiStack_2c[1] = 1000;
      puVar5 = (undefined8 *)PTR_DAT_057e05a0;
    }
    uVar2 = thunk_FUN_01320a8c(uVar2,piVar3);
    uVar2 = System_String__Format_1ec10a8(*puVar5,uVar2,0);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x558))(plVar4,uVar2,*(undefined8 *)(*plVar4 + 0x560));
      if (aiStack_2c[2] < 4) {
        uVar2 = Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElementRankView__GetMedalSprite_3e16588
                          (param_1);
        if (*(long *)(param_1 + 0x30) == 0) goto LAB_03f16750;
        UnityEngine_SpriteRenderer__set_sprite_4095b64(*(long *)(param_1 + 0x30),uVar2,0);
      }
      if (*(long *)(param_1 + 0x40) != 0) {
        UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x40),3 < aiStack_2c[2],0);
        if (*(long *)(param_1 + 0x28) != 0) {
          UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x28),aiStack_2c[2] < 4,0);
          return;
        }
      }
    }
  }
LAB_03f16750:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

