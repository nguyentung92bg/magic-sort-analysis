/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Safe.EditorSafeView$$OnSetTextFromEditor
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Safe_EditorSafeView__OnSetTextFromEditor (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Safe_EditorSafeView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Safe.EditorSafeView$$OnSetTextFromEditor
   void 
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Safe_EditorSafeView__OnSetTextFromEditor
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Safe_EditorSafeView_o* __this, const
   MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Safe_EditorSafeView__OnSetTextFromEditor_37b35a4
               (long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined4 uStack_14;
  
  uStack_14 = 0;
  if (*(long *)(param_1 + 0x30) != 0) {
                    /* catch() { ... } // from try @ 038b3598 with catch @ 038b35c8 */
    uVar1 = System_Int32__TryParse_26c9e7c
                      (*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x218),&uStack_14,0);
    if (((uVar1 & 1) != 0) && (lVar2 = *(long *)(param_1 + 0x48), lVar2 != 0)) {
                    /* try { // try from 038b35d8 to 039b35eb has its CatchHandler @ 038b374c */
      (**(code **)(lVar2 + 0x18))
                (*(undefined8 *)(lVar2 + 0x40),uStack_14,*(undefined8 *)(lVar2 + 0x28));
    }
                    /* catch() { ... } // from try @ 038afd00 with catch @ 038b35ec
                       try { // try from 038b35ec to 039b360b has its CatchHandler @ 038ae800 */
                    /* catch() { ... } // from try @ 038afb1c with catch @ 038b35f0 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

