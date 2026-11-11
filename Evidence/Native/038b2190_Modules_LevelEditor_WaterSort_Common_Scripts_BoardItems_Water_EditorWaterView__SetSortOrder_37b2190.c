/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Water.EditorWaterView$$SetSortOrder
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Water_EditorWaterView__SetSortOrder (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Water_EditorWaterView_o* __this, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Water.EditorWaterView$$SetSortOrder
   void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Water_EditorWaterView__SetSortOrder
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Water_EditorWaterView_o* __this,
   Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Water_EditorWaterView__SetSortOrder_37b2190
               (long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    UnityEngine_Renderer__set_sortingOrder_40826fc(*(long *)(param_1 + 0x30),param_3,0);
    if (*(long *)(param_1 + 0x28) != 0) {
      UnityEngine_Renderer__set_sortingOrder_40826fc(*(long *)(param_1 + 0x28),param_3,0);
      lVar1 = *(long *)(param_1 + 0x38);
      if (lVar1 != 0) {
        if (pcRam0000000005c39c40 == (code *)0x0) {
          pcRam0000000005c39c40 = (code *)FUN_012d0d84(&UNK_043eafc0);
        }
                    /* WARNING: Could not recover jumptable at 0x0418273c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000005c39c40)(lVar1,param_3);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

