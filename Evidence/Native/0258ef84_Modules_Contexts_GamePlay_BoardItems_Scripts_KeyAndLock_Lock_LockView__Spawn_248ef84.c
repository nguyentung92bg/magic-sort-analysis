/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.KeyAndLock.Lock.LockView$$Spawn
void Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Lock_LockView__Spawn (Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Lock_LockView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.KeyAndLock.Lock.LockView$$Spawn
   void Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Lock_LockView__Spawn
   (Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Lock_LockView_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Lock_LockView__Spawn_248ef84
               (long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  if ((bRam0000000005c2b297 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c2b297 = 1;
  }
  lVar3 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
  puVar1 = PTR_DAT_0576c200;
  if (lVar3 != 0) {
    UnityEngine_GameObject__SetActive_408e318(lVar3,1,0);
    uVar5 = *(undefined8 *)(param_1 + 0x68);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar4 = UnityEngine_Object__op_Inequality_408e110(uVar5,0,0);
    if ((uVar4 & 1) == 0) {
      return;
    }
    lVar3 = *(long *)(param_1 + 0x68);
    if (lVar3 != 0) {
      if ((bRam0000000005c2b28f & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_057719c0);
        bRam0000000005c2b28f = 1;
      }
      lVar3 = *(long *)(lVar3 + 0x18);
      if (lVar3 != 0) {
        uVar5 = *(undefined8 *)PTR_DAT_057719c0;
        if (pcRam0000000005c28b88 == (code *)0x0) {
          pcRam0000000005c28b88 = (code *)FUN_012d0d84(&UNK_0438cf2c,uVar5,0,0);
        }
        uVar2 = (*pcRam0000000005c28b88)(uVar5);
        if (pcRam0000000005c28b70 == (code *)0x0) {
          pcRam0000000005c28b70 = (code *)FUN_012d0d84(&UNK_0438ce84);
        }
                    /* WARNING: Could not recover jumptable at 0x02079af8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000005c28b70)(0,lVar3,uVar2,0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

