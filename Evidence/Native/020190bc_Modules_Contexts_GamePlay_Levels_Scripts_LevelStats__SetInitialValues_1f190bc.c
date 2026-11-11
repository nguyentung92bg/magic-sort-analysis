/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelStats$$SetInitialValues
void Modules_Contexts_GamePlay_Levels_Scripts_LevelStats__SetInitialValues (Modules_Contexts_GamePlay_Levels_Scripts_LevelStats_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelStats$$SetInitialValues
   void Modules_Contexts_GamePlay_Levels_Scripts_LevelStats__SetInitialValues
   (Modules_Contexts_GamePlay_Levels_Scripts_LevelStats_o* __this, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Levels_Scripts_LevelStats__SetInitialValues_1f190bc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined4 uVar10;
  
  puVar2 = PTR_DAT_057cfb88;
  if ((bRam0000000005c2864a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_057fe590);
    FUN_012d0dc8(PTR_DAT_057f67a8);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057c4090);
    FUN_012d0dc8(PTR_DAT_057e5848);
    FUN_012d0dc8(PTR_DAT_057cfb88);
    FUN_012d0dc8(PTR_DAT_057c8bb0);
    bRam0000000005c2864a = 1;
  }
  uVar10 = UnityEngine_Time__get_realtimeSinceStartup_40862bc(0);
  *(undefined4 *)(param_1 + 0x108) = uVar10;
  lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  puVar2 = PTR_DAT_057c8bb0;
  if (lVar3 != 0) {
    System_Collections_Generic_List_int____ctor_204e880(lVar3,*(undefined8 *)PTR_DAT_057c4090);
    *(long *)(param_1 + 0x100) = lVar3;
    FUN_012d0d74(param_1 + 0x100,lVar3);
    lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
    if (lVar3 != 0) {
      System_Collections_Generic_List_LevelStats_RainbowUsage____ctor_284363c
                (lVar3,*(undefined8 *)PTR_DAT_057e5848);
      *(long *)(param_1 + 0x110) = lVar3;
      FUN_012d0d74(param_1 + 0x110,lVar3);
      if (*(long *)(param_1 + 0x18) != 0) {
        lVar3 = *(long *)(*(long *)(param_1 + 0x18) + 0x10);
        uVar4 = Modules_Contexts_GamePlay_Levels_Scripts_LevelStats__GetLevelType_1f19570(param_1);
        *(undefined8 *)(param_1 + 0x40) = uVar4;
        FUN_012d0d74((undefined8 *)(param_1 + 0x40),uVar4);
        if (*(long *)(param_1 + 0x20) != 0) {
          lVar7 = *(long *)(*(long *)(param_1 + 0x20) + 0x18);
          if (lVar7 == 0) {
            uVar10 = 0xffffffff;
          }
          else {
            uVar10 = *(undefined4 *)(lVar7 + 0x40);
          }
          *(undefined4 *)(param_1 + 0x48) = uVar10;
          if (lVar3 != 0) {
            uVar10 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetQuestionMarkCount_2f6b3d0
                               (lVar3,0);
            *(undefined4 *)(param_1 + 0x58) = uVar10;
            uVar10 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetBlockerCount_2f6b4d0
                               (lVar3,6,0);
            *(undefined4 *)(param_1 + 0x5c) = uVar10;
            uVar10 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetBlockerCount_2f6b4d0
                               (lVar3,5,0);
            *(undefined4 *)(param_1 + 0x60) = uVar10;
            uVar10 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetBlockerCount_2f6b4d0
                               (lVar3,4,0);
            *(undefined4 *)(param_1 + 100) = uVar10;
            uVar10 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetBlockerCount_2f6b4d0
                               (lVar3,7,0);
            *(undefined4 *)(param_1 + 0x68) = uVar10;
            uVar10 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetBlockerCount_2f6b4d0
                               (lVar3,8,0);
            *(undefined4 *)(param_1 + 0x6c) = uVar10;
            uVar10 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetBlockerCount_2f6b4d0
                               (lVar3,9,0);
            *(undefined4 *)(param_1 + 0x70) = uVar10;
            uVar10 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetBlockerCount_2f6b4d0
                               (lVar3,10,0);
            *(undefined4 *)(param_1 + 0x74) = uVar10;
            uVar10 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetBlockerCount_2f6b4d0
                               (lVar3,0xc,0);
            *(undefined4 *)(param_1 + 0x78) = uVar10;
            uVar10 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetBlockerCount_2f6b4d0
                               (lVar3,0xe,0);
            *(undefined4 *)(param_1 + 0x7c) = uVar10;
            puVar2 = PTR_DAT_0576aae0;
            if (*(long *)(param_1 + 0x20) != 0) {
              *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
              FUN_012d0d74();
              if (((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
                  (lVar3 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar3 != 0)) &&
                 (plVar5 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                             (lVar3,*(undefined8 *)PTR_DAT_057a1e60),
                 puVar1 = PTR_DAT_057636d0, plVar5 != (long *)0x0)) {
                lVar3 = *plVar5;
                uVar8 = (ulong)*(ushort *)(lVar3 + 0x12a);
                if (uVar8 != 0) {
                  piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_057636d0) {
                      puVar6 = (undefined8 *)(lVar3 + (long)(*piVar9 + 1) * 0x10 + 0x138);
                      goto LAB_02019380;
                    }
                    uVar8 = uVar8 - 1;
                    piVar9 = piVar9 + 4;
                  } while (uVar8 != 0);
                }
                puVar6 = (undefined8 *)FUN_0131971c(plVar5,*(long *)PTR_DAT_057636d0,1);
LAB_02019380:
                uVar10 = (*(code *)*puVar6)(plVar5,puVar6[1]);
                *(undefined4 *)(param_1 + 0x30) = uVar10;
                lVar7 = *plVar5;
                lVar3 = *(long *)puVar1;
                uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
                if (uVar8 != 0) {
                  piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar9 + -2) == lVar3) {
                      puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 0x21) * 0x10 + 0x138);
                      goto LAB_020193e0;
                    }
                    uVar8 = uVar8 - 1;
                    piVar9 = piVar9 + 4;
                  } while (uVar8 != 0);
                }
                puVar6 = (undefined8 *)FUN_0131971c(plVar5,lVar3,0x21);
LAB_020193e0:
                uVar10 = (*(code *)*puVar6)(plVar5,puVar6[1]);
                *(undefined4 *)(param_1 + 0x34) = uVar10;
                lVar7 = *plVar5;
                lVar3 = *(long *)puVar1;
                uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
                if (uVar8 != 0) {
                  piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar9 + -2) == lVar3) {
                      puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 0x19) * 0x10 + 0x138);
                      goto LAB_02019440;
                    }
                    uVar8 = uVar8 - 1;
                    piVar9 = piVar9 + 4;
                  } while (uVar8 != 0);
                }
                puVar6 = (undefined8 *)FUN_0131971c(plVar5,lVar3,0x19);
