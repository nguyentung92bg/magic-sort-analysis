/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Toggle.ToggleItem$$Complete
void Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem__Complete (Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Toggle.ToggleItem$$Complete
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem__Complete
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem__Complete_26098e4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  
  if ((bRam0000000005c2b9cd & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05817e28);
    FUN_012d0dc8(PTR_DAT_057b8520);
    bRam0000000005c2b9cd = 1;
  }
  if (*(char *)(param_1 + 0x40) != '\0') {
    return;
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
    lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                      (*(undefined8 *)puVar2);
    if (lVar5 != 0) {
      Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar5,0);
      puVar1 = PTR_DAT_057606c8;
                    /* try { // try from 02709980 to 028099d7 has its CatchHandler @ 02709980
                       catch() { ... } // from try @ 02709980 with catch @ 02709980
                       catch() { ... } // from try @ 02709a50 with catch @ 02709980
                       catch() { ... } // from try @ 02709a80 with catch @ 02709980
                       catch() { ... } // from try @ 02709af4 with catch @ 02709980 */
      if ((bRam0000000005c2b9cf & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_057b6b90);
        FUN_012d0dc8(PTR_DAT_057c94d8);
        FUN_012d0dc8(PTR_DAT_057606c8);
        FUN_012d0dc8(PTR_DAT_057d26d0);
        FUN_012d0dc8(PTR_DAT_057a2b40);
        bRam0000000005c2b9cf = 1;
      }
      lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      if (lVar5 != 0) {
        DG_Tweening_TweenCallback___ctor_1ed6da8(lVar5,param_1,*(undefined8 *)PTR_DAT_057b6b90,0);
        DG_Tweening_DOVirtual__DelayedCall_1edcb38(0,lVar5,0,0);
        puVar2 = PTR_DAT_057a2b40;
        if ((*(long *)(param_1 + 0x48) != 0) &&
           (lVar5 = *(long *)(*(long *)(param_1 + 0x48) + 0x20), lVar5 != 0)) {
          uVar9 = *(undefined4 *)(lVar5 + 0x3c);
          lVar5 = *(long *)PTR_DAT_057a2b40;
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_0130472c();
            lVar5 = *(long *)puVar2;
          }
          lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
          if (lVar7 == 0) {
            if (*(int *)(lVar5 + 0xe0) == 0) {
              thunk_FUN_0130472c();
              lVar5 = *(long *)puVar2;
            }
            uVar8 = **(undefined8 **)(lVar5 + 0xb8);
            lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
            if (lVar7 == 0) goto LAB_02709e48;
            DG_Tweening_TweenCallback___ctor_1ed6da8(lVar7,uVar8,*(undefined8 *)PTR_DAT_057d26d0,0);
            plVar6 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
            *plVar6 = lVar7;
            FUN_012d0d74(plVar6,lVar7);
          }
          DG_Tweening_DOVirtual__DelayedCall_1edcb38(uVar9,lVar7,0,0);
          if ((*(long *)(param_1 + 0x48) != 0) &&
             (lVar5 = *(long *)(*(long *)(param_1 + 0x48) + 0x20), lVar5 != 0)) {
            uVar9 = *(undefined4 *)(lVar5 + 0x40);
            lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
            if (lVar5 != 0) {
              DG_Tweening_TweenCallback___ctor_1ed6da8
                        (lVar5,param_1,*(undefined8 *)PTR_DAT_057c94d8,0);
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
              uVar8 = DG_Tweening_TweenSettingsExtensions__AppendInterval_1edcc0c(uVar9);
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

