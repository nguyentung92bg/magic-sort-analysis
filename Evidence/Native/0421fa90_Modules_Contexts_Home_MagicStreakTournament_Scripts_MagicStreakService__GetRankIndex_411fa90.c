/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$GetRankIndex
int32_t Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetRankIndex (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$GetRankIndex
   int32_t Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetRankIndex
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, const
   MethodInfo* method); */

uint Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetRankIndex_411fa90
               (void)

{
  int iVar1;
  
  iVar1 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetRank_411e528();
  return iVar1 - 1U & ((int)(iVar1 - 1U) >> 0x1f ^ 0xffffffffU);
}

