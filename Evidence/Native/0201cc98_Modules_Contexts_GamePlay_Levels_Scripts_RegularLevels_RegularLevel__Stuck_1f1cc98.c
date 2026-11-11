/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.RegularLevels.RegularLevel$$Stuck
void Modules_Contexts_GamePlay_Levels_Scripts_RegularLevels_RegularLevel__Stuck (Modules_Contexts_GamePlay_Levels_Scripts_RegularLevels_RegularLevel_o* __this, int32_t stuckType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.RegularLevels.RegularLevel$$Stuck
   void Modules_Contexts_GamePlay_Levels_Scripts_RegularLevels_RegularLevel__Stuck
   (Modules_Contexts_GamePlay_Levels_Scripts_RegularLevels_RegularLevel_o* __this, int32_t
   stuckType, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Levels_Scripts_RegularLevels_RegularLevel__Stuck_1f1cc98
               (long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  
  if ((bRam0000000005c2865d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05802200);
    bRam0000000005c2865d = 1;
  }
  if ((*(long *)(param_1 + 0x48) != 0) &&
     (plVar6 = *(long **)(*(long *)(param_1 + 0x48) + 0x10), plVar6 != (long *)0x0)) {
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_05802200) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 1) * 0x10 + 0x138);
          goto LAB_0201cd30;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_0131971c(plVar6,*(long *)PTR_DAT_05802200,1);
LAB_0201cd30:
    (*(code *)*puVar2)(plVar6,puVar2[1]);
    lVar3 = *(long *)(param_1 + 0x20);
    if (lVar3 != 0) {
      if (*(long *)(lVar3 + 0x28) != 0) {
        uVar1 = Modules_Contexts_GamePlay_Levels_Scripts_DailyLevels_LevelTimer__GetRemainingTime_1e90948
                          (*(long *)(lVar3 + 0x28),0);
        *(undefined4 *)(lVar3 + 0xf0) = uVar1;
        *(undefined4 *)(lVar3 + 0xf4) = param_2;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

