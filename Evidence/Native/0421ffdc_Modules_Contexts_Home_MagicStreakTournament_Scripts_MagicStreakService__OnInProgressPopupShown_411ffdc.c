/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$OnInProgressPopupShown
void Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__OnInProgressPopupShown (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$OnInProgressPopupShown
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__OnInProgressPopupShown
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__OnInProgressPopupShown_411ffdc
               (long param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int *piVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  if ((bRam0000000005c3ac86 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057636d0);
    bRam0000000005c3ac86 = 1;
  }
  lVar5 = *(long *)(param_1 + 0x28);
  uVar1 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetRank_411e528
                    (param_1);
  if (lVar5 != 0) {
    *(undefined4 *)(lVar5 + 0x38) = uVar1;
    lVar5 = *(long *)(param_1 + 0x28);
    uVar1 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetScore_411ffe0
                      (param_1);
    if (lVar5 != 0) {
      *(undefined4 *)(lVar5 + 0x30) = uVar1;
      plVar6 = *(long **)(param_1 + 0x38);
      if (plVar6 != (long *)0x0) {
        lVar5 = *plVar6;
        lVar7 = *(long *)(param_1 + 0x28);
        uVar3 = (ulong)*(ushort *)(lVar5 + 0x12a);
        if (uVar3 != 0) {
          piVar4 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_057636d0) {
              puVar2 = (undefined8 *)(lVar5 + (long)(*piVar4 + 1) * 0x10 + 0x138);
              goto LAB_0421e2c0;
            }
            uVar3 = uVar3 - 1;
            piVar4 = piVar4 + 4;
          } while (uVar3 != 0);
        }
        puVar2 = (undefined8 *)FUN_0131971c(plVar6,*(long *)PTR_DAT_057636d0,1);
LAB_0421e2c0:
        uVar1 = (*(code *)*puVar2)(plVar6,puVar2[1]);
        if (lVar7 != 0) {
          *(undefined4 *)(lVar7 + 0x3c) = uVar1;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

