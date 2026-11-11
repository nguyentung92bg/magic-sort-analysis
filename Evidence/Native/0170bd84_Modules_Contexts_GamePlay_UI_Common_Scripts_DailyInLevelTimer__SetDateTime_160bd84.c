/* IL2CPP: Modules.Contexts.GamePlay.UI.Common.Scripts.DailyInLevelTimer$$SetDateTime
void Modules_Contexts_GamePlay_UI_Common_Scripts_DailyInLevelTimer__SetDateTime (Modules_Contexts_GamePlay_UI_Common_Scripts_DailyInLevelTimer_o* __this, System_DateTime_o dateTime, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.UI.Common.Scripts.DailyInLevelTimer$$SetDateTime
   void Modules_Contexts_GamePlay_UI_Common_Scripts_DailyInLevelTimer__SetDateTime
   (Modules_Contexts_GamePlay_UI_Common_Scripts_DailyInLevelTimer_o* __this, System_DateTime_o
   dateTime, const MethodInfo* method); */

void Modules_Contexts_GamePlay_UI_Common_Scripts_DailyInLevelTimer__SetDateTime_160bd84
               (long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x18);
  uVar1 = Modules_Infrastructure_Utils_TimeFormatter__LocalizeDateTime_3de70c4(param_2,1,0);
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0170bdb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x558))(plVar2,uVar1,*(undefined8 *)(*plVar2 + 0x560));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

