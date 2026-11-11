/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Safe.SafeView$$UpdateLockCountText
void Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeView__UpdateLockCountText (Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Safe.SafeView$$UpdateLockCountText
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeView__UpdateLockCountText
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeView_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeView__UpdateLockCountText_2616144
               (long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x68);
  uVar1 = System_Int32__ToString_26c9768(param_1 + 0xbc,0);
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x02716174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x558))(plVar2,uVar1,*(undefined8 *)(*plVar2 + 0x560));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

