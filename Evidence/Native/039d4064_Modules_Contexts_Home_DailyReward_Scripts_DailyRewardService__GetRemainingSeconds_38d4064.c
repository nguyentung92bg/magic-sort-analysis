/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardService$$GetRemainingSeconds
int64_t Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__GetRemainingSeconds (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardService$$GetRemainingSeconds
   int64_t Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__GetRemainingSeconds
   (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService_o* __this, const MethodInfo*
   method); */

long Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__GetRemainingSeconds_38d4064
               (undefined8 param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  double dVar6;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((bRam0000000005c34bc4 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0580b9d0);
    FUN_012d0dc8(PTR_DAT_0576c1b8);
    bRam0000000005c34bc4 = 1;
  }
  uStack_28 = 0;
  lVar3 = Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__GetCacheEventInfo_38d4164
                    (param_1);
  puVar2 = PTR_DAT_0576c1b8;
  lVar5 = 0;
  if (lVar3 != 0) {
    if (*(int *)(*(long *)PTR_DAT_0580b9d0 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar4 = System_DateTime__get_UtcNow_2100638(0);
    uStack_30 = 0;
    System_DateTime___ctor_20fda84(&uStack_30,0x7b2,1,1,0);
    uStack_28 = System_DateTime__op_Subtraction_2101f60(uVar4,uStack_30,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_0130472c(*(long *)puVar2);
    }
    dVar6 = (double)System_TimeSpan__get_TotalSeconds_26999ac(&uStack_28,0);
    iVar1 = -0x80000000;
    if (dVar6 != INFINITY) {
      iVar1 = (int)dVar6;
    }
    lVar5 = (long)(*(int *)(lVar3 + 0x28) - iVar1);
  }
  return lVar5;
}

