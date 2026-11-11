/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyController$$PlayClaimDay
DG_Tweening_Sequence_o* Modules_Contexts_Home_Daily_Scripts_UI_DailyController__PlayClaimDay (Modules_Contexts_Home_Daily_Scripts_UI_DailyController_o* __this, System_DateTime_o dateTime, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyController$$PlayClaimDay
   DG_Tweening_Sequence_o* Modules_Contexts_Home_Daily_Scripts_UI_DailyController__PlayClaimDay
   (Modules_Contexts_Home_Daily_Scripts_UI_DailyController_o* __this, System_DateTime_o dateTime,
   const MethodInfo* method); */

undefined8
Modules_Contexts_Home_Daily_Scripts_UI_DailyController__PlayClaimDay_3e1f188
          (long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  if ((bRam0000000005c380f8 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    bRam0000000005c380f8 = 1;
  }
  if (cRam0000000005c230a8 == '\0') {
    FUN_012d0dc8(PTR_DAT_057ece38);
    cRam0000000005c230a8 = '\x01';
  }
                    /* try { // try from 03f1f1dc to 0401f29f has its CatchHandler @ 03f1f1dc
                       catch() { ... } // from try @ 03f1f1dc with catch @ 03f1f1dc
                       catch() { ... } // from try @ 03f1f4d0 with catch @ 03f1f1dc
                       catch() { ... } // from try @ 03f1f5b4 with catch @ 03f1f1dc
                       catch() { ... } // from try @ 03f1f668 with catch @ 03f1f1dc
                       catch() { ... } // from try @ 03f1f748 with catch @ 03f1f1dc
                       catch() { ... } // from try @ 03f1f790 with catch @ 03f1f1dc
                       catch() { ... } // from try @ 03f1f804 with catch @ 03f1f1dc */
  puVar2 = PTR_DAT_057815e0;
  if (**(long **)(*(long *)PTR_DAT_057ece38 + 0xb8) != 0) {
    Modules_Contexts_Application_Events_Scripts_EventSender__SendDailyChallengeScreenViewEvent_144ff5c
              (**(long **)(*(long *)PTR_DAT_057ece38 + 0xb8),3,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar3 = DG_Tweening_DOTween__Sequence_1eda154(0);
    puVar5 = (undefined8 *)(param_1 + 0x78);
    *puVar5 = uVar3;
    FUN_012d0d74(puVar5,uVar3);
    if (*(long *)(param_1 + 0x20) != 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x78);
      uVar3 = Modules_Contexts_Home_Daily_Scripts_UI_DailyCalendarController__PlayIndividualDateClaim_4107080
                        (*(long *)(param_1 + 0x20),param_2,0);
      DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar6,uVar3,0);
      iVar1 = *(int *)(param_1 + 0x68);
      lVar4 = *(long *)(param_1 + 0x18);
      if (*(int *)(param_1 + 0x6c) < iVar1) {
        if (lVar4 == 0) goto LAB_03f1f2b0;
        Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressBarController__SetProgressBarToDay_3e1edb8
                  (lVar4,iVar1);
      }
      else {
        if (lVar4 == 0) goto LAB_03f1f2b0;
        uVar6 = *puVar5;
        uVar3 = Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressBarController__PlayProgressBar_3e1f2b4
                          (lVar4,iVar1 + -1);
        DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar6,uVar3,0);
      }
                    /* try { // try from 03f1f2a0 to 0401f2a7 has its CatchHandler @ 03f1f5cc */
      return *puVar5;
    }
  }
LAB_03f1f2b0:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

