/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.KeyAndLock.Lock.LockItem$$GetBottlePosition
UnityEngine_Vector3_o Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Lock_LockItem__GetBottlePosition (Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Lock_LockItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.KeyAndLock.Lock.LockItem$$GetBottlePosition
   UnityEngine_Vector3_o
   Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Lock_LockItem__GetBottlePosition
   (Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Lock_LockItem_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Lock_LockItem__GetBottlePosition_248ee50
               (long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  
  if ((bRam0000000005c2b296 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575a2d8);
    bRam0000000005c2b296 = 1;
  }
  if ((*(long *)(param_1 + 0x48) == 0) ||
     (plVar1 = (long *)Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                 (*(long *)(param_1 + 0x48),0), plVar1 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar3 = *plVar1;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_0575a2d8) {
        puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_0258eee8;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_0131971c(plVar1,*(long *)PTR_DAT_0575a2d8,0);
LAB_0258eee8:
                    /* WARNING: Could not recover jumptable at 0x0258eef8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(plVar1,puVar2[1]);
  return;
}

