/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Leaderboard.MagicStreakTournamentLeaderboardViewAdapter$$RemoveFromModelList
void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardViewAdapter__RemoveFromModelList (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardViewAdapter_o* __this, int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Leaderboard.MagicStreakTournamentLeaderboardViewAdapter$$RemoveFromModelList
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardViewAdapter__RemoveFromModelList
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardViewAdapter_o*
   __this, int32_t index, const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardViewAdapter__RemoveFromModelList_3e18550
               (long param_1,uint param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 in_x6;
  undefined8 in_x7;
  uint uVar3;
  long lVar4;
  undefined8 unaff_x20;
  
  if ((bRam0000000005c380cc & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0579d778);
    bRam0000000005c380cc = 1;
  }
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  uVar3 = *(uint *)(lVar2 + 0x18);
  if (uVar3 <= param_2) {
    System_ThrowHelper__ThrowArgumentOutOfRange_IndexException_26a52c4
              (0,param_2,*(undefined8 *)PTR_DAT_0579d778);
    uVar3 = *(uint *)(lVar2 + 0x18);
  }
  uVar3 = uVar3 - 1;
  *(uint *)(lVar2 + 0x18) = uVar3;
  if (uVar3 - param_2 != 0 && (int)param_2 <= (int)uVar3) {
    System_Array__Copy_26a6ec0
              (*(undefined8 *)(lVar2 + 0x10),param_2 + 1,*(undefined8 *)(lVar2 + 0x10),param_2,
               uVar3 - param_2,0,in_x6,in_x7,unaff_x20);
    uVar3 = *(uint *)(lVar2 + 0x18);
  }
  lVar4 = *(long *)(lVar2 + 0x10);
  if (lVar4 != 0) {
    if (uVar3 < *(uint *)(lVar4 + 0x18)) {
      puVar1 = (undefined8 *)(lVar4 + (long)(int)uVar3 * 8 + 0x20);
      *puVar1 = 0;
      FUN_012d0d74(puVar1,0);
      *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

