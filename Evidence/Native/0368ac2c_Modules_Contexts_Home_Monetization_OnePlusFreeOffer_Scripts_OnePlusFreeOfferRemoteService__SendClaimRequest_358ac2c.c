/* IL2CPP: Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferRemoteService$$SendClaimRequest
System_Threading_Tasks_Task_ApiResponse_OnePlusOneOfferResponse___o* Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferRemoteService__SendClaimRequest (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferRemoteService_o* __this, int64_t eventType, System_String_o* eventId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferRemoteService$$SendClaimRequest
   System_Threading_Tasks_Task_ApiResponse_OnePlusOneOfferResponse___o*
   Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferRemoteService__SendClaimRequest
   (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferRemoteService_o*
   __this, int64_t eventType, System_String_o* eventId, const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferRemoteService__SendClaimRequest_358ac2c
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  long alStack_50 [2];
  
  if ((bRam0000000005c32dea & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05778548);
    FUN_012d0dc8(PTR_DAT_057c9ca0);
    bRam0000000005c32dea = 1;
  }
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (lVar5 = *(long *)(*(long *)(param_1 + 0x18) + 0x20), lVar5 != 0)) {
    uVar7 = *(undefined8 *)(lVar5 + 0x278);
    lVar5 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05778548);
    if (lVar5 != 0) {
      MagicSort_V1_ClaimOnePlusOneOfferRequest___ctor_3860504(lVar5,0);
      *(undefined8 *)(lVar5 + 0x18) = param_2;
      if (param_3 == 0) {
        param_3 = **(long **)(*(long *)PTR_DAT_057c9ca0 + 0xb8);
      }
      MagicSort_V1_ClaimOnePlusOneOfferRequest__set_EventId_386062c(lVar5,param_3,0);
      puVar3 = PTR_DAT_0578cdc0;
      if ((bRam0000000005c32deb & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_057f6860);
        FUN_012d0dc8(PTR_DAT_05769300);
        FUN_012d0dc8(PTR_DAT_0578bc70);
        FUN_012d0dc8(PTR_DAT_0578cdc0);
        bRam0000000005c32deb = 1;
      }
      puVar4 = PTR_DAT_057f6860;
      puVar2 = PTR_DAT_0578bc70;
      puVar1 = PTR_DAT_05769300;
      uStack_58 = 0;
      lStack_60 = 0;
      alStack_50[1] = 0;
      alStack_50[0] = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      System_Runtime_CompilerServices_AsyncTaskMethodBuilder_object___Create_17b04b0
                (&uStack_98,*(undefined8 *)puVar4);
      uVar6 = (ulong)&uStack_80 | 8;
      uStack_70 = uStack_90;
      uStack_78 = uStack_98;
      uStack_68 = uStack_88;
      FUN_012d0d74(uVar6,0);
      lStack_60 = param_1;
      FUN_012d0d74(&lStack_60,param_1);
      uStack_58 = uVar7;
      FUN_012d0d74(&uStack_58,uVar7);
      alStack_50[0] = lVar5;
      FUN_012d0d74(alStack_50,lVar5);
      uStack_80 = CONCAT44(uStack_80._4_4_,0xffffffff);
      System_Runtime_CompilerServices_AsyncTaskMethodBuilder_object___Start_OnePlusFreeOfferRemoteService__SendRequest_d__9__33276b8
                (uVar6,&uStack_80,*(undefined8 *)puVar1);
      System_Runtime_CompilerServices_AsyncTaskMethodBuilder_object___get_Task_17b04c4
                (uVar6,*(undefined8 *)puVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

