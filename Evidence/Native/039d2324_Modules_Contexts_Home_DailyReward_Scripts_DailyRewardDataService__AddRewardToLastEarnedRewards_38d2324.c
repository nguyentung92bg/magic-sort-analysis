/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardDataService$$AddRewardToLastEarnedRewards
void Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService__AddRewardToLastEarnedRewards (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService_o* __this, Modules_Contexts_Application_Reward_Scripts_RewardModel_o* selectedReward, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.DailyReward.Scripts.DailyRewardDataService$$AddRewardToLastEarnedRewards
   void 
   Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService__AddRewardToLastEarnedRewards
   (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService_o* __this,
   Modules_Contexts_Application_Reward_Scripts_RewardModel_o* selectedReward, const MethodInfo*
   method); */

void Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService__AddRewardToLastEarnedRewards_38d2324
               (long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  
  if ((bRam0000000005c34bb1 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05766c50);
    FUN_012d0dc8(PTR_DAT_0580c970);
    FUN_012d0dc8(PTR_DAT_057994c8);
    FUN_012d0dc8(PTR_DAT_0579bac0);
    FUN_012d0dc8(PTR_DAT_05781050);
    bRam0000000005c34bb1 = 1;
  }
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 == 0) goto LAB_039d2494;
  plVar6 = (long *)(lVar2 + 0x20);
  if (*plVar6 == 0) {
    lVar2 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05781050);
    if (lVar2 == 0) goto LAB_039d2494;
    System_Collections_Generic_List_object____ctor_21fc1fc(lVar2,*(undefined8 *)PTR_DAT_057994c8);
    *plVar6 = lVar2;
    FUN_012d0d74(plVar6,lVar2);
    lVar2 = *(long *)(param_1 + 0x10);
    if (lVar2 == 0) goto LAB_039d2494;
  }
  lVar2 = *(long *)(lVar2 + 0x20);
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + 0x10);
    lVar5 = *(long *)PTR_DAT_05766c50;
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    if (lVar3 != 0) {
      uVar1 = *(uint *)(lVar2 + 0x18);
      if (uVar1 < *(uint *)(lVar3 + 0x18)) {
        *(uint *)(lVar2 + 0x18) = uVar1 + 1;
        puVar4 = (undefined8 *)(lVar3 + (long)(int)uVar1 * 8 + 0x20);
        *puVar4 = param_2;
        FUN_012d0d74(puVar4,param_2);
      }
      else {
        (**(code **)(*(long *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x58) + 8))
                  (lVar2,param_2);
      }
      if ((*(long *)(param_1 + 0x10) != 0) &&
         (lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x20), lVar2 != 0)) {
        if (2 < *(int *)(lVar2 + 0x18)) {
          System_Collections_Generic_List_object___RemoveAt_21fe320
                    (lVar2,0,*(undefined8 *)PTR_DAT_0580c970);
        }
        *(undefined2 *)(param_1 + 0x20) = 0x101;
        return;
      }
    }
  }
LAB_039d2494:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

