/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Generator.EditorGeneratorView$$SetSortingLayer
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Generator_EditorGeneratorView__SetSortingLayer (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Generator_EditorGeneratorView_o* __this, System_String_o* sortingLayerName, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Generator.EditorGeneratorView$$SetSortingLayer
   void 
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Generator_EditorGeneratorView__SetSortingLayer
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Generator_EditorGeneratorView_o* __this,
   System_String_o* sortingLayerName, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Generator_EditorGeneratorView__SetSortingLayer_3dda570
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
                    /* try { // try from 03eda588 to 03fda58f has its CatchHandler @ 03eda5f0 */
  FUN_012d0ef0();
}

