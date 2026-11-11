/* IL2CPP: Modules.Contexts.Home.MiniGame.Scripts.Board.MiniGameBoardBasicItem$$<PlaySlotCollectAnimation>b__7_8
void Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardBasicItem___PlaySlotCollectAnimation_b__7_8 (Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardBasicItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MiniGame.Scripts.Board.MiniGameBoardBasicItem$$<PlaySlotCollectAnimation>b__7_8
   void 
   Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardBasicItem___PlaySlotCollectAnimation_b__7_8
   (Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardBasicItem_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardBasicItem___PlaySlotCollectAnimation_b__7_8_21885b8
               (long param_1)

{
  int iVar1;
  long lVar2;
  
  if ((*(long *)(param_1 + 0x58) != 0) && (lVar2 = *(long *)(param_1 + 0x40), lVar2 != 0)) {
    iVar1 = *(int *)(*(long *)(param_1 + 0x58) + 0x70);
    if (pcRam0000000005c39c40 == (code *)0x0) {
      pcRam0000000005c39c40 = (code *)FUN_012d0d84(&UNK_043eafc0);
    }
                    /* WARNING: Could not recover jumptable at 0x0418273c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000005c39c40)(lVar2,iVar1 + -1);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 022885e0 to 023885e7 has its CatchHandler @ 02288624 */
  FUN_012d0ef0();
}

