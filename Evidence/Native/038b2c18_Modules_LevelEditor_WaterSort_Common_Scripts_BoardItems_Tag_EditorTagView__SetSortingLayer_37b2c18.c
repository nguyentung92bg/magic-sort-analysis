/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Tag.EditorTagView$$SetSortingLayer
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Tag_EditorTagView__SetSortingLayer (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Tag_EditorTagView_o* __this, System_String_o* sortingLayerName, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Tag.EditorTagView$$SetSortingLayer
   void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Tag_EditorTagView__SetSortingLayer
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Tag_EditorTagView_o* __this,
   System_String_o* sortingLayerName, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Tag_EditorTagView__SetSortingLayer_37b2c18
               (long param_1,undefined8 param_2)

{
  long lVar1;
  
                    /* try { // try from 038b2c1c to 039b2c1f has its CatchHandler @ 038b2d68 */
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

