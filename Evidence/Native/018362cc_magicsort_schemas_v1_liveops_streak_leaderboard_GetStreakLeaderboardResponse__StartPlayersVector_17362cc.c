/* IL2CPP: magicsort.schemas.v1.liveops.streak_leaderboard.GetStreakLeaderboardResponse$$StartPlayersVector
void magicsort_schemas_v1_liveops_streak_leaderboard_GetStreakLeaderboardResponse__StartPlayersVector (Google_FlatBuffers_FlatBufferBuilder_o* builder, int32_t numElems, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   magicsort.schemas.v1.liveops.streak_leaderboard.GetStreakLeaderboardResponse$$StartPlayersVector
   void 
   magicsort_schemas_v1_liveops_streak_leaderboard_GetStreakLeaderboardResponse__StartPlayersVector
   (Google_FlatBuffers_FlatBufferBuilder_o* builder, int32_t numElems, const MethodInfo* method); */

void magicsort_schemas_v1_liveops_streak_leaderboard_GetStreakLeaderboardResponse__StartPlayersVector_17362cc
               (long param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
                    /* try { // try from 018362cc to 019362cf has its CatchHandler @ 018362ec */
  if (param_1 == 0) {
                    /* try { // try from 018362e4 to 019362e7 has its CatchHandler @ 018362fc */
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 018362d4 with catch @ 018362e8
                       try { // try from 018362e8 to 01936333 has its CatchHandler @ 01835d58 */
    FUN_012d0ef0();
  }
  Google_FlatBuffers_FlatBufferBuilder__NotNested_31366cc();
  *(int *)(param_1 + 0x44) = param_2;
  param_2 = param_2 * 4;
  Google_FlatBuffers_FlatBufferBuilder__Prep_3136020(param_1,4,param_2);
  if (*(int *)(param_1 + 0x20) < 4) {
    *(undefined4 *)(param_1 + 0x20) = 4;
  }
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (lVar9 = *(long *)(*(long *)(param_1 + 0x18) + 0x10), lVar9 != 0)) {
    iVar3 = *(int *)(lVar9 + 0x18);
    iVar4 = *(int *)(param_1 + 0x10);
    uVar2 = -((iVar3 - iVar4) + param_2) & 3;
    while( true ) {
      if ((int)(param_2 + 4 + uVar2) <= iVar4) {
        if (uVar2 == 0) {
          return;
        }
        uVar8 = (ulong)uVar2;
        lVar9 = *(long *)(param_1 + 0x18);
        uVar6 = *(int *)(param_1 + 0x10) - uVar2;
        uVar7 = (ulong)uVar6;
        *(uint *)(param_1 + 0x10) = uVar6;
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        Google_FlatBuffers_ByteBuffer__AssertOffsetAndLength_3135300(lVar9,uVar7,uVar8);
        if (uVar2 != 0) {
          lVar10 = uVar7 << 0x20;
          do {
            if ((*(long *)(lVar9 + 0x10) == 0) ||
               (lVar11 = *(long *)(*(long *)(lVar9 + 0x10) + 0x10), lVar11 == 0)) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            if (*(uint *)(lVar11 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef8();
            }
            lVar1 = lVar10 >> 0x20;
            lVar10 = lVar10 + 0x100000000;
            uVar8 = uVar8 - 1;
            uVar7 = uVar7 + 1;
            *(undefined1 *)(lVar11 + lVar1 + 0x20) = 0;
          } while (uVar8 != 0);
        }
        return;
      }
      Google_FlatBuffers_FlatBufferBuilder__GrowBuffer_3135ff0(param_1);
      if ((*(long *)(param_1 + 0x18) == 0) ||
         (lVar9 = *(long *)(*(long *)(param_1 + 0x18) + 0x10), lVar9 == 0)) break;
      iVar5 = *(int *)(lVar9 + 0x18);
      iVar4 = (*(int *)(param_1 + 0x10) - iVar3) + iVar5;
      *(int *)(param_1 + 0x10) = iVar4;
      iVar3 = iVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

