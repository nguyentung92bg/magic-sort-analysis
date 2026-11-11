/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$ResetLastSeenData
void Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__ResetLastSeenData (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$ResetLastSeenData
   void Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__ResetLastSeenData
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__ResetLastSeenData_411e6d0
               (long param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  long lVar7;
  
  if ((bRam0000000005c3ac87 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057636d0);
    bRam0000000005c3ac87 = 1;
  }
  lVar7 = *(long *)(param_1 + 0x28);
  if (lVar7 != 0) {
    *(undefined4 *)(lVar7 + 0x38) = 0;
    *(undefined4 *)(lVar7 + 0x30) = 0;
    plVar6 = *(long **)(param_1 + 0x38);
    if (plVar6 != (long *)0x0) {
      lVar3 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_057636d0) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 1) * 0x10 + 0x138);
            goto LAB_0421e76c;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_0131971c(plVar6,*(long *)PTR_DAT_057636d0,1);
LAB_0421e76c:
      uVar1 = (*(code *)*puVar2)(plVar6,puVar2[1]);
      *(undefined4 *)(lVar7 + 0x3c) = uVar1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

