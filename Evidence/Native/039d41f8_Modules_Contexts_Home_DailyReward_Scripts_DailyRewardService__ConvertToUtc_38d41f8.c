/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardService$$ConvertToUtc
System_DateTime_o Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__ConvertToUtc (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService_o* __this, int64_t time, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardService$$ConvertToUtc
   System_DateTime_o Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__ConvertToUtc
   (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService_o* __this, int64_t time, const
   MethodInfo* method); */

void Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__ConvertToUtc_38d41f8
               (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_30 [16];
  
  puVar1 = PTR_DAT_05814758;
  if ((bRam0000000005c34bc6 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05814758);
    bRam0000000005c34bc6 = 1;
  }
  auStack_30._0_8_ = 0;
  auStack_30._8_8_ = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  auStack_30 = System_DateTimeOffset__FromUnixTimeSeconds_2104524(param_2,0);
  System_DateTimeOffset__get_UtcDateTime_2103804(auStack_30,0);
  return;
}

