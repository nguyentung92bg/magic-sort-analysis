/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Clay.ClayItem$$OnBottleCompleted
void Modules_Contexts_GamePlay_BoardItems_Scripts_Clay_ClayItem__OnBottleCompleted (Modules_Contexts_GamePlay_BoardItems_Scripts_Clay_ClayItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x025917a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Clay.ClayItem$$OnBottleCompleted
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Clay_ClayItem__OnBottleCompleted
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Clay_ClayItem_o* __this, const MethodInfo* method);
    */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Clay_ClayItem__OnBottleCompleted_24916d0
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  float fVar9;
  
  if ((bRam0000000005c2b2af & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576b0e0);
    FUN_012d0dc8(PTR_DAT_057b8520);
    bRam0000000005c2b2af = 1;
  }
  if (*(char *)(param_1 + 0x40) != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x40) = 1;
  puVar2 = PTR_DAT_057b8520;
  puVar1 = PTR_DAT_0576b0e0;
  if (*(long *)(param_1 + 0x50) != 0) {
    Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__RemoveBlocker_248db1c
              (*(long *)(param_1 + 0x50),param_1);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                      (*(undefined8 *)puVar1);
    if (lVar5 != 0) {
      Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar5,0);
      puVar1 = PTR_DAT_057606c8;
      fVar9 = *(float *)(&UNK_0438e948 + (ulong)(*(char *)(param_1 + 0x58) == '\0') * 4);
      if ((bRam0000000005c2b2b0 & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_0579bb70);
        FUN_012d0dc8(PTR_DAT_057606c8);
        FUN_012d0dc8(PTR_DAT_057fa108);
        FUN_012d0dc8(PTR_DAT_05807c58);
        bRam0000000005c2b2b0 = 1;
      }
      lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      puVar2 = PTR_DAT_05807c58;
      if (lVar5 != 0) {
        DG_Tweening_TweenCallback___ctor_1ed6da8(lVar5,param_1,*(undefined8 *)PTR_DAT_0579bb70,0);
        DG_Tweening_DOVirtual__DelayedCall_1edcb38(fVar9,lVar5,0,0);
        lVar5 = *(long *)puVar2;
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_0130472c();
          lVar5 = *(long *)puVar2;
        }
        lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
        if (lVar7 == 0) {
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_0130472c();
            lVar5 = *(long *)puVar2;
          }
          uVar8 = **(undefined8 **)(lVar5 + 0xb8);
          lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
          if (lVar7 == 0) goto LAB_02591948;
          DG_Tweening_TweenCallback___ctor_1ed6da8(lVar7,uVar8,*(undefined8 *)PTR_DAT_057fa108,0);
          plVar6 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
          *plVar6 = lVar7;
          FUN_012d0d74(plVar6,lVar7);
        }
        DG_Tweening_DOVirtual__DelayedCall_1edcb38(fVar9 + _UNK_0438e91c,lVar7,0,0);
        plVar6 = *(long **)(param_1 + 0x48);
        lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
        if ((lVar5 != 0) && (plVar6 != (long *)0x0)) {
          DG_Tweening_TweenCallback___ctor_1ed6da8(lVar5,plVar6,*(undefined8 *)(*plVar6 + 0x1d0),0);
          puVar1 = PTR_DAT_057815e0;
          fVar9 = fVar9 + _UNK_0438e920;
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
          uVar8 = DG_Tweening_TweenSettingsExtensions__AppendInterval_1edcc0c(fVar9);
          uVar8 = DG_Tweening_TweenSettingsExtensions__OnStepComplete_object__24505cc
                            (uVar8,lVar5,*(undefined8 *)puVar3);
          lVar5 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object__2451520
                            (uVar8,0,0,*(undefined8 *)puVar4);
          uVar8 = *(undefined8 *)puVar2;
          if (((lVar5 != 0) && (*(char *)(lVar5 + 0xe8) != '\0')) &&
             (*(char *)(lVar5 + 0x100) == '\0')) {
            *(undefined1 *)(lVar5 + 0x9c) = 1;
            return;
          }
          return;
        }
      }
LAB_02591948:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

