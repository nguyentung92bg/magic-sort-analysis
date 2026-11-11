/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelWinPopUpNS.Scripts.LevelWinCoinRewardView$$SetCoinRewardAmount
void Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinCoinRewardView__SetCoinRewardAmount (Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinCoinRewardView_o* __this, int32_t amount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.UI.LevelWinPopUpNS.Scripts.LevelWinCoinRewardView$$SetCoinRewardAmount
   void 
   Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinCoinRewardView__SetCoinRewardAmount
   (Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinCoinRewardView_o* __this, int32_t
   amount, const MethodInfo* method); */

void Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinCoinRewardView__SetCoinRewardAmount_16edaa0
               (long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  long *plVar2;
  undefined4 uStack_14;
  
  plVar2 = *(long **)(param_1 + 0x18);
  uStack_14 = param_2;
  uVar1 = System_Int32__ToString_26c9768(&uStack_14,0);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x558))(plVar2,uVar1,*(undefined8 *)(*plVar2 + 0x560));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

