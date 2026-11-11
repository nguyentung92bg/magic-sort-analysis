/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendChooseOnePurchasedEvent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendChooseOnePurchasedEvent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, Modules_Contexts_Application_IAP_Scripts_IAPModel_o* iapModel, int32_t packageId, Modules_Contexts_Application_IAP_Scripts_IAPConfigModel_o* iapConfigModel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendChooseOnePurchasedEvent
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendChooseOnePurchasedEvent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this,
   Modules_Contexts_Application_IAP_Scripts_IAPModel_o* iapModel, int32_t packageId,
   Modules_Contexts_Application_IAP_Scripts_IAPConfigModel_o* iapConfigModel, const MethodInfo*
   method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendChooseOnePurchasedEvent_1470154
               (undefined8 param_1,long param_2,int param_3,long param_4)

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
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  puVar2 = PTR_DAT_057c8a60;
                    /* try { // try from 01570160 to 01670163 has its CatchHandler @ 0157049c */
                    /* try { // try from 01570164 to 01670173 has its CatchHandler @ 015704e8 */
  lVar1 = tpidr_el0;
  lStack_68 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 01570184 to 0167018b has its CatchHandler @ 015704f8 */
  if ((bRam0000000005c237e5 & 1) == 0) {
                    /* try { // try from 015701a8 to 016701b3 has its CatchHandler @ 01570594 */
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_05802ff8);
    FUN_012d0dc8(PTR_DAT_057a4fb0);
    FUN_012d0dc8(PTR_DAT_0576aae0);
                    /* try { // try from 015701d0 to 016701d3 has its CatchHandler @ 01570498 */
                    /* try { // try from 015701d4 to 016701df has its CatchHandler @ 01570534 */
    FUN_012d0dc8(PTR_DAT_0579fa30);
    FUN_012d0dc8(PTR_DAT_0579d5c0);
                    /* try { // try from 015701f0 to 016701fb has its CatchHandler @ 0157052c */
    FUN_012d0dc8(PTR_DAT_05765ce8);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057ce7d0);
                    /* try { // try from 01570218 to 01670223 has its CatchHandler @ 015705bc */
    FUN_012d0dc8(PTR_DAT_057c9ca0);
    FUN_012d0dc8(PTR_DAT_057712b8);
    FUN_012d0dc8(PTR_DAT_057bcf50);
                    /* try { // try from 01570240 to 01670243 has its CatchHandler @ 015704b0 */
                    /* try { // try from 01570244 to 01670263 has its CatchHandler @ 01570580 */
    FUN_012d0dc8(PTR_DAT_05796d80);
    FUN_012d0dc8(PTR_DAT_0575ba40);
    FUN_012d0dc8(PTR_DAT_057d60e0);
    FUN_012d0dc8(PTR_DAT_0575a580);
                    /* try { // try from 01570274 to 0167027f has its CatchHandler @ 0157057c */
    FUN_012d0dc8(PTR_DAT_05774390);
    FUN_012d0dc8(PTR_DAT_057d3f68);
                    /* try { // try from 01570284 to 0167028f has its CatchHandler @ 01570530 */
    bRam0000000005c237e5 = 1;
  }
  uStack_90 = 0;
  uStack_88 = 0;
  lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  puVar2 = PTR_DAT_0576aae0;
  if (lVar7 != 0) {
                    /* try { // try from 015702a0 to 016702ab has its CatchHandler @ 015705ac */
                    /* try { // try from 015702b0 to 016702bb has its CatchHandler @ 015704fc */
    Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
              (lVar7,*(undefined8 *)PTR_DAT_05796d80,0);
                    /* try { // try from 015702cc to 016702d7 has its CatchHandler @ 01570570 */
    if ((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
       (lVar8 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar8 != 0)) {
      lVar8 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar8,*(undefined8 *)PTR_DAT_057a4fb0);
      puVar6 = PTR_DAT_057db748;
      puVar5 = PTR_DAT_057d60e0;
      puVar3 = PTR_DAT_057d3f68;
      puVar4 = PTR_DAT_057bcf50;
      puVar2 = PTR_DAT_0575a580;
      if (lVar8 != 0) {
                    /* try { // try from 015702f4 to 016702f7 has its CatchHandler @ 015704a4 */
                    /* try { // try from 015702f8 to 01670303 has its CatchHandler @ 015704f4 */
                    /* try { // try from 01570314 to 0167031f has its CatchHandler @ 015704f0 */
        uVar9 = Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService__GetSegment_20add6c
                          (lVar8,0);
                    /* try { // try from 01570320 to 016703bb has its CatchHandler @ 0156f408 */
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar7,*(undefined8 *)puVar3,uVar9,0);
        uStack_78 = CONCAT44(uStack_78._4_4_,param_3);
        uVar10 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_78);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar7,*(undefined8 *)puVar4,uVar10,0);
        uVar10 = Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService__GetEventId_20adae4
                           (lVar8,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar7,*(undefined8 *)puVar2,uVar10,0);
        puVar2 = PTR_DAT_057712b8;
        if (param_2 != 0) {
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar7,*(undefined8 *)puVar5,*(undefined8 *)(param_2 + 0x38),0);
          uStack_78 = *(ulong *)(param_2 + 0x40);
          uStack_70 = *(undefined8 *)(param_2 + 0x48);
          uVar10 = thunk_FUN_01320a8c(*(undefined8 *)PTR_DAT_05765ce8,&uStack_78);
                    /* try { // try from 015703bc to 016703bf has its CatchHandler @ 01570494 */
                    /* try { // try from 015703c0 to 016703c3 has its CatchHandler @ 01570490 */
                    /* try { // try from 015703c4 to 016703c7 has its CatchHandler @ 0157048c */
                    /* try { // try from 015703c8 to 016703cb has its CatchHandler @ 01570488 */
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar7,*(undefined8 *)puVar2,uVar10,0);
                    /* try { // try from 015703cc to 016703cf has its CatchHandler @ 01570484 */
          if (param_4 == 0) goto LAB_015705b0;
                    /* try { // try from 015703d0 to 016703d3 has its CatchHandler @ 01570480 */
                    /* try { // try from 015703d4 to 016703d7 has its CatchHandler @ 0157047c */
                    /* try { // try from 015703d8 to 016703db has its CatchHandler @ 01570478 */
          uStack_94 = *(undefined4 *)(param_4 + 0x1c);
                    /* try { // try from 015703dc to 016703df has its CatchHandler @ 01570474 */
                    /* try { // try from 015703e0 to 016703e3 has its CatchHandler @ 01570470 */
                    /* try { // try from 015703e4 to 016703e7 has its CatchHandler @ 0157046c */
                    /* try { // try from 015703e8 to 016703eb has its CatchHandler @ 01570468 */
          uVar10 = thunk_FUN_01320a8c(*(undefined8 *)PTR_DAT_057ce7d0,&uStack_94);
                    /* try { // try from 015703ec to 016703ef has its CatchHandler @ 01570464 */
                    /* try { // try from 015703f0 to 016703f3 has its CatchHandler @ 01570460 */
                    /* try { // try from 015703f4 to 016703f7 has its CatchHandler @ 0157045c */
                    /* try { // try from 015703f8 to 016703fb has its CatchHandler @ 01570458 */
                    /* try { // try from 015703fc to 016703ff has its CatchHandler @ 01570454 */
                    /* try { // try from 01570400 to 01670403 has its CatchHandler @ 01570450 */
                    /* try { // try from 01570404 to 01670407 has its CatchHandler @ 0157044c */
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar7,*(undefined8 *)PTR_DAT_0575ba40,uVar10,0);
        }
                    /* try { // try from 01570408 to 0167040b has its CatchHandler @ 01570448 */
        puVar4 = PTR_DAT_05802ff8;
        puVar2 = PTR_DAT_05774390;
                    /* try { // try from 0157040c to 0167040f has its CatchHandler @ 01570444 */
                    /* try { // try from 01570410 to 01670413 has its CatchHandler @ 01570440 */
                    /* try { // try from 01570414 to 01670417 has its CatchHandler @ 0157043c */
                    /* try { // try from 01570418 to 0167041b has its CatchHandler @ 01570438 */
                    /* try { // try from 0157041c to 0167041f has its CatchHandler @ 01570434 */
                    /* try { // try from 01570420 to 01670423 has its CatchHandler @ 0156f408 */
        uVar10 = Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService__GetEventId_20adae4
                           (lVar8,0);
                    /* try { // try from 01570424 to 01670427 has its CatchHandler @ 01570430 */
                    /* try { // try from 01570428 to 01670627 has its CatchHandler @ 0156f408 */
                    /* catch() { ... } // from try @ 01570424 with catch @ 01570430 */
                    /* catch() { ... } // from try @ 0157041c with catch @ 01570434 */
                    /* catch() { ... } // from try @ 01570418 with catch @ 01570438 */
                    /* catch() { ... } // from try @ 01570414 with catch @ 0157043c */
        plVar11 = (long *)System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                    (*(undefined8 *)(lVar7 + 0x18),*(undefined8 *)puVar5,
                                     *(undefined8 *)puVar2,*(undefined8 *)puVar4);
        puVar2 = PTR_DAT_0579fa30;
                    /* catch() { ... } // from try @ 01570410 with catch @ 01570440 */
        if (plVar11 != (long *)0x0) {
                    /* catch() { ... } // from try @ 0157040c with catch @ 01570444 */
                    /* catch() { ... } // from try @ 01570408 with catch @ 01570448 */
                    /* catch() { ... } // from try @ 01570404 with catch @ 0157044c */
                    /* catch() { ... } // from try @ 01570400 with catch @ 01570450 */
                    /* catch() { ... } // from try @ 015703fc with catch @ 01570454 */
          uVar12 = (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
                    /* catch() { ... } // from try @ 015703f8 with catch @ 01570458 */
                    /* catch() { ... } // from try @ 015703f4 with catch @ 0157045c */
                    /* catch() { ... } // from try @ 015703f0 with catch @ 01570460 */
          if (param_2 == 0) {
                    /* catch() { ... } // from try @ 0156fff8 with catch @ 015704c4 */
                    /* catch() { ... } // from try @ 0156fa24 with catch @ 015704c8 */
                    /* catch() { ... } // from try @ 0156f8e8 with catch @ 015704cc */
                    /* catch() { ... } // from try @ 0156f7a8 with catch @ 015704d0 */
                    /* catch() { ... } // from try @ 0156fe44 with catch @ 015704d4 */
            uVar13 = **(undefined8 **)(*(long *)PTR_DAT_057c9ca0 + 0xb8);
          }
          else {
                    /* catch() { ... } // from try @ 015703ec with catch @ 01570464 */
                    /* catch() { ... } // from try @ 015703e8 with catch @ 01570468 */
                    /* catch() { ... } // from try @ 015703e4 with catch @ 0157046c */
            uStack_88 = *(undefined8 *)(param_2 + 0x48);
            uStack_90 = *(undefined8 *)(param_2 + 0x40);
                    /* catch() { ... } // from try @ 015703e0 with catch @ 01570470 */
                    /* catch() { ... } // from try @ 015703dc with catch @ 01570474 */
                    /* catch() { ... } // from try @ 015703d8 with catch @ 01570478 */
                    /* catch() { ... } // from try @ 015703d4 with catch @ 0157047c */
            if (*(int *)(*(long *)PTR_DAT_0579d5c0 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 015703d0 with catch @ 01570480 */
              thunk_FUN_0130472c();
            }
                    /* catch() { ... } // from try @ 015703cc with catch @ 01570484 */
                    /* catch() { ... } // from try @ 015703c8 with catch @ 01570488 */
            uVar13 = System_Globalization_CultureInfo__get_InvariantCulture_2b20e6c(0);
                    /* catch() { ... } // from try @ 015703c4 with catch @ 0157048c */
                    /* catch() { ... } // from try @ 015703c0 with catch @ 01570490 */
                    /* catch() { ... } // from try @ 015703bc with catch @ 01570494 */
                    /* catch() { ... } // from try @ 015701d0 with catch @ 01570498 */
                    /* catch() { ... } // from try @ 01570160 with catch @ 0157049c */
                    /* catch() { ... } // from try @ 01570094 with catch @ 015704a0 */
            if (*(int *)(*(long *)PTR_DAT_05765ce8 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 015702f4 with catch @ 015704a4 */
                    /* catch() { ... } // from try @ 0156f998 with catch @ 015704a8 */
              thunk_FUN_0130472c(*(long *)PTR_DAT_05765ce8);
            }
                    /* catch() { ... } // from try @ 0156fbfc with catch @ 015704ac */
                    /* catch() { ... } // from try @ 01570240 with catch @ 015704b0 */
                    /* catch() { ... } // from try @ 0156fab0 with catch @ 015704b4 */
                    /* catch() { ... } // from try @ 0156fd90 with catch @ 015704b8 */
            uVar13 = System_Decimal__ToString_2a93dec(&uStack_90,uVar13,0);
                    /* catch() { ... } // from try @ 0156fd00 with catch @ 015704bc */
                    /* catch() { ... } // from try @ 015700f0 with catch @ 015704c0 */
          }
          puVar3 = PTR_DAT_0575f9f0;
                    /* catch() { ... } // from try @ 0156f84c with catch @ 015704d8 */
                    /* catch() { ... } // from try @ 0156fed4 with catch @ 015704dc */
                    /* catch() { ... } // from try @ 0156ff8c with catch @ 015704e0 */
          uVar15 = *(undefined8 *)(lVar7 + 0x18);
                    /* catch() { ... } // from try @ 0156fb24 with catch @ 015704e4 */
                    /* catch() { ... } // from try @ 01570164 with catch @ 015704e8 */
                    /* catch() { ... } // from try @ 0156fc98 with catch @ 015704ec */
          uStack_78 = uStack_78 & 0xffffffff00000000;
                    /* catch() { ... } // from try @ 01570314 with catch @ 015704f0 */
          uVar14 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_78);
                    /* catch() { ... } // from try @ 015702f8 with catch @ 015704f4 */
                    /* catch() { ... } // from try @ 01570184 with catch @ 015704f8 */
                    /* catch() { ... } // from try @ 015702b0 with catch @ 015704fc */
                    /* catch() { ... } // from try @ 0156fc00 with catch @ 01570500 */
                    /* catch() { ... } // from try @ 0156fdb4 with catch @ 01570504 */
                    /* catch() { ... } // from try @ 01570050 with catch @ 01570508 */
                    /* catch() { ... } // from try @ 0156fd94 with catch @ 0157050c */
          uVar14 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                             (uVar15,*(undefined8 *)PTR_DAT_0575ba40,uVar14,*(undefined8 *)puVar4);
                    /* catch() { ... } // from try @ 0156fc50 with catch @ 01570510 */
                    /* catch() { ... } // from try @ 0156fd20 with catch @ 01570514 */
                    /* catch() { ... } // from try @ 01570110 with catch @ 01570518 */
                    /* catch() { ... } // from try @ 0157001c with catch @ 0157051c */
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 0156fd04 with catch @ 01570520 */
                    /* catch() { ... } // from try @ 015700f4 with catch @ 01570524 */
            thunk_FUN_0130472c(*(long *)puVar2);
          }
                    /* catch() { ... } // from try @ 0156fffc with catch @ 01570528 */
                    /* catch() { ... } // from try @ 015701f0 with catch @ 0157052c */
                    /* catch() { ... } // from try @ 01570284 with catch @ 01570530 */
          System_Convert__ToDouble_21312e0(uVar14,0);
                    /* catch() { ... } // from try @ 015701d4 with catch @ 01570534 */
                    /* catch() { ... } // from try @ 0156f86c with catch @ 01570538 */
                    /* catch() { ... } // from try @ 0156f908 with catch @ 0157053c */
                    /* catch() { ... } // from try @ 0156f7c8 with catch @ 01570540 */
                    /* catch() { ... } // from try @ 0156f7ac with catch @ 01570544 */
                    /* catch() { ... } // from try @ 0156fe8c with catch @ 01570548 */
                    /* catch() { ... } // from try @ 0156f8ec with catch @ 0157054c */
          uVar9 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__ChooseOnePurchased_2daea14
                            (uVar9,(long)param_3,uVar10,uVar12,uVar13,0);
                    /* catch() { ... } // from try @ 0156fef8 with catch @ 01570550 */
                    /* catch() { ... } // from try @ 0156f850 with catch @ 0157055c */
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 0156ffac with catch @ 01570560 */
                    /* catch() { ... } // from try @ 0156fed8 with catch @ 01570564 */
            thunk_FUN_0130472c(*(long *)puVar3);
          }
                    /* catch() { ... } // from try @ 0156ff90 with catch @ 01570568 */
                    /* catch() { ... } // from try @ 0157006c with catch @ 0157056c */
                    /* catch() { ... } // from try @ 015702cc with catch @ 01570570 */
          GrandSDK_Analytics_Analytics__Track_2b38d30(uVar9,0);
                    /* catch() { ... } // from try @ 0156f9fc with catch @ 01570574 */
                    /* catch() { ... } // from try @ 0156fb14 with catch @ 01570578 */
                    /* catch() { ... } // from try @ 01570274 with catch @ 0157057c */
          Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar7);
                    /* catch() { ... } // from try @ 01570244 with catch @ 01570580 */
                    /* catch() { ... } // from try @ 015700c8 with catch @ 01570584 */
                    /* catch() { ... } // from try @ 01570098 with catch @ 01570588 */
                    /* catch() { ... } // from try @ 0156ffd0 with catch @ 0157058c */
          if (*(long *)(lVar1 + 0x28) == lStack_68) {
                    /* catch() { ... } // from try @ 0156fcd8 with catch @ 01570590 */
                    /* catch() { ... } // from try @ 015701a8 with catch @ 01570594 */
                    /* catch() { ... } // from try @ 01570138 with catch @ 01570598 */
                    /* catch() { ... } // from try @ 0156fc84 with catch @ 0157059c */
                    /* catch() { ... } // from try @ 0156f99c with catch @ 015705a0 */
                    /* catch() { ... } // from try @ 0156fb88 with catch @ 015705a4 */
                    /* catch() { ... } // from try @ 0156fab4 with catch @ 015705a8 */
                    /* catch() { ... } // from try @ 015702a0 with catch @ 015705ac */
            return;
          }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 01570040 with catch @ 015705b4 */
          __stack_chk_fail();
        }
      }
    }
  }
LAB_015705b0:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0156f970 with catch @ 015705b0 */
  FUN_012d0ef0();
}

