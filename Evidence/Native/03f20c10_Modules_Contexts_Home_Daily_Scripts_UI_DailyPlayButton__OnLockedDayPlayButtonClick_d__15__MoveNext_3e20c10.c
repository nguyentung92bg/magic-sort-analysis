/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyPlayButton.<OnLockedDayPlayButtonClick>d__15$$MoveNext
void Modules_Contexts_Home_Daily_Scripts_UI_DailyPlayButton__OnLockedDayPlayButtonClick_d__15__MoveNext (Modules_Contexts_Home_Daily_Scripts_UI_DailyPlayButton__OnLockedDayPlayButtonClick_d__15_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Daily.Scripts.UI.DailyPlayButton.<OnLockedDayPlayButtonClick>d__15$$MoveNext
   void 
   Modules_Contexts_Home_Daily_Scripts_UI_DailyPlayButton__OnLockedDayPlayButtonClick_d__15__MoveNext
   (Modules_Contexts_Home_Daily_Scripts_UI_DailyPlayButton__OnLockedDayPlayButtonClick_d__15_o
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_Daily_Scripts_UI_DailyPlayButton__OnLockedDayPlayButtonClick_d__15__MoveNext_3e20c10
               (int *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_28;
  
  if ((bRam0000000005c38105 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575bc58);
    FUN_012d0dc8(PTR_DAT_05807a80);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057b9df8);
    FUN_012d0dc8(PTR_DAT_05797358);
    FUN_012d0dc8(PTR_DAT_05819ed8);
    FUN_012d0dc8(PTR_DAT_057e6548);
    bRam0000000005c38105 = 1;
  }
  uStack_28 = 0;
  lVar4 = *(long *)(param_1 + 10);
  if (*param_1 == 0) {
    uStack_28 = *(undefined8 *)(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *param_1 = -1;
  }
  else {
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    if (*(long *)(lVar4 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    lVar1 = Modules_Contexts_Home_Daily_Scripts_UI_RewardedButton__ShowRewarded_4106188
                      (*(long *)(lVar4 + 0x58),7,0);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    uStack_28 = System_Threading_Tasks_Task_bool___GetAwaiter_1fae4bc
                          (lVar1,*(undefined8 *)PTR_DAT_057e6548);
    uVar2 = System_Runtime_CompilerServices_TaskAwaiter_bool___get_IsCompleted_1db3280
                      (&uStack_28,*(undefined8 *)PTR_DAT_05819ed8);
    if ((uVar2 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0xc) = uStack_28;
      FUN_012d0d74(param_1 + 0xc,0);
      System_Runtime_CompilerServices_AsyncVoidMethodBuilder__AwaitUnsafeOnCompleted_TaskAwaiter_bool___DailyPlayButton__OnLockedDayPlayButtonClick_d__15__20d50f4
                (param_1 + 2,&uStack_28,param_1,*(undefined8 *)PTR_DAT_0575bc58);
      return;
    }
  }
  uVar2 = System_Runtime_CompilerServices_TaskAwaiter_bool___GetResult_1db32b0
                    (&uStack_28,*(undefined8 *)PTR_DAT_05797358);
  if ((uVar2 & 1) != 0) {
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    if (*(long *)(lVar4 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    *(undefined8 *)(*(long *)(lVar4 + 0x68) + 0x38) = *(undefined8 *)(lVar4 + 0x78);
    if (*(long *)(lVar4 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    Modules_Contexts_Home_Daily_Scripts_DailyService__UnlockSelectedDay_4105580
              (*(long *)(lVar4 + 0x68),0);
    if (*(long *)(lVar4 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    uVar3 = Modules_Contexts_Home_Daily_Scripts_DailyService__GetSelectedDailyLevelInfo_410533c
                      (*(long *)(lVar4 + 0x68),0);
    if (*(int *)(*(long *)PTR_DAT_057b8520 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    lVar4 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                      (*(undefined8 *)PTR_DAT_05807a80);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    Modules_Infrastructure_Common_Scripts_SignalNS_Signal_DateTime___Invoke_333cdbc
              (lVar4,uVar3,*(undefined8 *)PTR_DAT_057b9df8);
    if (cRam0000000005c230a8 == '\0') {
      FUN_012d0dc8(PTR_DAT_057ece38);
      cRam0000000005c230a8 = '\x01';
    }
    if (**(long **)(*(long *)PTR_DAT_057ece38 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    Modules_Contexts_Application_Events_Scripts_EventSender__SendDailyRewardedWatched_1450238
              (**(long **)(*(long *)PTR_DAT_057ece38 + 0xb8),uVar3,0);
  }
  *param_1 = -2;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__SetResult_244525c(param_1 + 2,0);
  return;
}

