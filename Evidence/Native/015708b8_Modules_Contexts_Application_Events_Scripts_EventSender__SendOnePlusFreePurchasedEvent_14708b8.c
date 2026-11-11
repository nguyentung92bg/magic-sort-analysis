/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendOnePlusFreePurchasedEvent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendOnePlusFreePurchasedEvent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, Modules_Contexts_Application_IAP_Scripts_IAPModel_o* iapModel, Modules_Contexts_Application_IAP_Scripts_IAPConfigModel_o* iapConfigModel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendOnePlusFreePurchasedEvent
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendOnePlusFreePurchasedEvent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this,
   Modules_Contexts_Application_IAP_Scripts_IAPModel_o* iapModel,
   Modules_Contexts_Application_IAP_Scripts_IAPConfigModel_o* iapConfigModel, const MethodInfo*
   method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendOnePlusFreePurchasedEvent_14708b8
               (undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  double dVar18;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  puVar2 = PTR_DAT_057c8a60;
  lVar1 = tpidr_el0;
  lStack_78 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 015708e0 to 01670907 has its CatchHandler @ 01570bd8 */
  if ((bRam0000000005c237e9 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_05765ce8);
                    /* try { // try from 0157091c to 01670923 has its CatchHandler @ 01570bcc */
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057ce7d0);
                    /* try { // try from 0157093c to 0167093f has its CatchHandler @ 01570bc4 */
    FUN_012d0dc8(PTR_DAT_057c9ca0);
                    /* try { // try from 01570940 to 0167094b has its CatchHandler @ 01570bd4 */
    FUN_012d0dc8(PTR_DAT_057712b8);
                    /* try { // try from 0157094c to 0167094f has its CatchHandler @ 01570bd0 */
    FUN_012d0dc8(PTR_DAT_0578d4b0);
    FUN_012d0dc8(PTR_DAT_057f04b8);
                    /* try { // try from 01570964 to 0167096b has its CatchHandler @ 01570bc8 */
                    /* try { // try from 0157096c to 01670a1b has its CatchHandler @ 015706bc */
    FUN_012d0dc8(PTR_DAT_057ab1a0);
    FUN_012d0dc8(PTR_DAT_057d60e0);
    FUN_012d0dc8(PTR_DAT_057e62e0);
    FUN_012d0dc8(PTR_DAT_0575a580);
    bRam0000000005c237e9 = 1;
  }
  lVar7 = Modules_Contexts_Application_Events_Scripts_EventSender__GetOnePlusFreeOfferService_1470674
                    ();
  lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  if ((lVar8 == 0) ||
     (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                (lVar8,*(undefined8 *)PTR_DAT_057f04b8,0), puVar6 = PTR_DAT_057ce7d0,
     puVar5 = PTR_DAT_057ab1a0, puVar3 = PTR_DAT_0578d4b0, puVar4 = PTR_DAT_057712b8,
     puVar2 = PTR_DAT_0575a580, lVar7 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  uVar9 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GetSegment_358d808
                    (lVar7,0);
  Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
            (lVar8,*(undefined8 *)puVar3,uVar9,0);
                    /* try { // try from 01570a1c to 01670a47 has its CatchHandler @ 01570bbc */
  uVar9 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferPopupImpressionSourceExtensions__ToAnalyticsValue_358fbd4
                    (*(undefined4 *)(lVar7 + 100),0);
  Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
            (lVar8,*(undefined8 *)puVar5,uVar9,0);
  puVar3 = PTR_DAT_05765ce8;
  uVar9 = *(undefined8 *)puVar4;
  if (param_3 == 0) {
                    /* try { // try from 01570a48 to 01670a4f has its CatchHandler @ 01570bb0 */
    uVar17 = 0;
  }
  else {
    uVar17 = *(undefined4 *)(param_3 + 0x1c);
  }
  uStack_88 = CONCAT44(uStack_88._4_4_,uVar17);
                    /* try { // try from 01570a60 to 01670a67 has its CatchHandler @ 01570bac */
  uVar10 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_88);
                    /* try { // try from 01570a6c to 01670a7f has its CatchHandler @ 01570bb8 */
  Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310(lVar8,uVar9,uVar10,0);
  uVar9 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GetEventId_358d708
                    (lVar7,0);
                    /* try { // try from 01570a84 to 01670a9f has its CatchHandler @ 01570bb4 */
  Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
            (lVar8,*(undefined8 *)puVar2,uVar9,0);
  puVar2 = PTR_DAT_057e62e0;
  if (param_2 != 0) {
                    /* try { // try from 01570aa4 to 01670acf has its CatchHandler @ 01570bc0 */
    Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
              (lVar8,*(undefined8 *)PTR_DAT_057d60e0,*(undefined8 *)(param_2 + 0x38),0);
    uStack_88 = *(undefined8 *)(param_2 + 0x40);
    uStack_80 = *(undefined8 *)(param_2 + 0x48);
                    /* try { // try from 01570ad0 to 01670ad7 has its CatchHandler @ 01570ba8 */
    uVar9 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_88);
                    /* try { // try from 01570ad8 to 01670b93 has its CatchHandler @ 015706bc */
    Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
              (lVar8,*(undefined8 *)puVar2,uVar9,0);
  }
  uVar9 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GetSegment_358d808
                    (lVar7,0);
  uVar10 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferPopupImpressionSourceExtensions__ToAnalyticsValue_358fbd4
                     (*(undefined4 *)(lVar7 + 100),0);
  puVar2 = PTR_DAT_057c9ca0;
  if (param_3 == 0) {
    dVar18 = 0.0;
  }
  else {
    dVar18 = (double)*(float *)(param_3 + 0x1c);
  }
  uVar11 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GetEventId_358d708
                     (lVar7,0);
  if (param_2 == 0) {
    lVar7 = *(long *)puVar3;
    lVar15 = **(long **)(*(long *)puVar2 + 0xb8);
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_0130472c();
      lVar7 = *(long *)puVar3;
    }
    puVar13 = *(undefined8 **)(lVar7 + 0xb8);
    puVar12 = puVar13 + 1;
  }
  else {
    lVar15 = *(long *)(param_2 + 0x38);
    if (lVar15 == 0) {
      lVar15 = **(long **)(*(long *)puVar2 + 0xb8);
    }
    lVar7 = *(long *)puVar3;
    puVar13 = (undefined8 *)(param_2 + 0x40);
    puVar12 = (undefined8 *)(param_2 + 0x48);
  }
  puVar2 = PTR_DAT_0575f9f0;
  uVar14 = *puVar13;
                    /* try { // try from 01570b94 to 01670b9b has its CatchHandler @ 01570ba4 */
  uVar16 = *puVar12;
                    /* try { // try from 01570b9c to 01670bf7 has its CatchHandler @ 015706bc */
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
                    /* catch() { ... } // from try @ 01570b94 with catch @ 01570ba4 */
                    /* catch() { ... } // from try @ 01570ad0 with catch @ 01570ba8 */
                    /* catch() { ... } // from try @ 01570a60 with catch @ 01570bac */
                    /* catch() { ... } // from try @ 01570a48 with catch @ 01570bb0 */
  uVar14 = System_Decimal__op_Explicit_2a96218(uVar14,uVar16,0);
                    /* catch() { ... } // from try @ 01570a84 with catch @ 01570bb4 */
                    /* catch() { ... } // from try @ 01570a6c with catch @ 01570bb8 */
                    /* catch() { ... } // from try @ 01570a1c with catch @ 01570bbc */
                    /* catch() { ... } // from try @ 01570aa4 with catch @ 01570bc0 */
                    /* catch() { ... } // from try @ 0157093c with catch @ 01570bc4 */
                    /* catch() { ... } // from try @ 01570964 with catch @ 01570bc8 */
                    /* catch() { ... } // from try @ 0157091c with catch @ 01570bcc */
                    /* catch() { ... } // from try @ 0157094c with catch @ 01570bd0 */
  uVar9 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__OnePlusFreePurchased_2dbe980
                    (dVar18,uVar14,uVar9,uVar10,uVar11,lVar15,0);
                    /* catch() { ... } // from try @ 01570940 with catch @ 01570bd4 */
                    /* catch() { ... } // from try @ 015708e0 with catch @ 01570bd8 */
                    /* catch() { ... } // from try @ 01570884 with catch @ 01570bdc */
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c(*(long *)puVar2);
  }
  GrandSDK_Analytics_Analytics__Track_2b38d30(uVar9,0);
                    /* try { // try from 01570bf8 to 01670bfb has its CatchHandler @ 01570c80 */
  Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar8);
  if (*(long *)(lVar1 + 0x28) == lStack_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