LAB_02019440:
                uVar10 = (*(code *)*puVar6)(plVar5,puVar6[1]);
                *(undefined4 *)(param_1 + 0x38) = uVar10;
                *(undefined4 *)(param_1 + 0xd4) = 0;
                *(undefined1 *)(param_1 + 0x10c) = 0;
                if (*(long *)(param_1 + 0x20) != 0) {
                  *(undefined1 *)(param_1 + 0xe8) =
                       *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x48);
                  if (((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
                      (lVar3 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar3 != 0))
                     && (lVar3 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                           (lVar3,*(undefined8 *)PTR_DAT_057fe590), lVar3 != 0)) {
                    uVar8 = Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService__IsEligible_375d358
                                      (lVar3,0);
                    if ((uVar8 & 1) == 0) {
                      uVar10 = 0;
                    }
                    else {
                      uVar10 = Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService__GetProgress_375d714
                                         (lVar3,0);
                    }
                    *(undefined4 *)(param_1 + 0xe4) = uVar10;
                    if (*(long *)(param_1 + 0x20) != 0) {
                      *(undefined8 *)(param_1 + 0xf8) =
                           *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x4c);
                      if (((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
                          (lVar3 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar3 != 0
                          )) && (lVar3 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                                   (lVar3,*(undefined8 *)PTR_DAT_057f67a8),
                                lVar3 != 0)) {
                        uVar8 = Modules_Contexts_Home_Snitch_Scripts_SnitchService__IsEligible_246d454
                                          (lVar3,0);
                        if ((uVar8 & 1) == 0) {
                          uVar10 = 0xffffffff;
                        }
                        else {
                          uVar10 = Modules_Contexts_Home_Snitch_Scripts_SnitchService__GetProgress_246d528
                                             (lVar3,0);
                        }
                        lVar3 = *(long *)(param_1 + 0x20);
                        *(undefined4 *)(param_1 + 0xec) = uVar10;
                        if (lVar3 != 0) {
                          if (*(long *)(lVar3 + 0x20) == 0) {
                            if (*(char *)(param_1 + 0xe0) == '\0') {
                              return;
                            }
                          }
                          else {
                            uVar4 = *(undefined8 *)(lVar3 + 0x40);
                            *(undefined1 *)(param_1 + 0xe0) = 1;
                            *(undefined8 *)(param_1 + 0xd8) = uVar4;
                          }
                          if (*(long *)(lVar3 + 0x20) != 0) {
                            *(undefined8 *)(param_1 + 0xcc) =
                                 *(undefined8 *)(*(long *)(lVar3 + 0x20) + 0x1c);
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
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

