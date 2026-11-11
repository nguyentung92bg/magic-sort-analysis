/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Rainbow.RainbowView$$Prepare
void Modules_Contexts_GamePlay_Board_Items_Scripts_Rainbow_RainbowView__Prepare (Modules_Contexts_GamePlay_Board_Items_Scripts_Rainbow_RainbowView_o* __this, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Rainbow.RainbowView$$Prepare
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Rainbow_RainbowView__Prepare
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Rainbow_RainbowView_o* __this,
   Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Rainbow_RainbowView__Prepare_2745744
               (long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    UnityEngine_Renderer__set_sortingOrder_40826fc(*(long *)(param_1 + 0x20),param_3,0);
    lVar1 = *(long *)(param_1 + 0x20);
    if (lVar1 != 0) {
      if (pcRam0000000005c39c20 == (code *)0x0) {
        pcRam0000000005c39c20 = (code *)FUN_012d0d84(&UNK_043eaefb);
      }
                    /* WARNING: Could not recover jumptable at 0x0418263c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000005c39c20)(lVar1,param_2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

