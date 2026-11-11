/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyDateView$$OnDailyDateButtonClicked
void Modules_Contexts_Home_Daily_Scripts_UI_DailyDateView__OnDailyDateButtonClicked (Modules_Contexts_Home_Daily_Scripts_UI_DailyDateView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyDateView$$OnDailyDateButtonClicked
   void Modules_Contexts_Home_Daily_Scripts_UI_DailyDateView__OnDailyDateButtonClicked
   (Modules_Contexts_Home_Daily_Scripts_UI_DailyDateView_o* __this, const MethodInfo* method); */

void Modules_Contexts_Home_Daily_Scripts_UI_DailyDateView__OnDailyDateButtonClicked_3e1f61c
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  
  if (*(int *)(param_1 + 0x48) != 1) {
    return;
  }
  if (*(long *)(param_1 + 0x58) == 0) {
LAB_03f1f664:
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
                    /* try { // try from 03f1f640 to 0401f667 has its CatchHandler @ 03f1f758 */
  Modules_Contexts_Home_Daily_Scripts_UI_DailyCalendarController__SetCurrentSelectedDailyDate_4106d74
            (*(long *)(param_1 + 0x58),param_1,0);
  lVar4 = *(long *)(param_1 + 0x58);
  if (lVar4 == 0) goto LAB_03f1f664;
  uVar7 = *(undefined8 *)(param_1 + 0x48);
  uVar6 = *(undefined8 *)(param_1 + 0x50);
  if ((bRam0000000005c3aba5 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057bc5e8,uVar7,uVar6,0);
    FUN_012d0dc8(PTR_DAT_0580c470);
    FUN_012d0dc8(PTR_DAT_057b6700);
    bRam0000000005c3aba5 = 1;
  }
  uVar6 = Modules_Infrastructure_Utils_TimeFormatter__LocalizeDateTime_3de70c4(uVar6,0,0);
  puVar3 = PTR_DAT_0580c470;
  puVar2 = PTR_DAT_057bc5e8;
  puVar1 = PTR_DAT_057b6700;
  iVar8 = (int)uVar7;
  if (iVar8 != 4) {
    if (iVar8 == 2) {
      if (*(long *)(lVar4 + 0x30) != 0) {
        Modules_Contexts_Home_Daily_Scripts_UI_DailyPlayButton__SetPlayButtonViewForState_3e20a64
                  (*(long *)(lVar4 + 0x30),1,0);
        if (*(long *)(lVar4 + 0x30) != 0) {
          plVar5 = *(long **)(*(long *)(lVar4 + 0x30) + 0x50);
          if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03f20a5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar5 + 0x558))(plVar5,uVar6,*(undefined8 *)(*plVar5 + 0x560));
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0(0,uVar6,0);
        }
      }
      goto LAB_04206c28;
    }
    if (iVar8 != 1) {
      return;
    }
  }
  if (*(long *)(lVar4 + 0x30) != 0) {
    Modules_Contexts_Home_Daily_Scripts_UI_DailyPlayButton__SetPlayButtonViewForState_3e20a64
              (*(long *)(lVar4 + 0x30),0,0);
    lVar4 = *(long *)(lVar4 + 0x30);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar7 = Modules_Infrastructure_Utils_GrandStringExtensions__Localize_3de2900
                      (*(undefined8 *)puVar1,0);
    uVar7 = System_String__Concat_1ed10d8(uVar7,*(undefined8 *)puVar3,uVar6,0);
    if (lVar4 != 0) {
      plVar5 = *(long **)(lVar4 + 0x40);
      if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03f20a38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x558))(plVar5,uVar7,*(undefined8 *)(*plVar5 + 0x560));
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0(0,uVar7,0);
    }
  }
LAB_04206c28:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

