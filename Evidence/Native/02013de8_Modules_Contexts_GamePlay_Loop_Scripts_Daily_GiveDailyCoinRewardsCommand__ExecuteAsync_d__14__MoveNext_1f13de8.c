/* IL2CPP: Modules.Contexts.GamePlay.Loop.Scripts.Daily.GiveDailyCoinRewardsCommand.<ExecuteAsync>d__14$$MoveNext
void Modules_Contexts_GamePlay_Loop_Scripts_Daily_GiveDailyCoinRewardsCommand__ExecuteAsync_d__14__MoveNext (Modules_Contexts_GamePlay_Loop_Scripts_Daily_GiveDailyCoinRewardsCommand__ExecuteAsync_d__14_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Loop.Scripts.Daily.GiveDailyCoinRewardsCommand.<ExecuteAsync>d__14$$MoveNext
   void 
   Modules_Contexts_GamePlay_Loop_Scripts_Daily_GiveDailyCoinRewardsCommand__ExecuteAsync_d__14__MoveNext
   (Modules_Contexts_GamePlay_Loop_Scripts_Daily_GiveDailyCoinRewardsCommand__ExecuteAsync_d__14_o
   __this, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Loop_Scripts_Daily_GiveDailyCoinRewardsCommand__ExecuteAsync_d__14__MoveNext_1f13de8
               (int *param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uStack_18;
  
  if ((bRam0000000005c2861d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05782470);
    FUN_012d0dc8(PTR_DAT_0576e800);
    bRam0000000005c2861d = 1;
  }
  puVar1 = PTR_DAT_0576e800;
  uStack_18 = 0;
  if (*param_1 == 0) {
    uStack_18 = *(undefined8 *)(param_1 + 10);
    param_1[10] = 0;
    param_1[0xb] = 0;
    *param_1 = -1;
  }
  else {
    if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    lVar2 = Modules_Contexts_GamePlay_Loop_Scripts_Daily_GiveDailyCoinRewardsCommand__GiveDailyLevelCoinReward_1f13ce0
                      ();
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    uStack_18 = System_Threading_Tasks_Task__GetAwaiter_2a11c1c(lVar2,0);
    uVar3 = System_Runtime_CompilerServices_TaskAwaiter__get_IsCompleted_2444a1c(&uStack_18,0);
    if ((uVar3 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 10) = uStack_18;
      FUN_012d0d74(param_1 + 10,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      System_Runtime_CompilerServices_AsyncTaskMethodBuilder__AwaitUnsafeOnCompleted_TaskAwaiter__GiveDailyCoinRewardsCommand__ExecuteAsync_d__14__1f53cac
                (param_1 + 2,&uStack_18,param_1,*(undefined8 *)PTR_DAT_05782470);
      return;
    }
  }
  System_Runtime_CompilerServices_TaskAwaiter__GetResult_2444aec(&uStack_18,0);
  *param_1 = -2;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetResult_24435bc(param_1 + 2,0);
  return;
}

