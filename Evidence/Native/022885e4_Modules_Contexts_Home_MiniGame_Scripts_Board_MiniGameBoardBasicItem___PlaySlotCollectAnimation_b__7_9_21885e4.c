/* IL2CPP: Modules.Contexts.Home.MiniGame.Scripts.Board.MiniGameBoardBasicItem$$<PlaySlotCollectAnimation>b__7_9
void Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardBasicItem___PlaySlotCollectAnimation_b__7_9 (Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardBasicItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MiniGame.Scripts.Board.MiniGameBoardBasicItem$$<PlaySlotCollectAnimation>b__7_9
   void 
   Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardBasicItem___PlaySlotCollectAnimation_b__7_9
   (Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardBasicItem_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardBasicItem___PlaySlotCollectAnimation_b__7_9_21885e4
               (long param_1)

{
  undefined4 uVar1;
  long lVar2;
  
                    /* try { // try from 022885ec to 023885ff has its CatchHandler @ 02288620 */
  if ((*(long *)(param_1 + 0x58) != 0) && (lVar2 = *(long *)(param_1 + 0x38), lVar2 != 0)) {
    uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x58) + 0x70);
    if (pcRam0000000005c39c40 == (code *)0x0) {
      pcRam0000000005c39c40 = (code *)FUN_012d0d84(&UNK_043eafc0);
    }
                    /* WARNING: Could not recover jumptable at 0x0418273c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000005c39c40)(lVar2,uVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

