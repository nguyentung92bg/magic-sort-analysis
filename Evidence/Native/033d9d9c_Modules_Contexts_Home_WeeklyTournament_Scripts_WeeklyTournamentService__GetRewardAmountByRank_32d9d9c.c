/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.WeeklyTournamentService$$GetRewardAmountByRank
int32_t Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__GetRewardAmountByRank (Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService_o* __this, int32_t rank, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.WeeklyTournament.Scripts.WeeklyTournamentService$$GetRewardAmountByRank
   int32_t
   Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__GetRewardAmountByRank
   (Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService_o* __this, int32_t rank,
   const MethodInfo* method); */

undefined4
Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__GetRewardAmountByRank_32d9d9c
          (long param_1,int param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  if (((*(long *)(param_1 + 0x10) != 0) &&
      (lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x18), lVar2 != 0)) &&
     (lVar2 = *(long *)(lVar2 + 0x38), lVar2 != 0)) {
    lVar2 = *(long *)(lVar2 + 0x18);
    if (param_2 == 3) {
      if (lVar2 == 0) goto LAB_033d9e04;
      uVar1 = *(undefined4 *)(lVar2 + 0x18);
    }
    else if (param_2 == 2) {
      if (lVar2 == 0) goto LAB_033d9e04;
      uVar1 = *(undefined4 *)(lVar2 + 0x14);
    }
    else if (param_2 == 1) {
      if (lVar2 == 0) goto LAB_033d9e04;
      uVar1 = *(undefined4 *)(lVar2 + 0x10);
    }
    else {
      uVar1 = 0;
    }
    return uVar1;
  }
LAB_033d9e04:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

