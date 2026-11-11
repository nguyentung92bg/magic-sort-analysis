/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$ResetStreakCountForAnimation
void Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__ResetStreakCountForAnimation (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$ResetStreakCountForAnimation
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__ResetStreakCountForAnimation
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__ResetStreakCountForAnimation_411f96c
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

