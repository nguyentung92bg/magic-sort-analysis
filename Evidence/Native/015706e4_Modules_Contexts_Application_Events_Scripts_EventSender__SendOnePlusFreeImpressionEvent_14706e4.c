/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendOnePlusFreeImpressionEvent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendOnePlusFreeImpressionEvent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, bool isFirstTime, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendOnePlusFreeImpressionEvent
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendOnePlusFreeImpressionEvent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, bool isFirstTime, const
   MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendOnePlusFreeImpressionEvent_14706e4
               (undefined8 param_1,uint param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uStack_44;
  
  puVar1 = PTR_DAT_057c8a60;
  if ((bRam0000000005c237e8 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_0578d4b0);
    FUN_012d0dc8(PTR_DAT_057b39c8);
    FUN_012d0dc8(PTR_DAT_0575a580);
    FUN_012d0dc8(PTR_DAT_057c3ec8);
    bRam0000000005c237e8 = 1;
  }
  lVar4 = Modules_Contexts_Application_Events_Scripts_EventSender__GetOnePlusFreeOfferService_1470674
                    ();
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar2 = PTR_DAT_057db748;
  puVar1 = PTR_DAT_057c3ec8;
  if (lVar5 != 0) {
    Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
              (lVar5,*(undefined8 *)PTR_DAT_057b39c8,0);
    uVar7 = *(undefined8 *)puVar1;
    uStack_44 = param_2 & 1;
    uVar6 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&uStack_44);
    Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310(lVar5,uVar7,uVar6,0);
    puVar3 = PTR_DAT_0578d4b0;
    puVar2 = PTR_DAT_0575f9f0;
    puVar1 = PTR_DAT_0575a580;
    if (lVar4 != 0) {
      uVar6 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GetSegment_358d808
                        (lVar4,0);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar5,*(undefined8 *)puVar3,uVar6,0);
      uVar6 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GetEventId_358d708
                        (lVar4,0);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar5,*(undefined8 *)puVar1,uVar6,0);
      uVar6 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GetSegment_358d808
                        (lVar4,0);
      uVar7 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GetEventId_358d708
                        (lVar4,0);
      uVar6 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__OnePlusFreeImpression_2dbe8c8
                        (param_2 & 1,uVar6,uVar7,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_0130472c(*(long *)puVar2);
      }
                    /* try { // try from 01570884 to 016708ab has its CatchHandler @ 01570bdc */
      GrandSDK_Analytics_Analytics__Track_2b38d30(uVar6,0);
      Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar5);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

