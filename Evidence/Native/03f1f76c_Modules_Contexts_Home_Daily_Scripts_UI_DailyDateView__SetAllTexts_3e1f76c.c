/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyDateView$$SetAllTexts
void Modules_Contexts_Home_Daily_Scripts_UI_DailyDateView__SetAllTexts (Modules_Contexts_Home_Daily_Scripts_UI_DailyDateView_o* __this, System_String_o* text, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyDateView$$SetAllTexts
   void Modules_Contexts_Home_Daily_Scripts_UI_DailyDateView__SetAllTexts
   (Modules_Contexts_Home_Daily_Scripts_UI_DailyDateView_o* __this, System_String_o* text, const
   MethodInfo* method); */

void Modules_Contexts_Home_Daily_Scripts_UI_DailyDateView__SetAllTexts_3e1f76c
               (long param_1,undefined8 param_2)

{
  long *plVar1;
  
                    /* try { // try from 03f1f778 to 0401f78f has its CatchHandler @ 03f1f7fc */
  plVar1 = *(long **)(param_1 + 0x38);
  if (plVar1 != (long *)0x0) {
                    /* try { // try from 03f1f790 to 0401f7eb has its CatchHandler @ 03f1f1dc */
    (**(code **)(*plVar1 + 0x558))(plVar1,param_2,*(undefined8 *)(*plVar1 + 0x560));
    plVar1 = *(long **)(param_1 + 0x40);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x558))(plVar1,param_2,*(undefined8 *)(*plVar1 + 0x560));
      plVar1 = *(long **)(param_1 + 0x30);
      if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03f1f7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x558))(plVar1,param_2,*(undefined8 *)(*plVar1 + 0x560));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

