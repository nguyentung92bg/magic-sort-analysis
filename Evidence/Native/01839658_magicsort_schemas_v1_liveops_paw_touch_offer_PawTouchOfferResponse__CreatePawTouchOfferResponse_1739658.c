/* IL2CPP: magicsort.schemas.v1.liveops.paw_touch_offer.PawTouchOfferResponse$$CreatePawTouchOfferResponse
Google_FlatBuffers_Offset_PawTouchOfferResponse__o magicsort_schemas_v1_liveops_paw_touch_offer_PawTouchOfferResponse__CreatePawTouchOfferResponse (Google_FlatBuffers_FlatBufferBuilder_o* builder, Google_FlatBuffers_StringOffset_o event_idOffset, int64_t event_type, int64_t end_time, Google_FlatBuffers_StringOffset_o segmentOffset, Google_FlatBuffers_Offset_SegmentedOfferPackage__o segmented_offer_packageOffset, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   magicsort.schemas.v1.liveops.paw_touch_offer.PawTouchOfferResponse$$CreatePawTouchOfferResponse
   Google_FlatBuffers_Offset_PawTouchOfferResponse__o
   magicsort_schemas_v1_liveops_paw_touch_offer_PawTouchOfferResponse__CreatePawTouchOfferResponse
   (Google_FlatBuffers_FlatBufferBuilder_o* builder, Google_FlatBuffers_StringOffset_o
   event_idOffset, int64_t event_type, int64_t end_time, Google_FlatBuffers_StringOffset_o
   segmentOffset, Google_FlatBuffers_Offset_SegmentedOfferPackage__o segmented_offer_packageOffset,
   const MethodInfo* method); */

undefined4
magicsort_schemas_v1_liveops_paw_touch_offer_PawTouchOfferResponse__CreatePawTouchOfferResponse_1739658
          (long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,undefined4 param_5,
          undefined4 param_6)

{
  undefined4 uVar1;
  
                    /* try { // try from 01839658 to 0193965b has its CatchHandler @ 01839674 */
                    /* try { // try from 0183965c to 0193968f has its CatchHandler @ 01838f00 */
  if (param_1 != 0) {
                    /* catch() { ... } // from try @ 01839658 with catch @ 01839674 */
    Google_FlatBuffers_FlatBufferBuilder__StartTable_31367b8(param_1,5,0);
                    /* try { // try from 01839690 to 0193969b has its CatchHandler @ 0183969c */
    magicsort_schemas_v1_liveops_paw_touch_offer_PawTouchOfferResponse__AddEndTime_17396f0
              (param_1,param_4);
                    /* catch() { ... } // from try @ 01839690 with catch @ 0183969c */
    magicsort_schemas_v1_liveops_paw_touch_offer_PawTouchOfferResponse__AddEventType_1739710
              (param_1,param_3);
    magicsort_schemas_v1_liveops_paw_touch_offer_PawTouchOfferResponse__AddSegmentedOfferPackage_1739730
              (param_1,param_6);
    magicsort_schemas_v1_liveops_paw_touch_offer_PawTouchOfferResponse__AddSegment_1739750
              (param_1,param_5);
    magicsort_schemas_v1_liveops_paw_touch_offer_PawTouchOfferResponse__AddEventId_1739770
              (param_1,param_2);
    uVar1 = magicsort_schemas_v1_liveops_paw_touch_offer_PawTouchOfferResponse__EndPawTouchOfferResponse_1739790
                      (param_1);
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

