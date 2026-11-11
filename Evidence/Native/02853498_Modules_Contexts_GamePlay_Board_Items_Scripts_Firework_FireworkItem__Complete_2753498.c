/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Firework.FireworkItem$$Complete
void Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkItem__Complete (Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Firework.FireworkItem$$Complete
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkItem__Complete
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkItem_o* __this, const MethodInfo*
   method); */

long * Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkItem__Complete_2753498
                 (long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  
  plVar4 = param_1;
  if ((bRam0000000005c2c710 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f83b0);
    plVar4 = (long *)FUN_012d0dc8(PTR_DAT_057b8520);
    bRam0000000005c2c710 = 1;
  }
  if ((char)param_1[8] != '\0') {
    return plVar4;
  }
  *(undefined1 *)(param_1 + 8) = 1;
  puVar2 = PTR_DAT_057f83b0;
  puVar1 = PTR_DAT_057b8520;
  if (param_1[10] != 0) {
    Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__RemoveBlocker_248db1c
              (param_1[10],param_1,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                      (*(undefined8 *)puVar2);
    if (lVar5 != 0) {
      Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar5,0);
      puVar1 = PTR_DAT_057815e0;
      if ((bRam0000000005c2c711 & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_057815e0);
        FUN_012d0dc8(PTR_DAT_057ba538);
        FUN_012d0dc8(PTR_DAT_05781540);
        FUN_012d0dc8(PTR_DAT_057606c8);
        bRam0000000005c2c711 = 1;
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      plVar4 = (long *)DG_Tweening_DOTween__Sequence_1eda154(0);
      puVar1 = PTR_DAT_057606c8;
      if (param_1[9] != 0) {
        uVar6 = Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkView__PlayCompleteAnimation_27536e0
                          (param_1[9]);
        DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,plVar4,uVar6,0);
        lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
        if (lVar5 != 0) {
          DG_Tweening_TweenCallback___ctor_1ed6da8(lVar5,param_1,*(undefined8 *)PTR_DAT_057ba538,0);
          DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(_UNK_0434ccf4,plVar4,lVar5,0);
          if ((param_1[9] != 0) && (lVar5 = *(long *)(param_1[9] + 0x20), lVar5 != 0)) {
            uVar7 = *(undefined4 *)(lVar5 + 0x24);
            lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
            if (lVar5 != 0) {
              DG_Tweening_TweenCallback___ctor_1ed6da8
                        (lVar5,param_1,*(undefined8 *)PTR_DAT_05781540,0);
              DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(uVar7,plVar4,lVar5,0);
              if ((param_1[9] != 0) && (lVar5 = *(long *)(param_1[9] + 0x20), lVar5 != 0)) {
                uVar7 = *(undefined4 *)(lVar5 + 0x18);
                lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                if (lVar5 != 0) {
                  DG_Tweening_TweenCallback___ctor_1ed6da8
                            (lVar5,param_1,*(undefined8 *)(*param_1 + 0x290),0);
                  uVar3 = DG_Tweening_TweenSettingsExtensions__ValidateAddToSequence_1eedf30
                                    (plVar4,0,1);
                  if ((lVar5 != 0) && ((uVar3 & 1) != 0)) {
                    DG_Tweening_Sequence__DoInsertCallback_1edffe8(uVar7,plVar4,lVar5);
                  }
                  return plVar4;
                }
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

