/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardService$$IsEventEnded
bool Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__IsEventEnded (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardService$$IsEventEnded
   bool Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__IsEventEnded
   (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService_o* __this, const MethodInfo*
   method); */

bool Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__IsEventEnded_38d45a8
               (long param_1)

{
  int iVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    iVar1 = Modules_Contexts_Home_DailyReward_Scripts_DailyRewardStateService__GetEventState_38d4d24
                      ();
    if (iVar1 != 3) {
      if ((*(long *)(param_1 + 0x10) == 0) ||
         (lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x10), lVar2 == 0)) goto LAB_039d45f8;
      lVar2 = *(long *)(lVar2 + 0x18);
      if (lVar2 != 0) {
        return *(long *)(lVar2 + 0x38) == 0;
      }
    }
    return true;
  }
LAB_039d45f8:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

