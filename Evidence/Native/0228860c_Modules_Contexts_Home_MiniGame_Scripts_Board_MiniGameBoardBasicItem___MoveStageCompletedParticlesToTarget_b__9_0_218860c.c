/* IL2CPP: Modules.Contexts.Home.MiniGame.Scripts.Board.MiniGameBoardBasicItem$$<MoveStageCompletedParticlesToTarget>b__9_0
void Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardBasicItem___MoveStageCompletedParticlesToTarget_b__9_0 (Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardBasicItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MiniGame.Scripts.Board.MiniGameBoardBasicItem$$<MoveStageCompletedParticlesToTarget>b__9_0
   void 
   Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardBasicItem___MoveStageCompletedParticlesToTarget_b__9_0
   (Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardBasicItem_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardBasicItem___MoveStageCompletedParticlesToTarget_b__9_0_218860c
               (long param_1)

{
  long lVar1;
  
                    /* try { // try from 02288618 to 0238861b has its CatchHandler @ 0228861c */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02288618 with catch @ 0228861c
                       try { // try from 0228861c to 0238863b has its CatchHandler @ 02288518 */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 022885ec with catch @ 02288620
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 022885e0 with catch @ 02288624
                        */
  if ((*(long *)(param_1 + 0x50) != 0) &&
     (lVar1 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x50),0), lVar1 != 0
     )) {
    UnityEngine_GameObject__SetActive_408e318(lVar1,1,0);
    lVar1 = *(long *)(param_1 + 0x50);
    if (lVar1 != 0) {
      if (pcRam0000000005c35e30 == (code *)0x0) {
        pcRam0000000005c35e30 = (code *)FUN_012d0d84(&UNK_043e020e);
      }
                    /* WARNING: Could not recover jumptable at 0x03bbc5c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000005c35e30)(lVar1,1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

