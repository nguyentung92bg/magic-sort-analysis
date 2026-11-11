/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Toggle.ToggleItem$$TryPlayToggleAnimation
void Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem__TryPlayToggleAnimation (Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Toggle.ToggleItem$$TryPlayToggleAnimation
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem__TryPlayToggleAnimation
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem_o* __this, const MethodInfo*
   method); */

long Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem__TryPlayToggleAnimation_2609168
               (long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar4 = param_1;
  if ((bRam0000000005c2b9cc & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057c9ec8);
    FUN_012d0dc8(PTR_DAT_057d1308);
    FUN_012d0dc8(PTR_DAT_0580dae8);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_0579e470);
    FUN_012d0dc8(PTR_DAT_05783d88);
    lVar4 = FUN_012d0dc8(PTR_DAT_057a2b40);
    bRam0000000005c2b9cc = 1;
  }
  if (*(char *)(param_1 + 0x72) == '\0') {
    *(undefined4 *)(param_1 + 0x5c) = 0;
    return lVar4;
  }
  uVar1 = *(uint *)(param_1 + 0x5c);
  if (uVar1 == 0) {
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x5c) = 0;
    if ((uVar1 & 1) == 0) {
      return lVar4;
    }
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    uVar9 = Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleView__GetAnimationLockDelay_2609708
                      (*(long *)(param_1 + 0x48),*(undefined1 *)(param_1 + 0x58));
    puVar3 = PTR_DAT_057815e0;
    if (*(long *)(param_1 + 0x48) != 0) {
      uVar10 = Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleView__GetRemainingAnimationTime_26097d0
                         (*(long *)(param_1 + 0x48),*(undefined1 *)(param_1 + 0x58));
      plVar6 = (long *)(param_1 + 0x68);
      if (*plVar6 != 0) {
        DG_Tweening_TweenExtensions__Kill_1edd6a4(*plVar6,1,0);
      }
      puVar2 = PTR_DAT_057606c8;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      lVar4 = DG_Tweening_DOTween__Sequence_1eda154(0);
      *plVar6 = lVar4;
      FUN_012d0d74(plVar6,lVar4);
      lVar7 = *plVar6;
      lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
      if (lVar4 != 0) {
        DG_Tweening_TweenCallback___ctor_1ed6da8(lVar4,param_1,*(undefined8 *)PTR_DAT_057c9ec8,0);
        DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(0,lVar7,lVar4,0);
        uVar8 = *(undefined8 *)(param_1 + 0x68);
        lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
        puVar3 = PTR_DAT_057a2b40;
        if (lVar4 != 0) {
          DG_Tweening_TweenCallback___ctor_1ed6da8(lVar4,param_1,*(undefined8 *)PTR_DAT_057d1308,0);
          DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(uVar9,uVar8,lVar4,0);
          lVar4 = *(long *)puVar3;
          uVar9 = *(undefined8 *)(param_1 + 0x68);
          if (*(int *)(lVar4 + 0xe0) == 0) {
            thunk_FUN_0130472c();
            lVar4 = *(long *)puVar3;
          }
          lVar7 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
          if (lVar7 == 0) {
            if (*(int *)(lVar4 + 0xe0) == 0) {
              thunk_FUN_0130472c();
              lVar4 = *(long *)puVar3;
            }
            uVar8 = **(undefined8 **)(lVar4 + 0xb8);
            lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
            if (lVar7 == 0) goto LAB_02709428;
            DG_Tweening_TweenCallback___ctor_1ed6da8(lVar7,uVar8,*(undefined8 *)PTR_DAT_05783d88,0);
            plVar5 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
            *plVar5 = lVar7;
            FUN_012d0d74(plVar5,lVar7);
          }
          uVar10 = DG_Tweening_DOVirtual__DelayedCall_1edcb38(uVar10,lVar7,1,0);
          DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar9,uVar10,0);
          lVar7 = *plVar6;
          lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
          puVar3 = PTR_DAT_0579e470;
          if (lVar4 != 0) {
            DG_Tweening_TweenCallback___ctor_1ed6da8
                      (lVar4,param_1,*(undefined8 *)PTR_DAT_0580dae8,0);
            uVar9 = *(undefined8 *)puVar3;
            if ((lVar7 != 0) && (*(char *)(lVar7 + 0xe8) != '\0')) {
              *(long *)(lVar7 + 0x80) = lVar4;
              FUN_012d0d74((long *)(lVar7 + 0x80),lVar4,uVar9);
            }
            return lVar7;
          }
        }
      }
    }
  }
LAB_02709428:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

