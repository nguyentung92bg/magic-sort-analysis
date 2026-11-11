/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardRemoteService$$GetEventInfo
System_Threading_Tasks_Task_ApiResponse_DailyRewardEventInfoResponse___o* Modules_Contexts_Home_DailyReward_Scripts_DailyRewardRemoteService__GetEventInfo (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardRemoteService_o* __this, int32_t eventType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardRemoteService$$GetEventInfo
   System_Threading_Tasks_Task_ApiResponse_DailyRewardEventInfoResponse___o*
   Modules_Contexts_Home_DailyReward_Scripts_DailyRewardRemoteService__GetEventInfo
   (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardRemoteService_o* __this, int32_t eventType,
   const MethodInfo* method); */

void Modules_Contexts_Home_DailyReward_Scripts_DailyRewardRemoteService__GetEventInfo_38d34e4
               (undefined8 param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  puVar4 = PTR_DAT_057fbd10;
  if ((bRam0000000005c34bbf & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05784308);
    FUN_012d0dc8(PTR_DAT_057f5dd8);
    FUN_012d0dc8(PTR_DAT_057e8998);
    FUN_012d0dc8(PTR_DAT_057fbd10);
    bRam0000000005c34bbf = 1;
  }
  puVar3 = PTR_DAT_057f5dd8;
  puVar2 = PTR_DAT_057e8998;
  puVar1 = PTR_DAT_05784308;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_object___Create_17b04b0
            (&uStack_98,*(undefined8 *)puVar1);
  uVar5 = (ulong)&uStack_80 | 8;
  uStack_70 = uStack_90;
  uStack_78 = uStack_98;
  uStack_68 = uStack_88;
  FUN_012d0d74(uVar5,0);
  uStack_58 = param_1;
  FUN_012d0d74(&uStack_58,param_1);
  uStack_60 = CONCAT44(uStack_60._4_4_,param_2);
  uStack_80 = CONCAT44(uStack_80._4_4_,0xffffffff);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_object___Start_DailyRewardRemoteService__GetEventInfo_d__6__3321b50
            (uVar5,&uStack_80,*(undefined8 *)puVar3);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_object___get_Task_17b04c4
            (uVar5,*(undefined8 *)puVar2);
  return;
}

