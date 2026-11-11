/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Water.EditorWaterView$$ShowRainbow
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Water_EditorWaterView__ShowRainbow (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Water_EditorWaterView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Water.EditorWaterView$$ShowRainbow
   void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Water_EditorWaterView__ShowRainbow
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Water_EditorWaterView_o* __this, const
   MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Water_EditorWaterView__ShowRainbow_37b21e8
               (long param_1)

{
  long lVar1;
  
                    /* try { // try from 038b21e8 to 039b21ef has its CatchHandler @ 038b3248 */
  lVar1 = *(long *)(param_1 + 0x38);
  if (lVar1 != 0) {
    if (pcRam0000000005c39bb8 == (code *)0x0) {
      pcRam0000000005c39bb8 = (code *)FUN_012d0d84(&UNK_043eabe3);
    }
                    /* WARNING: Could not recover jumptable at 0x041822f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000005c39bb8)(lVar1,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

