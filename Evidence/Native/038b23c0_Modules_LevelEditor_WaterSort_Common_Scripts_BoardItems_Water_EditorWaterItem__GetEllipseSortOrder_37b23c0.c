/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Water.EditorWaterItem$$GetEllipseSortOrder
int32_t Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Water_EditorWaterItem__GetEllipseSortOrder (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Water_EditorWaterItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Water.EditorWaterItem$$GetEllipseSortOrder
   int32_t
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Water_EditorWaterItem__GetEllipseSortOrder
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Water_EditorWaterItem_o* __this, const
   MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Water_EditorWaterItem__GetEllipseSortOrder_37b23c0
               (long param_1)

{
  long lVar1;
  
  if ((*(long *)(param_1 + 0x30) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 0x30), lVar1 != 0)) {
    if (pcRam0000000005c39c38 == (code *)0x0) {
      pcRam0000000005c39c38 = (code *)FUN_012d0d84(&UNK_043eaf97);
    }
                    /* WARNING: Could not recover jumptable at 0x041826f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000005c39c38)(lVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

