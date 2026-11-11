/* IL2CPP: Modules.Contexts.GamePlay.Loop.Scripts.Daily.GiveDailyCoinRewardsCommand.<GiveDailyLevelCoinReward>d__15$$MoveNext
void Modules_Contexts_GamePlay_Loop_Scripts_Daily_GiveDailyCoinRewardsCommand__GiveDailyLevelCoinReward_d__15__MoveNext (Modules_Contexts_GamePlay_Loop_Scripts_Daily_GiveDailyCoinRewardsCommand__GiveDailyLevelCoinReward_d__15_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Loop.Scripts.Daily.GiveDailyCoinRewardsCommand.<GiveDailyLevelCoinReward>d__15$$MoveNext
   void 
   Modules_Contexts_GamePlay_Loop_Scripts_Daily_GiveDailyCoinRewardsCommand__GiveDailyLevelCoinReward_d__15__MoveNext
   (Modules_Contexts_GamePlay_Loop_Scripts_Daily_GiveDailyCoinRewardsCommand__GiveDailyLevelCoinReward_d__15_o
   __this, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Loop_Scripts_Daily_GiveDailyCoinRewardsCommand__GiveDailyLevelCoinReward_d__15__MoveNext_1f14028
               (int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uStack_28;
  
  if ((bRam0000000005c2861f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d0560);
    FUN_012d0dc8(PTR_DAT_0576e800);
    FUN_012d0dc8(PTR_DAT_057bc6b0);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    bRam0000000005c2861f = 1;
  }
  puVar2 = PTR_DAT_0576e800;
  puVar1 = PTR_DAT_0576aae0;
  uStack_28 = 0;
  if (*param_1 == 0) {
    uStack_28 = *(undefined8 *)(param_1 + 10);
    param_1[10] = 0;
    param_1[0xb] = 0;
    *param_1 = -1;
  }
  else {
    lVar6 = *(long *)(param_1 + 8);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    *(undefined1 *)(lVar6 + 0x10) = 1;
    if (**(long **)(*(long *)puVar1 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    lVar3 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    lVar3 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                      (lVar3,*(undefined8 *)PTR_DAT_057bc6b0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    uVar4 = Modules_Contexts_Application_Reward_Scripts_RewardService__GiveDailyLevelCoinRewards_3ce8d3c
                      (lVar3,0);
    *(undefined8 *)(lVar6 + 0x20) = uVar4;
    FUN_012d0d74();
    lVar6 = Modules_Infrastructure_Utils_TweenExtensions__AsyncWaitForCompletionWithCancellationToken_3de75b8
                      (*(undefined8 *)(lVar6 + 0x20),*(undefined8 *)(lVar6 + 0x18),0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    uStack_28 = System_Threading_Tasks_Task__GetAwaiter_2a11c1c(lVar6,0);
    uVar5 = System_Runtime_CompilerServices_TaskAwaiter__get_IsCompleted_2444a1c(&uStack_28,0);
    if ((uVar5 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 10) = uStack_28;
      FUN_012d0d74(param_1 + 10,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      System_Runtime_CompilerServices_AsyncTaskMethodBuilder__AwaitUnsafeOnCompleted_TaskAwaiter__GiveDailyCoinRewardsCommand__GiveDailyLevelCoinReward_d__15__1f53d2c
                (param_1 + 2,&uStack_28,param_1,*(undefined8 *)PTR_DAT_057d0560);
      return;
    }
  }
  System_Runtime_CompilerServices_TaskAwaiter__GetResult_2444aec(&uStack_28,0);
  *param_1 = -2;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetResult_24435bc(param_1 + 2,0);
  return;
}

