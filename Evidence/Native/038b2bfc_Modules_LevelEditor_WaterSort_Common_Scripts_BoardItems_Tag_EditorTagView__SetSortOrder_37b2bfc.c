/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Tag.EditorTagView$$SetSortOrder
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Tag_EditorTagView__SetSortOrder (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Tag_EditorTagView_o* __this, int32_t sortOrder, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Tag.EditorTagView$$SetSortOrder
   void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Tag_EditorTagView__SetSortOrder
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Tag_EditorTagView_o* __this, int32_t
   sortOrder, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Tag_EditorTagView__SetSortOrder_37b2bfc
               (long param_1,undefined4 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
                    /* try { // try from 038b2c04 to 039b2c07 has its CatchHandler @ 038b2d7c */
  if (lVar1 != 0) {
    if (pcRam0000000005c39c40 == (code *)0x0) {
      pcRam0000000005c39c40 = (code *)FUN_012d0d84(&UNK_043eafc0);
    }
                    /* WARNING: Could not recover jumptable at 0x0418273c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000005c39c40)(lVar1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

