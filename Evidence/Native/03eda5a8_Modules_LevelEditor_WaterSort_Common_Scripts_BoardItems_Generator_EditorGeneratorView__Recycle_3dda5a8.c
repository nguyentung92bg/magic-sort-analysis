/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Generator.EditorGeneratorView$$Recycle
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Generator_EditorGeneratorView__Recycle (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Generator_EditorGeneratorView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Generator.EditorGeneratorView$$Recycle
   void 
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Generator_EditorGeneratorView__Recycle
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Generator_EditorGeneratorView_o* __this,
   const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Generator_EditorGeneratorView__Recycle_3dda5a8
               (long param_1)

{
  long lVar1;
  
  lVar1 = UnityEngine_Component__get_transform_408b444(param_1,0);
  if (lVar1 != 0) {
                    /* try { // try from 03eda5c4 to 03fda5c7 has its CatchHandler @ 03eda618 */
    UnityEngine_Transform__SetParent_409352c(lVar1,0,0);
  }
                    /* try { // try from 03eda5c8 to 03fda5cb has its CatchHandler @ 03eda614 */
  lVar1 = *(long *)(param_1 + 0x30);
                    /* try { // try from 03eda5cc to 03fda5cf has its CatchHandler @ 03eda5e8 */
  if (lVar1 != 0) {
    if (pcRam0000000005c3a388 == (code *)0x0) {
      pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
    }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000005c3a388)(lVar1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03eda5d8 with catch @ 03eda5e0
                       try { // try from 03eda5e0 to 03fda63b has its CatchHandler @ 03eda318 */
  FUN_012d0ef0();
}

