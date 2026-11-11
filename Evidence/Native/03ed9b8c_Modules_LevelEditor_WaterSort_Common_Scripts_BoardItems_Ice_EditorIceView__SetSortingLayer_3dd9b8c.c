/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Ice.EditorIceView$$SetSortingLayer
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Ice_EditorIceView__SetSortingLayer (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Ice_EditorIceView_o* __this, System_String_o* sortingLayerName, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Ice.EditorIceView$$SetSortingLayer
   void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Ice_EditorIceView__SetSortingLayer
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Ice_EditorIceView_o* __this,
   System_String_o* sortingLayerName, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Ice_EditorIceView__SetSortingLayer_3dd9b8c
               (long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    if (pcRam0000000005c39c20 == (code *)0x0) {
      pcRam0000000005c39c20 = (code *)FUN_012d0d84(&UNK_043eaefb);
    }
                    /* WARNING: Could not recover jumptable at 0x0418263c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000005c39c20)(lVar1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

