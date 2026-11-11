/* IL2CPP: Modules.Contexts.GamePlay.Loop.Scripts.Daily.DailyStateManager$$Lose
void Modules_Contexts_GamePlay_Loop_Scripts_Daily_DailyStateManager__Lose (Modules_Contexts_GamePlay_Loop_Scripts_Daily_DailyStateManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Loop.Scripts.Daily.DailyStateManager$$Lose
   void Modules_Contexts_GamePlay_Loop_Scripts_Daily_DailyStateManager__Lose
   (Modules_Contexts_GamePlay_Loop_Scripts_Daily_DailyStateManager_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Loop_Scripts_Daily_DailyStateManager__Lose_1f1171c(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  
  if ((bRam0000000005c28604 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578a988);
    bRam0000000005c28604 = 1;
  }
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar6 = *(long *)PTR_DAT_0578a988;
  if (*(char *)(lVar3 + 0x28) == '\0') {
    puVar11 = (undefined8 *)(lVar3 + 0x18);
    plVar12 = (long *)*puVar11;
    *(undefined1 *)(lVar3 + 0x28) = 1;
    if (plVar12 != (long *)0x0) {
      lVar10 = *(long *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x20);
      if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
        lVar10 = FUN_0131942c(lVar10);
      }
      lVar7 = *plVar12;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar10) {
            puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
            goto LAB_03228a74;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_0131971c(plVar12,lVar10,2);
LAB_03228a74:
      (*(code *)*puVar5)(plVar12,puVar5[1]);
    }
    if (*(long *)(lVar3 + 0x10) != 0) {
      uVar4 = (**(code **)(*(long *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x38) + 8))
                        (*(long *)(lVar3 + 0x10),5);
      *puVar11 = uVar4;
      FUN_012d0d74(puVar11,uVar4);
      plVar12 = (long *)*puVar11;
      if (plVar12 != (long *)0x0) {
        lVar10 = *(long *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x20);
        if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
          lVar10 = FUN_0131942c(lVar10);
        }
        lVar7 = *plVar12;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == lVar10) {
              puVar11 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
              goto LAB_03228b24;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar11 = (undefined8 *)FUN_0131971c(plVar12,lVar10,1);
LAB_03228b24:
        (*(code *)*puVar11)(plVar12,0,puVar11[1]);
        *(undefined1 *)(lVar3 + 0x28) = 0;
        if (*(long *)(lVar3 + 0x20) != 0) {
          iVar1 = (**(code **)(*(long *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x58) + 8))();
          if (iVar1 < 1) {
            return;
          }
          if ((*(long *)(lVar3 + 0x20) != 0) &&
             (plVar12 = (long *)(**(code **)(*(long *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) +
                                                      0x60) + 8))(), plVar12 != (long *)0x0)) {
            lVar10 = *(long *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x20);
            if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
              lVar10 = FUN_0131942c(lVar10);
            }
            lVar7 = *plVar12;
            uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == lVar10) {
                  puVar11 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                  goto LAB_03228bfc;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            puVar11 = (undefined8 *)FUN_0131971c(plVar12,lVar10,0);
LAB_03228bfc:
            uVar2 = (*(code *)*puVar11)(plVar12,puVar11[1]);
                    /* WARNING: Could not recover jumptable at 0x03228c34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x68) + 8))
                      (lVar3,uVar2,0);
            return;
          }
        }
      }
    }
  }
  else if (*(long *)(lVar3 + 0x10) != 0) {
    lVar10 = *(long *)(lVar3 + 0x20);
    uVar4 = (**(code **)(*(long *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x38) + 8))
                      (*(long *)(lVar3 + 0x10),5);
    if (lVar10 != 0) {
                    /* WARNING: Could not recover jumptable at 0x032289ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x40) + 8))(lVar10,uVar4);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

