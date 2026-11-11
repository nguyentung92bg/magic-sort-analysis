/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.KeyAndLock.Lock.LockView$$Prepare
void Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Lock_LockView__Prepare (Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Lock_LockView_o* __this, int32_t keyLockType, bool isDouble, int32_t bottleHeight, float localPositionX, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.KeyAndLock.Lock.LockView$$Prepare
   void Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Lock_LockView__Prepare
   (Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Lock_LockView_o* __this, int32_t
   keyLockType, bool isDouble, int32_t bottleHeight, float localPositionX, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Lock_LockView__Prepare_248e958
               (undefined8 param_1,long param_2,undefined8 param_3,uint param_4)

{
  undefined4 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Lock_LockView__SetType_248f038
            (param_2,param_3,param_4 & 1);
  puVar2 = PTR_DAT_0576c200;
  lVar4 = *(long *)(param_2 + 0x68);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if ((bRam0000000005c2b290 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c2b290 = 1;
  }
  uVar5 = *(undefined8 *)(lVar4 + 0x28);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar3 = UnityEngine_Object__op_Equality_407f288(uVar5,0,0);
  uVar1 = _UNK_0438e930;
  if ((uVar3 & 1) != 0) {
    return;
  }
  if (*(long *)(lVar4 + 0x28) != 0) {
    UnityEngine_Transform__set_localPosition_4092ce0
              (param_1,_UNK_0438e930,0,*(long *)(lVar4 + 0x28),0);
    if (*(long *)(lVar4 + 0x30) != 0) {
      UnityEngine_Transform__set_localPosition_4092ce0
                (-(float)param_1,uVar1,0,*(long *)(lVar4 + 0x30),0);
      lVar4 = *(long *)(lVar4 + 0x38);
      if (lVar4 != 0) {
        if (pcRam0000000005c3a650 == (code *)0x0) {
          pcRam0000000005c3a650 = (code *)FUN_012d0d84(&UNK_043ef104,0);
        }
        (*pcRam0000000005c3a650)(lVar4,&stack0xffffffffffffffd0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

