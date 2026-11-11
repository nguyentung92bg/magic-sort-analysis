/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Toggle.ToggleItem$$ResolveSpecialStuck
void Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem__ResolveSpecialStuck (Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Toggle.ToggleItem$$ResolveSpecialStuck
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem__ResolveSpecialStuck
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem_o* __this, const MethodInfo*
   method); */

long Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem__ResolveSpecialStuck_260a1ec
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  
  puVar1 = PTR_DAT_057815e0;
  if (*(char *)(param_1 + 0x58) == '\0') {
    if ((bRam0000000005c2b9ce & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_057815e0);
      FUN_012d0dc8(PTR_DAT_057dd888);
      FUN_012d0dc8(PTR_DAT_057ccda0);
      FUN_012d0dc8(PTR_DAT_057606c8);
      bRam0000000005c2b9ce = 1;
    }
    *(undefined1 *)(param_1 + 0x58) = 1;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    lVar6 = DG_Tweening_DOTween__Sequence_1eda154(0);
    puVar1 = PTR_DAT_057606c8;
    if (*(long *)(param_1 + 0x48) != 0) {
      uVar9 = Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleView__GetRemainingAnimationTime_26097d0
                        (*(long *)(param_1 + 0x48),*(undefined1 *)(param_1 + 0x58));
      lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      if (lVar8 != 0) {
        DG_Tweening_TweenCallback___ctor_1ed6da8(lVar8,param_1,*(undefined8 *)PTR_DAT_057ccda0,0);
        DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(0,lVar6,lVar8,0);
        lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
        if (lVar8 != 0) {
          DG_Tweening_TweenCallback___ctor_1ed6da8(lVar8,param_1,*(undefined8 *)PTR_DAT_057dd888,0);
          uVar5 = DG_Tweening_TweenSettingsExtensions__ValidateAddToSequence_1eedf30(lVar6,0,1);
          if ((lVar8 != 0) && ((uVar5 & 1) != 0)) {
            DG_Tweening_Sequence__DoInsertCallback_1edffe8(uVar9,lVar6,lVar8);
          }
          return lVar6;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar6 = param_1;
  if ((bRam0000000005c2b9cd & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05817e28);
    lVar6 = FUN_012d0dc8(PTR_DAT_057b8520);
    bRam0000000005c2b9cd = 1;
  }
  if (*(char *)(param_1 + 0x40) != '\0') {
    return lVar6;
  }
  *(undefined1 *)(param_1 + 0x40) = 1;
  puVar2 = PTR_DAT_05817e28;
  puVar1 = PTR_DAT_057b8520;
  if (*(long *)(param_1 + 0x50) != 0) {
    Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__RemoveBlocker_248db1c
              (*(long *)(param_1 + 0x50),param_1,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    lVar6 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                      (*(undefined8 *)puVar2);
    if (lVar6 != 0) {
      Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar6,0);
      puVar1 = PTR_DAT_057606c8;
      if ((bRam0000000005c2b9cf & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_057b6b90);
        FUN_012d0dc8(PTR_DAT_057c94d8);
        FUN_012d0dc8(PTR_DAT_057606c8);
        FUN_012d0dc8(PTR_DAT_057d26d0);
        FUN_012d0dc8(PTR_DAT_057a2b40);
        bRam0000000005c2b9cf = 1;
      }
      lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      if (lVar6 != 0) {
        DG_Tweening_TweenCallback___ctor_1ed6da8(lVar6,param_1,*(undefined8 *)PTR_DAT_057b6b90,0);
        DG_Tweening_DOVirtual__DelayedCall_1edcb38(0,lVar6,0,0);
        puVar2 = PTR_DAT_057a2b40;
        if ((*(long *)(param_1 + 0x48) != 0) &&
           (lVar6 = *(long *)(*(long *)(param_1 + 0x48) + 0x20), lVar6 != 0)) {
          uVar10 = *(undefined4 *)(lVar6 + 0x3c);
          lVar6 = *(long *)PTR_DAT_057a2b40;
          if (*(int *)(lVar6 + 0xe0) == 0) {
            thunk_FUN_0130472c();
            lVar6 = *(long *)puVar2;
          }
          lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
          if (lVar8 == 0) {
            if (*(int *)(lVar6 + 0xe0) == 0) {
              thunk_FUN_0130472c();
              lVar6 = *(long *)puVar2;
            }
            uVar9 = **(undefined8 **)(lVar6 + 0xb8);
            lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
            if (lVar8 == 0) goto LAB_02709e48;
            DG_Tweening_TweenCallback___ctor_1ed6da8(lVar8,uVar9,*(undefined8 *)PTR_DAT_057d26d0,0);
            plVar7 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
            *plVar7 = lVar8;
            FUN_012d0d74(plVar7,lVar8);
          }
          DG_Tweening_DOVirtual__DelayedCall_1edcb38(uVar10,lVar8,0,0);
          if ((*(long *)(param_1 + 0x48) != 0) &&
             (lVar6 = *(long *)(*(long *)(param_1 + 0x48) + 0x20), lVar6 != 0)) {
            uVar10 = *(undefined4 *)(lVar6 + 0x40);
            lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
            if (lVar6 != 0) {
              DG_Tweening_TweenCallback___ctor_1ed6da8
                        (lVar6,param_1,*(undefined8 *)PTR_DAT_057c94d8,0);
              puVar1 = PTR_DAT_057815e0;
              if ((bRam0000000005c28460 & 1) == 0) {
                FUN_012d0dc8(PTR_DAT_057815e0,0,0);
                FUN_012d0dc8(PTR_DAT_057d6890);
                FUN_012d0dc8(PTR_DAT_057ca968);
                FUN_012d0dc8(PTR_DAT_057f1100);
                bRam0000000005c28460 = 1;
              }
              puVar4 = PTR_DAT_057f1100;
              puVar3 = PTR_DAT_057d6890;
              puVar2 = PTR_DAT_057ca968;
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_0130472c();
              }
              DG_Tweening_DOTween__Sequence_1eda154();
              uVar9 = DG_Tweening_TweenSettingsExtensions__AppendInterval_1edcc0c(uVar10);
              uVar9 = DG_Tweening_TweenSettingsExtensions__OnStepComplete_object__24505cc
                                (uVar9,lVar6,*(undefined8 *)puVar3);
              lVar6 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object__2451520
                                (uVar9,0,0,*(undefined8 *)puVar4);
              uVar9 = *(undefined8 *)puVar2;
              if (((lVar6 != 0) && (*(char *)(lVar6 + 0xe8) != '\0')) &&
                 (*(char *)(lVar6 + 0x100) == '\0')) {
                *(undefined1 *)(lVar6 + 0x9c) = 1;
                return lVar6;
              }
              return lVar6;
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

