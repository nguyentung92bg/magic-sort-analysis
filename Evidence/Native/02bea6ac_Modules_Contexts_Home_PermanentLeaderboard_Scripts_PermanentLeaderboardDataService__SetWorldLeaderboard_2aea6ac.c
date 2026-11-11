/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.PermanentLeaderboardDataService$$SetWorldLeaderboard
void Modules_Contexts_Home_PermanentLeaderboard_Scripts_PermanentLeaderboardDataService__SetWorldLeaderboard (Modules_Contexts_Home_PermanentLeaderboard_Scripts_PermanentLeaderboardDataService_o* __this, magicsort_schemas_v1_liveops_global_leaderboard_GetLeaderboardsResponse_o model, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.PermanentLeaderboard.Scripts.PermanentLeaderboardDataService$$SetWorldLeaderboard
   void 
   Modules_Contexts_Home_PermanentLeaderboard_Scripts_PermanentLeaderboardDataService__SetWorldLeaderboard
   (Modules_Contexts_Home_PermanentLeaderboard_Scripts_PermanentLeaderboardDataService_o* __this,
   magicsort_schemas_v1_liveops_global_leaderboard_GetLeaderboardsResponse_o model, const
   MethodInfo* method); */

void Modules_Contexts_Home_PermanentLeaderboard_Scripts_PermanentLeaderboardDataService__SetWorldLeaderboard_2aea6ac
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
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  int iVar20;
  undefined1 auVar21 [16];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_50 = param_2;
  uStack_48 = param_3;
  if ((bRam0000000005c2eb73 & 1) == 0) {
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
    bRam0000000005c2eb73 = 1;
  }
  puVar9 = PTR_DAT_057fac58;
  puVar8 = PTR_DAT_05795930;
  puVar7 = PTR_DAT_0578c9c8;
  puVar6 = PTR_DAT_0577d548;
  puVar5 = PTR_DAT_05774920;
  puVar4 = PTR_DAT_05768f70;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  auStack_a0._8_8_ = 0;
  uStack_90 = 0;
  auStack_a0._0_8_ = 0;
  auVar21 = ZEXT816(0);
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (lVar13 = *(long *)(*(long *)(param_1 + 0x10) + 0x10), auVar21 = ZEXT816(0), lVar13 != 0)) {
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_b8,lVar13,*(undefined8 *)PTR_DAT_0576d358);
    uStack_68 = uStack_b0;
    uStack_70 = uStack_b8;
    uStack_60 = uStack_a8;
    while (uVar14 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                              (&uStack_70,*(undefined8 *)puVar4), (uVar14 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      Modules_Infrastructure_Common_Scripts_Pool_ObjectPool_object___Return_30eaa28
                (*(long *)(param_1 + 0x28),uStack_60,*(undefined8 *)puVar9);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
              (&uStack_70,*(undefined8 *)puVar5);
    auVar3._8_8_ = auStack_a0._8_8_;
    auVar3._0_8_ = auStack_a0._0_8_;
    auVar21._8_8_ = auStack_a0._8_8_;
    auVar21._0_8_ = auStack_a0._0_8_;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (lVar13 = *(long *)(*(long *)(param_1 + 0x10) + 0x10), auVar21 = auVar3, lVar13 != 0)) {
      iVar11 = *(int *)(lVar13 + 0x18);
      *(undefined4 *)(lVar13 + 0x18) = 0;
      *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
      if (0 < iVar11) {
        System_Array__Clear_26a6bec(*(undefined8 *)(lVar13 + 0x10),0,iVar11,0);
      }
      iVar11 = magicsort_schemas_v1_liveops_global_leaderboard_GetLeaderboardsResponse__get_GlobalPlayersLength_173dbc8
                         (&uStack_50,0);
      if (0 < iVar11) {
        iVar20 = 0;
        do {
          magicsort_schemas_v1_liveops_global_leaderboard_GetLeaderboardsResponse__GlobalPlayers_173dab4
                    (&uStack_b8,&uStack_50,iVar20,0);
          uStack_88 = uStack_b0;
          uStack_90 = uStack_b8;
          uVar15 = uStack_90;
          uStack_90._0_1_ = (char)uStack_b8;
          uStack_80 = uStack_a8;
          bVar1 = (char)uStack_90 != '\0';
          uStack_90 = uVar15;
          if (bVar1) {
            auVar21 = auStack_a0;
            if (*(long *)(param_1 + 0x28) == 0) goto LAB_02beaa44;
            lVar13 = Modules_Infrastructure_Common_Scripts_Pool_ObjectPool_object___Get_30ea998
                               (*(long *)(param_1 + 0x28),*(undefined8 *)puVar8);
            auVar21 = System_Nullable_GlobalLeaderboardPlayer___get_Value_203b2a8
                                (&uStack_90,*(undefined8 *)puVar7);
            auStack_a0 = auVar21;
            uVar15 = magicsort_schemas_v1_liveops_global_leaderboard_GlobalLeaderboardPlayer__get_UserPublicID_173e648
                               (auStack_a0,0);
            auVar21 = auStack_a0;
            if (lVar13 == 0) goto LAB_02beaa44;
            *(undefined8 *)(lVar13 + 0x10) = uVar15;
            FUN_012d0d74();
            auVar21 = System_Nullable_GlobalLeaderboardPlayer___get_Value_203b2a8
                                (&uStack_90,*(undefined8 *)puVar7);
            auStack_a0 = auVar21;
            uVar15 = magicsort_schemas_v1_liveops_global_leaderboard_GlobalLeaderboardPlayer__get_NickName_173e708
                               (auStack_a0,0);
            *(undefined8 *)(lVar13 + 0x18) = uVar15;
            FUN_012d0d74();
            auVar21 = System_Nullable_GlobalLeaderboardPlayer___get_Value_203b2a8
                                (&uStack_90,*(undefined8 *)puVar7);
            auStack_a0 = auVar21;
            uVar12 = magicsort_schemas_v1_liveops_global_leaderboard_GlobalLeaderboardPlayer__get_Score_173e7c8
                               (auStack_a0,0);
            *(undefined4 *)(lVar13 + 0x20) = uVar12;
            auVar21 = System_Nullable_GlobalLeaderboardPlayer___get_Value_203b2a8
                                (&uStack_90,*(undefined8 *)puVar7);
            auStack_a0 = auVar21;
            uVar12 = magicsort_schemas_v1_liveops_global_leaderboard_GlobalLeaderboardPlayer__get_Rank_173e810
                               (auStack_a0,0);
            *(undefined4 *)(lVar13 + 0x24) = uVar12;
            auVar21 = System_Nullable_GlobalLeaderboardPlayer___get_Value_203b2a8
                                (&uStack_90,*(undefined8 *)puVar7);
            auStack_a0 = auVar21;
            bVar10 = magicsort_schemas_v1_liveops_global_leaderboard_GlobalLeaderboardPlayer__get_IsMe_173e858
                               (auStack_a0,0);
            *(byte *)(lVar13 + 0x28) = bVar10 & 1;
            auVar21 = System_Nullable_GlobalLeaderboardPlayer___get_Value_203b2a8
                                (&uStack_90,*(undefined8 *)puVar7);
            auStack_a0 = auVar21;
            uVar15 = magicsort_schemas_v1_liveops_global_leaderboard_GlobalLeaderboardPlayer__get_ImageUrl_173e8a0
                               (auStack_a0,0);
            *(undefined8 *)(lVar13 + 0x30) = uVar15;
            FUN_012d0d74();
            auVar21 = System_Nullable_GlobalLeaderboardPlayer___get_Value_203b2a8
                                (&uStack_90,*(undefined8 *)puVar7);
            auStack_a0 = auVar21;
            uVar15 = magicsort_schemas_v1_liveops_global_leaderboard_GlobalLeaderboardPlayer__get_ImageID_173e960
                               (auStack_a0,0);
            *(undefined8 *)(lVar13 + 0x38) = uVar15;
            FUN_012d0d74();
            auVar21 = auStack_a0;
            if ((*(long *)(param_1 + 0x10) == 0) ||
               (lVar16 = *(long *)(*(long *)(param_1 + 0x10) + 0x10), lVar16 == 0))
            goto LAB_02beaa44;
            lVar17 = *(long *)(lVar16 + 0x10);
            lVar19 = *(long *)puVar6;
            *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
            if (lVar17 == 0) goto LAB_02beaa44;
            uVar2 = *(uint *)(lVar16 + 0x18);
            if (uVar2 < *(uint *)(lVar17 + 0x18)) {
              *(uint *)(lVar16 + 0x18) = uVar2 + 1;
              plVar18 = (long *)(lVar17 + (long)(int)uVar2 * 8 + 0x20);
              *plVar18 = lVar13;
              FUN_012d0d74(plVar18,lVar13);
            }
            else {
              (**(code **)(*(long *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x58) + 8))
                        (lVar16,lVar13);
            }
          }
          iVar20 = iVar20 + 1;
        } while (iVar11 != iVar20);
      }
      *(undefined1 *)(param_1 + 0x20) = 1;
      return;
    }
  }
LAB_02beaa44:
  auStack_a0 = auVar21;
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

