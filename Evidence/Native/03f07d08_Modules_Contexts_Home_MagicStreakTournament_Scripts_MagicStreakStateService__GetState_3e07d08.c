/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakStateService$$GetState
int32_t Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakStateService__GetState (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakStateService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakStateService$$GetState
   int32_t Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakStateService__GetState
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakStateService_o* __this, const
   MethodInfo* method); */

undefined4
Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakStateService__GetState_3e07d08
          (long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  
  if ((bRam0000000005c3802a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057636d0);
    bRam0000000005c3802a = 1;
  }
  if (*(long *)(param_1 + 0x20) == 0) goto LAB_03f07eac;
  lVar2 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakDataService__GetCachedTournamentModel_411c078
                    (*(long *)(param_1 + 0x20),0);
  lVar3 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakStateService__GetConfig_3e07ce4
                    (param_1);
  if (lVar3 == 0) goto LAB_03f07eac;
  if (*(char *)(lVar3 + 0x10) == '\0') {
    return 0;
  }
  plVar8 = *(long **)(param_1 + 0x10);
  if (plVar8 == (long *)0x0) goto LAB_03f07eac;
  lVar3 = *plVar8;
  uVar6 = (ulong)*(ushort *)(lVar3 + 0x12a);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_057636d0) {
        puVar4 = (undefined8 *)(lVar3 + (long)(*piVar7 + 1) * 0x10 + 0x138);
        goto LAB_03f07dc4;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)FUN_0131971c(plVar8,*(long *)PTR_DAT_057636d0,1);
LAB_03f07dc4:
  iVar1 = (*(code *)*puVar4)(plVar8,puVar4[1]);
  lVar3 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakStateService__GetConfig_3e07ce4
                    (param_1);
  if (lVar3 == 0) goto LAB_03f07eac;
  if (iVar1 < *(int *)(lVar3 + 0x14)) {
    return 1;
  }
  if (lVar2 == 0) {
    return 2;
  }
  uVar6 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakStateService__IsFinishedBeforeIntroduction_3e07eb0
                    (param_1);
  if ((uVar6 & 1) != 0) {
    return 7;
  }
  if (*(long *)(param_1 + 0x20) == 0) goto LAB_03f07eac;
  uVar6 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakDataService__GetIsIntroduced_411c1dc
                    (*(long *)(param_1 + 0x20),0);
  if ((uVar6 & 1) == 0) {
    return 3;
  }
  if (*(char *)(lVar2 + 0x28) == '\0') {
    if (*(long *)(param_1 + 0x28) == 0) goto LAB_03f07eac;
    iVar1 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetRemainingSeconds_411ec80
                      (*(long *)(param_1 + 0x28),0);
    if (iVar1 < 1) {
      return 5;
    }
    if (*(char *)(lVar2 + 0x28) != '\0') goto LAB_03f07e30;
  }
  else {
LAB_03f07e30:
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_03f07eac;
    uVar6 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakDataService__GetIsClaimedLocally_411c220
                      (*(long *)(param_1 + 0x20),0);
    if ((uVar6 & 1) == 0) {
      return 6;
    }
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar6 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakDataService__GetIsClaimedLocally_411c220
                      (*(long *)(param_1 + 0x20),0);
    uVar5 = 7;
    if ((uVar6 & 1) == 0) {
      uVar5 = 4;
    }
    return uVar5;
  }
LAB_03f07eac:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

