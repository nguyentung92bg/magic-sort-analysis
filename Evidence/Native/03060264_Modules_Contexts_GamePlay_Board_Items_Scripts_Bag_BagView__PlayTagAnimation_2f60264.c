/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Bag.BagView$$PlayTagAnimation
void Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView__PlayTagAnimation (Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Bag.BagView$$PlayTagAnimation
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView__PlayTagAnimation
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView_o* __this, const MethodInfo* method);
    */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView__PlayTagAnimation_2f60264
               (long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x68);
  if (lVar1 != 0) {
    if (pcRam0000000005c35e30 == (code *)0x0) {
      pcRam0000000005c35e30 = (code *)FUN_012d0d84(&UNK_043e020e,0);
    }
                    /* WARNING: Could not recover jumptable at 0x03bbc604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000005c35e30)(lVar1,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

