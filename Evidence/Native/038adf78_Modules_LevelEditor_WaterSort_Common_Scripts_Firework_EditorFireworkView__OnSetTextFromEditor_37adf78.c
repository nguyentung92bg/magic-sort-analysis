/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.Firework.EditorFireworkView$$OnSetTextFromEditor
void Modules_LevelEditor_WaterSort_Common_Scripts_Firework_EditorFireworkView__OnSetTextFromEditor (Modules_LevelEditor_WaterSort_Common_Scripts_Firework_EditorFireworkView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.Firework.EditorFireworkView$$OnSetTextFromEditor
   void 
   Modules_LevelEditor_WaterSort_Common_Scripts_Firework_EditorFireworkView__OnSetTextFromEditor
   (Modules_LevelEditor_WaterSort_Common_Scripts_Firework_EditorFireworkView_o* __this, const
   MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_Firework_EditorFireworkView__OnSetTextFromEditor_37adf78
               (long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined4 uStack_14;
  
  uStack_14 = 0;
                    /* try { // try from 038adf84 to 039adf87 has its CatchHandler @ 038adfbc */
                    /* try { // try from 038adf88 to 039adfcb has its CatchHandler @ 038ade04 */
  if (*(long *)(param_1 + 0x30) != 0) {
    uVar1 = System_Int32__TryParse_26c9e7c
                      (*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x218),&uStack_14,0);
    if (((uVar1 & 1) != 0) && (lVar2 = *(long *)(param_1 + 0x38), lVar2 != 0)) {
                    /* catch() { ... } // from try @ 038adf84 with catch @ 038adfbc */
      (**(code **)(lVar2 + 0x18))
                (*(undefined8 *)(lVar2 + 0x40),uStack_14,*(undefined8 *)(lVar2 + 0x28));
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 038adfcc to 039adfd3 has its CatchHandler @ 038adfe8 */
  FUN_012d0ef0();
}

