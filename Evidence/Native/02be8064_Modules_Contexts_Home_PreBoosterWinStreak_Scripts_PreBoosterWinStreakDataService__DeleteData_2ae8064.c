/* IL2CPP: Modules.Contexts.Home.PreBoosterWinStreak.Scripts.PreBoosterWinStreakDataService$$DeleteData
void Modules_Contexts_Home_PreBoosterWinStreak_Scripts_PreBoosterWinStreakDataService__DeleteData (Modules_Contexts_Home_PreBoosterWinStreak_Scripts_PreBoosterWinStreakDataService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.PreBoosterWinStreak.Scripts.PreBoosterWinStreakDataService$$DeleteData
   void Modules_Contexts_Home_PreBoosterWinStreak_Scripts_PreBoosterWinStreakDataService__DeleteData
   (Modules_Contexts_Home_PreBoosterWinStreak_Scripts_PreBoosterWinStreakDataService_o* __this,
   const MethodInfo* method); */

void Modules_Contexts_Home_PreBoosterWinStreak_Scripts_PreBoosterWinStreakDataService__DeleteData_2ae8064
               (long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  
  puVar1 = PTR_DAT_05758050;
  if ((bRam0000000005c2eb67 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057e5048);
    FUN_012d0dc8(PTR_DAT_05758050);
    bRam0000000005c2eb67 = 1;
  }
  lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar2 != 0) {
    System_Object___ctor_23dfe5c(lVar2,0);
    plVar7 = (long *)(param_1 + 0x10);
    *plVar7 = lVar2;
    FUN_012d0d74(plVar7,lVar2);
    plVar6 = *(long **)(param_1 + 0x18);
    if (plVar6 != (long *)0x0) {
      lVar2 = *plVar6;
      lVar8 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar2 + 0x12a);
                    /* try { // try from 02be80e8 to 02ce81a7 has its CatchHandler @ 02be80e8
                       catch() { ... } // from try @ 02be80e8 with catch @ 02be80e8
                       catch() { ... } // from try @ 02be81c8 with catch @ 02be80e8
                       catch() { ... } // from try @ 02be8258 with catch @ 02be80e8 */
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_057e5048) {
            puVar3 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_02be812c;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined8 *)FUN_0131971c(plVar6,*(long *)PTR_DAT_057e5048,0);
LAB_02be812c:
                    /* WARNING: Could not recover jumptable at 0x02be8140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar3)(plVar6,lVar8,puVar3[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

