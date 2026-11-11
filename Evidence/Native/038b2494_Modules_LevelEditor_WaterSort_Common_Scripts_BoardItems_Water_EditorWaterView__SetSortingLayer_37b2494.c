/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Water.EditorWaterView$$SetSortingLayer
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Water_EditorWaterView__SetSortingLayer (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Water_EditorWaterView_o* __this, System_String_o* sortingLayer, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Water.EditorWaterView$$SetSortingLayer
   void 
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Water_EditorWaterView__SetSortingLayer
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Water_EditorWaterView_o* __this,
   System_String_o* sortingLayer, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Water_EditorWaterView__SetSortingLayer_37b2494
               (long param_1,undefined8 param_2)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    UnityEngine_Renderer__set_sortingLayerName_40825fc(*(long *)(param_1 + 0x30),param_2,0);
    if (*(long *)(param_1 + 0x28) != 0) {
      UnityEngine_Renderer__set_sortingLayerName_40825fc(*(long *)(param_1 + 0x28),param_2,0);
      lVar1 = *(long *)(param_1 + 0x38);
      if (lVar1 != 0) {
        if (pcRam0000000005c39c20 == (code *)0x0) {
          pcRam0000000005c39c20 = (code *)FUN_012d0d84(&UNK_043eaefb);
        }
                    /* WARNING: Could not recover jumptable at 0x0418263c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000005c39c20)(lVar1,param_2);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

