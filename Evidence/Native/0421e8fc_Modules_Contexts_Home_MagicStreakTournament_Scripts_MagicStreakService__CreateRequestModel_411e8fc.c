/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$CreateRequestModel
Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakTournamentRequestModel_o* Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__CreateRequestModel (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$CreateRequestModel
   Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakTournamentRequestModel_o*
   Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__CreateRequestModel
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, const
   MethodInfo* method); */

long Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__CreateRequestModel_411e8fc
               (long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  long *plVar10;
  undefined8 uVar11;
  
  if ((bRam0000000005c3ac6c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_0577b460);
    FUN_012d0dc8(PTR_DAT_057c9ca0);
    bRam0000000005c3ac6c = 1;
  }
  plVar10 = *(long **)(param_1 + 0x38);
  if (plVar10 != (long *)0x0) {
    lVar6 = *plVar10;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_057636d0) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_0421e9a4;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_0131971c(plVar10,*(long *)PTR_DAT_057636d0,1);
LAB_0421e9a4:
    uVar4 = (*(code *)*puVar5)(plVar10,puVar5[1]);
    if ((((*(long *)(param_1 + 0x10) != 0) &&
         (lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0x18), lVar6 != 0)) &&
        (lVar6 = *(long *)(lVar6 + 0x80), lVar6 != 0)) &&
       ((*(long *)(param_1 + 0x28) != 0 &&
        (lVar8 = *(long *)(*(long *)(param_1 + 0x28) + 0x20), lVar8 != 0)))) {
      uVar1 = *(undefined4 *)(lVar6 + 0x18);
      lVar6 = *(long *)(lVar8 + 0x10);
      if (lVar6 == 0) {
        lVar6 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_0577b460);
        puVar3 = PTR_DAT_057c9ca0;
        if (lVar6 == 0) goto LAB_0421ea7c;
        System_Object___ctor_23dfe5c(lVar6,0);
        *(undefined4 *)(lVar6 + 0x10) = uVar4;
        *(undefined4 *)(lVar6 + 0x24) = 0;
        uVar11 = **(undefined8 **)(*(long *)puVar3 + 0xb8);
      }
      else {
        uVar11 = *(undefined8 *)(lVar6 + 0x10);
        uVar2 = *(undefined4 *)(lVar6 + 0x2c);
        lVar6 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_0577b460);
        if (lVar6 == 0) goto LAB_0421ea7c;
        System_Object___ctor_23dfe5c(lVar6,0);
        *(undefined4 *)(lVar6 + 0x10) = uVar4;
        *(undefined4 *)(lVar6 + 0x24) = uVar2;
      }
      *(undefined8 *)(lVar6 + 0x18) = uVar11;
      FUN_012d0d74((undefined8 *)(lVar6 + 0x18),uVar11);
      *(undefined4 *)(lVar6 + 0x20) = uVar1;
      return lVar6;
    }
  }
LAB_0421ea7c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

