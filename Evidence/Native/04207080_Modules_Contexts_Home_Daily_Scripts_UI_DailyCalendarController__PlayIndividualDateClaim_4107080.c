/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyCalendarController$$PlayIndividualDateClaim
DG_Tweening_Sequence_o* Modules_Contexts_Home_Daily_Scripts_UI_DailyCalendarController__PlayIndividualDateClaim (Modules_Contexts_Home_Daily_Scripts_UI_DailyCalendarController_o* __this, System_DateTime_o dateToPlay, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyCalendarController$$PlayIndividualDateClaim
   DG_Tweening_Sequence_o*
   Modules_Contexts_Home_Daily_Scripts_UI_DailyCalendarController__PlayIndividualDateClaim
   (Modules_Contexts_Home_Daily_Scripts_UI_DailyCalendarController_o* __this, System_DateTime_o
   dateToPlay, const MethodInfo* method); */

void Modules_Contexts_Home_Daily_Scripts_UI_DailyCalendarController__PlayIndividualDateClaim_4107080
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_0580b9d0;
  uStack_28 = param_2;
  if ((bRam0000000005c3abab & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0580b9d0);
    FUN_012d0dc8(PTR_DAT_0575feb0);
    bRam0000000005c3abab = 1;
  }
  lVar3 = *(long *)(param_1 + 0x18);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  iVar2 = System_DateTime__get_Day_2100110(&uStack_28,0);
  if ((lVar3 != 0) &&
     (lVar3 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar3,iVar2 + -1,*(undefined8 *)PTR_DAT_0575feb0), lVar3 != 0)) {
    Modules_Contexts_Home_Daily_Scripts_UI_DailyDateView__SetUnclaimedView_3e1f0d4(lVar3,0);
    Modules_Contexts_Home_Daily_Scripts_UI_DailyDateView__PlayDateComplete_3e1fb44(lVar3,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

