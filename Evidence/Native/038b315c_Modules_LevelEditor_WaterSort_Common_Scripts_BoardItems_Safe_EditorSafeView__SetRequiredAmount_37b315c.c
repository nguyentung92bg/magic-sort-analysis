/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Safe.EditorSafeView$$SetRequiredAmount
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Safe_EditorSafeView__SetRequiredAmount (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Safe_EditorSafeView_o* __this, int32_t requiredAmount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Safe.EditorSafeView$$SetRequiredAmount
   void 
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Safe_EditorSafeView__SetRequiredAmount
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Safe_EditorSafeView_o* __this, int32_t
   requiredAmount, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Safe_EditorSafeView__SetRequiredAmount_37b315c
               (long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 uStack_14;
  
                    /* try { // try from 038b315c to 039b315f has its CatchHandler @ 038b3238 */
                    /* try { // try from 038b3160 to 039b316f has its CatchHandler @ 038ae800 */
  lVar2 = *(long *)(param_1 + 0x30);
  uStack_14 = param_2;
                    /* try { // try from 038b3170 to 039b317f has its CatchHandler @ 038b3224 */
  uVar1 = System_Int32__ToString_26c9768(&uStack_14,0);
  if (lVar2 != 0) {
                    /* try { // try from 038b3188 to 039b318f has its CatchHandler @ 038b3220 */
    TMPro_TMP_InputField__set_text_3790d40(lVar2,uVar1,0);
                    /* try { // try from 038b3194 to 039b31c7 has its CatchHandler @ 038b321c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

