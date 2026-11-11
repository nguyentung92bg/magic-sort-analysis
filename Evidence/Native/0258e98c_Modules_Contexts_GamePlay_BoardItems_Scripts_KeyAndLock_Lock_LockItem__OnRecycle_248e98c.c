/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.KeyAndLock.Lock.LockItem$$OnRecycle
void Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Lock_LockItem__OnRecycle (Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Lock_LockItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.KeyAndLock.Lock.LockItem$$OnRecycle
   void Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Lock_LockItem__OnRecycle
   (Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Lock_LockItem_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Lock_LockItem__OnRecycle_248e98c
               (long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  
  lVar4 = *(long *)(param_1 + 0x60);
  if (lVar4 != 0) {
    DG_Tweening_TweenExtensions__Kill_1edd6a4(lVar4,0,0);
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  FUN_012d0d74((long *)(param_1 + 0x60),0);
  *(undefined8 *)(param_1 + 0x48) = 0;
  FUN_012d0d74((undefined8 *)(param_1 + 0x48),0);
  *(undefined8 *)(param_1 + 0x50) = 0;
  FUN_012d0d74((undefined8 *)(param_1 + 0x50),0);
  puVar5 = (undefined8 *)(param_1 + 0x58);
  *puVar5 = 0;
  if (iRam0000000005c3d478 != 0) {
    puVar1 = (ulong *)(((ulong)puVar5 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar5 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}

