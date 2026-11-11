/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.WeeklyTournamentDataService$$DeleteData
void Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentDataService__DeleteData (Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentDataService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.WeeklyTournamentDataService$$DeleteData
   void Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentDataService__DeleteData
   (Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentDataService_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentDataService__DeleteData_32d61a0
               (long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  
  puVar1 = PTR_DAT_0580bc98;
  if ((bRam0000000005c31d52 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05788298);
    FUN_012d0dc8(PTR_DAT_0580bc98);
    bRam0000000005c31d52 = 1;
  }
  plVar7 = *(long **)(param_1 + 0x10);
  lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if ((lVar2 != 0) && (System_Object___ctor_23dfe5c(lVar2,0), plVar7 != (long *)0x0)) {
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_05788298) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_033d6254;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_0131971c(plVar7,*(long *)PTR_DAT_05788298,0);
LAB_033d6254:
    (*(code *)*puVar3)(plVar7,lVar2,puVar3[1]);
    if (*(long *)(param_1 + 0x20) != 0) {
      *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x14) = 0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

