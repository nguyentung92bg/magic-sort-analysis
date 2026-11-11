/* IL2CPP: magicsort.schemas.v1.liveops.skyjump.StagedSkyJumpTournamentLeaderboardResponse$$VerifyStagedSkyJumpTournamentLeaderboardResponse
bool magicsort_schemas_v1_liveops_skyjump_StagedSkyJumpTournamentLeaderboardResponse__VerifyStagedSkyJumpTournamentLeaderboardResponse (Google_FlatBuffers_ByteBuffer_o* _bb, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x032398d8) */
/* WARNING: Removing unreachable block (ram,0x032398ec) */
/* WARNING: Removing unreachable block (ram,0x032398f4) */
/* WARNING: Removing unreachable block (ram,0x03239904) */
/* WARNING: Removing unreachable block (ram,0x0323990c) */
/* WARNING: Removing unreachable block (ram,0x03239940) */
/* IL2CPP:
   magicsort.schemas.v1.liveops.skyjump.StagedSkyJumpTournamentLeaderboardResponse$$VerifyStagedSkyJumpTournamentLeaderboardResponse
   bool 
   magicsort_schemas_v1_liveops_skyjump_StagedSkyJumpTournamentLeaderboardResponse__VerifyStagedSkyJumpTournamentLeaderboardResponse
   (Google_FlatBuffers_ByteBuffer_o* _bb, const MethodInfo* method); */

undefined8
magicsort_schemas_v1_liveops_skyjump_StagedSkyJumpTournamentLeaderboardResponse__VerifyStagedSkyJumpTournamentLeaderboardResponse_17380f8
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
                    /* try { // try from 0183810c to 0193810f has its CatchHandler @ 01838198 */
  if ((bRam0000000005c24cda & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057fa0d0);
                    /* try { // try from 01838124 to 01938137 has its CatchHandler @ 018381a8 */
    FUN_012d0dc8(PTR_DAT_0576d5a0);
    FUN_012d0dc8(PTR_DAT_05758d20);
    FUN_012d0dc8(PTR_DAT_05774390);
    bRam0000000005c24cda = 1;
  }
  lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  puVar2 = PTR_DAT_05758d20;
  if (lVar4 == 0) {
LAB_018381c8:
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
                    /* try { // try from 01838160 to 01938163 has its CatchHandler @ 01838190 */
                    /* try { // try from 01838164 to 01938167 has its CatchHandler @ 0183818c */
                    /* try { // try from 01838168 to 0193816b has its CatchHandler @ 01838188 */
                    /* try { // try from 0183816c to 0193816f has its CatchHandler @ 01838184 */
                    /* try { // try from 01838170 to 01938173 has its CatchHandler @ 01838180 */
                    /* try { // try from 01838174 to 01938177 has its CatchHandler @ 018381a4 */
  Google_FlatBuffers_Verifier___ctor_3138308(lVar4,param_1,0,0);
                    /* try { // try from 01838178 to 0193817b has its CatchHandler @ 0183817c */
                    /* catch() { ... } // from try @ 01838178 with catch @ 0183817c
                       try { // try from 0183817c to 019381d3 has its CatchHandler @ 01837c78 */
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  puVar2 = PTR_DAT_05774390;
                    /* catch() { ... } // from try @ 01838170 with catch @ 01838180 */
  if (lVar5 == 0) goto LAB_018381c8;
                    /* catch() { ... } // from try @ 0183816c with catch @ 01838184 */
                    /* catch() { ... } // from try @ 01838168 with catch @ 01838188 */
                    /* catch() { ... } // from try @ 01838164 with catch @ 0183818c */
                    /* catch() { ... } // from try @ 01838160 with catch @ 01838190 */
                    /* catch() { ... } // from try @ 01837f04 with catch @ 01838194 */
                    /* catch() { ... } // from try @ 0183810c with catch @ 01838198 */
                    /* catch() { ... } // from try @ 01837d5c with catch @ 0183819c */
                    /* catch() { ... } // from try @ 01837f54 with catch @ 018381a0 */
                    /* catch() { ... } // from try @ 01837cf8 with catch @ 018381a4
                       catch() { ... } // from try @ 01838174 with catch @ 018381a4 */
  Google_FlatBuffers_VerifyTableAction___ctor_3137e80(lVar5,0,*(undefined8 *)PTR_DAT_057fa0d0,0);
                    /* catch() { ... } // from try @ 01837f1c with catch @ 018381a8
                       catch() { ... } // from try @ 01838124 with catch @ 018381a8 */
  lVar8 = *(long *)puVar2;
  *(undefined8 *)(lVar4 + 0x20) = 0;
                    /* catch() { ... } // from try @ 01837eec with catch @ 018381ac */
                    /* catch() { ... } // from try @ 018380f4 with catch @ 018381b0 */
                    /* catch() { ... } // from try @ 01837e18 with catch @ 018381b4 */
                    /* catch() { ... } // from try @ 01838020 with catch @ 018381b8 */
                    /* catch() { ... } // from try @ 01837e68 with catch @ 018381bc */
                    /* catch() { ... } // from try @ 01838070 with catch @ 018381c0 */
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

