/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Safe.SafeView$$SetCompleteRotationAnimationSpeed
void Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeView__SetCompleteRotationAnimationSpeed (Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.Safe.SafeView$$SetCompleteRotationAnimationSpeed
   void 
   Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeView__SetCompleteRotationAnimationSpeed
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeView_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeView__SetCompleteRotationAnimationSpeed_2616830
               (long param_1)

{
  undefined4 uVar1;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar1 = Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeAnimationConfig__GetRandomSpeedValue_2613724
                      ();
    *(undefined4 *)(param_1 + 0xb8) = uVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

