/* IL2CPP: magicsort.schemas.v1.team.GetTeamLeaderboardResponse$$get_BaseResponse
System_Nullable_BaseResponse__o magicsort_schemas_v1_team_GetTeamLeaderboardResponse__get_BaseResponse (magicsort_schemas_v1_team_GetTeamLeaderboardResponse_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: magicsort.schemas.v1.team.GetTeamLeaderboardResponse$$get_BaseResponse
   System_Nullable_BaseResponse__o
   magicsort_schemas_v1_team_GetTeamLeaderboardResponse__get_BaseResponse
   (magicsort_schemas_v1_team_GetTeamLeaderboardResponse_o __this, const MethodInfo* method); */

void magicsort_schemas_v1_team_GetTeamLeaderboardResponse__get_BaseResponse_14383d4
               (undefined8 *param_1,int *param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((bRam0000000005c23650 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057de690);
    bRam0000000005c23650 = 1;
  }
  uStack_30 = 0;
  uStack_28 = 0;
  iVar2 = Google_FlatBuffers_Table____offset_3139a10(param_2,10,0);
  puVar1 = PTR_DAT_057de690;
  if (iVar2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    uStack_30 = 0;
    uStack_28 = 0;
    uVar3 = Google_FlatBuffers_Table____indirect_3139ae8(param_2,*param_2 + iVar2,0);
    auVar5 = magicsort_schemas_v1_common_BaseResponse____assign_1601f38
                       (&uStack_30,uVar3,*(undefined8 *)(param_2 + 2),0);
    uVar4 = *(undefined8 *)puVar1;
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    System_Nullable_BaseResponse____ctor_2033188(param_1,auVar5._0_8_,auVar5._8_8_,uVar4);
  }
  return;
}

