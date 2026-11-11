/* IL2CPP: magicsort.schemas.v1.liveops.daily_reward.GetDailyRewardEventResponse$$CreateGetDailyRewardEventResponse
Google_FlatBuffers_Offset_GetDailyRewardEventResponse__o magicsort_schemas_v1_liveops_daily_reward_GetDailyRewardEventResponse__CreateGetDailyRewardEventResponse (Google_FlatBuffers_FlatBufferBuilder_o* builder, Google_FlatBuffers_StringOffset_o event_idOffset, int64_t event_type, int64_t start_time, int64_t finish_time, Google_FlatBuffers_StringOffset_o segmentOffset, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   magicsort.schemas.v1.liveops.daily_reward.GetDailyRewardEventResponse$$CreateGetDailyRewardEventResponse
   Google_FlatBuffers_Offset_GetDailyRewardEventResponse__o
   magicsort_schemas_v1_liveops_daily_reward_GetDailyRewardEventResponse__CreateGetDailyRewardEventResponse
   (Google_FlatBuffers_FlatBufferBuilder_o* builder, Google_FlatBuffers_StringOffset_o
   event_idOffset, int64_t event_type, int64_t start_time, int64_t finish_time,
   Google_FlatBuffers_StringOffset_o segmentOffset, const MethodInfo* method); */

undefined4
magicsort_schemas_v1_liveops_daily_reward_GetDailyRewardEventResponse__CreateGetDailyRewardEventResponse_17406f8
          (long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
          undefined4 param_6)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    Google_FlatBuffers_FlatBufferBuilder__StartTable_31367b8(param_1,5,0);
    magicsort_schemas_v1_liveops_daily_reward_GetDailyRewardEventResponse__AddFinishTime_1740790
              (param_1,param_5);
    magicsort_schemas_v1_liveops_daily_reward_GetDailyRewardEventResponse__AddStartTime_17407b0
              (param_1,param_4);
    magicsort_schemas_v1_liveops_daily_reward_GetDailyRewardEventResponse__AddEventType_17407d0
              (param_1,param_3);
    magicsort_schemas_v1_liveops_daily_reward_GetDailyRewardEventResponse__AddSegment_17407f0
              (param_1,param_6);
    magicsort_schemas_v1_liveops_daily_reward_GetDailyRewardEventResponse__AddEventId_1740810
              (param_1,param_2);
    uVar1 = magicsort_schemas_v1_liveops_daily_reward_GetDailyRewardEventResponse__EndGetDailyRewardEventResponse_1740830
                      (param_1);
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

