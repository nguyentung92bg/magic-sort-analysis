/* IL2CPP: magicsort.schemas.v1.liveops.special_offer.SpecialOfferResponse$$get_SegmentedOfferPackage
System_Nullable_SegmentedOfferPackage__o magicsort_schemas_v1_liveops_special_offer_SpecialOfferResponse__get_SegmentedOfferPackage (magicsort_schemas_v1_liveops_special_offer_SpecialOfferResponse_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   magicsort.schemas.v1.liveops.special_offer.SpecialOfferResponse$$get_SegmentedOfferPackage
   System_Nullable_SegmentedOfferPackage__o
   magicsort_schemas_v1_liveops_special_offer_SpecialOfferResponse__get_SegmentedOfferPackage
   (magicsort_schemas_v1_liveops_special_offer_SpecialOfferResponse_o __this, const MethodInfo*
   method); */

void magicsort_schemas_v1_liveops_special_offer_SpecialOfferResponse__get_SegmentedOfferPackage_1736cdc
               (undefined8 *param_1,int *param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((bRam0000000005c24cc9 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057aad48);
    bRam0000000005c24cc9 = 1;
  }
  uStack_30 = 0;
  uStack_28 = 0;
  iVar2 = Google_FlatBuffers_Table____offset_3139a10(param_2,0x14,0);
  puVar1 = PTR_DAT_057aad48;
  if (iVar2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    uStack_30 = 0;
    uStack_28 = 0;
                    /* try { // try from 01836d30 to 01936d3f has its CatchHandler @ 01836d40 */
                    /* catch() { ... } // from try @ 01836cbc with catch @ 01836d40
                       catch() { ... } // from try @ 01836d30 with catch @ 01836d40 */
                    /* try { // try from 01836d44 to 01936d47 has its CatchHandler @ 01836d50 */
    uVar3 = Google_FlatBuffers_Table____indirect_3139ae8(param_2,*param_2 + iVar2,0);
                    /* try { // try from 01836d48 to 01936d53 has its CatchHandler @ 01836904 */
                    /* catch() { ... } // from try @ 01836d44 with catch @ 01836d50 */
    auVar5 = magicsort_schemas_v1_common_SegmentedOfferPackage____assign_1604684
                       (&uStack_30,uVar3,*(undefined8 *)(param_2 + 2),0);
    uVar4 = *(undefined8 *)puVar1;
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    System_Nullable_SegmentedOfferPackage____ctor_2040d40(param_1,auVar5._0_8_,auVar5._8_8_,uVar4);
  }
  return;
}

