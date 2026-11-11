/* IL2CPP: Modules.Contexts.Home.MiniGame.Scripts.Board.MiniGameBoardItem$$TryCollect
bool Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardItem__TryCollect (Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MiniGame.Scripts.Board.MiniGameBoardItem$$TryCollect
   bool Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardItem__TryCollect
   (Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardItem_o* __this, const MethodInfo*
   method); */

undefined8
Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardItem__TryCollect_218aa9c(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((*(char *)(param_1 + 0x28) == '\0') &&
     (iVar1 = Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardItem__GetActiveCellCount_218aad0
                        (), iVar1 < 1)) {
    uVar2 = 1;
    *(undefined1 *)(param_1 + 0x28) = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

