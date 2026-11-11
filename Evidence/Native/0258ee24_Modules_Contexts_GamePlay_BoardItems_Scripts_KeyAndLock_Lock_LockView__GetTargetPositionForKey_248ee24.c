/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.KeyAndLock.Lock.LockView$$GetTargetPositionForKey
UnityEngine_Vector3_o Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Lock_LockView__GetTargetPositionForKey (Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Lock_LockView_o* __this, int32_t height, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.KeyAndLock.Lock.LockView$$GetTargetPositionForKey
   UnityEngine_Vector3_o
   Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Lock_LockView__GetTargetPositionForKey
   (Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Lock_LockView_o* __this, int32_t height,
   const MethodInfo* method); */

undefined4
Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Lock_LockView__GetTargetPositionForKey_248ee24
          (long param_1,int param_2)

{
  long lVar1;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  if (param_2 == 5) {
    lVar1 = *(long *)(param_1 + 0x50);
  }
  else {
    lVar1 = *(long *)(param_1 + 0x48);
  }
  if (lVar1 != 0) {
    uStack_28 = 0;
    uStack_30 = 0;
    if (pcRam0000000005c3a608 == (code *)0x0) {
      pcRam0000000005c3a608 = (code *)FUN_012d0d84(&UNK_043eee87,0);
    }
    (*pcRam0000000005c3a608)(lVar1,&uStack_30);
    return (undefined4)uStack_30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

