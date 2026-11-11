/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakDataService$$DeleteData
void Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakDataService__DeleteData (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakDataService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakDataService$$DeleteData
   void Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakDataService__DeleteData
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakDataService_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakDataService__DeleteData_411bf9c
               (long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  
  puVar1 = PTR_DAT_05816068;
  if ((bRam0000000005c3ac59 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f5890);
    FUN_012d0dc8(PTR_DAT_05816068);
    bRam0000000005c3ac59 = 1;
  }
  plVar7 = *(long **)(param_1 + 0x10);
  lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if ((lVar2 == 0) || (System_Object___ctor_23dfe5c(lVar2,0), plVar7 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar4 = *plVar7;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_057f5890) {
        puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_0421c050;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_0131971c(plVar7,*(long *)PTR_DAT_057f5890,0);
LAB_0421c050:
                    /* WARNING: Could not recover jumptable at 0x0421c064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar3)(plVar7,lVar2,puVar3[1]);
  return;
}

