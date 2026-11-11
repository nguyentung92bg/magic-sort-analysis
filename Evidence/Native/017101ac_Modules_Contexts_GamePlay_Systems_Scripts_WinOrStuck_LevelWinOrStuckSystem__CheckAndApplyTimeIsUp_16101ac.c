/* IL2CPP: Modules.Contexts.GamePlay.Systems.Scripts.WinOrStuck.LevelWinOrStuckSystem$$CheckAndApplyTimeIsUp
void Modules_Contexts_GamePlay_Systems_Scripts_WinOrStuck_LevelWinOrStuckSystem__CheckAndApplyTimeIsUp (Modules_Contexts_GamePlay_Systems_Scripts_WinOrStuck_LevelWinOrStuckSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Systems.Scripts.WinOrStuck.LevelWinOrStuckSystem$$CheckAndApplyTimeIsUp
   void 
   Modules_Contexts_GamePlay_Systems_Scripts_WinOrStuck_LevelWinOrStuckSystem__CheckAndApplyTimeIsUp
   (Modules_Contexts_GamePlay_Systems_Scripts_WinOrStuck_LevelWinOrStuckSystem_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Systems_Scripts_WinOrStuck_LevelWinOrStuckSystem__CheckAndApplyTimeIsUp_16101ac
               (long param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  int *piVar5;
  
  if ((bRam0000000005c24464 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05791da0);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_0575bba8);
    bRam0000000005c24464 = 1;
  }
  uVar1 = Modules_Contexts_GamePlay_Systems_Scripts_WinOrStuck_LevelWinOrStuckSystem__IsAlreadyInStuckOrWinOrLoseState_1610548
                    (param_1);
  if ((uVar1 & 1) != 0) {
    return;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar1 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections__IsCollectionCleared_2d94c3c
                      (*(long *)(param_1 + 0x18),0);
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) goto LAB_017102f4;
      uVar1 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections__IsLastCollection_2d94b58
                        (*(long *)(param_1 + 0x18),0);
      if ((uVar1 & 1) != 0) {
        return;
      }
    }
    lVar2 = *(long *)(param_1 + 0x38);
    if (lVar2 == 0) {
      return;
    }
    if (*(char *)(lVar2 + 0x1d) == '\0') {
      return;
    }
    uVar1 = Modules_Contexts_GamePlay_Levels_Scripts_DailyLevels_LevelTimer__IsTimeUp_1e8fd40
                      (lVar2,0);
    if ((uVar1 & 1) == 0) {
      return;
    }
    if (((**(long **)(*(long *)PTR_DAT_0576aae0 + 0xb8) != 0) &&
        (lVar2 = *(long *)(**(long **)(*(long *)PTR_DAT_0576aae0 + 0xb8) + 0x18), lVar2 != 0)) &&
       (plVar3 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                   (lVar2,*(undefined8 *)PTR_DAT_05791da0), plVar3 != (long *)0x0))
    {
      lVar2 = *plVar3;
      uVar1 = (ulong)*(ushort *)(lVar2 + 0x12a);
      if (uVar1 != 0) {
        piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_0575bba8) {
            puVar4 = (undefined8 *)(lVar2 + (long)(*piVar5 + 4) * 0x10 + 0x138);
            goto LAB_017102dc;
          }
          uVar1 = uVar1 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar1 != 0);
      }
      puVar4 = (undefined8 *)FUN_0131971c(plVar3,*(long *)PTR_DAT_0575bba8,4);
LAB_017102dc:
                    /* WARNING: Could not recover jumptable at 0x017102f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar4)(plVar3,2,puVar4[1]);
      return;
    }
  }
LAB_017102f4:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

