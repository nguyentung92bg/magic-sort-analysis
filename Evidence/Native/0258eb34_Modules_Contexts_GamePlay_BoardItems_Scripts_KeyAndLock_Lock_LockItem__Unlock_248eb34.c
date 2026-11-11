/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.KeyAndLock.Lock.LockItem$$Unlock
void Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Lock_LockItem__Unlock (Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Lock_LockItem_o* __this, float delay, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.KeyAndLock.Lock.LockItem$$Unlock
   void Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Lock_LockItem__Unlock
   (Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Lock_LockItem_o* __this, float delay,
   const MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Lock_LockItem__Unlock_248eb34
               (undefined8 param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  if ((bRam0000000005c2b295 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057696e8);
    FUN_012d0dc8(PTR_DAT_057606c8);
    bRam0000000005c2b295 = 1;
  }
  puVar4 = PTR_DAT_057606c8;
  if (*(long *)(param_2 + 0x40) != 0) {
    Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Lock_LockView__PlayUnlockAnimation_248ebf0
              (param_1);
    lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
    if (lVar5 != 0) {
      DG_Tweening_TweenCallback___ctor_1ed6da8(lVar5,param_2,*(undefined8 *)PTR_DAT_057696e8,0);
      uVar6 = DG_Tweening_DOVirtual__DelayedCall_1edcb38((float)param_1 + _UNK_04321760,lVar5,0,0);
      puVar7 = (undefined8 *)(param_2 + 0x60);
      *puVar7 = uVar6;
      if (iRam0000000005c3d478 != 0) {
        puVar1 = (ulong *)(((ulong)puVar7 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

