/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.KeyAndLock.Lock.LockItem$$Prepare
void Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Lock_LockItem__Prepare (Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Lock_LockItem_o* __this, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* rightBottleItem, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* leftBottleItem, int32_t keyLockType, bool isDouble, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.KeyAndLock.Lock.LockItem$$Prepare
   void Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Lock_LockItem__Prepare
   (Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Lock_LockItem_o* __this,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* rightBottleItem,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* leftBottleItem, int32_t
   keyLockType, bool isDouble, const MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Lock_LockItem__Prepare_248e758
               (long param_1,long param_2,undefined8 param_3,undefined4 param_4,uint param_5)

{
  undefined4 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  
  plVar6 = (long *)(param_1 + 0x48);
  *plVar6 = param_2;
  FUN_012d0d74(plVar6);
  *(undefined8 *)(param_1 + 0x50) = param_3;
  FUN_012d0d74((undefined8 *)(param_1 + 0x50),param_3);
  if (*plVar6 != 0) {
    uVar1 = *(undefined4 *)(*plVar6 + 0x48);
    uVar7 = Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Lock_LockItem__CalculateInBottlePosition_248e7d0
                      (param_1);
    lVar4 = *(long *)(param_1 + 0x40);
    if (lVar4 != 0) {
      Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Lock_LockView__SetType_248f038
                (lVar4,param_4,param_5 & 1,uVar1);
      puVar2 = PTR_DAT_0576c200;
      lVar4 = *(long *)(lVar4 + 0x68);
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
                  (uVar7,_UNK_0438e930,0,*(long *)(lVar4 + 0x28),0);
        if (*(long *)(lVar4 + 0x30) != 0) {
          UnityEngine_Transform__set_localPosition_4092ce0
                    (-(float)uVar7,uVar1,0,*(long *)(lVar4 + 0x30),0);
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

