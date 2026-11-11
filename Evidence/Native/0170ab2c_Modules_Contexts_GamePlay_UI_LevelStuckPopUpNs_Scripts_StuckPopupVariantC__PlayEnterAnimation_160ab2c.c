/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.StuckPopupVariantC$$PlayEnterAnimation
void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantC__PlayEnterAnimation (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantC_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.StuckPopupVariantC$$PlayEnterAnimation
   void 
   Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantC__PlayEnterAnimation
   (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantC_o* __this, const
   MethodInfo* method); */

long Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantC__PlayEnterAnimation_160ab2c
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar1 = PTR_DAT_057b8520;
  if ((bRam0000000005c24429 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_05814830);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_05779d48);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_0579e470);
    bRam0000000005c24429 = 1;
  }
  puVar2 = PTR_DAT_05814830;
  Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantC__ResetToInitialValues_160a8a8
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
    Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantC__HideBoostersAndLevelText_160acf8
              ();
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar4 = DG_Tweening_DOTween__Sequence_1eda154(0);
    uVar5 = Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantC__PlayHeaderTextEnterAnimation_160ad94
                      (param_1);
    uVar4 = DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar4,uVar5,0);
    uVar5 = Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantC__PlayCoinEnterAnimation_160ae98
                      (param_1);
    uVar4 = DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar4,uVar5,0);
    uVar5 = Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantC__PlayPlayOnButtonEnterAnimation_160aebc
                      (param_1);
    uVar4 = DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar4,uVar5,0);
    uVar5 = Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantC__PlayGiveUpButtonEnterAnimation_160aefc
                      (param_1);
    uVar4 = DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar4,uVar5,0);
    uVar5 = Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantC__PlayBackgroundEnterAnimation_160af20
                      (param_1);
    lVar3 = DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar4,uVar5,0);
    lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    puVar1 = PTR_DAT_0579e470;
    if (lVar6 != 0) {
      DG_Tweening_TweenCallback___ctor_1ed6da8(lVar6,param_1,*(undefined8 *)PTR_DAT_05779d48,0);
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

