/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Duck.EditorDuckHouseView$$SetSorting
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Duck_EditorDuckHouseView__SetSorting (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Duck_EditorDuckHouseView_o* __this, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Duck.EditorDuckHouseView$$SetSorting
   void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Duck_EditorDuckHouseView__SetSorting
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Duck_EditorDuckHouseView_o* __this,
   Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Duck_EditorDuckHouseView__SetSorting_3ddd548
               (long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    UnityEngine_Rendering_SortingGroup__set_sortingOrder_3d5ef00
              (*(long *)(param_1 + 0x28),param_3,0);
    lVar1 = *(long *)(param_1 + 0x28);
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

