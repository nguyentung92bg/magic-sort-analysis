/* IL2CPP: Modules.Contexts.Home.Monetization.PawTouchOffer.Scripts.PawTouchOfferRemoteService$$SendClaimRequest
System_Threading_Tasks_Task_o* Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferRemoteService__SendClaimRequest (Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferRemoteService_o* __this, Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_ClaimPawTouchOfferRequest_o* request, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.PawTouchOffer.Scripts.PawTouchOfferRemoteService$$SendClaimRequest
   System_Threading_Tasks_Task_o*
   Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferRemoteService__SendClaimRequest
   (Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferRemoteService_o* __this,
   Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_ClaimPawTouchOfferRequest_o* request,
   const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferRemoteService__SendClaimRequest_34718a4
               (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar1 = PTR_DAT_0576e800;
  if ((bRam0000000005c326f3 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057ca190);
    FUN_012d0dc8(PTR_DAT_0576e800);
    bRam0000000005c326f3 = 1;
  }
  puVar2 = PTR_DAT_057ca190;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__Create_2445820(&uStack_a8,0);
  uVar3 = (ulong)&uStack_70 | 8;
  uStack_80 = uStack_98;
  uStack_88 = uStack_a0;
  uStack_90 = uStack_a8;
  uStack_60 = uStack_a0;
  uStack_68 = uStack_a8;
  uStack_58 = uStack_98;
  FUN_012d0d74(uVar3,0);
  uStack_50 = param_1;
  FUN_012d0d74(&uStack_50,param_1);
  uStack_48 = param_2;
  FUN_012d0d74(&uStack_48,param_2);
  uStack_70 = CONCAT44(uStack_70._4_4_,0xffffffff);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__Start_PawTouchOfferRemoteService__SendClaimRequest_d__8__1e6d1cc
            (uVar3,&uStack_70,*(undefined8 *)puVar2);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__get_Task_24437f0(uVar3,0);
  return;
}

