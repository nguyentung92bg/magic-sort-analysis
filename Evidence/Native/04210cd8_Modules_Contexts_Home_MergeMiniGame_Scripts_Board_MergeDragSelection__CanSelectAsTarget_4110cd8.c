/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.MergeDragSelection$$CanSelectAsTarget
bool Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeDragSelection__CanSelectAsTarget (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeDragSelection_o* __this, Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeBoardCell_o* target, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.MergeDragSelection$$CanSelectAsTarget
   bool Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeDragSelection__CanSelectAsTarget
   (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeDragSelection_o* __this,
   Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeBoardCell_o* target, const MethodInfo*
   method); */

uint Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeDragSelection__CanSelectAsTarget_4110cd8
               (long param_1,long param_2)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_0576c200;
  if ((bRam0000000005c3abf6 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c3abf6 = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
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

