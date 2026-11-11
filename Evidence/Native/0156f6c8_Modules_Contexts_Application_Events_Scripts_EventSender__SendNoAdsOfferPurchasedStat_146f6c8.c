/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendNoAdsOfferPurchasedStat
void Modules_Contexts_Application_Events_Scripts_EventSender__SendNoAdsOfferPurchasedStat (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, Modules_Contexts_Application_IAP_Scripts_IAPModel_o* iapModel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendNoAdsOfferPurchasedStat
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendNoAdsOfferPurchasedStat
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this,
   Modules_Contexts_Application_IAP_Scripts_IAPModel_o* iapModel, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendNoAdsOfferPurchasedStat_146f6c8
               (undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  int iVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  int *piVar21;
  undefined8 uVar22;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  puVar3 = PTR_DAT_0576aae0;
  lVar1 = tpidr_el0;
                    /* try { // try from 0156f6ec to 0166f713 has its CatchHandler @ 01570608 */
  lStack_78 = *(long *)(lVar1 + 0x28);
  if ((bRam0000000005c237e2 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
                    /* try { // try from 0156f71c to 0166f723 has its CatchHandler @ 01570604 */
    FUN_012d0dc8(PTR_DAT_05802ff8);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_05792f78);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_0579fa30);
    FUN_012d0dc8(PTR_DAT_0579d5c0);
    FUN_012d0dc8(PTR_DAT_05765ce8);
    FUN_012d0dc8(PTR_DAT_057c8a60);
                    /* try { // try from 0156f780 to 0166f78b has its CatchHandler @ 015705f0 */
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057ce7d0);
                    /* try { // try from 0156f7a8 to 0166f7ab has its CatchHandler @ 015704d0 */
    FUN_012d0dc8(PTR_DAT_057c9ca0);
                    /* try { // try from 0156f7ac to 0166f7b7 has its CatchHandler @ 01570544 */
    FUN_012d0dc8(PTR_DAT_05773ae8);
    FUN_012d0dc8(PTR_DAT_057712b8);
                    /* try { // try from 0156f7c8 to 0166f7cf has its CatchHandler @ 01570540 */
    FUN_012d0dc8(PTR_DAT_0575ba40);
    FUN_012d0dc8(PTR_DAT_057d60e0);
    FUN_012d0dc8(PTR_DAT_05774390);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057d3f68);
    bRam0000000005c237e2 = 1;
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  lVar17 = **(long **)(*(long *)puVar3 + 0xb8);
  if ((lVar17 != 0) && (lVar17 = *(long *)(lVar17 + 0x18), lVar17 != 0)) {
                    /* try { // try from 0156f824 to 0166f82f has its CatchHandler @ 015705f8 */
    lVar17 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar17,*(undefined8 *)PTR_DAT_05792f78);
    puVar5 = PTR_DAT_057c8a60;
    lVar18 = **(long **)(*(long *)puVar3 + 0xb8);
                    /* try { // try from 0156f84c to 0166f84f has its CatchHandler @ 015704d8 */
    if ((lVar18 != 0) && (lVar18 = *(long *)(lVar18 + 0x18), lVar18 != 0)) {
                    /* try { // try from 0156f850 to 0166f85b has its CatchHandler @ 0157055c */
      plVar10 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                  (lVar18,*(undefined8 *)PTR_DAT_057a1e60);
                    /* try { // try from 0156f86c to 0166f873 has its CatchHandler @ 01570538 */
      lVar18 = thunk_FUN_01320e48(*(undefined8 *)puVar5);
      if ((lVar18 != 0) &&
         (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                    (lVar18,*(undefined8 *)PTR_DAT_05773ae8,0), puVar3 = PTR_DAT_057d3f68,
         lVar17 != 0)) {
        uVar11 = Modules_Contexts_Application_ServerCommunication_Scripts_SegmentService__GetSegment_3e2f82c
                           (lVar17,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar18,*(undefined8 *)puVar3,uVar11,0);
        puVar5 = PTR_DAT_057db748;
        puVar3 = PTR_DAT_057caaf0;
                    /* try { // try from 0156f8c0 to 0166f8cb has its CatchHandler @ 015705e4 */
        if (plVar10 != (long *)0x0) {
          lVar19 = *plVar10;
          uVar20 = (ulong)*(ushort *)(lVar19 + 0x12a);
                    /* try { // try from 0156f8e8 to 0166f8eb has its CatchHandler @ 015704cc */
                    /* try { // try from 0156f8ec to 0166f8f7 has its CatchHandler @ 0157054c */
          if (uVar20 != 0) {
            piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_057636d0) {
                puVar12 = (undefined8 *)(lVar19 + (long)(*piVar21 + 1) * 0x10 + 0x138);
                goto LAB_0156f930;
              }
              uVar20 = uVar20 - 1;
                    /* try { // try from 0156f908 to 0166f913 has its CatchHandler @ 0157053c */
              piVar21 = piVar21 + 4;
            } while (uVar20 != 0);
          }
          puVar12 = (undefined8 *)FUN_0131971c(plVar10,*(long *)PTR_DAT_057636d0,1);
LAB_0156f930:
          puVar7 = PTR_DAT_057d60e0;
          puVar4 = PTR_DAT_05765ce8;
          puVar2 = PTR_DAT_0575ba40;
          uVar8 = (*(code *)*puVar12)(plVar10,puVar12[1]);
          uStack_88 = CONCAT44(uStack_88._4_4_,uVar8);
          uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_88);
                    /* try { // try from 0156f970 to 0166f97b has its CatchHandler @ 015705b0 */
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar18,*(undefined8 *)puVar3,uVar11,0);
          puVar6 = PTR_DAT_057ce7d0;
          puVar3 = PTR_DAT_057712b8;
          if (param_2 != 0) {
                    /* try { // try from 0156f998 to 0166f99b has its CatchHandler @ 015704a8 */
                    /* try { // try from 0156f99c to 0166f9bb has its CatchHandler @ 015705a0 */
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar18,*(undefined8 *)puVar7,*(undefined8 *)(param_2 + 0x38),0);
            uStack_88 = *(ulong *)(param_2 + 0x40);
            uStack_80 = *(undefined8 *)(param_2 + 0x48);
            uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_88);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar18,*(undefined8 *)puVar3,uVar11,0);
            uStack_a4 = *(undefined4 *)(param_2 + 0x50);
            uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_a4);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar18,*(undefined8 *)puVar2,uVar11,0);
          }
                    /* try { // try from 0156f9fc to 0166fa07 has its CatchHandler @ 01570574 */
          uVar11 = Modules_Contexts_Application_ServerCommunication_Scripts_SegmentService__GetSegment_3e2f82c
                             (lVar17,0);
          puVar6 = PTR_DAT_05802ff8;
                    /* try { // try from 0156fa24 to 0166fa27 has its CatchHandler @ 015704c8 */
                    /* try { // try from 0156fa28 to 0166fa47 has its CatchHandler @ 015705cc */
          plVar13 = (long *)System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                      (*(undefined8 *)(lVar18 + 0x18),*(undefined8 *)puVar7,
                                       *(undefined8 *)PTR_DAT_05774390,
                                       *(undefined8 *)PTR_DAT_05802ff8);
          puVar3 = PTR_DAT_0579fa30;
          if (plVar13 != (long *)0x0) {
            uVar14 = (**(code **)(*plVar13 + 0x168))(plVar13,*(undefined8 *)(*plVar13 + 0x170));
            if (param_2 == 0) {
                    /* try { // try from 0156fab0 to 0166fab3 has its CatchHandler @ 015704b4 */
                    /* try { // try from 0156fab4 to 0166fad3 has its CatchHandler @ 015705a8 */
              uVar15 = **(undefined8 **)(*(long *)PTR_DAT_057c9ca0 + 0xb8);
            }
            else {
              uStack_98 = *(undefined8 *)(param_2 + 0x48);
              uStack_a0 = *(undefined8 *)(param_2 + 0x40);
              if (*(int *)(*(long *)PTR_DAT_0579d5c0 + 0xe0) == 0) {
                thunk_FUN_0130472c();
              }
              uVar15 = System_Globalization_CultureInfo__get_InvariantCulture_2b20e6c(0);
              lVar17 = *(long *)puVar4;
              if (*(int *)(lVar17 + 0xe0) == 0) {
                    /* try { // try from 0156fa88 to 0166fa93 has its CatchHandler @ 015705c4 */
                thunk_FUN_0130472c(lVar17);
              }
              uVar15 = System_Decimal__ToString_2a93dec(&uStack_a0,uVar15,0);
            }
            uVar22 = *(undefined8 *)(lVar18 + 0x18);
            uStack_88 = uStack_88 & 0xffffffff00000000;
            uVar16 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_88);
            uVar16 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                               (uVar22,*(undefined8 *)puVar2,uVar16,*(undefined8 *)puVar6);
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_0130472c(*(long *)puVar3);
            }
            puVar3 = PTR_DAT_0575f9f0;
                    /* try { // try from 0156fb14 to 0166fb1f has its CatchHandler @ 01570578 */
            uVar16 = System_Convert__ToDouble_21312e0(uVar16,0);
            lVar17 = *plVar10;
                    /* try { // try from 0156fb24 to 0166fb2f has its CatchHandler @ 015704e4 */
            uVar20 = (ulong)*(ushort *)(lVar17 + 0x12a);
            if (uVar20 != 0) {
              piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
              do {
                if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_057636d0) {
                    /* try { // try from 0156fb70 to 0166fb7b has its CatchHandler @ 015705c0 */
                  puVar12 = (undefined8 *)(lVar17 + (long)(*piVar21 + 1) * 0x10 + 0x138);
                  goto LAB_0156fb74;
                }
                uVar20 = uVar20 - 1;
                piVar21 = piVar21 + 4;
              } while (uVar20 != 0);
            }
            puVar12 = (undefined8 *)FUN_0131971c(plVar10,*(long *)PTR_DAT_057636d0,1);
LAB_0156fb74:
            iVar9 = (*(code *)*puVar12)(plVar10,puVar12[1]);
                    /* try { // try from 0156fb88 to 0166fba3 has its CatchHandler @ 015705a4 */
            uVar11 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__NoAdsOfferPurchased_2db7d6c
                               (uVar16,uVar11,uVar14,uVar15,(long)iVar9,0);
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_0130472c(*(long *)puVar3);
            }
            GrandSDK_Analytics_Analytics__Track_2b38d30(uVar11,0);
            Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4
                      (param_1,lVar18);
                    /* try { // try from 0156fbd4 to 0166fbdf has its CatchHandler @ 015705b8 */
            if (*(long *)(lVar1 + 0x28) == lStack_78) {
                    /* try { // try from 0156fbfc to 0166fbff has its CatchHandler @ 015704ac */
              return;
            }
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0156fc00 to 0166fc0b has its CatchHandler @ 01570500 */
  FUN_012d0ef0();
}

