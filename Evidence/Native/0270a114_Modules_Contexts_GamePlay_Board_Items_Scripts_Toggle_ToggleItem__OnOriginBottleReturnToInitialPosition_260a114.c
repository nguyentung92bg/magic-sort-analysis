/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Toggle.ToggleItem$$OnOriginBottleReturnToInitialPosition
void Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem__OnOriginBottleReturnToInitialPosition (Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem_o* __this, Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Selection_o* selection, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.Toggle.ToggleItem$$OnOriginBottleReturnToInitialPosition
   void 
   Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem__OnOriginBottleReturnToInitialPosition
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem_o* __this,
   Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Selection_o* selection, const MethodInfo*
   method); */

ulong Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem__OnOriginBottleReturnToInitialPosition_260a114
                (ulong param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  ulong *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  
  if (*(long *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  uVar8 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__IsEmpty_249577c
                    (*(long *)(param_1 + 0x50),0);
  if ((uVar8 & 1) != 0) {
    uVar8 = param_1;
    if ((bRam0000000005c2b9cd & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_05817e28);
      uVar8 = FUN_012d0dc8(PTR_DAT_057b8520);
      bRam0000000005c2b9cd = 1;
    }
    if (*(char *)(param_1 + 0x40) != '\0') {
      return uVar8;
    }
    *(undefined1 *)(param_1 + 0x40) = 1;
    puVar2 = PTR_DAT_05817e28;
    puVar3 = PTR_DAT_057b8520;
    if (*(long *)(param_1 + 0x50) != 0) {
      Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__RemoveBlocker_248db1c
                (*(long *)(param_1 + 0x50),param_1,0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      lVar6 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                        (*(undefined8 *)puVar2);
      if (lVar6 != 0) {
        Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar6,0);
        puVar3 = PTR_DAT_057606c8;
        if ((bRam0000000005c2b9cf & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_057b6b90);
          FUN_012d0dc8(PTR_DAT_057c94d8);
          FUN_012d0dc8(PTR_DAT_057606c8);
          FUN_012d0dc8(PTR_DAT_057d26d0);
          FUN_012d0dc8(PTR_DAT_057a2b40);
          bRam0000000005c2b9cf = 1;
        }
        lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
        if (lVar6 != 0) {
          DG_Tweening_TweenCallback___ctor_1ed6da8(lVar6,param_1,*(undefined8 *)PTR_DAT_057b6b90,0);
          DG_Tweening_DOVirtual__DelayedCall_1edcb38(0,lVar6,0,0);
          puVar2 = PTR_DAT_057a2b40;
          if ((*(long *)(param_1 + 0x48) != 0) &&
             (lVar6 = *(long *)(*(long *)(param_1 + 0x48) + 0x20), lVar6 != 0)) {
            uVar14 = *(undefined4 *)(lVar6 + 0x3c);
            lVar6 = *(long *)PTR_DAT_057a2b40;
            if (*(int *)(lVar6 + 0xe0) == 0) {
              thunk_FUN_0130472c();
              lVar6 = *(long *)puVar2;
            }
            lVar10 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
            if (lVar10 == 0) {
              if (*(int *)(lVar6 + 0xe0) == 0) {
                thunk_FUN_0130472c();
                lVar6 = *(long *)puVar2;
              }
              uVar12 = **(undefined8 **)(lVar6 + 0xb8);
              lVar10 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
              if (lVar10 == 0) goto LAB_02709e48;
              DG_Tweening_TweenCallback___ctor_1ed6da8
                        (lVar10,uVar12,*(undefined8 *)PTR_DAT_057d26d0,0);
              plVar7 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
              *plVar7 = lVar10;
              FUN_012d0d74(plVar7,lVar10);
            }
            DG_Tweening_DOVirtual__DelayedCall_1edcb38(uVar14,lVar10,0,0);
            if ((*(long *)(param_1 + 0x48) != 0) &&
               (lVar6 = *(long *)(*(long *)(param_1 + 0x48) + 0x20), lVar6 != 0)) {
              uVar14 = *(undefined4 *)(lVar6 + 0x40);
              lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
              if (lVar6 != 0) {
                DG_Tweening_TweenCallback___ctor_1ed6da8
                          (lVar6,param_1,*(undefined8 *)PTR_DAT_057c94d8,0);
                puVar3 = PTR_DAT_057815e0;
                if ((bRam0000000005c28460 & 1) == 0) {
                  FUN_012d0dc8(PTR_DAT_057815e0,0,0);
                  FUN_012d0dc8(PTR_DAT_057d6890);
                  FUN_012d0dc8(PTR_DAT_057ca968);
                  FUN_012d0dc8(PTR_DAT_057f1100);
                  bRam0000000005c28460 = 1;
                }
                puVar5 = PTR_DAT_057f1100;
                puVar4 = PTR_DAT_057d6890;
                puVar2 = PTR_DAT_057ca968;
                if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                  thunk_FUN_0130472c();
                }
                DG_Tweening_DOTween__Sequence_1eda154();
                uVar12 = DG_Tweening_TweenSettingsExtensions__AppendInterval_1edcc0c(uVar14);
                uVar12 = DG_Tweening_TweenSettingsExtensions__OnStepComplete_object__24505cc
                                   (uVar12,lVar6,*(undefined8 *)puVar4);
                uVar8 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object__2451520
                                  (uVar12,0,0,*(undefined8 *)puVar5);
                uVar12 = *(undefined8 *)puVar2;
                if (((uVar8 != 0) && (*(char *)(uVar8 + 0xe8) != '\0')) &&
                   (*(char *)(uVar8 + 0x100) == '\0')) {
                  *(undefined1 *)(uVar8 + 0x9c) = 1;
                  return uVar8;
                }
                return uVar8;
              }
            }
          }
        }
LAB_02709e48:
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  uVar8 = Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem__ShouldWaitForOverboardItemToReveal_26094a0
                    (param_1);
  if ((uVar8 & 1) != 0) {
    return uVar8;
  }
  uVar8 = param_1;
  if ((bRam0000000005c2b9cc & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057c9ec8);
    FUN_012d0dc8(PTR_DAT_057d1308);
    FUN_012d0dc8(PTR_DAT_0580dae8);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_0579e470);
    FUN_012d0dc8(PTR_DAT_05783d88);
    uVar8 = FUN_012d0dc8(PTR_DAT_057a2b40);
    bRam0000000005c2b9cc = 1;
  }
  if (*(char *)(param_1 + 0x72) == '\0') {
    *(undefined4 *)(param_1 + 0x5c) = 0;
    return uVar8;
  }
  uVar1 = *(uint *)(param_1 + 0x5c);
  if (uVar1 == 0) {
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x5c) = 0;
    if ((uVar1 & 1) == 0) {
      return uVar8;
    }
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    uVar12 = Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleView__GetAnimationLockDelay_2609708
                       (*(long *)(param_1 + 0x48),*(undefined1 *)(param_1 + 0x58));
    puVar3 = PTR_DAT_057815e0;
    if (*(long *)(param_1 + 0x48) != 0) {
      uVar13 = Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleView__GetRemainingAnimationTime_26097d0
                         (*(long *)(param_1 + 0x48),*(undefined1 *)(param_1 + 0x58));
      puVar9 = (ulong *)(param_1 + 0x68);
      if (*puVar9 != 0) {
        DG_Tweening_TweenExtensions__Kill_1edd6a4(*puVar9,1,0);
      }
      puVar2 = PTR_DAT_057606c8;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar8 = DG_Tweening_DOTween__Sequence_1eda154(0);
      *puVar9 = uVar8;
      FUN_012d0d74(puVar9,uVar8);
      uVar8 = *puVar9;
      lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
      if (lVar6 != 0) {
        DG_Tweening_TweenCallback___ctor_1ed6da8(lVar6,param_1,*(undefined8 *)PTR_DAT_057c9ec8,0);
        DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(0,uVar8,lVar6,0);
        uVar11 = *(undefined8 *)(param_1 + 0x68);
        lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
        puVar3 = PTR_DAT_057a2b40;
        if (lVar6 != 0) {
          DG_Tweening_TweenCallback___ctor_1ed6da8(lVar6,param_1,*(undefined8 *)PTR_DAT_057d1308,0);
          DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(uVar12,uVar11,lVar6,0);
          lVar6 = *(long *)puVar3;
          uVar12 = *(undefined8 *)(param_1 + 0x68);
          if (*(int *)(lVar6 + 0xe0) == 0) {
            thunk_FUN_0130472c();
            lVar6 = *(long *)puVar3;
          }
          lVar10 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
          if (lVar10 == 0) {
            if (*(int *)(lVar6 + 0xe0) == 0) {
              thunk_FUN_0130472c();
              lVar6 = *(long *)puVar3;
            }
            uVar11 = **(undefined8 **)(lVar6 + 0xb8);
            lVar10 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
            if (lVar10 == 0) goto LAB_02709428;
            DG_Tweening_TweenCallback___ctor_1ed6da8
                      (lVar10,uVar11,*(undefined8 *)PTR_DAT_05783d88,0);
            plVar7 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
            *plVar7 = lVar10;
            FUN_012d0d74(plVar7,lVar10);
          }
          uVar13 = DG_Tweening_DOVirtual__DelayedCall_1edcb38(uVar13,lVar10,1,0);
          DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar12,uVar13,0);
          uVar8 = *puVar9;
          lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
          puVar3 = PTR_DAT_0579e470;
          if (lVar6 != 0) {
            DG_Tweening_TweenCallback___ctor_1ed6da8
                      (lVar6,param_1,*(undefined8 *)PTR_DAT_0580dae8,0);
            uVar12 = *(undefined8 *)puVar3;
            if ((uVar8 != 0) && (*(char *)(uVar8 + 0xe8) != '\0')) {
              *(long *)(uVar8 + 0x80) = lVar6;
              FUN_012d0d74((long *)(uVar8 + 0x80),lVar6,uVar12);
            }
            return uVar8;
          }
        }
      }
    }
  }
LAB_02709428:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

