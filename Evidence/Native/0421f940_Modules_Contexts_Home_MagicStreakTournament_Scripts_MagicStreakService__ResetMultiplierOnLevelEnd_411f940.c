/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$ResetMultiplierOnLevelEnd
void Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__ResetMultiplierOnLevelEnd (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$ResetMultiplierOnLevelEnd
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__ResetMultiplierOnLevelEnd
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__ResetMultiplierOnLevelEnd_411f940
               (long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x20) != 0)) {
    *(undefined4 *)(*(long *)(lVar1 + 0x20) + 0x24) = 0;
    *(undefined2 *)(lVar1 + 0x18) = 0x101;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

