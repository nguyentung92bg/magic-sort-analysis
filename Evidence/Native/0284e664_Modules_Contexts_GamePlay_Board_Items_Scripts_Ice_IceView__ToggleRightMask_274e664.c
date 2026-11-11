/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Ice.IceView$$ToggleRightMask
void Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceView__ToggleRightMask (Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceView_o* __this, bool toggle, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Ice.IceView$$ToggleRightMask
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceView__ToggleRightMask
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceView_o* __this, bool toggle, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceView__ToggleRightMask_274e664
               (long param_1,uint param_2)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x48) != 0) {
    lVar1 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x48),0);
    if (lVar1 != 0) {
      if (pcRam0000000005c3a388 == (code *)0x0) {
        pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
      }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000005c3a388)(lVar1,param_2 & 1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

