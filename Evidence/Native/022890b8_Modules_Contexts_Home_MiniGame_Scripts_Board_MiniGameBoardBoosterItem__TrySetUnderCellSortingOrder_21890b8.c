/* IL2CPP: Modules.Contexts.Home.MiniGame.Scripts.Board.MiniGameBoardBoosterItem$$TrySetUnderCellSortingOrder
void Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardBoosterItem__TrySetUnderCellSortingOrder (Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardBoosterItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MiniGame.Scripts.Board.MiniGameBoardBoosterItem$$TrySetUnderCellSortingOrder
   void 
   Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardBoosterItem__TrySetUnderCellSortingOrder
   (Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardBoosterItem_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardBoosterItem__TrySetUnderCellSortingOrder_21890b8
               (long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x48) != 0) {
    iVar2 = UnityEngine_Renderer__get_sortingOrder_40826c0(*(long *)(param_1 + 0x48),0);
    if (*(long *)(param_1 + 0x50) != 0) {
      iVar1 = *(int *)(*(long *)(param_1 + 0x50) + 0x9c);
      if (iVar2 == iVar1) {
        return;
      }
      lVar3 = *(long *)(param_1 + 0x48);
      if (lVar3 != 0) {
        if (pcRam0000000005c39c40 == (code *)0x0) {
          pcRam0000000005c39c40 = (code *)FUN_012d0d84(&UNK_043eafc0);
        }
                    /* WARNING: Could not recover jumptable at 0x0418273c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000005c39c40)(lVar3,iVar1);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

