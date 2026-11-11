/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardService$$GetEndDate
System_DateTime_o Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__GetEndDate (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardService$$GetEndDate
   System_DateTime_o Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__GetEndDate
   (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService_o* __this, const MethodInfo*
   method); */

ulong Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__GetEndDate_38d4188
                (undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auStack_30 [16];
  
  if ((bRam0000000005c34bc5 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0580b9d0);
    bRam0000000005c34bc5 = 1;
  }
  lVar2 = Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__GetCacheEventInfo_38d4164
                    (param_1);
  puVar1 = PTR_DAT_05814758;
  if (lVar2 != 0) {
    uVar4 = *(undefined8 *)(lVar2 + 0x28);
    if ((bRam0000000005c34bc6 & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_05814758);
      bRam0000000005c34bc6 = 1;
    }
    auStack_30._0_8_ = 0;
    auStack_30._8_8_ = 0;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    auStack_30 = System_DateTimeOffset__FromUnixTimeSeconds_2104524(uVar4,0);
    uVar3 = System_DateTimeOffset__get_UtcDateTime_2103804(auStack_30,0);
    return uVar3;
  }
  if (*(int *)(*(long *)PTR_DAT_0580b9d0 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  puVar1 = PTR_DAT_0580b9d0;
  if ((bRam0000000005c29802 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0580b9d0);
    bRam0000000005c29802 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar2 = thunk_FUN_012d3910();
  return lVar2 + 0x701ce1722770000U | 0x4000000000000000;
}

