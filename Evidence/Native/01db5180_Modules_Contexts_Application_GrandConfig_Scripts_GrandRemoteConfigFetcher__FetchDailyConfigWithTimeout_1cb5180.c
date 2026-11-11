/* IL2CPP: Modules.Contexts.Application.GrandConfig.Scripts.GrandRemoteConfigFetcher$$FetchDailyConfigWithTimeout
System_Threading_Tasks_Task_ApiResponse_GrandRemoteDailyLevelsConfigResponse___o* Modules_Contexts_Application_GrandConfig_Scripts_GrandRemoteConfigFetcher__FetchDailyConfigWithTimeout (Modules_Contexts_Application_GrandConfig_Scripts_GrandRemoteConfigFetcher_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.GrandConfig.Scripts.GrandRemoteConfigFetcher$$FetchDailyConfigWithTimeout
   System_Threading_Tasks_Task_ApiResponse_GrandRemoteDailyLevelsConfigResponse___o*
   Modules_Contexts_Application_GrandConfig_Scripts_GrandRemoteConfigFetcher__FetchDailyConfigWithTimeout
   (Modules_Contexts_Application_GrandConfig_Scripts_GrandRemoteConfigFetcher_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Application_GrandConfig_Scripts_GrandRemoteConfigFetcher__FetchDailyConfigWithTimeout_1cb5180
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar2 = PTR_DAT_0578fcd8;
  if ((bRam0000000005c2773a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05789180);
    FUN_012d0dc8(PTR_DAT_057ede60);
    FUN_012d0dc8(PTR_DAT_05804be8);
                    /* try { // try from 01db51d4 to 01eb5213 has its CatchHandler @ 01db5548 */
    FUN_012d0dc8(PTR_DAT_0578fcd8);
    bRam0000000005c2773a = 1;
  }
  puVar4 = PTR_DAT_05804be8;
  puVar3 = PTR_DAT_057ede60;
  puVar1 = PTR_DAT_05789180;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
                    /* try { // try from 01db5220 to 01eb5237 has its CatchHandler @ 01db5530 */
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_object___Create_17b04b0
            (&uStack_88,*(undefined8 *)puVar1);
  uVar5 = (ulong)&uStack_70 | 8;
  uStack_60 = uStack_80;
  uStack_68 = uStack_88;
  uStack_58 = uStack_78;
  FUN_012d0d74(uVar5,0);
  uStack_50 = param_1;
                    /* try { // try from 01db5250 to 01eb528f has its CatchHandler @ 01db5544 */
  FUN_012d0d74(&uStack_50,param_1);
  uStack_70 = CONCAT44(uStack_70._4_4_,0xffffffff);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_object___Start_GrandRemoteConfigFetcher__FetchDailyConfigWithTimeout_d__17__3323acc
            (uVar5,&uStack_70,*(undefined8 *)puVar3);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_object___get_Task_17b04c4
            (uVar5,*(undefined8 *)puVar4);
  return;
}

