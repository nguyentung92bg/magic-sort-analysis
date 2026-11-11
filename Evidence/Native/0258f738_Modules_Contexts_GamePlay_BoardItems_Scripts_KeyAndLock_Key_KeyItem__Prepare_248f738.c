/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.KeyAndLock.Key.KeyItem$$Prepare
void Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Key_KeyItem__Prepare (Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Key_KeyItem_o* __this, UnityEngine_Vector3_o localPosition, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* belongingBottleItem, int32_t keyLockType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.KeyAndLock.Key.KeyItem$$Prepare
   void Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Key_KeyItem__Prepare
   (Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Key_KeyItem_o* __this,
   UnityEngine_Vector3_o localPosition, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* belongingBottleItem, int32_t
   keyLockType, const MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Key_KeyItem__Prepare_248f738
               (long param_1,undefined8 param_2,undefined4 param_3,long param_4,undefined4 param_5)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar8 = 0;
  uVar9 = 0;
  UnityEngine_Quaternion__Internal_FromEulerRad_3831834(0,0);
  Modules_Infrastructure_Common_Scripts_Component_AItem__SetLocalRotation_40ea1a4(param_1,0);
  plVar6 = (long *)(param_1 + 0x58);
  *plVar6 = param_4;
  FUN_012d0d74(plVar6,param_4);
  *(undefined4 *)(param_1 + 0x40) = param_5;
  if ((*plVar6 == 0) || (lVar1 = *(long *)(param_1 + 0x48), lVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  uVar7 = *(undefined4 *)(*plVar6 + 0x48);
  if ((bRam0000000005c2b29a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575a2d8);
    bRam0000000005c2b29a = 1;
  }
  plVar6 = *(long **)(lVar1 + 0x18);
  *(undefined4 *)(lVar1 + 0x68) = uVar7;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar3 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_0575a2d8) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 4) * 0x10 + 0x138);
        goto LAB_0258f868;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_0131971c(plVar6,*(long *)PTR_DAT_0575a2d8,4);
LAB_0258f868:
  uVar7 = (*(code *)*puVar2)(plVar6,puVar2[1]);
  *(undefined4 *)(lVar1 + 0x50) = uVar7;
  *(undefined4 *)(lVar1 + 0x54) = uVar8;
  *(undefined4 *)(lVar1 + 0x58) = uVar9;
  Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Key_KeyView__SetType_248f9cc
            (lVar1,param_5);
  if (*(long *)(lVar1 + 0x20) != 0) {
    UnityEngine_Renderer__set_sortingOrder_40826fc(*(long *)(lVar1 + 0x20),param_3,0);
    lVar1 = *(long *)(lVar1 + 0x20);
    if (lVar1 != 0) {
      if (pcRam0000000005c39c20 == (code *)0x0) {
        pcRam0000000005c39c20 = (code *)FUN_012d0d84(&UNK_043eaefb);
      }
                    /* WARNING: Could not recover jumptable at 0x0418263c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000005c39c20)(lVar1,param_2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

