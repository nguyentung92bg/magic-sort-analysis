/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyStuckPopUpVariantA$$PlayEnterAnimation
void Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantA__PlayEnterAnimation (Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantA_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyStuckPopUpVariantA$$PlayEnterAnimation
   void Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantA__PlayEnterAnimation
   (Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantA_o* __this, const MethodInfo*
   method); */

long Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantA__PlayEnterAnimation_3e22db4
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar1 = PTR_DAT_057b8520;
  if ((bRam0000000005c38124 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057b82c8);
    FUN_012d0dc8(PTR_DAT_05814830);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_0579e470);
    bRam0000000005c38124 = 1;
  }
  puVar2 = PTR_DAT_05814830;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar3 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar2);
  puVar2 = PTR_DAT_057815e0;
  puVar1 = PTR_DAT_057606c8;
  if (lVar3 != 0) {
    Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar3,0);
    Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantA__HideBoostersAndLevelText_3e22f78
              ();
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar4 = DG_Tweening_DOTween__Sequence_1eda154(0);
    uVar5 = Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantA__PlayHeaderTextEnterAnimation_3e23014
                      (param_1);
    uVar4 = DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar4,uVar5,0);
    uVar5 = Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantA__PlayCoinEnterAnimation_3e23038
                      (param_1);
    uVar4 = DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar4,uVar5,0);
    uVar5 = Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantA__PlayPlayOnButtonEnterAnimation_3e2305c
                      (param_1);
    uVar4 = DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar4,uVar5,0);
    uVar5 = Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantA__PlayGiveUpButtonEnterAnimation_3e2309c
                      (param_1);
    uVar4 = DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar4,uVar5,0);
    uVar5 = Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantA__PlayBackgroundEnterAnimation_3e230c0
                      (param_1);
    lVar3 = DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar4,uVar5,0);
    lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    puVar1 = PTR_DAT_0579e470;
    if (lVar6 != 0) {
      DG_Tweening_TweenCallback___ctor_1ed6da8(lVar6,param_1,*(undefined8 *)PTR_DAT_057b82c8,0);
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

