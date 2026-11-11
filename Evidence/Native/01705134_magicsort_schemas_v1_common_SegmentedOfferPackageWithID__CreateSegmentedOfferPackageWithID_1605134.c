/* IL2CPP: magicsort.schemas.v1.common.SegmentedOfferPackageWithID$$CreateSegmentedOfferPackageWithID
Google_FlatBuffers_Offset_SegmentedOfferPackageWithID__o magicsort_schemas_v1_common_SegmentedOfferPackageWithID__CreateSegmentedOfferPackageWithID (Google_FlatBuffers_FlatBufferBuilder_o* builder, int64_t PackageID, Google_FlatBuffers_StringOffset_o IAPProductIdOffset, int64_t IAPProductDiscountAmount, Google_FlatBuffers_VectorOffset_o RewardModelsOffset, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   magicsort.schemas.v1.common.SegmentedOfferPackageWithID$$CreateSegmentedOfferPackageWithID
   Google_FlatBuffers_Offset_SegmentedOfferPackageWithID__o
   magicsort_schemas_v1_common_SegmentedOfferPackageWithID__CreateSegmentedOfferPackageWithID
   (Google_FlatBuffers_FlatBufferBuilder_o* builder, int64_t PackageID,
   Google_FlatBuffers_StringOffset_o IAPProductIdOffset, int64_t IAPProductDiscountAmount,
   Google_FlatBuffers_VectorOffset_o RewardModelsOffset, const MethodInfo* method); */

undefined4
magicsort_schemas_v1_common_SegmentedOfferPackageWithID__CreateSegmentedOfferPackageWithID_1605134
          (long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    Google_FlatBuffers_FlatBufferBuilder__StartTable_31367b8(param_1,4,0);
    magicsort_schemas_v1_common_SegmentedOfferPackageWithID__AddIAPProductDiscountAmount_16051b4
              (param_1,param_4);
    magicsort_schemas_v1_common_SegmentedOfferPackageWithID__AddPackageID_16051d4(param_1,param_2);
    magicsort_schemas_v1_common_SegmentedOfferPackageWithID__AddRewardModels_16051f4
              (param_1,param_5);
    magicsort_schemas_v1_common_SegmentedOfferPackageWithID__AddIAPProductId_1605214
              (param_1,param_3);
    uVar1 = magicsort_schemas_v1_common_SegmentedOfferPackageWithID__EndSegmentedOfferPackageWithID_1605234
                      (param_1);
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

