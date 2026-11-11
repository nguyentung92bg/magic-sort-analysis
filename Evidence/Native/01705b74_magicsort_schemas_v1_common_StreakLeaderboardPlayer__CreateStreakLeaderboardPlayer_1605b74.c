/* IL2CPP: magicsort.schemas.v1.common.StreakLeaderboardPlayer$$CreateStreakLeaderboardPlayer
Google_FlatBuffers_Offset_StreakLeaderboardPlayer__o magicsort_schemas_v1_common_StreakLeaderboardPlayer__CreateStreakLeaderboardPlayer (Google_FlatBuffers_FlatBufferBuilder_o* builder, Google_FlatBuffers_StringOffset_o PublicIDOffset, Google_FlatBuffers_StringOffset_o NicknameOffset, int64_t Score, int64_t Rank, bool IsBot, bool IsMe, Google_FlatBuffers_StringOffset_o ImageUrlOffset, Google_FlatBuffers_StringOffset_o ImageIDOffset, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: magicsort.schemas.v1.common.StreakLeaderboardPlayer$$CreateStreakLeaderboardPlayer
   Google_FlatBuffers_Offset_StreakLeaderboardPlayer__o
   magicsort_schemas_v1_common_StreakLeaderboardPlayer__CreateStreakLeaderboardPlayer
   (Google_FlatBuffers_FlatBufferBuilder_o* builder, Google_FlatBuffers_StringOffset_o
   PublicIDOffset, Google_FlatBuffers_StringOffset_o NicknameOffset, int64_t Score, int64_t Rank,
   bool IsBot, bool IsMe, Google_FlatBuffers_StringOffset_o ImageUrlOffset,
   Google_FlatBuffers_StringOffset_o ImageIDOffset, const MethodInfo* method); */

undefined4
magicsort_schemas_v1_common_StreakLeaderboardPlayer__CreateStreakLeaderboardPlayer_1605b74
          (long param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,undefined8 param_5,
          uint param_6,uint param_7,undefined4 param_8,undefined4 param_9)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    Google_FlatBuffers_FlatBufferBuilder__StartTable_31367b8(param_1,8,0);
    magicsort_schemas_v1_common_StreakLeaderboardPlayer__AddRank_1605c44(param_1,param_5);
    magicsort_schemas_v1_common_StreakLeaderboardPlayer__AddScore_1605c64(param_1,param_4);
    magicsort_schemas_v1_common_StreakLeaderboardPlayer__AddImageID_1605c84(param_1,param_9);
    magicsort_schemas_v1_common_StreakLeaderboardPlayer__AddImageUrl_1605ca4(param_1,param_8);
    magicsort_schemas_v1_common_StreakLeaderboardPlayer__AddNickname_1605cc4(param_1,param_3);
    magicsort_schemas_v1_common_StreakLeaderboardPlayer__AddPublicID_1605ce4(param_1,param_2);
    magicsort_schemas_v1_common_StreakLeaderboardPlayer__AddIsMe_1605d04(param_1,param_7 & 1);
    magicsort_schemas_v1_common_StreakLeaderboardPlayer__AddIsBot_1605d24(param_1,param_6 & 1);
    uVar1 = magicsort_schemas_v1_common_StreakLeaderboardPlayer__EndStreakLeaderboardPlayer_1605d44
                      (param_1);
                    /* try { // try from 01705c2c to 01805d3f has its CatchHandler @ 01705c2c
                       catch() { ... } // from try @ 01705c2c with catch @ 01705c2c
                       catch() { ... } // from try @ 01705df0 with catch @ 01705c2c
                       catch() { ... } // from try @ 01705eb8 with catch @ 01705c2c
                       catch() { ... } // from try @ 01705ec0 with catch @ 01705c2c
                       catch() { ... } // from try @ 01705f6c with catch @ 01705c2c */
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

