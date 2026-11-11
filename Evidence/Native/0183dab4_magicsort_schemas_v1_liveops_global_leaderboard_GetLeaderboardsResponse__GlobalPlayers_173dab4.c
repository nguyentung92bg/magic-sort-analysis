/* IL2CPP: magicsort.schemas.v1.liveops.global_leaderboard.GetLeaderboardsResponse$$GlobalPlayers
System_Nullable_GlobalLeaderboardPlayer__o magicsort_schemas_v1_liveops_global_leaderboard_GetLeaderboardsResponse__GlobalPlayers (magicsort_schemas_v1_liveops_global_leaderboard_GetLeaderboardsResponse_o __this, int32_t j, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: magicsort.schemas.v1.liveops.global_leaderboard.GetLeaderboardsResponse$$GlobalPlayers
   System_Nullable_GlobalLeaderboardPlayer__o
   magicsort_schemas_v1_liveops_global_leaderboard_GetLeaderboardsResponse__GlobalPlayers
   (magicsort_schemas_v1_liveops_global_leaderboard_GetLeaderboardsResponse_o __this, int32_t j,
   const MethodInfo* method); */

void magicsort_schemas_v1_liveops_global_leaderboard_GetLeaderboardsResponse__GlobalPlayers_173dab4
               (undefined8 *param_1,long param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000005c24d23 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0579b3b0);
    bRam0000000005c24d23 = 1;
  }
                    /* try { // try from 0183dafc to 0193db17 has its CatchHandler @ 0183db5c */
  uStack_40 = 0;
  uStack_38 = 0;
  iVar2 = Google_FlatBuffers_Table____offset_3139a10(param_2,4,0);
  puVar1 = PTR_DAT_0579b3b0;
  if (iVar2 == 0) {
                    /* catch() { ... } // from try @ 0183d81c with catch @ 0183db6c */
    *param_1 = 0;
    param_1[1] = 0;
                    /* catch() { ... } // from try @ 0183d780 with catch @ 0183db70 */
    param_1[2] = 0;
  }
  else {
    uStack_40 = 0;
    uStack_38 = 0;
    iVar2 = Google_FlatBuffers_Table____vector_3139c00(param_2,iVar2,0);
                    /* try { // try from 0183db28 to 0193db2b has its CatchHandler @ 0183db58 */
                    /* try { // try from 0183db2c to 0193db2f has its CatchHandler @ 0183db54 */
                    /* try { // try from 0183db30 to 0193db33 has its CatchHandler @ 0183db50 */
    uVar3 = Google_FlatBuffers_Table____indirect_3139ae8(param_2,iVar2 + param_3 * 4,0);
                    /* try { // try from 0183db34 to 0193db37 has its CatchHandler @ 0183db4c */
                    /* try { // try from 0183db38 to 0193db3b has its CatchHandler @ 0183db48 */
                    /* try { // try from 0183db3c to 0193db3f has its CatchHandler @ 0183db44 */
                    /* try { // try from 0183db40 to 0193db43 has its CatchHandler @ 0183db60 */
    auVar5 = magicsort_schemas_v1_liveops_global_leaderboard_GlobalLeaderboardPlayer____assign_173db88
                       (&uStack_40,uVar3,*(undefined8 *)(param_2 + 8));
                    /* catch() { ... } // from try @ 0183db3c with catch @ 0183db44
                       try { // try from 0183db44 to 0193db8b has its CatchHandler @ 0183d704 */
    uVar4 = *(undefined8 *)puVar1;
                    /* catch() { ... } // from try @ 0183db38 with catch @ 0183db48 */
                    /* catch() { ... } // from try @ 0183db34 with catch @ 0183db4c */
                    /* catch() { ... } // from try @ 0183db30 with catch @ 0183db50 */
                    /* catch() { ... } // from try @ 0183db2c with catch @ 0183db54 */
                    /* catch() { ... } // from try @ 0183db28 with catch @ 0183db58 */
                    /* catch() { ... } // from try @ 0183dafc with catch @ 0183db5c */
    param_1[1] = 0;
    param_1[2] = 0;
                    /* catch() { ... } // from try @ 0183da80 with catch @ 0183db60
                       catch() { ... } // from try @ 0183db40 with catch @ 0183db60 */
    *param_1 = 0;
                    /* catch() { ... } // from try @ 0183d994 with catch @ 0183db64
                       catch() { ... } // from try @ 0183da50 with catch @ 0183db64 */
    System_Nullable_GlobalLeaderboardPlayer____ctor_203b278(param_1,auVar5._0_8_,auVar5._8_8_,uVar4)
    ;
                    /* catch() { ... } // from try @ 0183d940 with catch @ 0183db68 */
  }
                    /* catch() { ... } // from try @ 0183d8d8 with catch @ 0183db74 */
                    /* catch() { ... } // from try @ 0183d9f0 with catch @ 0183db78 */
  return;
}

