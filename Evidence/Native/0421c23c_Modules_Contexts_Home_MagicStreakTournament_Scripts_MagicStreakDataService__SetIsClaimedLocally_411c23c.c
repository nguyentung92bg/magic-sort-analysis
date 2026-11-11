/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakDataService$$SetIsClaimedLocally
void Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakDataService__SetIsClaimedLocally (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakDataService_o* __this, bool isClaimed, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakDataService$$SetIsClaimedLocally
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakDataService__SetIsClaimedLocally
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakDataService_o* __this, bool
   isClaimed, const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakDataService__SetIsClaimedLocally_411c23c
               (long param_1,byte param_2)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    *(byte *)(*(long *)(param_1 + 0x20) + 0x18) = param_2 & 1;
    *(undefined2 *)(param_1 + 0x18) = 0x101;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

