/* IL2CPP: magicsort.schemas.v1.liveops.magic_streak_leaderboard.GetMagicStreakLeaderboardResponse$$VerifyGetMagicStreakLeaderboardResponse
bool magicsort_schemas_v1_liveops_magic_streak_leaderboard_GetMagicStreakLeaderboardResponse__VerifyGetMagicStreakLeaderboardResponse (Google_FlatBuffers_ByteBuffer_o* _bb, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x032398d8) */
/* WARNING: Removing unreachable block (ram,0x032398ec) */
/* WARNING: Removing unreachable block (ram,0x032398f4) */
/* WARNING: Removing unreachable block (ram,0x03239904) */
/* WARNING: Removing unreachable block (ram,0x0323990c) */
/* WARNING: Removing unreachable block (ram,0x03239940) */
/* IL2CPP:
   magicsort.schemas.v1.liveops.magic_streak_leaderboard.GetMagicStreakLeaderboardResponse$$VerifyGetMagicStreakLeaderboardResponse
   bool 
   magicsort_schemas_v1_liveops_magic_streak_leaderboard_GetMagicStreakLeaderboardResponse__VerifyGetMagicStreakLeaderboardResponse
   (Google_FlatBuffers_ByteBuffer_o* _bb, const MethodInfo* method); */

undefined8
magicsort_schemas_v1_liveops_magic_streak_leaderboard_GetMagicStreakLeaderboardResponse__VerifyGetMagicStreakLeaderboardResponse_1739a10
          (undefined8 param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  puVar2 = PTR_DAT_0576d5a0;
  if ((bRam0000000005c24cf0 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057e3938);
    FUN_012d0dc8(PTR_DAT_0576d5a0);
    FUN_012d0dc8(PTR_DAT_05758d20);
    FUN_012d0dc8(PTR_DAT_05774390);
    bRam0000000005c24cf0 = 1;
  }
                    /* try { // try from 01839a68 to 01939aa7 has its CatchHandler @ 01839d74 */
  lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  puVar2 = PTR_DAT_05758d20;
  if (lVar4 == 0) {
LAB_01839ae0:
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  Google_FlatBuffers_Verifier___ctor_3138308(lVar4,param_1,0,0);
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  puVar2 = PTR_DAT_05774390;
  if (lVar5 == 0) goto LAB_01839ae0;
                    /* try { // try from 01839abc to 01939abf has its CatchHandler @ 01839d64 */
  Google_FlatBuffers_VerifyTableAction___ctor_3137e80(lVar5,0,*(undefined8 *)PTR_DAT_057e3938,0);
  lVar8 = *(long *)puVar2;
  *(undefined8 *)(lVar4 + 0x20) = 0;
                    /* try { // try from 01839ad0 to 01939ae3 has its CatchHandler @ 01839d6c */
  if (*(long *)(lVar4 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  iVar1 = *(int *)(*(long *)(lVar4 + 0x10) + 0x18);
  if ((lVar8 != 0) && (*(int *)(lVar8 + 0x10) == 0)) {
    if ((*(long *)(lVar4 + 0x10) == 0) ||
       (lVar9 = *(long *)(*(long *)(lVar4 + 0x10) + 0x10), lVar9 == 0)) goto LAB_03238e34;
    if (*(int *)(lVar9 + 0x18) < 8) {
      return 0;
    }
    uVar6 = Google_FlatBuffers_Verifier__BufferHasIdentifier_3138474(lVar4,lVar8,iVar1,lVar8);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
  }
  uVar6 = Google_FlatBuffers_Verifier__CheckIndirectOffset_3138d08(lVar4,iVar1);
  if ((uVar6 & 1) == 0) {
    return 0;
  }
  iVar3 = Google_FlatBuffers_Verifier__ReadUOffsetT_31385d4
                    (uVar6,*(undefined8 *)(lVar4 + 0x10),iVar1);
  if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x03238df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar7 = (**(code **)(lVar5 + 0x18))
                      (*(undefined8 *)(lVar5 + 0x40),lVar4,iVar3 + iVar1,
                       *(undefined8 *)(lVar5 + 0x28));
    return uVar7;
  }
LAB_03238e34:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

