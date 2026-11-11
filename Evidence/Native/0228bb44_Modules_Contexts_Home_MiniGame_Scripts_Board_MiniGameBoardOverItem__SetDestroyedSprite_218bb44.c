/* IL2CPP: Modules.Contexts.Home.MiniGame.Scripts.Board.MiniGameBoardOverItem$$SetDestroyedSprite
void Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardOverItem__SetDestroyedSprite (Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardOverItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MiniGame.Scripts.Board.MiniGameBoardOverItem$$SetDestroyedSprite
   void Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardOverItem__SetDestroyedSprite
   (Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardOverItem_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardOverItem__SetDestroyedSprite_218bb44
               (long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardOverItem__GetDestroyedSprite_218bb70
                    ();
  lVar2 = *(long *)(param_1 + 0x38);
  if (lVar2 != 0) {
    if (pcRam0000000005c3a730 == (code *)0x0) {
      pcRam0000000005c3a730 = (code *)FUN_012d0d84(&UNK_043ef929);
    }
                    /* WARNING: Could not recover jumptable at 0x04195ba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000005c3a730)(lVar2,uVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

