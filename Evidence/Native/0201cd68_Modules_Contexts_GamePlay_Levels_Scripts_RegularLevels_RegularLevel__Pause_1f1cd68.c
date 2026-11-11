/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.RegularLevels.RegularLevel$$Pause
void Modules_Contexts_GamePlay_Levels_Scripts_RegularLevels_RegularLevel__Pause (Modules_Contexts_GamePlay_Levels_Scripts_RegularLevels_RegularLevel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.RegularLevels.RegularLevel$$Pause
   void Modules_Contexts_GamePlay_Levels_Scripts_RegularLevels_RegularLevel__Pause
   (Modules_Contexts_GamePlay_Levels_Scripts_RegularLevels_RegularLevel_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Levels_Scripts_RegularLevels_RegularLevel__Pause_1f1cd68
               (long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
  if ((bRam0000000005c2865e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05802200);
    bRam0000000005c2865e = 1;
  }
  if ((*(long *)(param_1 + 0x48) == 0) ||
     (plVar5 = *(long **)(*(long *)(param_1 + 0x48) + 0x10), plVar5 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar2 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12a);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_05802200) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 1) * 0x10 + 0x138);
        goto LAB_0201cdfc;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_0131971c(plVar5,*(long *)PTR_DAT_05802200,1);
LAB_0201cdfc:
                    /* WARNING: Could not recover jumptable at 0x0201ce0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar5,puVar1[1]);
  return;
}

