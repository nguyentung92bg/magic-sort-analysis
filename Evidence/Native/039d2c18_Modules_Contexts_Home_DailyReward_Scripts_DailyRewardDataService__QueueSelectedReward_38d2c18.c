/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardDataService$$QueueSelectedReward
void Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService__QueueSelectedReward (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService_o* __this, Modules_Contexts_Application_Reward_Scripts_RewardModel_o* selectedReward, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardDataService$$QueueSelectedReward
   void Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService__QueueSelectedReward
   (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService_o* __this,
   Modules_Contexts_Application_Reward_Scripts_RewardModel_o* selectedReward, const MethodInfo*
   method); */

void Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService__QueueSelectedReward_38d2c18
               (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c34bb2 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057bc6b0);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    bRam0000000005c34bb2 = 1;
  }
  if (**(long **)(*(long *)puVar1 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar2 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar2 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                    (lVar2,*(undefined8 *)PTR_DAT_057bc6b0);
  if (lVar2 != 0) {
    Modules_Contexts_Application_Reward_Scripts_RewardService__QueueBulkReward_3ce9518
              (lVar2,0x1e,param_2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

