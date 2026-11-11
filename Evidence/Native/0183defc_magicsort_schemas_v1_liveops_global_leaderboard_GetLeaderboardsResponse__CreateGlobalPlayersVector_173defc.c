/* IL2CPP: magicsort.schemas.v1.liveops.global_leaderboard.GetLeaderboardsResponse$$CreateGlobalPlayersVector
Google_FlatBuffers_VectorOffset_o magicsort_schemas_v1_liveops_global_leaderboard_GetLeaderboardsResponse__CreateGlobalPlayersVector (Google_FlatBuffers_FlatBufferBuilder_o* builder, Google_FlatBuffers_Offset_GlobalLeaderboardPlayer__array* data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   magicsort.schemas.v1.liveops.global_leaderboard.GetLeaderboardsResponse$$CreateGlobalPlayersVector
   Google_FlatBuffers_VectorOffset_o
   magicsort_schemas_v1_liveops_global_leaderboard_GetLeaderboardsResponse__CreateGlobalPlayersVector
   (Google_FlatBuffers_FlatBufferBuilder_o* builder,
   Google_FlatBuffers_Offset_GlobalLeaderboardPlayer__array* data, const MethodInfo* method); */

undefined4
magicsort_schemas_v1_liveops_global_leaderboard_GetLeaderboardsResponse__CreateGlobalPlayersVector_173defc
          (long param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  
  if ((param_2 == 0) || (param_1 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0183ded8 with catch @ 0183df18
                        */
  Google_FlatBuffers_FlatBufferBuilder__StartVector_3136678
            (param_1,4,*(undefined4 *)(param_2 + 0x18),4,0);
                    /* try { // try from 0183df30 to 0193df33 has its CatchHandler @ 0183df40 */
  iVar3 = (int)*(ulong *)(param_2 + 0x18);
  iVar1 = iVar3 + -1;
  if (-1 < iVar1) {
                    /* catch() { ... } // from try @ 0183df30 with catch @ 0183df40 */
    if ((ulong)(long)iVar1 < (*(ulong *)(param_2 + 0x18) & 0xffffffff)) {
      uVar4 = (ulong)iVar1;
      iVar3 = iVar3 + -2;
      do {
                    /* try { // try from 0183df54 to 0193df5b has its CatchHandler @ 0183df70 */
                    /* try { // try from 0183df5c to 0193df67 has its CatchHandler @ 0183de88 */
        Google_FlatBuffers_FlatBufferBuilder__AddOffset_31365e4
                  (param_1,*(undefined4 *)(param_2 + 0x20 + uVar4 * 4),0);
        if (iVar3 < 0) goto LAB_0183df80;
                    /* try { // try from 0183df68 to 0193df6f has its CatchHandler @ 0183df70 */
        uVar4 = uVar4 - 1;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0183df54 with catch @ 0183df70
                       catch(type#2 @ 00000000) { ... } // from try @ 0183df68 with catch @ 0183df70
                        */
        iVar3 = iVar3 + -1;
                    /* try { // try from 0183df74 to 0193dff3 has its CatchHandler @ 0183df74
                       catch() { ... } // from try @ 0183df74 with catch @ 0183df74
                       catch() { ... } // from try @ 0183e3e4 with catch @ 0183df74
                       catch() { ... } // from try @ 0183e434 with catch @ 0183df74 */
      } while (uVar4 < *(uint *)(param_2 + 0x18));
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef8();
  }
LAB_0183df80:
  uVar2 = Google_FlatBuffers_FlatBufferBuilder__EndVector_313672c(param_1,0);
  return uVar2;
}

