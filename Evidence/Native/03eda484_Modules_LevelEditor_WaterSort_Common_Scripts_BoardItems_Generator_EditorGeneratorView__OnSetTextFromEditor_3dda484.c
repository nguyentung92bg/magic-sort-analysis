/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Generator.EditorGeneratorView$$OnSetTextFromEditor
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Generator_EditorGeneratorView__OnSetTextFromEditor (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Generator_EditorGeneratorView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Generator.EditorGeneratorView$$OnSetTextFromEditor
   void 
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Generator_EditorGeneratorView__OnSetTextFromEditor
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Generator_EditorGeneratorView_o* __this,
   const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Generator_EditorGeneratorView__OnSetTextFromEditor_3dda484
               (long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined4 uStack_14;
  
  uStack_14 = 0;
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* try { // try from 03eda4a0 to 03fda4c3 has its CatchHandler @ 03eda620 */
    uVar1 = System_Int32__TryParse_26c9e7c
                      (*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x218),&uStack_14,0);
    if (((uVar1 & 1) != 0) && (lVar2 = *(long *)(param_1 + 0x38), lVar2 != 0)) {
      (**(code **)(lVar2 + 0x18))
                (*(undefined8 *)(lVar2 + 0x40),uStack_14,*(undefined8 *)(lVar2 + 0x28));
    }
                    /* try { // try from 03eda4d0 to 03fda4d3 has its CatchHandler @ 03eda618 */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03eda4d8 to 03fda4df has its CatchHandler @ 03eda614 */
  FUN_012d0ef0();
}

