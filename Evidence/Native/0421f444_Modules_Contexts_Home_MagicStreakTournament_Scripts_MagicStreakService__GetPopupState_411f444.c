/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$GetPopupState
int32_t Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetPopupState (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$GetPopupState
   int32_t Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetPopupState
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, const
   MethodInfo* method); */

undefined4
Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetPopupState_411f444
          (long param_1)

{
  int iVar1;
  
  if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  iVar1 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakStateService__GetState_3e07d08
                    (*(long *)(param_1 + 0x18),0);
  if (iVar1 - 3U < 4) {
    return *(undefined4 *)(&UNK_043e5bb0 + (long)(int)(iVar1 - 3U) * 4);
  }
  return 0;
}

