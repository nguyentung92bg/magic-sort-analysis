/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.KeyAndLock.Key.KeyView$$Prepare
void Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Key_KeyView__Prepare (Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Key_KeyView_o* __this, int32_t height, int32_t keyLockType, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.KeyAndLock.Key.KeyView$$Prepare
   void Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Key_KeyView__Prepare
   (Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Key_KeyView_o* __this, int32_t height,
   int32_t keyLockType, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Key_KeyView__Prepare_248f7c0
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
               undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined4 param_8)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  undefined4 uVar6;
  
  if ((bRam0000000005c2b29a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575a2d8);
    bRam0000000005c2b29a = 1;
  }
  plVar5 = *(long **)(param_4 + 0x18);
  *(undefined4 *)(param_4 + 0x68) = param_5;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar2 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12a);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_0575a2d8) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 4) * 0x10 + 0x138);
        goto LAB_0258f868;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_0131971c(plVar5,*(long *)PTR_DAT_0575a2d8,4);
LAB_0258f868:
  uVar6 = (*(code *)*puVar1)(plVar5,puVar1[1]);
  *(undefined4 *)(param_4 + 0x50) = uVar6;
  *(undefined4 *)(param_4 + 0x54) = param_2;
  *(undefined4 *)(param_4 + 0x58) = param_3;
  Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Key_KeyView__SetType_248f9cc
            (param_4,param_6);
  if (*(long *)(param_4 + 0x20) != 0) {
    UnityEngine_Renderer__set_sortingOrder_40826fc(*(long *)(param_4 + 0x20),param_8,0);
    lVar2 = *(long *)(param_4 + 0x20);
    if (lVar2 != 0) {
      if (pcRam0000000005c39c20 == (code *)0x0) {
        pcRam0000000005c39c20 = (code *)FUN_012d0d84(&UNK_043eaefb);
      }
                    /* WARNING: Could not recover jumptable at 0x0418263c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000005c39c20)(lVar2,param_7);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

