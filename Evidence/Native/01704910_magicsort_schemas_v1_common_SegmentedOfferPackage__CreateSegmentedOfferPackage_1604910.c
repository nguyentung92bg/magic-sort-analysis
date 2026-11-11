/* IL2CPP: magicsort.schemas.v1.common.SegmentedOfferPackage$$CreateSegmentedOfferPackage
Google_FlatBuffers_Offset_SegmentedOfferPackage__o magicsort_schemas_v1_common_SegmentedOfferPackage__CreateSegmentedOfferPackage (Google_FlatBuffers_FlatBufferBuilder_o* builder, Google_FlatBuffers_StringOffset_o IAPProductIdOffset, int64_t IAPProductDiscountAmount, Google_FlatBuffers_VectorOffset_o RewardModelsOffset, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: magicsort.schemas.v1.common.SegmentedOfferPackage$$CreateSegmentedOfferPackage
   Google_FlatBuffers_Offset_SegmentedOfferPackage__o
   magicsort_schemas_v1_common_SegmentedOfferPackage__CreateSegmentedOfferPackage
   (Google_FlatBuffers_FlatBufferBuilder_o* builder, Google_FlatBuffers_StringOffset_o
   IAPProductIdOffset, int64_t IAPProductDiscountAmount, Google_FlatBuffers_VectorOffset_o
   RewardModelsOffset, const MethodInfo* method); */

undefined4
magicsort_schemas_v1_common_SegmentedOfferPackage__CreateSegmentedOfferPackage_1604910
          (long param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    Google_FlatBuffers_FlatBufferBuilder__StartTable_31367b8(param_1,3,0);
    magicsort_schemas_v1_common_SegmentedOfferPackage__AddIAPProductDiscountAmount_1604980
              (param_1,param_3);
                    /* try { // try from 0170494c to 018049af has its CatchHandler @ 0170494c
                       catch() { ... } // from try @ 0170494c with catch @ 0170494c
                       catch() { ... } // from try @ 017049c4 with catch @ 0170494c
                       catch() { ... } // from try @ 01704ac8 with catch @ 0170494c */
    magicsort_schemas_v1_common_SegmentedOfferPackage__AddRewardModels_16049a0(param_1,param_4);
    magicsort_schemas_v1_common_SegmentedOfferPackage__AddIAPProductId_16049c0(param_1,param_2);
    uVar1 = magicsort_schemas_v1_common_SegmentedOfferPackage__EndSegmentedOfferPackage_16049e0
                      (param_1);
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

