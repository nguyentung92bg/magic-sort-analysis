/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.KeyAndLock.Lock.LockItem$$<Unlock>b__12_0
void Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Lock_LockItem___Unlock_b__12_0 (Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Lock_LockItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.KeyAndLock.Lock.LockItem$$<Unlock>b__12_0
   void Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Lock_LockItem___Unlock_b__12_0
   (Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Lock_LockItem_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Lock_LockItem___Unlock_b__12_0_248ef48
               (long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  *(undefined8 *)(param_1 + 0x48) = 0;
  FUN_012d0d74((undefined8 *)(param_1 + 0x48),0);
  puVar4 = (undefined8 *)(param_1 + 0x50);
  *puVar4 = 0;
  if (iRam0000000005c3d478 != 0) {
    puVar1 = (ulong *)(((ulong)puVar4 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar4 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}

