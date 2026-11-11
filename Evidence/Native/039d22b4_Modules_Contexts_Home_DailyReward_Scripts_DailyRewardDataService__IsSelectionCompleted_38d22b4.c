/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardDataService$$IsSelectionCompleted
bool Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService__IsSelectionCompleted (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardDataService$$IsSelectionCompleted
   bool Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService__IsSelectionCompleted
   (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService_o* __this, const MethodInfo*
   method); */

bool Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService__IsSelectionCompleted_38d22b4
               (long param_1)

{
  bool bVar1;
  long lVar2;
  
  if ((bRam0000000005c34bb6 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f8ee8);
    bRam0000000005c34bb6 = 1;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x18);
    if (((lVar2 == 0) || (*(long *)(lVar2 + 0x38) == 0)) || (*(long *)(lVar2 + 0x40) == 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = 0 < *(int *)(*(long *)(lVar2 + 0x40) + 0x18);
    }
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

