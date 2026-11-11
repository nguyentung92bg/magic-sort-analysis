/* IL2CPP: Modules.Contexts.Home.MiniGame.Scripts.Board.MiniGameBoardOverItem$$Initialize
void Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardOverItem__Initialize (Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardOverItem_o* __this, Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameItemData_o* itemData, Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameLevelItemPlacementData_o* itemPlacementData, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MiniGame.Scripts.Board.MiniGameBoardOverItem$$Initialize
   void Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardOverItem__Initialize
   (Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardOverItem_o* __this,
   Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameItemData_o* itemData,
   Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameLevelItemPlacementData_o* itemPlacementData,
   const MethodInfo* method); */

void Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardOverItem__Initialize_218bae0
               (long param_1,long param_2,undefined8 param_3)

{
  *(long *)(param_1 + 0x18) = param_2;
  FUN_012d0d74();
  *(undefined8 *)(param_1 + 0x20) = param_3;
  FUN_012d0d74((undefined8 *)(param_1 + 0x20),param_3);
  if ((param_2 != 0) && (*(long *)(param_1 + 0x38) != 0)) {
    UnityEngine_SpriteRenderer__set_sprite_4095b64
              (*(long *)(param_1 + 0x38),*(undefined8 *)(param_2 + 0x20),0);
    *(undefined1 *)(param_1 + 0x78) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

