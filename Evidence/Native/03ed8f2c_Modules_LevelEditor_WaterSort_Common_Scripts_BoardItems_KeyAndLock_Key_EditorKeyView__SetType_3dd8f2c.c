/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.KeyAndLock.Key.EditorKeyView$$SetType
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_KeyAndLock_Key_EditorKeyView__SetType (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_KeyAndLock_Key_EditorKeyView_o* __this, int32_t keyLockType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.KeyAndLock.Key.EditorKeyView$$SetType
   void 
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_KeyAndLock_Key_EditorKeyView__SetType
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_KeyAndLock_Key_EditorKeyView_o* __this,
   int32_t keyLockType, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_KeyAndLock_Key_EditorKeyView__SetType_3dd8f2c
               (long param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
                    /* catch() { ... } // from try @ 03ed8e6c with catch @ 03ed8f2c
                       catch() { ... } // from try @ 03ed8efc with catch @ 03ed8f2c */
                    /* try { // try from 03ed8f34 to 03fd8f37 has its CatchHandler @ 03ed8fe4 */
                    /* try { // try from 03ed8f38 to 03fd8f4f has its CatchHandler @ 03ed8b64 */
  if (param_2 == 1) {
    lVar1 = *(long *)(param_1 + 0x30);
    if (lVar1 == 0) goto LAB_03ed8f90;
    puVar3 = (undefined8 *)(param_1 + 0x40);
  }
  else if (param_2 == 2) {
    lVar1 = *(long *)(param_1 + 0x30);
    if (lVar1 == 0) goto LAB_03ed8f90;
    puVar3 = (undefined8 *)(param_1 + 0x48);
                    /* try { // try from 03ed8f68 to 03fd8fc3 has its CatchHandler @ 03ed8b64 */
  }
  else {
    if (param_2 != 3) {
      return;
    }
    lVar1 = *(long *)(param_1 + 0x30);
                    /* try { // try from 03ed8f50 to 03fd8f67 has its CatchHandler @ 03ed8fd4 */
    if (lVar1 == 0) {
LAB_03ed8f90:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    puVar3 = (undefined8 *)(param_1 + 0x38);
  }
  uVar2 = *puVar3;
  if (pcRam0000000005c3a730 == (code *)0x0) {
    pcRam0000000005c3a730 = (code *)FUN_012d0d84(&UNK_043ef929);
  }
                    /* WARNING: Could not recover jumptable at 0x04195ba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000005c3a730)(lVar1,uVar2);
  return;
}

