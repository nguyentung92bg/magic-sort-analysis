/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.RegularLevels.RegularLevelManager$$StuckLevel
void Modules_Contexts_GamePlay_Levels_Scripts_RegularLevels_RegularLevelManager__StuckLevel (Modules_Contexts_GamePlay_Levels_Scripts_RegularLevels_RegularLevelManager_o* __this, int32_t stuckType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.RegularLevels.RegularLevelManager$$StuckLevel
   void Modules_Contexts_GamePlay_Levels_Scripts_RegularLevels_RegularLevelManager__StuckLevel
   (Modules_Contexts_GamePlay_Levels_Scripts_RegularLevels_RegularLevelManager_o* __this, int32_t
   stuckType, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Levels_Scripts_RegularLevels_RegularLevelManager__StuckLevel_1f1e9d8
               (long param_1,undefined4 param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  
  if ((bRam0000000005c28669 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057636d0);
    bRam0000000005c28669 = 1;
  }
  plVar1 = *(long **)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x40) = 4;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x188))(plVar1,param_2,*(undefined8 *)(*plVar1 + 400));
    if (*(long *)(param_1 + 0x20) != 0) {
      Modules_Contexts_Application_Ads_Scripts_AdService__HideBanner_1b5f5c4
                (*(long *)(param_1 + 0x20),0);
      plVar1 = *(long **)(param_1 + 0x18);
      if (plVar1 != (long *)0x0) {
        lVar3 = *plVar1;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_057636d0) {
              puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0x43) * 0x10 + 0x138);
              goto LAB_0201ea98;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
        puVar2 = (undefined8 *)FUN_0131971c(plVar1,*(long *)PTR_DAT_057636d0,0x43);
LAB_0201ea98:
                    /* WARNING: Could not recover jumptable at 0x0201eaa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*puVar2)(plVar1,puVar2[1]);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

