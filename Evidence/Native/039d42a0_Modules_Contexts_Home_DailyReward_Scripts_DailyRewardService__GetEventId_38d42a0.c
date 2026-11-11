/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardService$$GetEventId
System_String_o* Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__GetEventId (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardService$$GetEventId
   System_String_o* Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__GetEventId
   (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService_o* __this, const MethodInfo*
   method); */

undefined8
Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__GetEventId_38d42a0(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = (undefined8 *)PTR_DAT_05774390;
  if ((bRam0000000005c34bc7 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05774390);
    bRam0000000005c34bc7 = 1;
  }
  lVar2 = Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__GetCacheEventInfo_38d4164
                    (param_1);
  if (lVar2 != 0) {
    puVar1 = (undefined8 *)(lVar2 + 0x10);
  }
  return *puVar1;
}

