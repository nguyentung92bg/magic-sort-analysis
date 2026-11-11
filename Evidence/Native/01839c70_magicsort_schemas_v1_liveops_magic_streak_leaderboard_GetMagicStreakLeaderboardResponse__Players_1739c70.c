/* IL2CPP: magicsort.schemas.v1.liveops.magic_streak_leaderboard.GetMagicStreakLeaderboardResponse$$Players
System_Nullable_StreakLeaderboardPlayer__o magicsort_schemas_v1_liveops_magic_streak_leaderboard_GetMagicStreakLeaderboardResponse__Players (magicsort_schemas_v1_liveops_magic_streak_leaderboard_GetMagicStreakLeaderboardResponse_o __this, int32_t j, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   magicsort.schemas.v1.liveops.magic_streak_leaderboard.GetMagicStreakLeaderboardResponse$$Players
   System_Nullable_StreakLeaderboardPlayer__o
   magicsort_schemas_v1_liveops_magic_streak_leaderboard_GetMagicStreakLeaderboardResponse__Players
   (magicsort_schemas_v1_liveops_magic_streak_leaderboard_GetMagicStreakLeaderboardResponse_o
   __this, int32_t j, const MethodInfo* method); */

void magicsort_schemas_v1_liveops_magic_streak_leaderboard_GetMagicStreakLeaderboardResponse__Players_1739c70
               (undefined8 *param_1,long param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000005c24cf2 & 1) == 0) {
                    /* try { // try from 01839c9c to 01939c9f has its CatchHandler @ 01839d54 */
    FUN_012d0dc8(PTR_DAT_057aa350);
                    /* try { // try from 01839ca4 to 01939ca7 has its CatchHandler @ 01839d5c */
    bRam0000000005c24cf2 = 1;
  }
                    /* try { // try from 01839cb8 to 01939cbb has its CatchHandler @ 01839d50 */
  uStack_40 = 0;
  uStack_38 = 0;
                    /* try { // try from 01839cbc to 01939cbf has its CatchHandler @ 01839d4c */
  iVar2 = Google_FlatBuffers_Table____offset_3139a10(param_2,10,0);
  puVar1 = PTR_DAT_057aa350;
                    /* try { // try from 01839cc0 to 01939cc3 has its CatchHandler @ 01839d78 */
  if (iVar2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
                    /* try { // try from 01839cd8 to 01939cfb has its CatchHandler @ 01839d5c */
    uStack_40 = 0;
    uStack_38 = 0;
    iVar2 = Google_FlatBuffers_Table____vector_3139c00(param_2,iVar2,0);
    uVar3 = Google_FlatBuffers_Table____indirect_3139ae8(param_2,iVar2 + param_3 * 4,0);
                    /* try { // try from 01839cfc to 01939d4b has its CatchHandler @ 01839d58 */
    auVar5 = magicsort_schemas_v1_common_StreakLeaderboardPlayer____assign_16056d8
                       (&uStack_40,uVar3,*(undefined8 *)(param_2 + 8),0);
    uVar4 = *(undefined8 *)puVar1;
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    System_Nullable_StreakLeaderboardPlayer____ctor_2042950(param_1,auVar5._0_8_,auVar5._8_8_,uVar4)
    ;
  }
  return;
}

