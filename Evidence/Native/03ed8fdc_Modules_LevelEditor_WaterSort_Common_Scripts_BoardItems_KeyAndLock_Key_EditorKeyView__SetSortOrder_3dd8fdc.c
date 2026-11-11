/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.KeyAndLock.Key.EditorKeyView$$SetSortOrder
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_KeyAndLock_Key_EditorKeyView__SetSortOrder (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_KeyAndLock_Key_EditorKeyView_o* __this, int32_t sortOrder, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.KeyAndLock.Key.EditorKeyView$$SetSortOrder
   void 
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_KeyAndLock_Key_EditorKeyView__SetSortOrder
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_KeyAndLock_Key_EditorKeyView_o* __this,
   int32_t sortOrder, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_KeyAndLock_Key_EditorKeyView__SetSortOrder_3dd8fdc
               (long param_1,undefined4 param_2)

{
  long lVar1;
  
                    /* try { // try from 03ed8fdc to 03fd8fe7 has its CatchHandler @ 03ed8b64 */
  lVar1 = *(long *)(param_1 + 0x30);
                    /* catch() { ... } // from try @ 03ed8f34 with catch @ 03ed8fe4
                       catch() { ... } // from try @ 03ed8fd8 with catch @ 03ed8fe4 */
  if (lVar1 != 0) {
    if (pcRam0000000005c39c40 == (code *)0x0) {
      pcRam0000000005c39c40 = (code *)FUN_012d0d84(&UNK_043eafc0);
    }
                    /* WARNING: Could not recover jumptable at 0x0418273c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000005c39c40)(lVar1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

