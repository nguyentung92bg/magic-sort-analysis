/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.WeeklyTournamentService$$DeleteData
void Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__DeleteData (Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.WeeklyTournamentService$$DeleteData
   void Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__DeleteData
   (Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__DeleteData_32da5fc
               (long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  
  puVar1 = PTR_DAT_0580bc98;
  lVar4 = *(long *)(param_1 + 0x20);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if ((bRam0000000005c31d52 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05788298);
    FUN_012d0dc8(PTR_DAT_0580bc98);
    bRam0000000005c31d52 = 1;
  }
  plVar8 = *(long **)(lVar4 + 0x10);
  lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if ((lVar2 != 0) && (System_Object___ctor_23dfe5c(lVar2,0), plVar8 != (long *)0x0)) {
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_05788298) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_033d6254;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_0131971c(plVar8,*(long *)PTR_DAT_05788298,0);
LAB_033d6254:
    (*(code *)*puVar3)(plVar8,lVar2,puVar3[1]);
    if (*(long *)(lVar4 + 0x20) != 0) {
      *(undefined4 *)(*(long *)(lVar4 + 0x20) + 0x14) = 0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

