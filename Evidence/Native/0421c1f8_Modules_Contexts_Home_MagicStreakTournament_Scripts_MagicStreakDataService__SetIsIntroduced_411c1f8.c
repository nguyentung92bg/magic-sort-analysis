/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakDataService$$SetIsIntroduced
void Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakDataService__SetIsIntroduced (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakDataService_o* __this, bool isIntroduced, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakDataService$$SetIsIntroduced
   void Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakDataService__SetIsIntroduced
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakDataService_o* __this, bool
   isIntroduced, const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakDataService__SetIsIntroduced_411c1f8
               (long param_1,byte param_2)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    *(byte *)(*(long *)(param_1 + 0x20) + 0x19) = param_2 & 1;
    *(undefined2 *)(param_1 + 0x18) = 0x101;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

