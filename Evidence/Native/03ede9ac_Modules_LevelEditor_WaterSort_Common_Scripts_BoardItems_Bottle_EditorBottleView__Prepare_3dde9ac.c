/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Bottle.EditorBottleView$$Prepare
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleView__Prepare (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleView_o* __this, int32_t height, int32_t bottleAndWaterVariant, int32_t frontSortOrder, int32_t backSortOrder, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Bottle.EditorBottleView$$Prepare
   void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleView__Prepare
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleView_o* __this,
   int32_t height, int32_t bottleAndWaterVariant, int32_t frontSortOrder, int32_t backSortOrder,
   const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleView__Prepare_3dde9ac
               (long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  
  Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleView__SetBottleHeightAndVariant_3ddfda0
            ();
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    if (pcRam0000000005c39c40 == (code *)0x0) {
      pcRam0000000005c39c40 = (code *)FUN_012d0d84(&UNK_043eafc0);
    }
                    /* WARNING: Could not recover jumptable at 0x0418273c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000005c39c40)(lVar1,param_4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

