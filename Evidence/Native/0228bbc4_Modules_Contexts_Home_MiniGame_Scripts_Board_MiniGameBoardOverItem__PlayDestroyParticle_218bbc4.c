/* IL2CPP: Modules.Contexts.Home.MiniGame.Scripts.Board.MiniGameBoardOverItem$$PlayDestroyParticle
void Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardOverItem__PlayDestroyParticle (Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardOverItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MiniGame.Scripts.Board.MiniGameBoardOverItem$$PlayDestroyParticle
   void Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardOverItem__PlayDestroyParticle
   (Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardOverItem_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardOverItem__PlayDestroyParticle_218bbc4
               (void)

{
  long lVar1;
  
  lVar1 = Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardOverItem__GetDestroyParticle_218bbe4
                    ();
  if (lVar1 != 0) {
    if (pcRam0000000005c35e30 == (code *)0x0) {
      pcRam0000000005c35e30 = (code *)FUN_012d0d84(&UNK_043e020e,0);
    }
                    /* WARNING: Could not recover jumptable at 0x03bbc604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000005c35e30)(lVar1,1);
    return;
  }
  return;
}

