/* IL2CPP: magicsort.schemas.v1.liveops.choose_one_offer.ChooseOneOfferResponse$$CreateChooseOneOfferResponse
Google_FlatBuffers_Offset_ChooseOneOfferResponse__o magicsort_schemas_v1_liveops_choose_one_offer_ChooseOneOfferResponse__CreateChooseOneOfferResponse (Google_FlatBuffers_FlatBufferBuilder_o* builder, Google_FlatBuffers_StringOffset_o event_idOffset, int64_t event_type, int64_t event_start_time, int64_t event_end_time, bool is_finished, bool is_claimed, Google_FlatBuffers_StringOffset_o segmentOffset, Google_FlatBuffers_VectorOffset_o segmented_offer_packagesOffset, Google_FlatBuffers_Offset_SegmentedOfferPackageWithID__o all_segmented_offer_packageOffset, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   magicsort.schemas.v1.liveops.choose_one_offer.ChooseOneOfferResponse$$CreateChooseOneOfferResponse
   Google_FlatBuffers_Offset_ChooseOneOfferResponse__o
   magicsort_schemas_v1_liveops_choose_one_offer_ChooseOneOfferResponse__CreateChooseOneOfferResponse
   (Google_FlatBuffers_FlatBufferBuilder_o* builder, Google_FlatBuffers_StringOffset_o
   event_idOffset, int64_t event_type, int64_t event_start_time, int64_t event_end_time, bool
   is_finished, bool is_claimed, Google_FlatBuffers_StringOffset_o segmentOffset,
   Google_FlatBuffers_VectorOffset_o segmented_offer_packagesOffset,
   Google_FlatBuffers_Offset_SegmentedOfferPackageWithID__o all_segmented_offer_packageOffset, const
   MethodInfo* method); */

undefined4
magicsort_schemas_v1_liveops_choose_one_offer_ChooseOneOfferResponse__CreateChooseOneOfferResponse_1741bc4
          (long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
          uint param_6,uint param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    Google_FlatBuffers_FlatBufferBuilder__StartTable_31367b8(param_1,9,0);
    magicsort_schemas_v1_liveops_choose_one_offer_ChooseOneOfferResponse__AddEventEndTime_1741ca8
              (param_1,param_5);
    magicsort_schemas_v1_liveops_choose_one_offer_ChooseOneOfferResponse__AddEventStartTime_1741cc8
              (param_1,param_4);
    magicsort_schemas_v1_liveops_choose_one_offer_ChooseOneOfferResponse__AddEventType_1741ce8
              (param_1,param_3);
    magicsort_schemas_v1_liveops_choose_one_offer_ChooseOneOfferResponse__AddAllSegmentedOfferPackage_1741d08
              (param_1,param_10);
    magicsort_schemas_v1_liveops_choose_one_offer_ChooseOneOfferResponse__AddSegmentedOfferPackages_1741d28
              (param_1,param_9);
    magicsort_schemas_v1_liveops_choose_one_offer_ChooseOneOfferResponse__AddSegment_1741d48
              (param_1,param_8);
    magicsort_schemas_v1_liveops_choose_one_offer_ChooseOneOfferResponse__AddEventId_1741d68
              (param_1,param_2);
    magicsort_schemas_v1_liveops_choose_one_offer_ChooseOneOfferResponse__AddIsClaimed_1741d88
              (param_1,param_7 & 1);
    magicsort_schemas_v1_liveops_choose_one_offer_ChooseOneOfferResponse__AddIsFinished_1741da8
              (param_1,param_6 & 1);
    uVar1 = magicsort_schemas_v1_liveops_choose_one_offer_ChooseOneOfferResponse__EndChooseOneOfferResponse_1741dc8
                      (param_1);
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

