/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.BoosterManager$$CanUseShuffleOrReveal
bool Modules_Contexts_GamePlay_Boosters_Scripts_BoosterManager__CanUseShuffleOrReveal (Modules_Contexts_GamePlay_Boosters_Scripts_BoosterManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.BoosterManager$$CanUseShuffleOrReveal
   bool Modules_Contexts_GamePlay_Boosters_Scripts_BoosterManager__CanUseShuffleOrReveal
   (Modules_Contexts_GamePlay_Boosters_Scripts_BoosterManager_o* __this, const MethodInfo* method);
    */

uint Modules_Contexts_GamePlay_Boosters_Scripts_BoosterManager__CanUseShuffleOrReveal_1e926e8
               (long param_1)

{
  uint uVar1;
  ulong uVar2;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar2 = Modules_Contexts_GamePlay_Systems_Scripts_WinOrStuck_LevelWinOrStuckSystem__IsBoardStopped_1610628
                      (*(long *)(param_1 + 0x28),0);
    if ((uVar2 & 1) == 0) {
      uVar1 = 0;
LAB_01f92730:
      return uVar1 & 1;
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_SelectionSystem__TryCancelAllSelections_1612034
                (*(long *)(param_1 + 0x10),0);
      if (*(long *)(param_1 + 0x10) != 0) {
        uVar1 = Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_SelectionSystem__IsSelectionRunning_1613480
                          (*(long *)(param_1 + 0x10),0);
        uVar1 = uVar1 ^ 1;
        goto LAB_01f92730;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

