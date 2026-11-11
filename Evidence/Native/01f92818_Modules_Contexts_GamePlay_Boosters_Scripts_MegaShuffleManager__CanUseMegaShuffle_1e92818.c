/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.MegaShuffleManager$$CanUseMegaShuffle
bool Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager__CanUseMegaShuffle (Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager_o* __this, Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections_o* bottleCollections, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.MegaShuffleManager$$CanUseMegaShuffle
   bool Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager__CanUseMegaShuffle
   (Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager_o* __this,
   Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections_o* bottleCollections, const
   MethodInfo* method); */

bool Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager__CanUseMegaShuffle_1e92818
               (undefined8 param_1,long param_2)

{
  long lVar1;
  
  if ((bRam0000000005c28164 & 1) == 0) {
    param_1 = FUN_012d0dc8(PTR_DAT_05813f90);
    bRam0000000005c28164 = 1;
  }
  if ((param_2 != 0) &&
     (lVar1 = Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager__FindAvailableBottleForMegaShuffle_1e97a7c
                        (param_1,*(undefined8 *)(param_2 + 0x10)), lVar1 != 0)) {
    return 1 < *(int *)(lVar1 + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

