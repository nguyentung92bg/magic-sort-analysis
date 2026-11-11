/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardDataService$$GetSegment
System_String_o* Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService__GetSegment (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardDataService$$GetSegment
   System_String_o* Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService__GetSegment
   (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService_o* __this, const MethodInfo*
   method); */

undefined8
Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService__GetSegment_38d0660(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  if ((bRam0000000005c34ba7 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057c9ca0);
    bRam0000000005c34ba7 = 1;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x18);
    if (lVar1 == 0) {
      puVar2 = *(undefined8 **)(*(long *)PTR_DAT_057c9ca0 + 0xb8);
    }
    else {
      puVar2 = (undefined8 *)(lVar1 + 0x18);
    }
    return *puVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

