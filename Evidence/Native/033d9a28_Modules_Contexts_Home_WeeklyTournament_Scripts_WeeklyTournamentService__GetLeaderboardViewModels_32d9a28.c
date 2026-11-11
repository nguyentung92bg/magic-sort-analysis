/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.WeeklyTournamentService$$GetLeaderboardViewModels
System_Collections_Generic_List_WeeklyTournamentLeaderboardPlayerViewModel__o* Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__GetLeaderboardViewModels (Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.WeeklyTournament.Scripts.WeeklyTournamentService$$GetLeaderboardViewModels
   System_Collections_Generic_List_WeeklyTournamentLeaderboardPlayerViewModel__o*
   Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__GetLeaderboardViewModels
   (Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService_o* __this, const
   MethodInfo* method); */

long Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__GetLeaderboardViewModels_32d9a28
               (long param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  int iVar14;
  undefined4 uVar15;
  long *plVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  bool bVar23;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((bRam0000000005c31d6e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_05763258);
    FUN_012d0dc8(PTR_DAT_057626e8);
    FUN_012d0dc8(PTR_DAT_05809c98);
    FUN_012d0dc8(PTR_DAT_057efbc0);
    FUN_012d0dc8(PTR_DAT_05805118);
    bRam0000000005c31d6e = 1;
  }
  if ((*(long *)(param_1 + 0x20) != 0) &&
     (lVar10 = *(long *)(*(long *)(param_1 + 0x20) + 0x20), lVar10 != 0)) {
    lVar10 = *(long *)(lVar10 + 0x28);
    if (lVar10 == 0) {
      return 0;
    }
    lVar6 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05805118);
    if (lVar6 != 0) {
      System_Collections_Generic_List_object____ctor_21fc1fc(lVar6,*(undefined8 *)PTR_DAT_057626e8);
      lVar7 = *(long *)(lVar10 + 0x18);
      if (lVar7 != 0) {
        iVar14 = 0;
        do {
          if (*(int *)(lVar7 + 0x18) <= iVar14) {
            return lVar6;
          }
          lVar7 = System_Collections_Generic_List_object___get_Item_21fc76c
                            (lVar7,iVar14,*(undefined8 *)PTR_DAT_057efbc0);
          if (lVar7 == 0) break;
          if (*(char *)(lVar7 + 0x2c) == '\0') {
            uVar15 = *(undefined4 *)(lVar7 + 0x28);
            uVar17 = *(undefined8 *)(lVar7 + 0x10);
            uVar4 = Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__GetRewardAmountByRank_32d9d9c
                              (param_1,uVar15);
            if (*(long *)(param_1 + 0x18) == 0) break;
            uStack_70 = *(undefined8 *)(lVar7 + 0x30);
            uVar21 = *(undefined8 *)(lVar7 + 0x50);
            uVar22 = *(undefined8 *)(lVar7 + 0x58);
            uVar19 = *(undefined8 *)(lVar7 + 0x48);
            uVar18 = *(undefined8 *)(lVar7 + 0x40);
            uVar20 = *(undefined1 *)(lVar7 + 0x2d);
            uStack_68 = *(undefined8 *)(lVar7 + 0x38);
            uVar1 = *(undefined4 *)(lVar7 + 0x18);
            uVar2 = *(undefined1 *)(lVar7 + 0x2c);
            uStack_78 = *(undefined8 *)(lVar7 + 0x20);
            iVar5 = Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentStateService__GetLeaderboardState_32db8a0
                              (*(long *)(param_1 + 0x18));
            bVar23 = iVar5 != 1 && iVar5 != 7;
            uVar9 = Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__GetRewardModelByRank_32d9e2c
                              (param_1,*(undefined4 *)(lVar7 + 0x28));
          }
          else {
            plVar16 = *(long **)(param_1 + 0x30);
            if (plVar16 == (long *)0x0) break;
            lVar11 = *plVar16;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_057636d0) {
                  puVar8 = (undefined8 *)(lVar11 + (long)(*piVar13 + 0xe) * 0x10 + 0x138);
                  goto LAB_033d9c34;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            puVar8 = (undefined8 *)FUN_0131971c(plVar16,*(long *)PTR_DAT_057636d0,0xe);
LAB_033d9c34:
            lVar11 = (*(code *)*puVar8)(plVar16,puVar8[1]);
            if (lVar11 == 0) break;
            uVar15 = *(undefined4 *)(lVar7 + 0x28);
            uVar17 = *(undefined8 *)(lVar11 + 0x18);
            uVar4 = Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__GetRewardAmountByRank_32d9d9c
                              (param_1,uVar15);
            if (*(long *)(param_1 + 0x18) == 0) break;
            uStack_68 = *(undefined8 *)(lVar11 + 0x10);
            uVar21 = *(undefined8 *)(lVar7 + 0x50);
            uVar22 = *(undefined8 *)(lVar7 + 0x58);
            uVar19 = *(undefined8 *)(lVar7 + 0x48);
            uVar18 = *(undefined8 *)(lVar7 + 0x40);
            uVar20 = *(undefined1 *)(lVar7 + 0x2d);
            uStack_70 = *(undefined8 *)(lVar7 + 0x30);
            uVar1 = *(undefined4 *)(lVar7 + 0x18);
            uVar2 = *(undefined1 *)(lVar7 + 0x2c);
            uStack_78 = *(undefined8 *)(lVar7 + 0x20);
            iVar5 = Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentStateService__GetLeaderboardState_32db8a0
                              (*(long *)(param_1 + 0x18));
            bVar23 = iVar5 != 1 && iVar5 != 7;
            uVar9 = Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__GetRewardModelByRank_32d9e2c
                              (param_1,*(undefined4 *)(lVar7 + 0x28));
          }
          uVar17 = Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardPlayerViewModel__Create_32d9ea4
                             (uVar15,uVar17,uVar4,uVar2,uVar1,uStack_78,uStack_70,uStack_68,uVar20,
                              uVar18,uVar19,uVar21,uVar22,bVar23,uVar9);
          lVar7 = *(long *)(lVar6 + 0x10);
          lVar11 = *(long *)PTR_DAT_05763258;
          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
          if (lVar7 == 0) break;
          uVar3 = *(uint *)(lVar6 + 0x18);
          if (uVar3 < *(uint *)(lVar7 + 0x18)) {
            *(uint *)(lVar6 + 0x18) = uVar3 + 1;
            *(undefined8 *)(lVar7 + (long)(int)uVar3 * 8 + 0x20) = uVar17;
            FUN_012d0d74();
          }
          else {
            (**(code **)(*(long *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x58) + 8))(lVar6);
          }
          iVar14 = iVar14 + 1;
          lVar7 = *(long *)(lVar10 + 0x18);
        } while (lVar7 != 0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

