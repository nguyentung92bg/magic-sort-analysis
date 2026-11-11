/* IL2CPP: magicsort.schemas.v1.liveops.lava_leaderboard.LavaTournamentData$$PlayersImages
System_Nullable_StringKeyValuePair__o magicsort_schemas_v1_liveops_lava_leaderboard_LavaTournamentData__PlayersImages (magicsort_schemas_v1_liveops_lava_leaderboard_LavaTournamentData_o __this, int32_t j, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: magicsort.schemas.v1.liveops.lava_leaderboard.LavaTournamentData$$PlayersImages
   System_Nullable_StringKeyValuePair__o
   magicsort_schemas_v1_liveops_lava_leaderboard_LavaTournamentData__PlayersImages
   (magicsort_schemas_v1_liveops_lava_leaderboard_LavaTournamentData_o __this, int32_t j, const
   MethodInfo* method); */

void magicsort_schemas_v1_liveops_lava_leaderboard_LavaTournamentData__PlayersImages_173b3d4
               (undefined8 *param_1,long param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000005c24d06 & 1) == 0) {
                    /* try { // try from 0183b404 to 0193b473 has its CatchHandler @ 0183b9e0 */
    FUN_012d0dc8(PTR_DAT_057d50b8);
    bRam0000000005c24d06 = 1;
  }
  uStack_40 = 0;
  uStack_38 = 0;
  iVar2 = Google_FlatBuffers_Table____offset_3139a10(param_2,10,0);
  puVar1 = PTR_DAT_057d50b8;
  if (iVar2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    uStack_40 = 0;
    uStack_38 = 0;
    iVar2 = Google_FlatBuffers_Table____vector_3139c00(param_2,iVar2,0);
    uVar3 = Google_FlatBuffers_Table____indirect_3139ae8(param_2,iVar2 + param_3 * 4,0);
    auVar5 = magicsort_schemas_v1_common_StringKeyValuePair____assign_1605f58
                       (&uStack_40,uVar3,*(undefined8 *)(param_2 + 8),0);
    uVar4 = *(undefined8 *)puVar1;
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    System_Nullable_StringKeyValuePair____ctor_20432b0(param_1,auVar5._0_8_,auVar5._8_8_,uVar4);
  }
                    /* try { // try from 0183b4a0 to 0193b50f has its CatchHandler @ 0183b9dc */
  return;
}

