/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.KeyAndLock.Lock.LockView$$Unlock
void Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Lock_LockView__Unlock (Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Lock_LockView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.KeyAndLock.Lock.LockView$$Unlock
   void Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Lock_LockView__Unlock
   (Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Lock_LockView_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Lock_LockView__Unlock_248f2b0
               (long param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *(long *)(param_1 + 0x68);
  if (lVar2 == 0) {
    return;
  }
  if ((bRam0000000005c2b28e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05761f00);
    bRam0000000005c2b28e = 1;
  }
  lVar2 = *(long *)(lVar2 + 0x18);
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)PTR_DAT_05761f00;
    if (pcRam0000000005c28b88 == (code *)0x0) {
      pcRam0000000005c28b88 = (code *)FUN_012d0d84(&UNK_0438cf2c,uVar3,0,0);
    }
    uVar1 = (*pcRam0000000005c28b88)(uVar3);
    if (pcRam0000000005c28b70 == (code *)0x0) {
      pcRam0000000005c28b70 = (code *)FUN_012d0d84(&UNK_0438ce84);
    }
                    /* WARNING: Could not recover jumptable at 0x02079af8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000005c28b70)(0,lVar2,uVar1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

