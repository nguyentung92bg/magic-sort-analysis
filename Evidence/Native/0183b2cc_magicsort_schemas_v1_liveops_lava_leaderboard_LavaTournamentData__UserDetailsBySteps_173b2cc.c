/* IL2CPP: magicsort.schemas.v1.liveops.lava_leaderboard.LavaTournamentData$$UserDetailsBySteps
System_Nullable_LavaDummyStepDetail__o magicsort_schemas_v1_liveops_lava_leaderboard_LavaTournamentData__UserDetailsBySteps (magicsort_schemas_v1_liveops_lava_leaderboard_LavaTournamentData_o __this, int32_t j, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: magicsort.schemas.v1.liveops.lava_leaderboard.LavaTournamentData$$UserDetailsBySteps
   System_Nullable_LavaDummyStepDetail__o
   magicsort_schemas_v1_liveops_lava_leaderboard_LavaTournamentData__UserDetailsBySteps
   (magicsort_schemas_v1_liveops_lava_leaderboard_LavaTournamentData_o __this, int32_t j, const
   MethodInfo* method); */

void magicsort_schemas_v1_liveops_lava_leaderboard_LavaTournamentData__UserDetailsBySteps_173b2cc
               (undefined8 *param_1,long param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
                    /* try { // try from 0183b2dc to 0193b2df has its CatchHandler @ 0183b314 */
  if ((bRam0000000005c24d05 & 1) == 0) {
                    /* try { // try from 0183b2fc to 0193b313 has its CatchHandler @ 0183b380 */
    FUN_012d0dc8(PTR_DAT_057b72d0);
    bRam0000000005c24d05 = 1;
  }
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0183b2dc with catch @ 0183b314
                       try { // try from 0183b314 to 0193b33f has its CatchHandler @ 0183b204 */
  uStack_40 = 0;
  uStack_38 = 0;
  iVar2 = Google_FlatBuffers_Table____offset_3139a10(param_2,8,0);
  puVar1 = PTR_DAT_057b72d0;
  if (iVar2 == 0) {
                    /* try { // try from 0183b384 to 0193b403 has its CatchHandler @ 0183b384
                       catch() { ... } // from try @ 0183b384 with catch @ 0183b384
                       catch() { ... } // from try @ 0183b99c with catch @ 0183b384
                       catch() { ... } // from try @ 0183ba00 with catch @ 0183b384 */
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0183b270 with catch @ 0183b320
                       catch(type#1 @ 054cbd58) { ... } // from try @ 0183b2b4 with catch @ 0183b320
                        */
    uStack_40 = 0;
    uStack_38 = 0;
    iVar2 = Google_FlatBuffers_Table____vector_3139c00(param_2,iVar2,0);
                    /* try { // try from 0183b340 to 0193b343 has its CatchHandler @ 0183b350 */
    uVar3 = Google_FlatBuffers_Table____indirect_3139ae8(param_2,iVar2 + param_3 * 4,0);
                    /* catch() { ... } // from try @ 0183b340 with catch @ 0183b350 */
    auVar5 = magicsort_schemas_v1_liveops_lava_leaderboard_LavaDummyStepDetail____assign_173a66c
                       (&uStack_40,uVar3,*(undefined8 *)(param_2 + 8));
    uVar4 = *(undefined8 *)puVar1;
                    /* try { // try from 0183b364 to 0193b36b has its CatchHandler @ 0183b380 */
                    /* try { // try from 0183b36c to 0193b377 has its CatchHandler @ 0183b204 */
    param_1[1] = 0;
    param_1[2] = 0;
                    /* try { // try from 0183b378 to 0193b37f has its CatchHandler @ 0183b380 */
    *param_1 = 0;
    System_Nullable_LavaDummyStepDetail____ctor_203d948(param_1,auVar5._0_8_,auVar5._8_8_,uVar4);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0183b2fc with catch @ 0183b380
                       catch(type#2 @ 00000000) { ... } // from try @ 0183b364 with catch @ 0183b380
                       catch(type#2 @ 00000000) { ... } // from try @ 0183b378 with catch @ 0183b380
                        */
  }
  return;
}

