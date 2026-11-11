/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.WeeklyTournamentService$$FindPlayer
Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyLeaderBoardPlayer_o* Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__FindPlayer (Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService_o* __this, System_Collections_Generic_List_WeeklyLeaderBoardPlayer__o* players, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02521854) */
/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.WeeklyTournamentService$$FindPlayer
   Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyLeaderBoardPlayer_o*
   Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__FindPlayer
   (Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService_o* __this,
   System_Collections_Generic_List_WeeklyLeaderBoardPlayer__o* players, const MethodInfo* method);
    */

undefined8
Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__FindPlayer_32d9400
          (undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  
  if ((bRam0000000005c31d70 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575a5c8);
    FUN_012d0dc8(PTR_DAT_0578eec0);
    FUN_012d0dc8(PTR_DAT_057ae8c0);
    FUN_012d0dc8(PTR_DAT_057a2088);
    bRam0000000005c31d70 = 1;
  }
  puVar3 = PTR_DAT_057a2088;
  if (param_2 == (long *)0x0) {
    return 0;
  }
  lVar5 = *(long *)PTR_DAT_057a2088;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_0130472c();
    lVar5 = *(long *)puVar3;
  }
  puVar1 = PTR_DAT_0578eec0;
  lVar11 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
  if (lVar11 == 0) {
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_0130472c();
      lVar5 = *(long *)puVar3;
    }
    uVar14 = **(undefined8 **)(lVar5 + 0xb8);
    lVar11 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    System_Func_object__bool____ctor_338137c(lVar11,uVar14,*(undefined8 *)PTR_DAT_057ae8c0,0);
    plVar6 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
    *plVar6 = lVar11;
    FUN_012d0d74(plVar6,lVar11);
  }
  lVar5 = *(long *)PTR_DAT_0575a5c8;
  if ((bRam0000000005c2af0b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_058165e8);
    FUN_012d0dc8(PTR_DAT_057a12b8);
    bRam0000000005c2af0b = 1;
  }
  puVar3 = PTR_DAT_057ab1a0;
  if ((param_2 == (long *)0x0) || (puVar3 = PTR_DAT_057c5520, lVar11 == 0)) {
    uVar14 = thunk_FUN_0136d790(puVar3);
    uVar14 = System_Linq_Error__ArgumentNull_3d79794(uVar14,0);
    uVar4 = thunk_FUN_0136d790(PTR_DAT_057b5490);
                    /* WARNING: Subroutine does not return */
    FUN_012d0eb8(uVar14,uVar4);
  }
  lVar7 = **(long **)(lVar5 + 0x38);
  if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
    lVar7 = FUN_0131942c(lVar7);
  }
  lVar8 = *param_2;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == lVar7) {
        puVar2 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_02521660;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar2 = (undefined8 *)FUN_0131971c(param_2,lVar7,0);
LAB_02521660:
  puVar1 = PTR_DAT_058165e8;
  plVar6 = (long *)(*(code *)*puVar2)(param_2,puVar2[1]);
  puVar3 = PTR_DAT_057a12b8;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  do {
    lVar7 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
          puVar2 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_025216d0;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar2 = (undefined8 *)FUN_0131971c(plVar6,*(long *)puVar3,0);
LAB_025216d0:
    uVar9 = (*(code *)*puVar2)(plVar6,puVar2[1]);
    if ((uVar9 & 1) == 0) {
      uVar14 = 0;
      iVar13 = 0xb;
      iVar12 = 0xb;
      goto joined_r0x0252178c;
    }
    lVar7 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_0131942c(lVar7);
    }
    lVar8 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar7) {
          puVar2 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_02521744;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar2 = (undefined8 *)FUN_0131971c(plVar6,lVar7,0);
LAB_02521744:
    uVar14 = (*(code *)*puVar2)(plVar6,puVar2[1]);
    uVar9 = (**(code **)(*(long *)(*(long *)(lVar5 + 0x38) + 0x28) + 8))(lVar11,uVar14);
  } while ((uVar9 & 1) == 0);
  iVar13 = 10;
  iVar12 = 10;
joined_r0x0252178c:
  if (plVar6 != (long *)0x0) {
    lVar5 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar5 + 0x12a);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_025217dc;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar2 = (undefined8 *)FUN_0131971c(plVar6,*(long *)puVar1,0);
LAB_025217dc:
    (*(code *)*puVar2)(plVar6,puVar2[1]);
    iVar12 = iVar13;
  }
  if ((iVar12 == 0xb) || (iVar12 == 0)) {
    uVar14 = 0;
  }
  return uVar14;
}

