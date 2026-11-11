/* IL2CPP: Modules.Contexts.Home.MiniGame.Scripts.Board.MiniGameBoardBasicItem$$Initialize
void Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardBasicItem__Initialize (Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardBasicItem_o* __this, Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameItemData_o* itemData, Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameLevelItemPlacementData_o* itemPlacementData, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MiniGame.Scripts.Board.MiniGameBoardBasicItem$$Initialize
   void Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardBasicItem__Initialize
   (Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardBasicItem_o* __this,
   Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameItemData_o* itemData,
   Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameLevelItemPlacementData_o* itemPlacementData,
   const MethodInfo* method); */

void Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardBasicItem__Initialize_21877b4
               (long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  *(long *)(param_1 + 0x18) = param_2;
  FUN_012d0d74();
  *(undefined8 *)(param_1 + 0x20) = param_3;
  FUN_012d0d74((undefined8 *)(param_1 + 0x20),param_3);
  if ((param_2 != 0) && (*(long *)(param_1 + 0x38) != 0)) {
                    /* try { // try from 022877fc to 02387803 has its CatchHandler @ 02288294 */
    UnityEngine_SpriteRenderer__set_sprite_4095b64
              (*(long *)(param_1 + 0x38),*(undefined8 *)(param_2 + 0x20),0);
    lVar1 = *(long *)(param_1 + 0x40);
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_2 + 0x20);
                    /* try { // try from 02287810 to 02387823 has its CatchHandler @ 02288298 */
      if (pcRam0000000005c3a730 == (code *)0x0) {
        pcRam0000000005c3a730 = (code *)FUN_012d0d84(&UNK_043ef929);
      }
                    /* WARNING: Could not recover jumptable at 0x04195ba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000005c3a730)(lVar1,uVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

