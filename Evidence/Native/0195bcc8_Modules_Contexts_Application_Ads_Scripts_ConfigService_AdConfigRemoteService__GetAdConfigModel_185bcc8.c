/* IL2CPP: Modules.Contexts.Application.Ads.Scripts.ConfigService.AdConfigRemoteService$$GetAdConfigModel
System_Threading_Tasks_Task_ApiResponse_AdConfigResponseModel___o* Modules_Contexts_Application_Ads_Scripts_ConfigService_AdConfigRemoteService__GetAdConfigModel (Modules_Contexts_Application_Ads_Scripts_ConfigService_AdConfigRemoteService_o* __this, double firstCpmAsDollar, Modules_Contexts_Application_Player_Scripts_AdjustAttributionModel_o* adjustAttributionModel, int32_t configType, bool isNewUser, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.Ads.Scripts.ConfigService.AdConfigRemoteService$$GetAdConfigModel
   System_Threading_Tasks_Task_ApiResponse_AdConfigResponseModel___o*
   Modules_Contexts_Application_Ads_Scripts_ConfigService_AdConfigRemoteService__GetAdConfigModel
   (Modules_Contexts_Application_Ads_Scripts_ConfigService_AdConfigRemoteService_o* __this, double
   firstCpmAsDollar, Modules_Contexts_Application_Player_Scripts_AdjustAttributionModel_o*
   adjustAttributionModel, int32_t configType, bool isNewUser, const MethodInfo* method); */

void Modules_Contexts_Application_Ads_Scripts_ConfigService_AdConfigRemoteService__GetAdConfigModel_185bcc8
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
               undefined1 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar1 = PTR_DAT_05766198;
  if ((bRam0000000005c25783 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057db140);
    FUN_012d0dc8(PTR_DAT_057dce50);
    FUN_012d0dc8(PTR_DAT_05773f68);
    FUN_012d0dc8(PTR_DAT_05766198);
    bRam0000000005c25783 = 1;
  }
  puVar4 = PTR_DAT_057dce50;
  puVar3 = PTR_DAT_057db140;
  puVar2 = PTR_DAT_05773f68;
                    /* catch() { ... } // from try @ 0195bd80 with catch @ 0195bd44
                       catch() { ... } // from try @ 0195bdac with catch @ 0195bd44
                       catch() { ... } // from try @ 0195bde0 with catch @ 0195bd44 */
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    /* try { // try from 0195bd78 to 01a5bd7f has its CatchHandler @ 0195bd90 */
    thunk_FUN_0130472c();
  }
                    /* try { // try from 0195bd80 to 01a5bda7 has its CatchHandler @ 0195bd44 */
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_object___Create_17b04b0
            (&uStack_b8,*(undefined8 *)puVar3);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0195bd78 with catch @ 0195bd90
                        */
  uVar5 = (ulong)&uStack_a0 | 8;
  uStack_90 = uStack_b0;
  uStack_98 = uStack_b8;
  uStack_88 = uStack_a8;
                    /* try { // try from 0195bda8 to 01a5bdab has its CatchHandler @ 0195bdd4 */
  FUN_012d0d74(uVar5,0);
                    /* try { // try from 0195bdac to 01a5bdd7 has its CatchHandler @ 0195bd44 */
  uStack_60 = param_2;
  FUN_012d0d74(&uStack_60,param_2);
  uStack_80 = param_3;
  uStack_70 = param_1;
  FUN_012d0d74(&uStack_80,param_3);
                    /* catch() { ... } // from try @ 0195bda8 with catch @ 0195bdd4 */
                    /* try { // try from 0195bdd8 to 01a5bddf has its CatchHandler @ 0195bdf4 */
                    /* try { // try from 0195bde0 to 01a5bdeb has its CatchHandler @ 0195bd44 */
  uStack_68 = CONCAT71(uStack_68._1_7_,param_5) & 0xffffffffffffff01;
  uStack_78 = CONCAT44(uStack_78._4_4_,param_4);
  uStack_a0 = CONCAT44(uStack_a0._4_4_,0xffffffff);
                    /* try { // try from 0195bdec to 01a5bdf3 has its CatchHandler @ 0195bdf4 */
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_object___Start_AdConfigRemoteService__GetAdConfigModel_d__7__331ed9c
            (uVar5,&uStack_a0,*(undefined8 *)puVar4);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0195bdd8 with catch @ 0195bdf4
                       catch(type#2 @ 00000000) { ... } // from try @ 0195bdec with catch @ 0195bdf4
                        */
                    /* try { // try from 0195bdf8 to 01a5bee3 has its CatchHandler @ 0195bdf8
                       catch() { ... } // from try @ 0195bdf8 with catch @ 0195bdf8
                       catch() { ... } // from try @ 0195c3e0 with catch @ 0195bdf8
                       catch() { ... } // from try @ 0195c458 with catch @ 0195bdf8 */
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_object___get_Task_17b04c4
            (uVar5,*(undefined8 *)puVar2);
  return;
}

