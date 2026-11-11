/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.StuckPopupVariantB$$PlayEnterAnimation
void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantB__PlayEnterAnimation (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantB_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.StuckPopupVariantB$$PlayEnterAnimation
   void 
   Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantB__PlayEnterAnimation
   (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantB_o* __this, const
   MethodInfo* method); */

long Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantB__PlayEnterAnimation_1609088
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar1 = PTR_DAT_057b8520;
  if ((bRam0000000005c24412 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_05814830);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_05767498);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_0579e470);
    bRam0000000005c24412 = 1;
  }
  puVar2 = PTR_DAT_05814830;
  Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantB__ResetToInitialValues_16092b4
            (param_1);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar3 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar2);
  puVar2 = PTR_DAT_057815e0;
  puVar1 = PTR_DAT_057606c8;
  if (lVar3 != 0) {
    Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar3,0);
    Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantB__HideBoostersAndLevelText_16094b4
              ();
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar4 = DG_Tweening_DOTween__Sequence_1eda154(0);
    uVar5 = Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantB__PlayHeaderTextEnterAnimation_1609550
                      (param_1);
    uVar4 = DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar4,uVar5,0);
    uVar5 = Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantB__PlayCoinEnterAnimation_1609654
                      (param_1);
    uVar4 = DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar4,uVar5,0);
    uVar5 = Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantB__PlayPlayOnButtonEnterAnimation_1609678
                      (param_1);
    uVar4 = DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar4,uVar5,0);
    uVar5 = Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantB__PlayGiveUpButtonEnterAnimation_16096b8
                      (param_1);
    uVar4 = DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar4,uVar5,0);
    uVar5 = Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantB__PlayBackgroundEnterAnimation_16096dc
                      (param_1);
    uVar4 = DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar4,uVar5,0);
    uVar5 = Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantB__PlayBottleEnterAnimation_16097b0
                      (param_1);
    uVar4 = DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar4,uVar5,0);
    uVar5 = Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantB__PlayGradientEnterAnimation_16098a0
                      (param_1);
    uVar4 = DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar4,uVar5,0);
    uVar5 = Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantB__PlayShineEnterAnimation_1609960
                      (param_1);
    lVar3 = DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar4,uVar5,0);
    lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    puVar1 = PTR_DAT_0579e470;
    if (lVar6 != 0) {
      DG_Tweening_TweenCallback___ctor_1ed6da8(lVar6,param_1,*(undefined8 *)PTR_DAT_05767498,0);
      uVar4 = *(undefined8 *)puVar1;
      if ((lVar3 != 0) && (*(char *)(lVar3 + 0xe8) != '\0')) {
        *(long *)(lVar3 + 0x80) = lVar6;
        FUN_012d0d74((long *)(lVar3 + 0x80),lVar6,uVar4);
      }
      return lVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

