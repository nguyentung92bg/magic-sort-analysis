/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.BoosterManager$$CanUseMegaShuffle
bool Modules_Contexts_GamePlay_Boosters_Scripts_BoosterManager__CanUseMegaShuffle (Modules_Contexts_GamePlay_Boosters_Scripts_BoosterManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.BoosterManager$$CanUseMegaShuffle
   bool Modules_Contexts_GamePlay_Boosters_Scripts_BoosterManager__CanUseMegaShuffle
   (Modules_Contexts_GamePlay_Boosters_Scripts_BoosterManager_o* __this, const MethodInfo* method);
    */

bool Modules_Contexts_GamePlay_Boosters_Scripts_BoosterManager__CanUseMegaShuffle_1e927b4
               (long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar1 = Modules_Contexts_GamePlay_Systems_Scripts_WinOrStuck_LevelWinOrStuckSystem__IsBoardStopped_1610628
                      (*(long *)(param_1 + 0x28),0);
    if ((uVar1 & 1) == 0) {
      return false;
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_SelectionSystem__TryCancelAllSelections_1612034
                (*(long *)(param_1 + 0x10),0);
      if (*(long *)(param_1 + 0x10) != 0) {
        uVar1 = Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_SelectionSystem__IsSelectionRunning_1613480
                          (*(long *)(param_1 + 0x10),0);
        if ((uVar1 & 1) != 0) {
          return false;
        }
        lVar2 = *(long *)(param_1 + 0x38);
        if (lVar2 != 0) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((bRam0000000005c28164 & 1) == 0) {
            lVar2 = FUN_012d0dc8(PTR_DAT_05813f90);
            bRam0000000005c28164 = 1;
          }
          if ((lVar3 != 0) &&
             (lVar2 = Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager__FindAvailableBottleForMegaShuffle_1e97a7c
                                (lVar2,*(undefined8 *)(lVar3 + 0x10)), lVar2 != 0)) {
            return 1 < *(int *)(lVar2 + 0x18);
          }
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

