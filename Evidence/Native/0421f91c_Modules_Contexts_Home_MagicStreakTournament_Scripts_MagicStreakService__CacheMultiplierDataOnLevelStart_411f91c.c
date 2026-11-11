/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$CacheMultiplierDataOnLevelStart
void Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__CacheMultiplierDataOnLevelStart (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$CacheMultiplierDataOnLevelStart
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__CacheMultiplierDataOnLevelStart
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__CacheMultiplierDataOnLevelStart_411f91c
               (long param_1)

{
  undefined4 uVar1;
  
  uVar1 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetCurrentMultiplierIndex_411f8f8
                    ();
  if (*(long *)(param_1 + 0x28) != 0) {
    *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x34) = uVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

