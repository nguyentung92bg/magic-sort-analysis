/* IL2CPP: Modules.Contexts.Home.MiniGame.Scripts.Board.MiniGameBoardBoosterItem$$Initialize
void Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardBoosterItem__Initialize (Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardBoosterItem_o* __this, Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameItemData_o* itemData, Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameLevelItemPlacementData_o* itemPlacementData, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MiniGame.Scripts.Board.MiniGameBoardBoosterItem$$Initialize
   void Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardBoosterItem__Initialize
   (Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardBoosterItem_o* __this,
   Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameItemData_o* itemData,
   Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameLevelItemPlacementData_o* itemPlacementData,
   const MethodInfo* method); */

void Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardBoosterItem__Initialize_2188890
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 0x18) = param_2;
  FUN_012d0d74();
  *(undefined8 *)(param_1 + 0x20) = param_3;
  FUN_012d0d74((undefined8 *)(param_1 + 0x20),param_3);
  if ((*(long *)(param_1 + 0x38) != 0) &&
     (lVar1 = UnityEngine_GameObject__get_gameObject_408e764(*(long *)(param_1 + 0x38),0),
     lVar1 != 0)) {
    if (pcRam0000000005c3a388 == (code *)0x0) {
      pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
    }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000005c3a388)(lVar1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

