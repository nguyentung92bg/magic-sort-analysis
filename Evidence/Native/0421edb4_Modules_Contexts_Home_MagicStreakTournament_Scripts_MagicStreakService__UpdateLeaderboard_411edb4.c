/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$UpdateLeaderboard
void Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__UpdateLeaderboard (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$UpdateLeaderboard
   void Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__UpdateLeaderboard
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__UpdateLeaderboard_411edb4
               (long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  
  if ((bRam0000000005c3ac72 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057fdf80);
    FUN_012d0dc8(PTR_DAT_05793160);
    FUN_012d0dc8(PTR_DAT_057b6d38);
    FUN_012d0dc8(PTR_DAT_0575d9f0);
    FUN_012d0dc8(PTR_DAT_057e3fe8);
    FUN_012d0dc8(PTR_DAT_057fd4e0);
    FUN_012d0dc8(PTR_DAT_0580ccc8);
    bRam0000000005c3ac72 = 1;
  }
  puVar4 = PTR_DAT_0580ccc8;
  if ((*(long *)(param_1 + 0x28) != 0) &&
     (lVar8 = *(long *)(*(long *)(param_1 + 0x28) + 0x20), lVar8 != 0)) {
    if (*(long *)(lVar8 + 0x10) == 0) {
      lVar8 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057e3fe8);
      if (lVar8 == 0) goto LAB_0421ef5c;
      System_Collections_Generic_List_object____ctor_21fc1fc(lVar8,*(undefined8 *)PTR_DAT_0575d9f0);
    }
    else {
      uVar6 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__CreateLeaderboard_411ef60
                        (param_1);
      lVar8 = *(long *)puVar4;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_0130472c(lVar8);
        lVar8 = *(long *)puVar4;
      }
      puVar5 = PTR_DAT_057b6d38;
      lVar9 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
      if (lVar9 == 0) {
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_0130472c(lVar8);
          lVar8 = *(long *)puVar4;
        }
        uVar10 = **(undefined8 **)(lVar8 + 0xb8);
        lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar5);
        if (lVar9 == 0) goto LAB_0421ef5c;
        System_Func_object__int____ctor_3381cbc(lVar9,uVar10,*(undefined8 *)PTR_DAT_057fd4e0,0);
        plVar7 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
        *plVar7 = lVar9;
        FUN_012d0d74(plVar7,lVar9);
      }
      puVar4 = PTR_DAT_05793160;
      uVar6 = System_Linq_Enumerable__OrderByDescending_object__int__2423b50
                        (uVar6,lVar9,*(undefined8 *)PTR_DAT_057fdf80);
      lVar8 = System_Linq_Enumerable__ToList_object__242f814(uVar6,*(undefined8 *)puVar4);
      Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__AssignTournamentRewardsAndSetRanks_411f07c
                (param_1,lVar8);
    }
    plVar7 = (long *)(param_1 + 0x68);
    *plVar7 = lVar8;
    if (iRam0000000005c3d478 != 0) {
      puVar1 = (ulong *)(((ulong)plVar7 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar7 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
LAB_0421ef5c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

