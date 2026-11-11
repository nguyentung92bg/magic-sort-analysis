/* IL2CPP: Modules.Contexts.Application.GrandConfig.Scripts.GrandRemoteConfigFetcher$$FetchRegularLevelsConfigWithTimeout
System_Threading_Tasks_Task_ApiResponse_GrandRemoteConfigResponse___o* Modules_Contexts_Application_GrandConfig_Scripts_GrandRemoteConfigFetcher__FetchRegularLevelsConfigWithTimeout (Modules_Contexts_Application_GrandConfig_Scripts_GrandRemoteConfigFetcher_o* __this, int32_t progress, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.GrandConfig.Scripts.GrandRemoteConfigFetcher$$FetchRegularLevelsConfigWithTimeout
   System_Threading_Tasks_Task_ApiResponse_GrandRemoteConfigResponse___o*
   Modules_Contexts_Application_GrandConfig_Scripts_GrandRemoteConfigFetcher__FetchRegularLevelsConfigWithTimeout
   (Modules_Contexts_Application_GrandConfig_Scripts_GrandRemoteConfigFetcher_o* __this, int32_t
   progress, const MethodInfo* method); */

void Modules_Contexts_Application_GrandConfig_Scripts_GrandRemoteConfigFetcher__FetchRegularLevelsConfigWithTimeout_1cb4f88
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
  undefined8 uStack_48;
  
  puVar2 = PTR_DAT_057b8bc8;
  if ((bRam0000000005c27738 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d26a8);
                    /* try { // try from 01db4fcc to 01eb4fe3 has its CatchHandler @ 01db50c0 */
    FUN_012d0dc8(PTR_DAT_05771490);
    FUN_012d0dc8(PTR_DAT_057c77a8);
    FUN_012d0dc8(PTR_DAT_057b8bc8);
    bRam0000000005c27738 = 1;
  }
  puVar4 = PTR_DAT_057d26a8;
  puVar3 = PTR_DAT_057c77a8;
  puVar1 = PTR_DAT_05771490;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
                    /* try { // try from 01db4ffc to 01eb503b has its CatchHandler @ 01db50d4 */
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_object___Create_17b04b0
            (&uStack_98,*(undefined8 *)puVar4);
                    /* try { // try from 01db503c to 01eb5077 has its CatchHandler @ 01db4a1c */
  uVar5 = (ulong)&uStack_80 | 8;
  uStack_70 = uStack_90;
  uStack_78 = uStack_98;
  uStack_68 = uStack_88;
  FUN_012d0d74(uVar5,0);
  uStack_60 = param_1;
  FUN_012d0d74(&uStack_60,param_1);
  uStack_58 = CONCAT44(uStack_58._4_4_,param_2);
                    /* try { // try from 01db5078 to 01eb507b has its CatchHandler @ 01db50b0 */
  uStack_80 = CONCAT44(uStack_80._4_4_,0xffffffff);
                    /* try { // try from 01db507c to 01eb507f has its CatchHandler @ 01db50ac */
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_object___Start_GrandRemoteConfigFetcher__FetchRegularLevelsConfigWithTimeout_d__15__3323bd0
            (uVar5,&uStack_80,*(undefined8 *)puVar1);
                    /* try { // try from 01db5080 to 01eb5083 has its CatchHandler @ 01db50e4 */
                    /* try { // try from 01db5084 to 01eb5087 has its CatchHandler @ 01db50a8 */
                    /* try { // try from 01db5088 to 01eb508b has its CatchHandler @ 01db50dc */
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_object___get_Task_17b04c4
            (uVar5,*(undefined8 *)puVar3);
                    /* try { // try from 01db508c to 01eb508f has its CatchHandler @ 01db50a4 */
                    /* try { // try from 01db5090 to 01eb5097 has its CatchHandler @ 01db50f0 */
                    /* try { // try from 01db5098 to 01eb509b has its CatchHandler @ 01db50a0 */
                    /* try { // try from 01db509c to 01eb509f has its CatchHandler @ 01db50d0 */
                    /* catch() { ... } // from try @ 01db5098 with catch @ 01db50a0
                       try { // try from 01db50a0 to 01eb510b has its CatchHandler @ 01db4a1c */
  return;
}

