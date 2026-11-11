/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyPopup$$PlayClaimDay
DG_Tweening_Tween_o* Modules_Contexts_Home_Daily_Scripts_UI_DailyPopup__PlayClaimDay (Modules_Contexts_Home_Daily_Scripts_UI_DailyPopup_o* __this, System_DateTime_o dateTime, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyPopup$$PlayClaimDay
   DG_Tweening_Tween_o* Modules_Contexts_Home_Daily_Scripts_UI_DailyPopup__PlayClaimDay
   (Modules_Contexts_Home_Daily_Scripts_UI_DailyPopup_o* __this, System_DateTime_o dateTime, const
   MethodInfo* method); */

undefined8
Modules_Contexts_Home_Daily_Scripts_UI_DailyPopup__PlayClaimDay_3e210b8
          (long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  lVar5 = *(long *)(param_1 + 0x18);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if ((bRam0000000005c380f8 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    bRam0000000005c380f8 = 1;
  }
  if (cRam0000000005c230a8 == '\0') {
    FUN_012d0dc8(PTR_DAT_057ece38);
    cRam0000000005c230a8 = '\x01';
  }
  puVar2 = PTR_DAT_057815e0;
  if (**(long **)(*(long *)PTR_DAT_057ece38 + 0xb8) != 0) {
    Modules_Contexts_Application_Events_Scripts_EventSender__SendDailyChallengeScreenViewEvent_144ff5c
              (**(long **)(*(long *)PTR_DAT_057ece38 + 0xb8),3,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar3 = DG_Tweening_DOTween__Sequence_1eda154(0);
    puVar6 = (undefined8 *)(lVar5 + 0x78);
    *puVar6 = uVar3;
    FUN_012d0d74(puVar6,uVar3);
    if (*(long *)(lVar5 + 0x20) != 0) {
      uVar7 = *(undefined8 *)(lVar5 + 0x78);
      uVar3 = Modules_Contexts_Home_Daily_Scripts_UI_DailyCalendarController__PlayIndividualDateClaim_4107080
                        (*(long *)(lVar5 + 0x20),param_2,0);
      DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar7,uVar3,0);
      iVar1 = *(int *)(lVar5 + 0x68);
      lVar4 = *(long *)(lVar5 + 0x18);
      if (*(int *)(lVar5 + 0x6c) < iVar1) {
        if (lVar4 == 0) goto LAB_03f1f2b0;
        Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressBarController__SetProgressBarToDay_3e1edb8
                  (lVar4,iVar1);
      }
      else {
        if (lVar4 == 0) goto LAB_03f1f2b0;
        uVar7 = *puVar6;
        uVar3 = Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressBarController__PlayProgressBar_3e1f2b4
                          (lVar4,iVar1 + -1);
        DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar7,uVar3,0);
      }
      return *puVar6;
    }
  }
LAB_03f1f2b0:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

