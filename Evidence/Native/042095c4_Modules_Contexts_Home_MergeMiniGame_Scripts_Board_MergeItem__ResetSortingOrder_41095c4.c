/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.MergeItem$$ResetSortingOrder
void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem__ResetSortingOrder (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.MergeItem$$ResetSortingOrder
   void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem__ResetSortingOrder
   (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem__ResetSortingOrder_41095c4
               (long param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x40);
  if (lVar2 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x48);
    if (pcRam0000000005c37840 == (code *)0x0) {
      pcRam0000000005c37840 = (code *)FUN_012d0d84(&UNK_043e4dbb);
    }
                    /* WARNING: Could not recover jumptable at 0x03e5ef40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000005c37840)(lVar2,uVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

