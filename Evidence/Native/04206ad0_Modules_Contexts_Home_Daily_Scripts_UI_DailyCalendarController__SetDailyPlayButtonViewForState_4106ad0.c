/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyCalendarController$$SetDailyPlayButtonViewForState
void Modules_Contexts_Home_Daily_Scripts_UI_DailyCalendarController__SetDailyPlayButtonViewForState (Modules_Contexts_Home_Daily_Scripts_UI_DailyCalendarController_o* __this, int32_t state, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Daily.Scripts.UI.DailyCalendarController$$SetDailyPlayButtonViewForState
   void 
   Modules_Contexts_Home_Daily_Scripts_UI_DailyCalendarController__SetDailyPlayButtonViewForState
   (Modules_Contexts_Home_Daily_Scripts_UI_DailyCalendarController_o* __this, int32_t state, const
   MethodInfo* method); */

void Modules_Contexts_Home_Daily_Scripts_UI_DailyCalendarController__SetDailyPlayButtonViewForState_4106ad0
               (long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *(long *)(param_1 + 0x30);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if (param_2 == 2) {
    if (*(long *)(lVar2 + 0x28) == 0) goto LAB_03f20b24;
    UnityEngine_GameObject__SetActive_408e318(*(long *)(lVar2 + 0x28),0,0);
    lVar1 = *(long *)(lVar2 + 0x30);
    if (lVar1 == 0) goto LAB_03f20b24;
    uVar3 = 1;
  }
  else {
    if (param_2 == 1) {
      if (*(long *)(lVar2 + 0x28) == 0) goto LAB_03f20b24;
      UnityEngine_GameObject__SetActive_408e318(*(long *)(lVar2 + 0x28),0,0);
      if (*(long *)(lVar2 + 0x30) == 0) goto LAB_03f20b24;
      UnityEngine_GameObject__SetActive_408e318(*(long *)(lVar2 + 0x30),0,0);
      lVar2 = *(long *)(lVar2 + 0x38);
      if (lVar2 == 0) goto LAB_03f20b24;
      uVar3 = 1;
      goto LAB_03f20b10;
    }
    if (param_2 != 0) {
      return;
    }
    if (*(long *)(lVar2 + 0x28) == 0) goto LAB_03f20b24;
    UnityEngine_GameObject__SetActive_408e318(*(long *)(lVar2 + 0x28),1,0);
    lVar1 = *(long *)(lVar2 + 0x30);
    if (lVar1 == 0) goto LAB_03f20b24;
    uVar3 = 0;
  }
  UnityEngine_GameObject__SetActive_408e318(lVar1,uVar3,0);
  lVar2 = *(long *)(lVar2 + 0x38);
  if (lVar2 == 0) {
LAB_03f20b24:
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  uVar3 = 0;
LAB_03f20b10:
  if (pcRam0000000005c3a388 == (code *)0x0) {
    pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
  }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000005c3a388)(lVar2,uVar3);
  return;
}

