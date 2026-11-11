/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.MergeDragSelection$$IsTargetCellIsEmpty
bool Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeDragSelection__IsTargetCellIsEmpty (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeDragSelection_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.MergeDragSelection$$IsTargetCellIsEmpty
   bool Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeDragSelection__IsTargetCellIsEmpty
   (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeDragSelection_o* __this, const
   MethodInfo* method); */

bool Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeDragSelection__IsTargetCellIsEmpty_4110a44
               (long param_1)

{
  long lVar1;
  
                    /* try { // try from 04210a44 to 04310a87 has its CatchHandler @ 04210b54 */
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if ((bRam0000000005c3abd8 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a3b00);
    bRam0000000005c3abd8 = 1;
  }
  lVar1 = *(long *)(lVar1 + 0xa0);
  if (lVar1 != 0) {
    return *(int *)(lVar1 + 0x18) == 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

