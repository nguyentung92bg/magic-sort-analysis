/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendOnePlusFreeFreeItemClaimedEvent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendOnePlusFreeFreeItemClaimedEvent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t source, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x01547e70) */
/* WARNING: Removing unreachable block (ram,0x01547e80) */
/* WARNING: Removing unreachable block (ram,0x01547e88) */
/* WARNING: Removing unreachable block (ram,0x01547eb0) */
/* WARNING: Removing unreachable block (ram,0x01547e94) */
/* WARNING: Removing unreachable block (ram,0x01547ea0) */
/* WARNING: Removing unreachable block (ram,0x01547ebc) */
/* IL2CPP:
   Modules.Contexts.Application.Events.Scripts.EventSender$$SendOnePlusFreeFreeItemClaimedEvent
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendOnePlusFreeFreeItemClaimedEvent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t source, const
   MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendOnePlusFreeFreeItemClaimedEvent_1470dfc
               (long param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_48;
  
  puVar1 = PTR_DAT_057c8a60;
  if ((bRam0000000005c237eb & 1) == 0) {
                    /* try { // try from 01570e2c to 01670e53 has its CatchHandler @ 015711d8 */
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_0578d4b0);
    FUN_012d0dc8(PTR_DAT_057ab1a0);
    FUN_012d0dc8(PTR_DAT_058193c8);
    FUN_012d0dc8(PTR_DAT_0575a580);
    bRam0000000005c237eb = 1;
  }
  lVar6 = Modules_Contexts_Application_Events_Scripts_EventSender__GetOnePlusFreeOfferService_1470674
                    ();
                    /* try { // try from 01570e88 to 01670eaf has its CatchHandler @ 015711d4 */
  lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if ((lVar7 == 0) ||
     (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                (lVar7,*(undefined8 *)PTR_DAT_058193c8,0), puVar4 = PTR_DAT_057ab1a0,
     puVar3 = PTR_DAT_0578d4b0, puVar2 = PTR_DAT_0575f9f0, puVar1 = PTR_DAT_0575a580, lVar6 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  uVar8 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GetSegment_358d808
                    (lVar6,0);
  Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
            (lVar7,*(undefined8 *)puVar3,uVar8,0);
  uVar8 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferPopupImpressionSourceExtensions__ToAnalyticsValue_358fbd4
                    (param_2,0);
  Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
            (lVar7,*(undefined8 *)puVar4,uVar8,0);
                    /* try { // try from 01570f18 to 01670f47 has its CatchHandler @ 015711d0 */
  uVar8 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GetEventId_358d708
                    (lVar6,0);
  Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
            (lVar7,*(undefined8 *)puVar1,uVar8,0);
  uVar8 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GetSegment_358d808
                    (lVar6,0);
  uVar9 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferPopupImpressionSourceExtensions__ToAnalyticsValue_358fbd4
                    (param_2,0);
                    /* try { // try from 01570f50 to 01670f5f has its CatchHandler @ 015711cc */
  uVar10 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GetEventId_358d708
                     (lVar6,0);
                    /* try { // try from 01570f60 to 01670fcf has its CatchHandler @ 015711dc */
  uVar8 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__OnePlusFreeFreeItemClaimed_2dbeb60
                    (uVar8,uVar9,uVar10,0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c(*(long *)puVar2);
  }
  GrandSDK_Analytics_Analytics__Track_2b38d30(uVar8,0);
  if ((bRam0000000005c2373b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f8670);
    FUN_012d0dc8(PTR_DAT_0576fba0);
    FUN_012d0dc8(PTR_DAT_057fde78);
    FUN_012d0dc8(PTR_DAT_0577a090);
    FUN_012d0dc8(PTR_DAT_0581bc50);
    bRam0000000005c2373b = 1;
  }
  puVar2 = PTR_DAT_057f8670;
  puVar1 = PTR_DAT_0576fba0;
  uStack_48 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_48,*(long *)(param_1 + 0x10),*(undefined8 *)PTR_DAT_0581bc50);
    uVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                      (&uStack_48,*(undefined8 *)puVar1);
    if ((uVar5 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
              (&uStack_48,*(undefined8 *)puVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

