/* IL2CPP: Modules.Contexts.Home.MiniGame.Scripts.Board.MiniGameBoardItem$$GetActiveCellCount
int32_t Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardItem__GetActiveCellCount (Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MiniGame.Scripts.Board.MiniGameBoardItem$$GetActiveCellCount
   int32_t Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardItem__GetActiveCellCount
   (Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardItem_o* __this, const MethodInfo*
   method); */

undefined4
Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardItem__GetActiveCellCount_218aad0
          (undefined8 param_1)

{
  long lVar1;
  
  if ((bRam0000000005c29d58 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05813a78);
    bRam0000000005c29d58 = 1;
  }
  lVar1 = Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardItem__GetActiveCells_218ab1c
                    (param_1);
  if (lVar1 != 0) {
    return *(undefined4 *)(lVar1 + 0x20);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

