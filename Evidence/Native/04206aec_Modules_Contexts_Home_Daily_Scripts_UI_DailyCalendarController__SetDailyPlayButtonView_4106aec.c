/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyCalendarController$$SetDailyPlayButtonView
void Modules_Contexts_Home_Daily_Scripts_UI_DailyCalendarController__SetDailyPlayButtonView (Modules_Contexts_Home_Daily_Scripts_UI_DailyCalendarController_o* __this, Modules_Contexts_Home_Daily_Scripts_DailyDateModel_o dateModel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyCalendarController$$SetDailyPlayButtonView
   void Modules_Contexts_Home_Daily_Scripts_UI_DailyCalendarController__SetDailyPlayButtonView
   (Modules_Contexts_Home_Daily_Scripts_UI_DailyCalendarController_o* __this,
   Modules_Contexts_Home_Daily_Scripts_DailyDateModel_o dateModel, const MethodInfo* method); */

void Modules_Contexts_Home_Daily_Scripts_UI_DailyCalendarController__SetDailyPlayButtonView_4106aec
               (long param_1,int param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  if ((bRam0000000005c3aba5 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057bc5e8);
    FUN_012d0dc8(PTR_DAT_0580c470);
    FUN_012d0dc8(PTR_DAT_057b6700);
    bRam0000000005c3aba5 = 1;
  }
  uVar5 = Modules_Infrastructure_Utils_TimeFormatter__LocalizeDateTime_3de70c4(param_3,0,0);
  puVar3 = PTR_DAT_0580c470;
  puVar2 = PTR_DAT_057bc5e8;
  puVar1 = PTR_DAT_057b6700;
  if (param_2 != 4) {
    if (param_2 == 2) {
      if (*(long *)(param_1 + 0x30) != 0) {
        Modules_Contexts_Home_Daily_Scripts_UI_DailyPlayButton__SetPlayButtonViewForState_3e20a64
                  (*(long *)(param_1 + 0x30),1,0);
        if (*(long *)(param_1 + 0x30) != 0) {
          plVar4 = *(long **)(*(long *)(param_1 + 0x30) + 0x50);
          if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03f20a5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar4 + 0x558))(plVar4,uVar5,*(undefined8 *)(*plVar4 + 0x560));
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0(0,uVar5,0);
        }
      }
      goto LAB_04206c28;
    }
    if (param_2 != 1) {
      return;
    }
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    Modules_Contexts_Home_Daily_Scripts_UI_DailyPlayButton__SetPlayButtonViewForState_3e20a64
              (*(long *)(param_1 + 0x30),0,0);
    lVar7 = *(long *)(param_1 + 0x30);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar6 = Modules_Infrastructure_Utils_GrandStringExtensions__Localize_3de2900
                      (*(undefined8 *)puVar1,0);
    uVar5 = System_String__Concat_1ed10d8(uVar6,*(undefined8 *)puVar3,uVar5,0);
    if (lVar7 != 0) {
      plVar4 = *(long **)(lVar7 + 0x40);
      if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03f20a38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x558))(plVar4,uVar5,*(undefined8 *)(*plVar4 + 0x560));
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0(0,uVar5,0);
    }
  }
LAB_04206c28:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

