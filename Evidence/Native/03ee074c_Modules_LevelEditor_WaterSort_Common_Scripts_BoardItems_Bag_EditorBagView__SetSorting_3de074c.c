/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Bag.EditorBagView$$SetSorting
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bag_EditorBagView__SetSorting (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bag_EditorBagView_o* __this, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Bag.EditorBagView$$SetSorting
   void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bag_EditorBagView__SetSorting
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bag_EditorBagView_o* __this,
   Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bag_EditorBagView__SetSorting_3de074c
               (long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* try { // try from 03ee0764 to 03fe0767 has its CatchHandler @ 03ee0770 */
                    /* try { // try from 03ee0768 to 03fe076b has its CatchHandler @ 03ee076c */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 03ee0768 with catch @ 03ee076c
                       try { // try from 03ee076c to 03fe078f has its CatchHandler @ 03ee068c */
    UnityEngine_Rendering_SortingGroup__set_sortingOrder_3d5ef00
              (*(long *)(param_1 + 0x20),param_3,0);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 03ee0764 with catch @ 03ee0770
                        */
    lVar1 = *(long *)(param_1 + 0x20);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 03ee0718 with catch @ 03ee0774
                        */
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

