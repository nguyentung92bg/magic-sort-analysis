/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.MergeDragSelection$$IsTargetOutsideOfTheBoard
bool Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeDragSelection__IsTargetOutsideOfTheBoard (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeDragSelection_o* __this, UnityEngine_Vector2_o worldPos, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MergeMiniGame.Scripts.Board.MergeDragSelection$$IsTargetOutsideOfTheBoard
   bool 
   Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeDragSelection__IsTargetOutsideOfTheBoard
   (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeDragSelection_o* __this,
   UnityEngine_Vector2_o worldPos, const MethodInfo* method); */

uint Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeDragSelection__IsTargetOutsideOfTheBoard_4110a5c
               (long param_1)

{
  uint uVar1;
  undefined8 uStack_8;
  
  uStack_8 = 0;
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar1 = Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeBoard__TryGetCellWithWorldPosition_410d134
                      (*(long *)(param_1 + 0x20),&uStack_8);
    return ~uVar1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

