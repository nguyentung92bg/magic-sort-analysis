/* IL2CPP: Modules.Contexts.GamePlay.Loop.Scripts.Daily.DailyStateManager$$Stuck
void Modules_Contexts_GamePlay_Loop_Scripts_Daily_DailyStateManager__Stuck (Modules_Contexts_GamePlay_Loop_Scripts_Daily_DailyStateManager_o* __this, int32_t stuckType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Loop.Scripts.Daily.DailyStateManager$$Stuck
   void Modules_Contexts_GamePlay_Loop_Scripts_Daily_DailyStateManager__Stuck
   (Modules_Contexts_GamePlay_Loop_Scripts_Daily_DailyStateManager_o* __this, int32_t stuckType,
   const MethodInfo* method); */

void Modules_Contexts_GamePlay_Loop_Scripts_Daily_DailyStateManager__Stuck_1f11624
               (long param_1,undefined4 param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  
  puVar1 = PTR_DAT_057ff190;
  if ((bRam0000000005c28602 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578a988);
    FUN_012d0dc8(PTR_DAT_057ff190);
    bRam0000000005c28602 = 1;
  }
  lVar12 = *(long *)(param_1 + 0x10);
  lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar4 != 0) {
    Modules_Infrastructure_FiniteStateMachine_StateArguments___ctor_3d2d94c(lVar4,0);
    *(undefined4 *)(lVar4 + 0x10) = param_2;
    if (lVar12 != 0) {
      lVar8 = *(long *)PTR_DAT_0578a988;
      if (*(char *)(lVar12 + 0x28) == '\0') {
        puVar13 = (undefined8 *)(lVar12 + 0x18);
        plVar14 = (long *)*puVar13;
        *(undefined1 *)(lVar12 + 0x28) = 1;
        if (plVar14 != (long *)0x0) {
          lVar7 = *(long *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x20);
          if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
            lVar7 = FUN_0131942c(lVar7);
          }
          lVar9 = *plVar14;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == lVar7) {
                puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 2) * 0x10 + 0x138);
                goto LAB_03228a74;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar6 = (undefined8 *)FUN_0131971c(plVar14,lVar7,2);
LAB_03228a74:
          (*(code *)*puVar6)(plVar14,puVar6[1]);
        }
        if (*(long *)(lVar12 + 0x10) != 0) {
          uVar5 = (**(code **)(*(long *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x38) + 8))
                            (*(long *)(lVar12 + 0x10),3);
          *puVar13 = uVar5;
          FUN_012d0d74(puVar13,uVar5);
          plVar14 = (long *)*puVar13;
          if (plVar14 != (long *)0x0) {
            lVar7 = *(long *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x20);
            if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
              lVar7 = FUN_0131942c(lVar7);
            }
            lVar9 = *plVar14;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == lVar7) {
                  puVar13 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                  goto LAB_03228b24;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar13 = (undefined8 *)FUN_0131971c(plVar14,lVar7,1);
LAB_03228b24:
            (*(code *)*puVar13)(plVar14,lVar4,puVar13[1]);
            *(undefined1 *)(lVar12 + 0x28) = 0;
            if (*(long *)(lVar12 + 0x20) != 0) {
              iVar2 = (**(code **)(*(long *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x58) + 8))
                                ();
              if (iVar2 < 1) {
                return;
              }
              if ((*(long *)(lVar12 + 0x20) != 0) &&
                 (plVar14 = (long *)(**(code **)(*(long *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0)
                                                          + 0x60) + 8))(), plVar14 != (long *)0x0))
              {
                lVar4 = *(long *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x20);
                if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
                  lVar4 = FUN_0131942c(lVar4);
                }
                lVar7 = *plVar14;
                uVar10 = (ulong)*(ushort *)(lVar7 + 0x12a);
                if (uVar10 != 0) {
                  piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar11 + -2) == lVar4) {
                      puVar13 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
                      goto LAB_03228bfc;
                    }
                    uVar10 = uVar10 - 1;
                    piVar11 = piVar11 + 4;
                  } while (uVar10 != 0);
                }
                puVar13 = (undefined8 *)FUN_0131971c(plVar14,lVar4,0);
LAB_03228bfc:
                uVar3 = (*(code *)*puVar13)(plVar14,puVar13[1]);
                    /* WARNING: Could not recover jumptable at 0x03228c34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(*(long *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x68) + 8))
                          (lVar12,uVar3,0);
                return;
              }
            }
          }
        }
      }
      else if (*(long *)(lVar12 + 0x10) != 0) {
        lVar4 = *(long *)(lVar12 + 0x20);
        uVar5 = (**(code **)(*(long *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x38) + 8))
                          (*(long *)(lVar12 + 0x10),3);
        if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x032289ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(long *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x40) + 8))
                    (lVar4,uVar5);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

