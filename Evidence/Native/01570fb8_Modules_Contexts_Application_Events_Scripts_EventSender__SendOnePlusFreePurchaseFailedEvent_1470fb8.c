/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendOnePlusFreePurchaseFailedEvent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendOnePlusFreePurchaseFailedEvent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, System_String_o* cancelReason, System_String_o* productId, int32_t iapOrigin, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x01547e70) */
/* WARNING: Removing unreachable block (ram,0x01547e80) */
/* WARNING: Removing unreachable block (ram,0x01547e88) */
/* WARNING: Removing unreachable block (ram,0x01547eb0) */
/* WARNING: Removing unreachable block (ram,0x01547e94) */
/* WARNING: Removing unreachable block (ram,0x01547ea0) */
/* WARNING: Removing unreachable block (ram,0x01547ebc) */
/* IL2CPP:
   Modules.Contexts.Application.Events.Scripts.EventSender$$SendOnePlusFreePurchaseFailedEvent
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendOnePlusFreePurchaseFailedEvent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, System_String_o*
   cancelReason, System_String_o* productId, int32_t iapOrigin, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendOnePlusFreePurchaseFailedEvent_1470fb8
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  puVar1 = PTR_DAT_057c8a60;
                    /* try { // try from 01570fd0 to 01671057 has its CatchHandler @ 01570c90 */
  if ((bRam0000000005c237ec & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_05800b30);
    FUN_012d0dc8(PTR_DAT_0578d4b0);
    FUN_012d0dc8(PTR_DAT_057e40b0);
    FUN_012d0dc8(PTR_DAT_057ab1a0);
    FUN_012d0dc8(PTR_DAT_0578db98);
    FUN_012d0dc8(PTR_DAT_0575a580);
                    /* try { // try from 01571058 to 0167105f has its CatchHandler @ 015711c4 */
    FUN_012d0dc8(PTR_DAT_057f05d0);
                    /* try { // try from 01571060 to 01671063 has its CatchHandler @ 015711b8 */
    bRam0000000005c237ec = 1;
  }
                    /* try { // try from 01571064 to 0167107b has its CatchHandler @ 015711bc */
  lVar7 = Modules_Contexts_Application_Events_Scripts_EventSender__GetOnePlusFreeOfferService_1470674
                    ();
  lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                    /* try { // try from 0157107c to 01671083 has its CatchHandler @ 015711b4 */
                    /* try { // try from 0157108c to 016710a7 has its CatchHandler @ 015711c0 */
  if ((lVar8 == 0) ||
     (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                (lVar8,*(undefined8 *)PTR_DAT_057e40b0,0), puVar6 = PTR_DAT_05800b30,
     puVar5 = PTR_DAT_057f05d0, puVar4 = PTR_DAT_057ab1a0, puVar3 = PTR_DAT_0578db98,
     puVar2 = PTR_DAT_0578d4b0, puVar1 = PTR_DAT_0575a580, lVar7 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
                    /* try { // try from 015710ac to 016710ef has its CatchHandler @ 015711c8 */
  uVar9 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GetSegment_358d808
                    (lVar7,0);
  Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
            (lVar8,*(undefined8 *)puVar2,uVar9,0);
                    /* try { // try from 015710f0 to 016711a3 has its CatchHandler @ 01570c90 */
  uVar9 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferPopupImpressionSourceExtensions__ToAnalyticsValue_358fbd4
                    (*(undefined4 *)(lVar7 + 100),0);
  Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
            (lVar8,*(undefined8 *)puVar4,uVar9,0);
  uVar10 = System_String__IsNullOrEmpty_1ed04ac(param_2,0);
  uVar9 = *(undefined8 *)puVar3;
  if ((uVar10 & 1) == 0) {
    uVar9 = param_2;
  }
  Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
            (lVar8,*(undefined8 *)puVar5,uVar9,0);
  uVar9 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GetEventId_358d708
                    (lVar7,0);
  Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
            (lVar8,*(undefined8 *)puVar1,uVar9,0);
  Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
            (lVar8,*(undefined8 *)puVar6,param_3,0);
  uVar11 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GetSegment_358d808
                     (lVar7,0);
  uVar12 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferPopupImpressionSourceExtensions__ToAnalyticsValue_358fbd4
                     (*(undefined4 *)(lVar7 + 100),0);
  uVar10 = System_String__IsNullOrEmpty_1ed04ac(param_2,0);
  uVar9 = *(undefined8 *)puVar3;
                    /* try { // try from 015711a4 to 016711a7 has its CatchHandler @ 015711b0 */
  if ((uVar10 & 1) == 0) {
    uVar9 = param_2;
  }
                    /* try { // try from 015711a8 to 016711eb has its CatchHandler @ 01570c90 */
  uVar13 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GetEventId_358d708
                     (lVar7,0);
                    /* catch() { ... } // from try @ 015711a4 with catch @ 015711b0 */
                    /* catch() { ... } // from try @ 0157107c with catch @ 015711b4 */
                    /* catch() { ... } // from try @ 01571060 with catch @ 015711b8 */
                    /* catch() { ... } // from try @ 01571064 with catch @ 015711bc */
                    /* catch() { ... } // from try @ 0157108c with catch @ 015711c0 */
                    /* catch() { ... } // from try @ 01571058 with catch @ 015711c4 */
  uVar9 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__OnePlusFreePurchaseFailed_2dbec24
                    (uVar11,uVar12,uVar9,uVar13,param_3,0);
                    /* catch() { ... } // from try @ 015710ac with catch @ 015711c8 */
                    /* catch() { ... } // from try @ 01570f50 with catch @ 015711cc */
                    /* catch() { ... } // from try @ 01570f18 with catch @ 015711d0 */
                    /* catch() { ... } // from try @ 01570e88 with catch @ 015711d4 */
                    /* catch() { ... } // from try @ 01570e2c with catch @ 015711d8 */
                    /* catch() { ... } // from try @ 01570f60 with catch @ 015711dc */
  if (*(int *)(*(long *)PTR_DAT_0575f9f0 + 0xe0) == 0) {
    thunk_FUN_0130472c(*(long *)PTR_DAT_0575f9f0);
  }
                    /* try { // try from 015711ec to 016711ef has its CatchHandler @ 0157126c */
  GrandSDK_Analytics_Analytics__Track_2b38d30(uVar9,0);
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
  if (*(long *)(param_1 + 0x10) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&stack0xffffffffffffffb8,*(long *)(param_1 + 0x10),*(undefined8 *)PTR_DAT_0581bc50);
    uVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                       (&stack0xffffffffffffffb8,*(undefined8 *)puVar1);
    if ((uVar10 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
              (&stack0xffffffffffffffb8,*(undefined8 *)puVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

