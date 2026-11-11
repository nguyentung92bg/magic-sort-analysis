/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Safe.SafeAnimationConfig$$ResetSpeedValues
void Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeAnimationConfig__ResetSpeedValues (Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeAnimationConfig_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Safe.SafeAnimationConfig$$ResetSpeedValues
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeAnimationConfig__ResetSpeedValues
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeAnimationConfig_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeAnimationConfig__ResetSpeedValues_2613874
               (long param_1)

{
  long lVar1;
  
  if ((bRam0000000005c2ba1c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05777f08);
    bRam0000000005c2ba1c = 1;
  }
  lVar1 = *(long *)(param_1 + 0xf0);
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x18) = 0;
    *(int *)(lVar1 + 0x1c) = *(int *)(lVar1 + 0x1c) + 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

