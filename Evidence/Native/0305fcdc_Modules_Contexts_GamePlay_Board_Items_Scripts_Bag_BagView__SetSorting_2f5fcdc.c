/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Bag.BagView$$SetSorting
void Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView__SetSorting (Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView_o* __this, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Bag.BagView$$SetSorting
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView__SetSorting
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView_o* __this,
   Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView__SetSorting_2f5fcdc
               (long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_0576c200;
  if ((bRam0000000005c308f5 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c308f5 = 1;
  }
                    /* try { // try from 0305fd1c to 0315fd1f has its CatchHandler @ 03060084 */
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
                    /* try { // try from 0305fd34 to 0315fd9b has its CatchHandler @ 030600b8 */
  uVar2 = UnityEngine_Object__op_Inequality_408e110(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_1 + 0x20) != 0) {
      UnityEngine_Rendering_SortingGroup__set_sortingOrder_3d5ef00
                (*(long *)(param_1 + 0x20),param_3,0);
      lVar3 = *(long *)(param_1 + 0x20);
      if (lVar3 != 0) {
        if (pcRam0000000005c37828 == (code *)0x0) {
          pcRam0000000005c37828 = (code *)FUN_012d0d84(&UNK_043e4d03);
        }
                    /* WARNING: Could not recover jumptable at 0x03e5ee84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000005c37828)(lVar3,param_2);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  return;
}

