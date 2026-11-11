/* IL2CPP: magicsort.schemas.v1.liveops.paw_touch_offer.PawTouchOfferResponse$$get_SegmentedOfferPackage
System_Nullable_SegmentedOfferPackage__o magicsort_schemas_v1_liveops_paw_touch_offer_PawTouchOfferResponse__get_SegmentedOfferPackage (magicsort_schemas_v1_liveops_paw_touch_offer_PawTouchOfferResponse_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   magicsort.schemas.v1.liveops.paw_touch_offer.PawTouchOfferResponse$$get_SegmentedOfferPackage
   System_Nullable_SegmentedOfferPackage__o
   magicsort_schemas_v1_liveops_paw_touch_offer_PawTouchOfferResponse__get_SegmentedOfferPackage
   (magicsort_schemas_v1_liveops_paw_touch_offer_PawTouchOfferResponse_o __this, const MethodInfo*
   method); */

void magicsort_schemas_v1_liveops_paw_touch_offer_PawTouchOfferResponse__get_SegmentedOfferPackage_1739598
               (undefined8 *param_1,int *param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
                    /* try { // try from 018395a8 to 019395af has its CatchHandler @ 01839624 */
  if ((bRam0000000005c24ceb & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057aad48);
                    /* try { // try from 018395c4 to 019395d7 has its CatchHandler @ 01839628 */
    bRam0000000005c24ceb = 1;
  }
  uStack_30 = 0;
  uStack_28 = 0;
  iVar2 = Google_FlatBuffers_Table____offset_3139a10(param_2,0xc,0);
  puVar1 = PTR_DAT_057aad48;
  if (iVar2 == 0) {
                    /* catch() { ... } // from try @ 01839204 with catch @ 01839640
                       catch() { ... } // from try @ 018394c4 with catch @ 01839640 */
    *param_1 = 0;
    param_1[1] = 0;
                    /* catch() { ... } // from try @ 01839358 with catch @ 01839644 */
    param_1[2] = 0;
  }
  else {
    uStack_30 = 0;
    uStack_28 = 0;
                    /* try { // try from 018395f8 to 019395fb has its CatchHandler @ 0183961c */
                    /* try { // try from 018395fc to 019395ff has its CatchHandler @ 01839618 */
                    /* try { // try from 01839600 to 01939603 has its CatchHandler @ 01839614 */
    uVar3 = Google_FlatBuffers_Table____indirect_3139ae8(param_2,*param_2 + iVar2,0);
                    /* try { // try from 01839604 to 01939607 has its CatchHandler @ 01839610 */
                    /* try { // try from 01839608 to 0193960b has its CatchHandler @ 0183960c */
                    /* catch() { ... } // from try @ 01839608 with catch @ 0183960c
                       try { // try from 0183960c to 01939657 has its CatchHandler @ 01838f00 */
                    /* catch() { ... } // from try @ 01839604 with catch @ 01839610 */
                    /* catch() { ... } // from try @ 01839600 with catch @ 01839614 */
    auVar5 = magicsort_schemas_v1_common_SegmentedOfferPackage____assign_1604684
                       (&uStack_30,uVar3,*(undefined8 *)(param_2 + 2),0);
                    /* catch() { ... } // from try @ 018395fc with catch @ 01839618 */
    uVar4 = *(undefined8 *)puVar1;
                    /* catch() { ... } // from try @ 018395f8 with catch @ 0183961c */
                    /* catch() { ... } // from try @ 01839574 with catch @ 01839620 */
                    /* catch() { ... } // from try @ 01839550 with catch @ 01839624
                       catch() { ... } // from try @ 018395a8 with catch @ 01839624 */
                    /* catch() { ... } // from try @ 018395c4 with catch @ 01839628 */
                    /* catch() { ... } // from try @ 01839418 with catch @ 0183962c */
                    /* catch() { ... } // from try @ 018393f8 with catch @ 01839630 */
    param_1[1] = 0;
    param_1[2] = 0;
                    /* catch() { ... } // from try @ 01839484 with catch @ 01839634 */
    *param_1 = 0;
                    /* catch() { ... } // from try @ 01839308 with catch @ 01839638 */
    System_Nullable_SegmentedOfferPackage____ctor_2040d40(param_1,auVar5._0_8_,auVar5._8_8_,uVar4);
                    /* catch() { ... } // from try @ 01839428 with catch @ 0183963c */
  }
  return;
}

