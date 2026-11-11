/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.KeyAndLock.Lock.LockItem$$CalculateInBottlePosition
UnityEngine_Vector3_o Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Lock_LockItem__CalculateInBottlePosition (Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Lock_LockItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.KeyAndLock.Lock.LockItem$$CalculateInBottlePosition
   UnityEngine_Vector3_o
   Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Lock_LockItem__CalculateInBottlePosition
   (Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Lock_LockItem_o* __this, const
   MethodInfo* method); */

undefined4
Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Lock_LockItem__CalculateInBottlePosition_248e7d0
          (long param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined4 uVar7;
  
  if ((bRam0000000005c2b294 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575a2d8);
    bRam0000000005c2b294 = 1;
  }
  if (cRam0000000005c230aa == '\0') {
    FUN_012d0dc8(PTR_DAT_05805c10);
    cRam0000000005c230aa = '\x01';
  }
  uVar7 = **(undefined4 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
  if ((*(long *)(param_1 + 0x48) == 0) || (*(long *)(param_1 + 0x50) == 0)) {
    return uVar7;
  }
  plVar2 = (long *)Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                             (*(long *)(param_1 + 0x50),0);
  puVar1 = PTR_DAT_0575a2d8;
  if (plVar2 != (long *)0x0) {
    lVar4 = *plVar2;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0575a2d8) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 4) * 0x10 + 0x138);
          goto LAB_0258e8b4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_0131971c(plVar2,*(long *)PTR_DAT_0575a2d8,4);
LAB_0258e8b4:
    (*(code *)*puVar3)(plVar2,puVar3[1]);
    if ((*(long *)(param_1 + 0x48) != 0) &&
       (plVar2 = (long *)Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                   (*(long *)(param_1 + 0x48),0), plVar2 != (long *)0x0)) {
      lVar4 = *plVar2;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 4) * 0x10 + 0x138);
            goto LAB_0258e928;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_0131971c(plVar2,*(long *)puVar1,4);
LAB_0258e928:
      (*(code *)*puVar3)(plVar2,puVar3[1]);
      return uVar7;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

