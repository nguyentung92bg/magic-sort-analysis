/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.MergeDragSelection$$CanSelectAsOrigin
bool Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeDragSelection__CanSelectAsOrigin (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeDragSelection_o* __this, Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeBoardCell_o* cell, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.MergeDragSelection$$CanSelectAsOrigin
   bool Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeDragSelection__CanSelectAsOrigin
   (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeDragSelection_o* __this,
   Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeBoardCell_o* cell, const MethodInfo*
   method); */

uint Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeDragSelection__CanSelectAsOrigin_4110d6c
               (long param_1,long param_2)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_0576c200;
                    /* try { // try from 04210d88 to 04310d8b has its CatchHandler @ 042111d8 */
  if ((bRam0000000005c3abf7 & 1) == 0) {
                    /* try { // try from 04210d98 to 04310da7 has its CatchHandler @ 042111d4 */
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c3abf7 = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
                    /* try { // try from 04210dc4 to 04310dcf has its CatchHandler @ 042111d8 */
  uVar3 = UnityEngine_Object__op_Equality_407f288(param_2,uVar4,0);
  if ((uVar3 & 1) != 0) {
    return 0;
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if (*(long *)(param_2 + 0x60) != 0) {
    uVar2 = Modules_Infrastructure_Common_Scripts_Component_Lock__get_IsLocked_40eab78
                      (*(long *)(param_2 + 0x60),0);
    return ~uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

