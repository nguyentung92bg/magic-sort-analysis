/* IL2CPP: magicsort.schemas.v1.liveops.special_offer.SpecialOfferResponse$$CreateSpecialOfferResponse
Google_FlatBuffers_Offset_SpecialOfferResponse__o magicsort_schemas_v1_liveops_special_offer_SpecialOfferResponse__CreateSpecialOfferResponse (Google_FlatBuffers_FlatBufferBuilder_o* builder, Google_FlatBuffers_StringOffset_o event_idOffset, int64_t event_type, int64_t event_start_time, int64_t ui_type, int64_t event_end_time, bool is_finished, bool is_claimed, Google_FlatBuffers_StringOffset_o segmentOffset, Google_FlatBuffers_Offset_SegmentedOfferPackage__o segmented_offer_packageOffset, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   magicsort.schemas.v1.liveops.special_offer.SpecialOfferResponse$$CreateSpecialOfferResponse
   Google_FlatBuffers_Offset_SpecialOfferResponse__o
   magicsort_schemas_v1_liveops_special_offer_SpecialOfferResponse__CreateSpecialOfferResponse
   (Google_FlatBuffers_FlatBufferBuilder_o* builder, Google_FlatBuffers_StringOffset_o
   event_idOffset, int64_t event_type, int64_t event_start_time, int64_t ui_type, int64_t
   event_end_time, bool is_finished, bool is_claimed, Google_FlatBuffers_StringOffset_o
   segmentOffset, Google_FlatBuffers_Offset_SegmentedOfferPackage__o segmented_offer_packageOffset,
   const MethodInfo* method); */

undefined4
magicsort_schemas_v1_liveops_special_offer_SpecialOfferResponse__CreateSpecialOfferResponse_1736d9c
          (long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
          undefined8 param_6,uint param_7,uint param_8,undefined4 param_9,undefined4 param_10)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
                    /* catch() { ... } // from try @ 018370c4 with catch @ 01836dd4
                       catch() { ... } // from try @ 01837154 with catch @ 01836dd4
                       catch() { ... } // from try @ 018371b8 with catch @ 01836dd4
                       catch() { ... } // from try @ 0183724c with catch @ 01836dd4 */
    Google_FlatBuffers_FlatBufferBuilder__StartTable_31367b8(param_1,9,0);
    magicsort_schemas_v1_liveops_special_offer_SpecialOfferResponse__AddEventEndTime_1736e80
              (param_1,param_6);
    magicsort_schemas_v1_liveops_special_offer_SpecialOfferResponse__AddUiType_1736ea0
              (param_1,param_5);
    magicsort_schemas_v1_liveops_special_offer_SpecialOfferResponse__AddEventStartTime_1736ec0
              (param_1,param_4);
    magicsort_schemas_v1_liveops_special_offer_SpecialOfferResponse__AddEventType_1736ee0
              (param_1,param_3);
                    /* try { // try from 01836e20 to 01936ebb has its CatchHandler @ 01837188 */
    magicsort_schemas_v1_liveops_special_offer_SpecialOfferResponse__AddSegmentedOfferPackage_1736f00
              (param_1,param_10);
    magicsort_schemas_v1_liveops_special_offer_SpecialOfferResponse__AddSegment_1736f20
              (param_1,param_9);
    magicsort_schemas_v1_liveops_special_offer_SpecialOfferResponse__AddEventId_1736f40
              (param_1,param_2);
    magicsort_schemas_v1_liveops_special_offer_SpecialOfferResponse__AddIsClaimed_1736f60
              (param_1,param_8 & 1);
    magicsort_schemas_v1_liveops_special_offer_SpecialOfferResponse__AddIsFinished_1736f80
              (param_1,param_7 & 1);
    uVar1 = magicsort_schemas_v1_liveops_special_offer_SpecialOfferResponse__EndSpecialOfferResponse_1736fa0
                      (param_1);
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

