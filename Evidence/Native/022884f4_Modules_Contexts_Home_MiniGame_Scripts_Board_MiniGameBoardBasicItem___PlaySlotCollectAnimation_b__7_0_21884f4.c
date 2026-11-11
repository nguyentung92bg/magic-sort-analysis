/* IL2CPP: Modules.Contexts.Home.MiniGame.Scripts.Board.MiniGameBoardBasicItem$$<PlaySlotCollectAnimation>b__7_0
void Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardBasicItem___PlaySlotCollectAnimation_b__7_0 (Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardBasicItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MiniGame.Scripts.Board.MiniGameBoardBasicItem$$<PlaySlotCollectAnimation>b__7_0
   void 
   Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardBasicItem___PlaySlotCollectAnimation_b__7_0
   (Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardBasicItem_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardBasicItem___PlaySlotCollectAnimation_b__7_0_21884f4
               (long param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  if ((*(long *)(param_1 + 0x58) != 0) && (lVar2 = *(long *)(param_1 + 0x38), lVar2 != 0)) {
    uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x58) + 0x6c);
    if (pcRam0000000005c39c40 == (code *)0x0) {
      pcRam0000000005c39c40 = (code *)FUN_012d0d84(&UNK_043eafc0);
    }
                    /* WARNING: Could not recover jumptable at 0x0418273c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000005c39c40)(lVar2,uVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02288518 to 023885df has its CatchHandler @ 02288518
                       catch() { ... } // from try @ 02288518 with catch @ 02288518
                       catch() { ... } // from try @ 0228861c with catch @ 02288518
                       catch() { ... } // from try @ 02288698 with catch @ 02288518 */
  FUN_012d0ef0();
}

