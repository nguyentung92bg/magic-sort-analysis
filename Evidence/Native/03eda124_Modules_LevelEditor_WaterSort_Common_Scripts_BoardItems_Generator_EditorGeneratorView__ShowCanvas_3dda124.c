/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Generator.EditorGeneratorView$$ShowCanvas
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Generator_EditorGeneratorView__ShowCanvas (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Generator_EditorGeneratorView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Generator.EditorGeneratorView$$ShowCanvas
   void 
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Generator_EditorGeneratorView__ShowCanvas
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Generator_EditorGeneratorView_o* __this,
   const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Generator_EditorGeneratorView__ShowCanvas_3dda124
               (long param_1)

{
  long lVar1;
  
                    /* try { // try from 03eda124 to 03fda127 has its CatchHandler @ 03eda1fc */
                    /* try { // try from 03eda128 to 03fda12b has its CatchHandler @ 03eda1f0 */
  lVar1 = *(long *)(param_1 + 0x30);
                    /* try { // try from 03eda12c to 03fda12f has its CatchHandler @ 03eda1e8 */
  if (lVar1 != 0) {
    if (pcRam0000000005c3a388 == (code *)0x0) {
      pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
    }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000005c3a388)(lVar1,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03eda140 to 03fda143 has its CatchHandler @ 03eda174 */
  FUN_012d0ef0();
}

