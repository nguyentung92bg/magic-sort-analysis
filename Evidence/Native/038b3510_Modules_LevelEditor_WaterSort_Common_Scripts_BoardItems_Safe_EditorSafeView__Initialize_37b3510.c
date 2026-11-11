/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Safe.EditorSafeView$$Initialize
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Safe_EditorSafeView__Initialize (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Safe_EditorSafeView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Safe.EditorSafeView$$Initialize
   void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Safe_EditorSafeView__Initialize
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Safe_EditorSafeView_o* __this, const
   MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Safe_EditorSafeView__Initialize_37b3510
               (long param_1)

{
  long lVar1;
  
                    /* catch() { ... } // from try @ 038b0000 with catch @ 038b3510 */
  lVar1 = *(long *)(param_1 + 0x38);
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
                    /* try { // try from 038b352c to 039b352f has its CatchHandler @ 038b3560 */
  FUN_012d0ef0();
}

