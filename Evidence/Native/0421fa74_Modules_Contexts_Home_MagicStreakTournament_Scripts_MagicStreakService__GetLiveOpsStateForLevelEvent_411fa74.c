/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$GetLiveOpsStateForLevelEvent
int32_t Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetLiveOpsStateForLevelEvent (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$GetLiveOpsStateForLevelEvent
   int32_t
   Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetLiveOpsStateForLevelEvent
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, const
   MethodInfo* method); */

undefined4
Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetLiveOpsStateForLevelEvent_411fa74
          (long param_1)

{
  int iVar1;
  
  if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  iVar1 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakStateService__GetState_3e07d08
                    (*(long *)(param_1 + 0x18),0);
  if (iVar1 - 4U < 4) {
    return *(undefined4 *)(&UNK_043e00e8 + (long)(int)(iVar1 - 4U) * 4);
  }
  return 0;
}

