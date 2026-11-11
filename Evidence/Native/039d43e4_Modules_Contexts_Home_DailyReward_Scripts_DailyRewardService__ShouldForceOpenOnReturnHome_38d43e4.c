/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardService$$ShouldForceOpenOnReturnHome
bool Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__ShouldForceOpenOnReturnHome (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardService$$ShouldForceOpenOnReturnHome
   bool Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__ShouldForceOpenOnReturnHome
   (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService_o* __this, const MethodInfo*
   method); */

bool Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__ShouldForceOpenOnReturnHome_38d43e4
               (long param_1)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  
  uVar3 = Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__ShouldForceOpen_38d4028();
  if ((uVar3 & 1) == 0) {
    if ((*(long *)(param_1 + 0x10) == 0) ||
       (lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 0x10), lVar4 == 0)) {
LAB_039d4440:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    lVar4 = *(long *)(lVar4 + 0x18);
    if ((lVar4 == 0) || (*(long *)(lVar4 + 0x38) == 0)) {
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_039d4440;
      iVar2 = Modules_Contexts_Home_DailyReward_Scripts_DailyRewardStateService__GetEventState_38d4d24
                        ();
      bVar1 = iVar2 == 2;
    }
    else {
      bVar1 = false;
    }
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}

