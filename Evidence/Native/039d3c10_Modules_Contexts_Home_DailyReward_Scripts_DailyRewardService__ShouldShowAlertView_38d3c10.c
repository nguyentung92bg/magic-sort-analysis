/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardService$$ShouldShowAlertView
bool Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__ShouldShowAlertView (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardService$$ShouldShowAlertView
   bool Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__ShouldShowAlertView
   (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService_o* __this, const MethodInfo*
   method); */

bool Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__ShouldShowAlertView_38d3c10
               (long param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  iVar2 = Modules_Contexts_Home_DailyReward_Scripts_DailyRewardStateService__GetEventState_38d4d24()
  ;
  if (iVar2 == 2) {
    lVar3 = *(long *)(lVar3 + 0x28);
    if ((lVar3 == 0) || (lVar3 = *(long *)(lVar3 + 0x10), lVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    lVar3 = *(long *)(lVar3 + 0x18);
    if (lVar3 == 0) {
      bVar1 = true;
    }
    else {
      bVar1 = *(long *)(lVar3 + 0x38) == 0;
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

