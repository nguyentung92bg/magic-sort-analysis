/* IL2CPP: magicsort.schemas.v1.liveops.streak_leaderboard.GetStreakLeaderboardResponse$$Players
System_Nullable_StreakLeaderboardPlayer__o magicsort_schemas_v1_liveops_streak_leaderboard_GetStreakLeaderboardResponse__Players (magicsort_schemas_v1_liveops_streak_leaderboard_GetStreakLeaderboardResponse_o __this, int32_t j, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: magicsort.schemas.v1.liveops.streak_leaderboard.GetStreakLeaderboardResponse$$Players
   System_Nullable_StreakLeaderboardPlayer__o
   magicsort_schemas_v1_liveops_streak_leaderboard_GetStreakLeaderboardResponse__Players
   (magicsort_schemas_v1_liveops_streak_leaderboard_GetStreakLeaderboardResponse_o __this, int32_t
   j, const MethodInfo* method); */

void magicsort_schemas_v1_liveops_streak_leaderboard_GetStreakLeaderboardResponse__Players_1735ad4
               (undefined8 *param_1,long param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
                    /* try { // try from 01835ae4 to 01935ae7 has its CatchHandler @ 01835b1c */
                    /* try { // try from 01835ae8 to 01935aeb has its CatchHandler @ 01835b18 */
                    /* try { // try from 01835aec to 01935aef has its CatchHandler @ 01835b14 */
                    /* try { // try from 01835af0 to 01935af3 has its CatchHandler @ 01835b10 */
                    /* try { // try from 01835af4 to 01935af7 has its CatchHandler @ 01835588 */
                    /* try { // try from 01835af8 to 01935afb has its CatchHandler @ 01835b0c */
  if ((bRam0000000005c24cbb & 1) == 0) {
                    /* try { // try from 01835afc to 01935b03 has its CatchHandler @ 01835588 */
                    /* try { // try from 01835b04 to 01935b07 has its CatchHandler @ 01835b28 */
    FUN_012d0dc8(PTR_DAT_057aa350);
                    /* try { // try from 01835b08 to 01935b0b has its CatchHandler @ 01835b20 */
                    /* catch() { ... } // from try @ 01835af8 with catch @ 01835b0c
                       try { // try from 01835b0c to 01935b57 has its CatchHandler @ 01835588 */
    bRam0000000005c24cbb = 1;
  }
                    /* catch() { ... } // from try @ 01835af0 with catch @ 01835b10 */
                    /* catch() { ... } // from try @ 01835aec with catch @ 01835b14 */
                    /* catch() { ... } // from try @ 01835ae8 with catch @ 01835b18 */
                    /* catch() { ... } // from try @ 01835ae4 with catch @ 01835b1c */
  uStack_40 = 0;
  uStack_38 = 0;
                    /* catch() { ... } // from try @ 0183576c with catch @ 01835b20
                       catch() { ... } // from try @ 01835b08 with catch @ 01835b20 */
  iVar2 = Google_FlatBuffers_Table____offset_3139a10(param_2,6,0);
  puVar1 = PTR_DAT_057aa350;
                    /* catch() { ... } // from try @ 018356d8 with catch @ 01835b24 */
  if (iVar2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
                    /* catch() { ... } // from try @ 01835718 with catch @ 01835b28
                       catch() { ... } // from try @ 01835b04 with catch @ 01835b28 */
                    /* catch() { ... } // from try @ 01835934 with catch @ 01835b2c */
                    /* catch() { ... } // from try @ 01835870 with catch @ 01835b30 */
                    /* catch() { ... } // from try @ 01835a00 with catch @ 01835b34 */
                    /* catch() { ... } // from try @ 0183582c with catch @ 01835b38 */
                    /* catch() { ... } // from try @ 01835898 with catch @ 01835b3c */
    uStack_40 = 0;
    uStack_38 = 0;
                    /* catch() { ... } // from try @ 01835950 with catch @ 01835b40 */
    iVar2 = Google_FlatBuffers_Table____vector_3139c00(param_2,iVar2,0);
    uVar3 = Google_FlatBuffers_Table____indirect_3139ae8(param_2,iVar2 + param_3 * 4,0);
                    /* try { // try from 01835b58 to 01935b5b has its CatchHandler @ 01835bdc */
    auVar5 = magicsort_schemas_v1_common_StreakLeaderboardPlayer____assign_16056d8
                       (&uStack_40,uVar3,*(undefined8 *)(param_2 + 8),0);
    uVar4 = *(undefined8 *)puVar1;
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    System_Nullable_StreakLeaderboardPlayer____ctor_2042950(param_1,auVar5._0_8_,auVar5._8_8_,uVar4)
    ;
  }
                    /* try { // try from 01835ba0 to 01935bc7 has its CatchHandler @ 01835be8 */
  return;
}

