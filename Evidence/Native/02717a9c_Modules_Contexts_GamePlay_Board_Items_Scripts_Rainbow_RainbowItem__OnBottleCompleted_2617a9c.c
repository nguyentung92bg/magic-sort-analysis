/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Rainbow.RainbowItem$$OnBottleCompleted
void Modules_Contexts_GamePlay_Board_Items_Scripts_Rainbow_RainbowItem__OnBottleCompleted (Modules_Contexts_GamePlay_Board_Items_Scripts_Rainbow_RainbowItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Rainbow.RainbowItem$$OnBottleCompleted
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Rainbow_RainbowItem__OnBottleCompleted
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Rainbow_RainbowItem_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Rainbow_RainbowItem__OnBottleCompleted_2617a9c
               (long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  
  if ((bRam0000000005c2ba33 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057ba0b8);
    FUN_012d0dc8(PTR_DAT_057b8520);
    bRam0000000005c2ba33 = 1;
  }
  if (*(char *)(param_1 + 0x40) != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x40) = 1;
  puVar3 = PTR_DAT_057ba0b8;
  puVar2 = PTR_DAT_057b8520;
  if (*(long *)(param_1 + 0x50) != 0) {
    Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__RemoveBlocker_248db1c
              (*(long *)(param_1 + 0x50),param_1,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    lVar7 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                      (*(undefined8 *)puVar3);
    if (lVar7 != 0) {
      Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar7,0);
      puVar2 = PTR_DAT_057606c8;
      if ((bRam0000000005c2ba34 & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_0578eaf0);
        FUN_012d0dc8(PTR_DAT_057606c8);
        bRam0000000005c2ba34 = 1;
      }
      lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
      if (lVar7 != 0) {
        DG_Tweening_TweenCallback___ctor_1ed6da8(lVar7,param_1,*(undefined8 *)PTR_DAT_0578eaf0,0);
        DG_Tweening_DOVirtual__DelayedCall_1edcb38(0x3f800000,lVar7,0,0);
        plVar8 = *(long **)(param_1 + 0x48);
        lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
        if ((lVar7 != 0) && (plVar8 != (long *)0x0)) {
          DG_Tweening_TweenCallback___ctor_1ed6da8(lVar7,plVar8,*(undefined8 *)(*plVar8 + 0x1d0),0);
          puVar2 = PTR_DAT_057815e0;
          uVar1 = _UNK_0438ebbc;
          if ((bRam0000000005c28460 & 1) == 0) {
            FUN_012d0dc8(PTR_DAT_057815e0,0,0);
            FUN_012d0dc8(PTR_DAT_057d6890);
            FUN_012d0dc8(PTR_DAT_057ca968);
            FUN_012d0dc8(PTR_DAT_057f1100);
            bRam0000000005c28460 = 1;
          }
          puVar5 = PTR_DAT_057f1100;
          puVar4 = PTR_DAT_057d6890;
          puVar3 = PTR_DAT_057ca968;
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_0130472c();
          }
          DG_Tweening_DOTween__Sequence_1eda154();
          uVar6 = DG_Tweening_TweenSettingsExtensions__AppendInterval_1edcc0c(uVar1);
          uVar6 = DG_Tweening_TweenSettingsExtensions__OnStepComplete_object__24505cc
                            (uVar6,lVar7,*(undefined8 *)puVar4);
          lVar7 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object__2451520
                            (uVar6,0,0,*(undefined8 *)puVar5);
          uVar6 = *(undefined8 *)puVar3;
          if (((lVar7 != 0) && (*(char *)(lVar7 + 0xe8) != '\0')) &&
             (*(char *)(lVar7 + 0x100) == '\0')) {
            *(undefined1 *)(lVar7 + 0x9c) = 1;
            return;
          }
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

