/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$IsElapsedNLevelsSinceLastSeen
bool Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__IsElapsedNLevelsSinceLastSeen (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$IsElapsedNLevelsSinceLastSeen
   bool 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__IsElapsedNLevelsSinceLastSeen
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, const
   MethodInfo* method); */

bool Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__IsElapsedNLevelsSinceLastSeen_41200b0
               (long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  
  if ((bRam0000000005c3ac88 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057636d0);
    bRam0000000005c3ac88 = 1;
  }
  if ((((*(long *)(param_1 + 0x10) != 0) &&
       (lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 0x18), lVar4 != 0)) &&
      (lVar4 = *(long *)(lVar4 + 0x80), lVar4 != 0)) &&
     (plVar8 = *(long **)(param_1 + 0x38), plVar8 != (long *)0x0)) {
    lVar5 = *plVar8;
    iVar1 = *(int *)(lVar4 + 0x20);
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_057636d0) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_04220158;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_0131971c(plVar8,*(long *)PTR_DAT_057636d0,1);
LAB_04220158:
    iVar2 = (*(code *)*puVar3)(plVar8,puVar3[1]);
    if (*(long *)(param_1 + 0x28) != 0) {
      return iVar1 <= iVar2 - *(int *)(*(long *)(param_1 + 0x28) + 0x3c);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

