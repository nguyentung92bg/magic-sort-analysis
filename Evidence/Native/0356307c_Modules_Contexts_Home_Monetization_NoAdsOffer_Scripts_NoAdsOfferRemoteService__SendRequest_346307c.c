/* IL2CPP: Modules.Contexts.Home.Monetization.NoAdsOffer.Scripts.NoAdsOfferRemoteService$$SendRequest
System_Threading_Tasks_Task_ApiResponse_NoAdsOfferResponse___o* Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferRemoteService__SendRequest (Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferRemoteService_o* __this, System_String_o* url, Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferRequestModel_o* requestModel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.NoAdsOffer.Scripts.NoAdsOfferRemoteService$$SendRequest
   System_Threading_Tasks_Task_ApiResponse_NoAdsOfferResponse___o*
   Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferRemoteService__SendRequest
   (Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferRemoteService_o* __this,
   System_String_o* url,
   Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferRequestModel_o* requestModel,
   const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferRemoteService__SendRequest_346307c
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  
  puVar4 = PTR_DAT_057f4a00;
  if ((bRam0000000005c3265a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05794a48);
    FUN_012d0dc8(PTR_DAT_0578e1e0);
    FUN_012d0dc8(PTR_DAT_057ca2a8);
    FUN_012d0dc8(PTR_DAT_057f4a00);
    bRam0000000005c3265a = 1;
  }
  puVar3 = PTR_DAT_057ca2a8;
  puVar2 = PTR_DAT_05794a48;
  puVar1 = PTR_DAT_0578e1e0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_object___Create_17b04b0
            (&uStack_98,*(undefined8 *)puVar2);
  uVar5 = (ulong)&uStack_80 | 8;
  uStack_70 = uStack_90;
  uStack_78 = uStack_98;
  uStack_68 = uStack_88;
  FUN_012d0d74(uVar5,0);
  uStack_60 = param_1;
  FUN_012d0d74(&uStack_60,param_1);
  uStack_58 = param_2;
  FUN_012d0d74(&uStack_58,param_2);
  uStack_50 = param_3;
  FUN_012d0d74(&uStack_50,param_3);
  uStack_80 = CONCAT44(uStack_80._4_4_,0xffffffff);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_object___Start_NoAdsOfferRemoteService__SendRequest_d__8__33275b4
            (uVar5,&uStack_80,*(undefined8 *)puVar1);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_object___get_Task_17b04c4
            (uVar5,*(undefined8 *)puVar3);
  return;
}

