/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.PermanentLeaderboardDataService$$SetCountryLeaderboard
void Modules_Contexts_Home_PermanentLeaderboard_Scripts_PermanentLeaderboardDataService__SetCountryLeaderboard (Modules_Contexts_Home_PermanentLeaderboard_Scripts_PermanentLeaderboardDataService_o* __this, magicsort_schemas_v1_liveops_global_leaderboard_GetLeaderboardsResponse_o model, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.PermanentLeaderboard.Scripts.PermanentLeaderboardDataService$$SetCountryLeaderboard
   void 
   Modules_Contexts_Home_PermanentLeaderboard_Scripts_PermanentLeaderboardDataService__SetCountryLeaderboard
   (Modules_Contexts_Home_PermanentLeaderboard_Scripts_PermanentLeaderboardDataService_o* __this,
   magicsort_schemas_v1_liveops_global_leaderboard_GetLeaderboardsResponse_o model, const
   MethodInfo* method); */

void Modules_Contexts_Home_PermanentLeaderboard_Scripts_PermanentLeaderboardDataService__SetCountryLeaderboard_2aeaac4
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  byte bVar10;
  int iVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  long *plVar20;
  long lVar21;
  int iVar22;
  undefined1 auVar23 [16];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [16];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uStack_60 = param_2;
  uStack_58 = param_3;
  if ((bRam0000000005c2eb74 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05774920);
    FUN_012d0dc8(PTR_DAT_05768f70);
    FUN_012d0dc8(PTR_DAT_057ade58);
    FUN_012d0dc8(PTR_DAT_0577d548);
    FUN_012d0dc8(PTR_DAT_05815968);
    FUN_012d0dc8(PTR_DAT_0576d358);
    FUN_012d0dc8(PTR_DAT_0579e648);
    FUN_012d0dc8(PTR_DAT_0578c9c8);
    FUN_012d0dc8(PTR_DAT_05795930);
    FUN_012d0dc8(PTR_DAT_057fac58);
    bRam0000000005c2eb74 = 1;
  }
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  auStack_b0._8_8_ = 0;
  uStack_a0 = 0;
  auStack_b0._0_8_ = 0;
  uVar13 = magicsort_schemas_v1_liveops_global_leaderboard_GetLeaderboardsResponse__get_Country_173dd04
                     (&uStack_60,0);
  puVar9 = PTR_DAT_057fac58;
  puVar8 = PTR_DAT_05795930;
  puVar7 = PTR_DAT_0578c9c8;
  puVar6 = PTR_DAT_0577d548;
  puVar5 = PTR_DAT_05774920;
  puVar4 = PTR_DAT_05768f70;
  auVar23._8_8_ = auStack_b0._8_8_;
  auVar23._0_8_ = auStack_b0._0_8_;
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (lVar14 = *(long *)(*(long *)(param_1 + 0x10) + 0x18), auStack_b0 = auVar23, lVar14 != 0)) {
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_c8,lVar14,*(undefined8 *)PTR_DAT_0576d358);
    uStack_78 = uStack_c0;
    uStack_80 = uStack_c8;
    uStack_70 = uStack_b8;
    while (uVar15 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                              (&uStack_80,*(undefined8 *)puVar4), (uVar15 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      Modules_Infrastructure_Common_Scripts_Pool_ObjectPool_object___Return_30eaa28
                (*(long *)(param_1 + 0x28),uStack_70,*(undefined8 *)puVar9);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
              (&uStack_80,*(undefined8 *)puVar5);
    auVar3._8_8_ = auStack_b0._8_8_;
    auVar3._0_8_ = auStack_b0._0_8_;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (lVar14 = *(long *)(*(long *)(param_1 + 0x10) + 0x18), auStack_b0 = auVar3, lVar14 != 0)) {
      iVar11 = *(int *)(lVar14 + 0x18);
      *(undefined4 *)(lVar14 + 0x18) = 0;
      *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
      if (0 < iVar11) {
        System_Array__Clear_26a6bec(*(undefined8 *)(lVar14 + 0x10),0,iVar11,0);
      }
      iVar11 = magicsort_schemas_v1_liveops_global_leaderboard_GetLeaderboardsResponse__get_CountryPlayersLength_173dcd0
                         (&uStack_60,0);
      if (0 < iVar11) {
        iVar22 = 0;
        do {
          magicsort_schemas_v1_liveops_global_leaderboard_GetLeaderboardsResponse__CountryPlayers_173dbfc
                    (&uStack_c8,&uStack_60,iVar22,0);
          uStack_98 = uStack_c0;
          uStack_a0 = uStack_c8;
          uVar16 = uStack_a0;
          uStack_a0._0_1_ = (char)uStack_c8;
          uStack_90 = uStack_b8;
          bVar1 = (char)uStack_a0 != '\0';
          uStack_a0 = uVar16;
          if (bVar1) {
            if (*(long *)(param_1 + 0x28) == 0) goto LAB_02beae88;
            lVar14 = Modules_Infrastructure_Common_Scripts_Pool_ObjectPool_object___Get_30ea998
                               (*(long *)(param_1 + 0x28),*(undefined8 *)puVar8);
            auVar23 = System_Nullable_GlobalLeaderboardPlayer___get_Value_203b2a8
                                (&uStack_a0,*(undefined8 *)puVar7);
            auStack_b0 = auVar23;
            uVar16 = magicsort_schemas_v1_liveops_global_leaderboard_GlobalLeaderboardPlayer__get_UserPublicID_173e648
                               (auStack_b0,0);
            if (lVar14 == 0) goto LAB_02beae88;
            *(undefined8 *)(lVar14 + 0x10) = uVar16;
            FUN_012d0d74();
            auVar23 = System_Nullable_GlobalLeaderboardPlayer___get_Value_203b2a8
                                (&uStack_a0,*(undefined8 *)puVar7);
            auStack_b0 = auVar23;
            uVar16 = magicsort_schemas_v1_liveops_global_leaderboard_GlobalLeaderboardPlayer__get_NickName_173e708
                               (auStack_b0,0);
            *(undefined8 *)(lVar14 + 0x18) = uVar16;
            FUN_012d0d74();
            auVar23 = System_Nullable_GlobalLeaderboardPlayer___get_Value_203b2a8
                                (&uStack_a0,*(undefined8 *)puVar7);
            auStack_b0 = auVar23;
            uVar12 = magicsort_schemas_v1_liveops_global_leaderboard_GlobalLeaderboardPlayer__get_Score_173e7c8
                               (auStack_b0,0);
            *(undefined4 *)(lVar14 + 0x20) = uVar12;
            auVar23 = System_Nullable_GlobalLeaderboardPlayer___get_Value_203b2a8
                                (&uStack_a0,*(undefined8 *)puVar7);
            auStack_b0 = auVar23;
            uVar12 = magicsort_schemas_v1_liveops_global_leaderboard_GlobalLeaderboardPlayer__get_Rank_173e810
                               (auStack_b0,0);
            *(undefined4 *)(lVar14 + 0x24) = uVar12;
            auVar23 = System_Nullable_GlobalLeaderboardPlayer___get_Value_203b2a8
                                (&uStack_a0,*(undefined8 *)puVar7);
            auStack_b0 = auVar23;
            bVar10 = magicsort_schemas_v1_liveops_global_leaderboard_GlobalLeaderboardPlayer__get_IsMe_173e858
                               (auStack_b0,0);
            *(byte *)(lVar14 + 0x28) = bVar10 & 1;
            auVar23 = System_Nullable_GlobalLeaderboardPlayer___get_Value_203b2a8
                                (&uStack_a0,*(undefined8 *)puVar7);
            auStack_b0 = auVar23;
            uVar16 = magicsort_schemas_v1_liveops_global_leaderboard_GlobalLeaderboardPlayer__get_ImageUrl_173e8a0
                               (auStack_b0,0);
            *(undefined8 *)(lVar14 + 0x30) = uVar16;
            FUN_012d0d74();
            auVar23 = System_Nullable_GlobalLeaderboardPlayer___get_Value_203b2a8
                                (&uStack_a0,*(undefined8 *)puVar7);
            auStack_b0 = auVar23;
            uVar16 = magicsort_schemas_v1_liveops_global_leaderboard_GlobalLeaderboardPlayer__get_ImageID_173e960
                               (auStack_b0,0);
            *(undefined8 *)(lVar14 + 0x38) = uVar16;
            FUN_012d0d74();
            if ((*(long *)(param_1 + 0x10) == 0) ||
               (lVar17 = *(long *)(*(long *)(param_1 + 0x10) + 0x18), lVar17 == 0))
            goto LAB_02beae88;
            lVar19 = *(long *)(lVar17 + 0x10);
            lVar21 = *(long *)puVar6;
            *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
            if (lVar19 == 0) goto LAB_02beae88;
            uVar2 = *(uint *)(lVar17 + 0x18);
            if (uVar2 < *(uint *)(lVar19 + 0x18)) {
              *(uint *)(lVar17 + 0x18) = uVar2 + 1;
              plVar20 = (long *)(lVar19 + (long)(int)uVar2 * 8 + 0x20);
              *plVar20 = lVar14;
              FUN_012d0d74(plVar20,lVar14);
            }
            else {
              (**(code **)(*(long *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x58) + 8))
                        (lVar17,lVar14);
            }
          }
          iVar22 = iVar22 + 1;
        } while (iVar11 != iVar22);
      }
      if (*(long *)(param_1 + 0x10) != 0) {
        puVar18 = (undefined8 *)(*(long *)(param_1 + 0x10) + 0x20);
        *puVar18 = uVar13;
        FUN_012d0d74(puVar18,uVar13);
        *(undefined1 *)(param_1 + 0x20) = 1;
        return;
      }
    }
  }
LAB_02beae88:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

