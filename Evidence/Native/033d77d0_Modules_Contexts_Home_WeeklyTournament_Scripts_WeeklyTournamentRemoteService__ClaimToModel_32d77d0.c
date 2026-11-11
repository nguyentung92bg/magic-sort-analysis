/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.WeeklyTournamentRemoteService$$ClaimToModel
Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyLeaderboardClaimResponse_o* Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentRemoteService__ClaimToModel (magicsort_schemas_v1_liveops_weekly_leaderboard_GetWeeklyLeaderboardResponse_o flatBuffer, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.WeeklyTournament.Scripts.WeeklyTournamentRemoteService$$ClaimToModel
   Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyLeaderboardClaimResponse_o*
   Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentRemoteService__ClaimToModel
   (magicsort_schemas_v1_liveops_weekly_leaderboard_GetWeeklyLeaderboardResponse_o flatBuffer, const
   MethodInfo* method); */

long Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentRemoteService__ClaimToModel_32d77d0
               (undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  undefined1 auVar18 [16];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar3 = PTR_DAT_05775fe0;
  uStack_60 = param_1;
  uStack_58 = param_2;
  if ((bRam0000000005c31d62 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057891a0);
    FUN_012d0dc8(PTR_DAT_057d4958);
    FUN_012d0dc8(PTR_DAT_05792888);
    FUN_012d0dc8(PTR_DAT_057d24c8);
    FUN_012d0dc8(PTR_DAT_057761e0);
    FUN_012d0dc8(PTR_DAT_05798f50);
    FUN_012d0dc8(PTR_DAT_05775fe0);
    bRam0000000005c31d62 = 1;
  }
  uStack_78 = 0;
  uStack_70 = 0;
  auStack_90._8_8_ = 0;
  uStack_80 = 0;
  auStack_90._0_8_ = 0;
  lVar10 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
  puVar3 = PTR_DAT_05792888;
  if (lVar10 != 0) {
    System_Object___ctor_23dfe5c(lVar10,0);
    uVar11 = magicsort_schemas_v1_liveops_weekly_leaderboard_GetWeeklyLeaderboardResponse__get_TournamentID_14440fc
                       (&uStack_60,0);
    *(undefined8 *)(lVar10 + 0x10) = uVar11;
    FUN_012d0d74((undefined8 *)(lVar10 + 0x10),uVar11);
    uVar11 = magicsort_schemas_v1_liveops_weekly_leaderboard_GetWeeklyLeaderboardResponse__get_StartTime_1444304
                       (&uStack_60,0);
    *(undefined8 *)(lVar10 + 0x20) = uVar11;
    uVar11 = magicsort_schemas_v1_liveops_weekly_leaderboard_GetWeeklyLeaderboardResponse__get_FinishTime_144434c
                       (&uStack_60,0);
    *(undefined8 *)(lVar10 + 0x28) = uVar11;
    bVar6 = magicsort_schemas_v1_liveops_weekly_leaderboard_GetWeeklyLeaderboardResponse__get_IsClaimed_1444394
                      (&uStack_60,0);
    *(byte *)(lVar10 + 0x30) = bVar6 & 1;
    bVar6 = magicsort_schemas_v1_liveops_weekly_leaderboard_GetWeeklyLeaderboardResponse__get_IsFinished_14443dc
                      (&uStack_60,0);
    *(byte *)(lVar10 + 0x31) = bVar6 & 1;
    lVar12 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
    if (lVar12 != 0) {
      System_Collections_Generic_List_object____ctor_21fc1fc(lVar12,*(undefined8 *)PTR_DAT_057d4958)
      ;
      plVar16 = (long *)(lVar10 + 0x18);
      *plVar16 = lVar12;
      FUN_012d0d74(plVar16,lVar12);
      iVar7 = magicsort_schemas_v1_liveops_weekly_leaderboard_GetWeeklyLeaderboardResponse__get_PlayersLength_14442d0
                        (&uStack_60,0);
      puVar5 = PTR_DAT_05798f50;
      puVar4 = PTR_DAT_057891a0;
      puVar3 = PTR_DAT_057761e0;
      if (0 < iVar7) {
        iVar7 = 0;
        do {
          magicsort_schemas_v1_liveops_weekly_leaderboard_GetWeeklyLeaderboardResponse__Players_14441bc
                    (&uStack_a8,&uStack_60,iVar7,0);
          uStack_78 = uStack_a0;
          uStack_80 = uStack_a8;
          uVar11 = uStack_80;
          uStack_80._0_1_ = (char)uStack_a8;
          uStack_70 = uStack_98;
          bVar1 = (char)uStack_80 != '\0';
          uStack_80 = uVar11;
          if (bVar1) {
            auVar18 = System_Nullable_WeeklyLeaderboardPlayer___get_Value_220fefc
                                (&uStack_80,*(undefined8 *)puVar3);
            lVar17 = *plVar16;
            auStack_90 = auVar18;
            lVar12 = thunk_FUN_01320e48(*(undefined8 *)puVar5);
            if (lVar12 == 0) goto LAB_033d7b00;
            System_Object___ctor_23dfe5c(lVar12,0);
            uVar11 = magicsort_schemas_v1_liveops_weekly_leaderboard_WeeklyLeaderboardPlayer__get_Nickname_1444b9c
                               (auStack_90,0);
            *(undefined8 *)(lVar12 + 0x10) = uVar11;
            FUN_012d0d74();
            uVar8 = magicsort_schemas_v1_liveops_weekly_leaderboard_WeeklyLeaderboardPlayer__get_Score_1444c5c
                              (auStack_90,0);
            *(undefined4 *)(lVar12 + 0x18) = uVar8;
            uVar11 = magicsort_schemas_v1_liveops_weekly_leaderboard_WeeklyLeaderboardPlayer__get_PublicID_1444adc
                               (auStack_90,0);
            *(undefined8 *)(lVar12 + 0x20) = uVar11;
            FUN_012d0d74();
            uVar8 = magicsort_schemas_v1_liveops_weekly_leaderboard_WeeklyLeaderboardPlayer__get_Rank_1444ca4
                              (auStack_90,0);
            *(undefined4 *)(lVar12 + 0x28) = uVar8;
            bVar6 = magicsort_schemas_v1_liveops_weekly_leaderboard_WeeklyLeaderboardPlayer__get_IsMe_1444d34
                              (auStack_90,0);
            *(byte *)(lVar12 + 0x2c) = bVar6 & 1;
            bVar6 = magicsort_schemas_v1_liveops_weekly_leaderboard_WeeklyLeaderboardPlayer__get_IsBot_1444cec
                              (auStack_90,0);
            *(byte *)(lVar12 + 0x2d) = bVar6 & 1;
            uVar11 = magicsort_schemas_v1_liveops_weekly_leaderboard_WeeklyLeaderboardPlayer__get_ImageUrl_1444d7c
                               (auStack_90,0);
            *(undefined8 *)(lVar12 + 0x30) = uVar11;
            FUN_012d0d74();
            uVar11 = magicsort_schemas_v1_liveops_weekly_leaderboard_WeeklyLeaderboardPlayer__get_ImageID_1444e3c
                               (auStack_90,0);
            *(undefined8 *)(lVar12 + 0x38) = uVar11;
            FUN_012d0d74();
            if (lVar17 == 0) goto LAB_033d7b00;
            lVar14 = *(long *)(lVar17 + 0x10);
            lVar15 = *(long *)puVar4;
            *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
            if (lVar14 == 0) goto LAB_033d7b00;
            uVar2 = *(uint *)(lVar17 + 0x18);
            if (uVar2 < *(uint *)(lVar14 + 0x18)) {
              *(uint *)(lVar17 + 0x18) = uVar2 + 1;
              plVar13 = (long *)(lVar14 + (long)(int)uVar2 * 8 + 0x20);
              *plVar13 = lVar12;
              FUN_012d0d74(plVar13,lVar12);
            }
            else {
              (**(code **)(*(long *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x58) + 8))
                        (lVar17,lVar12);
            }
          }
          iVar7 = iVar7 + 1;
          iVar9 = magicsort_schemas_v1_liveops_weekly_leaderboard_GetWeeklyLeaderboardResponse__get_PlayersLength_14442d0
                            (&uStack_60,0);
        } while (iVar7 < iVar9);
      }
      return lVar10;
    }
  }
LAB_033d7b00:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

