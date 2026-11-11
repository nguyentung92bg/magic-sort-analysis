/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.WeeklyTournamentDataService$$Initialize
void Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentDataService__Initialize (Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentDataService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.WeeklyTournamentDataService$$Initialize
   void Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentDataService__Initialize
   (Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentDataService_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentDataService__Initialize_32d5d74
               (long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  
  if ((bRam0000000005c31d4f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05788298);
    FUN_012d0dc8(PTR_DAT_0578c858);
    bRam0000000005c31d4f = 1;
  }
  puVar1 = PTR_DAT_0578c858;
  plVar7 = *(long **)(param_1 + 0x10);
  if (plVar7 != (long *)0x0) {
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_05788298) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
          goto LAB_033d5e14;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_0131971c(plVar7,*(long *)PTR_DAT_05788298,1);
LAB_033d5e14:
    uVar3 = (*(code *)*puVar2)(plVar7,puVar2[1]);
    *(undefined8 *)(param_1 + 0x20) = uVar3;
    FUN_012d0d74();
    lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    if (lVar4 != 0) {
      System_Object___ctor_23dfe5c(lVar4,0);
      *(long *)(param_1 + 0x28) = lVar4;
      FUN_012d0d74((long *)(param_1 + 0x28),lVar4);
      *(undefined2 *)(param_1 + 0x18) = 0x100;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

