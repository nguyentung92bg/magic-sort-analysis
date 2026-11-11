/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Toggle.ToggleItem$$OnAnyMoveStarted
void Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem__OnAnyMoveStarted (Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem_o* __this, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* originBottle, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* targetBottle, int32_t waterColorId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Toggle.ToggleItem$$OnAnyMoveStarted
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem__OnAnyMoveStarted
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem_o* __this,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* originBottle,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* targetBottle, int32_t
   waterColorId, const MethodInfo* method); */

ulong Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem__OnAnyMoveStarted_2608f84
                (ulong param_1)

{
  uint uVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  ulong *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_140 [96];
  undefined1 auStack_e0 [96];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar5 = Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem__ShouldMakeMove_2608ff8();
  if ((uVar5 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x72) = 0;
  }
  else {
    if ((*(char *)(param_1 + 0x70) != '\0') && (*(char *)(param_1 + 0x73) == '\0')) {
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      *(byte *)(param_1 + 0x58) = *(byte *)(param_1 + 0x58) ^ 1;
      if (*(long *)(param_1 + 0x60) != 0) {
        Modules_Infrastructure_UI_Common_Scripts_SortingService__GetToggleItemSorting_40031a0
                  (auStack_e0,*(long *)(param_1 + 0x60),0);
        func_0x01037ce0(&uStack_80,auStack_e0,0x60);
        lVar6 = *(long *)(param_1 + 0x48);
        func_0x01037ce0(auStack_e0,&uStack_80,0x60);
        if (lVar6 != 0) {
          uVar2 = *(undefined1 *)(param_1 + 0x58);
          func_0x01037ce0(auStack_140,auStack_e0,0x60);
          uVar5 = Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleView__SetInitialState_2609c24
                            (lVar6,auStack_140,uVar2);
          return uVar5;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    *(undefined1 *)(param_1 + 0x72) = 1;
    *(byte *)(param_1 + 0x58) = *(byte *)(param_1 + 0x58) ^ 1;
    uVar5 = Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem__ShouldWaitBeforeToggleAnimation_2609114
                      (param_1);
    if ((uVar5 & 1) == 0) {
      uVar5 = param_1;
      if ((bRam0000000005c2b9cc & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_057815e0);
        FUN_012d0dc8(PTR_DAT_057c9ec8);
        FUN_012d0dc8(PTR_DAT_057d1308);
        FUN_012d0dc8(PTR_DAT_0580dae8);
        FUN_012d0dc8(PTR_DAT_057606c8);
        FUN_012d0dc8(PTR_DAT_0579e470);
        FUN_012d0dc8(PTR_DAT_05783d88);
        uVar5 = FUN_012d0dc8(PTR_DAT_057a2b40);
        bRam0000000005c2b9cc = 1;
      }
      if (*(char *)(param_1 + 0x72) == '\0') {
        *(undefined4 *)(param_1 + 0x5c) = 0;
        return uVar5;
      }
      uVar1 = *(uint *)(param_1 + 0x5c);
      if (uVar1 == 0) {
        *(undefined4 *)(param_1 + 0x5c) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x5c) = 0;
        if ((uVar1 & 1) == 0) {
          return uVar5;
        }
      }
      if (*(long *)(param_1 + 0x48) != 0) {
        uVar11 = Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleView__GetAnimationLockDelay_2609708
                           (*(long *)(param_1 + 0x48),*(undefined1 *)(param_1 + 0x58));
        puVar4 = PTR_DAT_057815e0;
        if (*(long *)(param_1 + 0x48) != 0) {
          uVar12 = Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleView__GetRemainingAnimationTime_26097d0
                             (*(long *)(param_1 + 0x48),*(undefined1 *)(param_1 + 0x58));
          puVar8 = (ulong *)(param_1 + 0x68);
          if (*puVar8 != 0) {
            DG_Tweening_TweenExtensions__Kill_1edd6a4(*puVar8,1,0);
          }
          puVar3 = PTR_DAT_057606c8;
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_0130472c();
          }
          uVar5 = DG_Tweening_DOTween__Sequence_1eda154(0);
          *puVar8 = uVar5;
          FUN_012d0d74(puVar8,uVar5);
          uVar5 = *puVar8;
          lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
          if (lVar6 != 0) {
            DG_Tweening_TweenCallback___ctor_1ed6da8
                      (lVar6,param_1,*(undefined8 *)PTR_DAT_057c9ec8,0);
            DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(0,uVar5,lVar6,0);
            uVar9 = *(undefined8 *)(param_1 + 0x68);
            lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
            puVar4 = PTR_DAT_057a2b40;
            if (lVar6 != 0) {
              DG_Tweening_TweenCallback___ctor_1ed6da8
                        (lVar6,param_1,*(undefined8 *)PTR_DAT_057d1308,0);
              DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(uVar11,uVar9,lVar6,0);
              lVar6 = *(long *)puVar4;
              uVar11 = *(undefined8 *)(param_1 + 0x68);
              if (*(int *)(lVar6 + 0xe0) == 0) {
                thunk_FUN_0130472c();
                lVar6 = *(long *)puVar4;
              }
              lVar10 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
              if (lVar10 == 0) {
                if (*(int *)(lVar6 + 0xe0) == 0) {
                  thunk_FUN_0130472c();
                  lVar6 = *(long *)puVar4;
                }
                uVar9 = **(undefined8 **)(lVar6 + 0xb8);
                lVar10 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
                if (lVar10 == 0) goto LAB_02709428;
                DG_Tweening_TweenCallback___ctor_1ed6da8
                          (lVar10,uVar9,*(undefined8 *)PTR_DAT_05783d88,0);
                plVar7 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
                *plVar7 = lVar10;
                FUN_012d0d74(plVar7,lVar10);
              }
              uVar12 = DG_Tweening_DOVirtual__DelayedCall_1edcb38(uVar12,lVar10,1,0);
              DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar11,uVar12,0);
              uVar5 = *puVar8;
              lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
              puVar4 = PTR_DAT_0579e470;
              if (lVar6 != 0) {
                DG_Tweening_TweenCallback___ctor_1ed6da8
                          (lVar6,param_1,*(undefined8 *)PTR_DAT_0580dae8,0);
                uVar11 = *(undefined8 *)puVar4;
                if ((uVar5 != 0) && (*(char *)(uVar5 + 0xe8) != '\0')) {
                  *(long *)(uVar5 + 0x80) = lVar6;
                  FUN_012d0d74((long *)(uVar5 + 0x80),lVar6,uVar11);
                }
                return uVar5;
              }
            }
          }
        }
      }
LAB_02709428:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
  }
  return uVar5;
}

