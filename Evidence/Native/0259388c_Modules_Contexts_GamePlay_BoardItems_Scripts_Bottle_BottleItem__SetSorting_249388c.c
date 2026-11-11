/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$SetSorting
void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__SetSorting (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$SetSorting
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__SetSorting
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this,
   Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, const MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__SetSorting_249388c
               (long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x50);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if (*(long *)(lVar1 + 0x58) != 0) {
    UnityEngine_Rendering_SortingGroup__set_sortingOrder_3d5ef00
              (*(long *)(lVar1 + 0x58),param_3,0,0);
    lVar1 = *(long *)(lVar1 + 0x58);
    if (lVar1 != 0) {
      if (pcRam0000000005c37828 == (code *)0x0) {
        pcRam0000000005c37828 = (code *)FUN_012d0d84(&UNK_043e4d03);
      }
                    /* WARNING: Could not recover jumptable at 0x03e5ee84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000005c37828)(lVar1,param_2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

