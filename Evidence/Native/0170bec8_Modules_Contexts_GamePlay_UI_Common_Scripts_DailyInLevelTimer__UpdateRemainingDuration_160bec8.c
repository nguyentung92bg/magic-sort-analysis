/* IL2CPP: Modules.Contexts.GamePlay.UI.Common.Scripts.DailyInLevelTimer$$UpdateRemainingDuration
void Modules_Contexts_GamePlay_UI_Common_Scripts_DailyInLevelTimer__UpdateRemainingDuration (Modules_Contexts_GamePlay_UI_Common_Scripts_DailyInLevelTimer_o* __this, int32_t remainingTime, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.UI.Common.Scripts.DailyInLevelTimer$$UpdateRemainingDuration
   void Modules_Contexts_GamePlay_UI_Common_Scripts_DailyInLevelTimer__UpdateRemainingDuration
   (Modules_Contexts_GamePlay_UI_Common_Scripts_DailyInLevelTimer_o* __this, int32_t remainingTime,
   const MethodInfo* method); */

void Modules_Contexts_GamePlay_UI_Common_Scripts_DailyInLevelTimer__UpdateRemainingDuration_160bec8
               (long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_0576c1b8;
  if ((bRam0000000005c2443b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c1b8);
    FUN_012d0dc8(PTR_DAT_05809550);
    bRam0000000005c2443b = 1;
  }
  puVar2 = PTR_DAT_05809550;
  uStack_28 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uStack_28 = System_TimeSpan__FromSeconds_269a000((double)param_2,0);
  plVar4 = *(long **)(param_1 + 0x20);
  uVar3 = System_TimeSpan__ToString_269a3ac(&uStack_28,*(undefined8 *)puVar2,0);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x558))(plVar4,uVar3,*(undefined8 *)(*plVar4 + 0x560));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

