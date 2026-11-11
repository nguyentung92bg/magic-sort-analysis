/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.KeyAndLock.Lock.EditorLockView$$Recycle
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_KeyAndLock_Lock_EditorLockView__Recycle (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_KeyAndLock_Lock_EditorLockView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.KeyAndLock.Lock.EditorLockView$$Recycle
   void 
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_KeyAndLock_Lock_EditorLockView__Recycle
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_KeyAndLock_Lock_EditorLockView_o*
   __this, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_KeyAndLock_Lock_EditorLockView__Recycle_3dd8ea0
               (undefined8 param_1)

{
  long lVar1;
  
                    /* try { // try from 03ed8ea8 to 03fd8ebf has its CatchHandler @ 03ed8f20 */
  lVar1 = UnityEngine_Component__get_transform_408b444(param_1,0);
  if (lVar1 != 0) {
    if (pcRam0000000005c3a5a0 == (code *)0x0) {
      pcRam0000000005c3a5a0 = (code *)FUN_012d0d84(&UNK_043eec3f,0,0);
    }
                    /* WARNING: Could not recover jumptable at 0x04193570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000005c3a5a0)(lVar1,0,1);
    return;
  }
  return;
}

