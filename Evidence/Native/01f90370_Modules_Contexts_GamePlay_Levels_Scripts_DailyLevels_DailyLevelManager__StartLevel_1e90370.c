/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.DailyLevels.DailyLevelManager$$StartLevel
void Modules_Contexts_GamePlay_Levels_Scripts_DailyLevels_DailyLevelManager__StartLevel (Modules_Contexts_GamePlay_Levels_Scripts_DailyLevels_DailyLevelManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.DailyLevels.DailyLevelManager$$StartLevel
   void Modules_Contexts_GamePlay_Levels_Scripts_DailyLevels_DailyLevelManager__StartLevel
   (Modules_Contexts_GamePlay_Levels_Scripts_DailyLevels_DailyLevelManager_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Levels_Scripts_DailyLevels_DailyLevelManager__StartLevel_1e90370
               (long param_1)

{
  ushort uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *plVar13;
  
  puVar2 = PTR_DAT_057815e0;
  if ((bRam0000000005c28129 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_0580ae60);
    FUN_012d0dc8(PTR_DAT_057de4f8);
    FUN_012d0dc8(PTR_DAT_057636d0);
    bRam0000000005c28129 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  DG_Tweening_DOTween__KillAll_1eda810(0,0);
  *(undefined4 *)(param_1 + 0x38) = 1;
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar4 = Modules_Contexts_Home_Daily_Scripts_DailyService__GetSelectedDailyLevelInfo_410533c
                      (*(long *)(param_1 + 0x28),0);
    if (*(long *)(param_1 + 0x28) != 0) {
      uVar5 = Modules_Contexts_Home_Daily_Scripts_DailyService__DidTutorialLevelPlay_4105ba0
                        (*(long *)(param_1 + 0x28),0);
      plVar13 = *(long **)(param_1 + 0x10);
      lVar10 = param_1;
      if ((uVar5 & 1) == 0) {
        lVar10 = 0;
      }
      if (plVar13 != (long *)0x0) {
        lVar9 = *plVar13;
        lVar8 = *(long *)PTR_DAT_057de4f8;
        uVar1 = *(ushort *)(lVar9 + 0x12a);
        uVar11 = (ulong)uVar1;
        if ((uVar5 & 1) == 0) {
          if (uVar1 != 0) {
            piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar8) {
                puVar6 = (undefined8 *)(lVar9 + (long)(*piVar12 + 2) * 0x10 + 0x138);
                goto LAB_01f904e4;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar6 = (undefined8 *)FUN_0131971c(plVar13,lVar8,2);
LAB_01f904e4:
          uVar7 = (*(code *)*puVar6)(plVar13,uVar4,puVar6[1]);
          lVar10 = param_1;
        }
        else {
          if (uVar1 != 0) {
            piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar8) {
                puVar6 = (undefined8 *)(lVar9 + (long)(*piVar12 + 1) * 0x10 + 0x138);
                goto LAB_01f904b8;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar6 = (undefined8 *)FUN_0131971c(plVar13,lVar8,1);
LAB_01f904b8:
          uVar7 = (*(code *)*puVar6)(plVar13,uVar4,puVar6[1]);
        }
        if (lVar10 != 0) {
          *(undefined8 *)(lVar10 + 0x40) = uVar7;
          FUN_012d0d74((undefined8 *)(lVar10 + 0x40));
          puVar2 = PTR_DAT_057636d0;
          plVar13 = *(long **)(param_1 + 0x18);
          if (plVar13 != (long *)0x0) {
            lVar10 = *plVar13;
            uVar5 = (ulong)*(ushort *)(lVar10 + 0x12a);
            if (uVar5 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_057636d0) {
                  puVar6 = (undefined8 *)(lVar10 + (long)(*piVar12 + 6) * 0x10 + 0x138);
                  goto LAB_01f9056c;
                }
                uVar5 = uVar5 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar5 != 0);
            }
            puVar6 = (undefined8 *)FUN_0131971c(plVar13,*(long *)PTR_DAT_057636d0,6);
LAB_01f9056c:
            (*(code *)*puVar6)(plVar13,uVar4,puVar6[1]);
            plVar13 = *(long **)(param_1 + 0x18);
            if (plVar13 != (long *)0x0) {
              lVar8 = *plVar13;
              lVar10 = *(long *)puVar2;
              uVar5 = (ulong)*(ushort *)(lVar8 + 0x12a);
              if (uVar5 != 0) {
                piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == lVar10) {
                    puVar6 = (undefined8 *)(lVar8 + (long)(*piVar12 + 5) * 0x10 + 0x138);
                    goto LAB_01f905d4;
                  }
                  uVar5 = uVar5 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar5 != 0);
              }
              puVar6 = (undefined8 *)FUN_0131971c(plVar13,lVar10,5);
LAB_01f905d4:
              (*(code *)*puVar6)(plVar13,puVar6[1]);
              plVar13 = *(long **)(param_1 + 0x18);
              if (plVar13 != (long *)0x0) {
                lVar8 = *plVar13;
                lVar9 = *(long *)(param_1 + 0x40);
                lVar10 = *(long *)puVar2;
                uVar5 = (ulong)*(ushort *)(lVar8 + 0x12a);
                if (uVar5 != 0) {
                  piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar12 + -2) == lVar10) {
                      puVar6 = (undefined8 *)(lVar8 + (long)(*piVar12 + 10) * 0x10 + 0x138);
                      goto LAB_01f9063c;
                    }
                    uVar5 = uVar5 - 1;
                    piVar12 = piVar12 + 4;
                  } while (uVar5 != 0);
                }
                puVar6 = (undefined8 *)FUN_0131971c(plVar13,lVar10,10);
LAB_01f9063c:
                uVar3 = (*(code *)*puVar6)(plVar13,puVar6[1]);
                puVar2 = PTR_DAT_0580ae60;
                if (lVar9 != 0) {
                  *(undefined4 *)(lVar9 + 0x4c) = uVar3;
                  lVar10 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                  if (lVar10 != 0) {
                    Modules_Contexts_GamePlay_Levels_Scripts_ALevel___ctor_1f1710c(lVar10,0);
                    plVar13 = (long *)(param_1 + 0x30);
                    *plVar13 = lVar10;
                    FUN_012d0d74(plVar13,lVar10);
                    plVar13 = (long *)*plVar13;
                    if ((plVar13 != (long *)0x0) &&
                       ((**(code **)(*plVar13 + 0x178))
                                  (plVar13,*(undefined8 *)(param_1 + 0x40),
                                   *(undefined8 *)(*plVar13 + 0x180)),
                       *(long *)(param_1 + 0x20) != 0)) {
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

