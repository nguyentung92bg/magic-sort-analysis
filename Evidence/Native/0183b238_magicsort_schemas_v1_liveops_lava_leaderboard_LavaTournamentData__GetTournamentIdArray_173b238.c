/* IL2CPP: magicsort.schemas.v1.liveops.lava_leaderboard.LavaTournamentData$$GetTournamentIdArray
System_Byte_array* magicsort_schemas_v1_liveops_lava_leaderboard_LavaTournamentData__GetTournamentIdArray (magicsort_schemas_v1_liveops_lava_leaderboard_LavaTournamentData_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: magicsort.schemas.v1.liveops.lava_leaderboard.LavaTournamentData$$GetTournamentIdArray
   System_Byte_array*
   magicsort_schemas_v1_liveops_lava_leaderboard_LavaTournamentData__GetTournamentIdArray
   (magicsort_schemas_v1_liveops_lava_leaderboard_LavaTournamentData_o __this, const MethodInfo*
   method); */

undefined8
magicsort_schemas_v1_liveops_lava_leaderboard_LavaTournamentData__GetTournamentIdArray_173b238
          (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  
  puVar2 = PTR_DAT_057dece0;
                    /* try { // try from 0183b254 to 0193b25b has its CatchHandler @ 0183b2bc */
  if ((bRam0000000005c24d04 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057dece0);
    bRam0000000005c24d04 = 1;
  }
  puVar1 = PTR_DAT_0577ac00;
  lVar9 = *(long *)puVar2;
                    /* try { // try from 0183b270 to 0193b277 has its CatchHandler @ 0183b320 */
                    /* try { // try from 0183b278 to 0193b2b3 has its CatchHandler @ 0183b204 */
  if ((bRam0000000005c2c389 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0577ac00);
    bRam0000000005c2c389 = 1;
  }
  lVar6 = *(long *)puVar1;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_0130472c();
    lVar6 = *(long *)puVar1;
  }
  if (**(char **)(lVar6 + 0xb8) == '\0') {
    thunk_FUN_0136d790(PTR_DAT_05799498);
    uVar7 = thunk_FUN_01320e48();
    FUN_0103b554();
    uVar8 = thunk_FUN_0136d790(PTR_DAT_057f6a68);
    System_NotSupportedException___ctor_26c6fb0(uVar7,uVar8,0);
    uVar8 = thunk_FUN_0136d790(PTR_DAT_057dece0);
                    /* WARNING: Subroutine does not return */
    FUN_012d0eb8(uVar7,uVar8);
  }
  iVar3 = Google_FlatBuffers_Table____offset_3139a10(param_1,4,0);
  if (iVar3 == 0) {
    return 0;
  }
  uVar4 = Google_FlatBuffers_Table____vector_3139c00(param_1,iVar3,0);
  uVar5 = Google_FlatBuffers_Table____vector_len_3139bb0(param_1,iVar3,0);
  if (*(long *)(param_1 + 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x027e871c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar7 = (**(code **)(**(long **)(lVar9 + 0x38) + 8))(*(long *)(param_1 + 8),uVar4,uVar5);
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

