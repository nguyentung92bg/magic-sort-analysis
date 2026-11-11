/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$OnAnyMoveStarted
void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__OnAnyMoveStarted (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* originBottle, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* targetBottle, int32_t waterColorId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$OnAnyMoveStarted
   void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__OnAnyMoveStarted
   (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* originBottle,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* targetBottle, int32_t
   waterColorId, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__OnAnyMoveStarted_2f6af38
               (long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  undefined8 uVar9;
  int iVar10;
  
  if ((bRam0000000005c3091b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05774380);
    FUN_012d0dc8(PTR_DAT_05802430);
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c3091b = 1;
  }
  puVar2 = PTR_DAT_05802430;
  puVar1 = PTR_DAT_0576c200;
  lVar4 = *(long *)(param_1 + 0x20);
  if (lVar4 != 0) {
    iVar10 = 0;
    do {
      if (*(int *)(lVar4 + 0x18) <= iVar10) {
        uVar9 = *(undefined8 *)(param_1 + 0x90);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        uVar6 = UnityEngine_Object__op_Inequality_408e110(uVar9,0,0);
        if ((uVar6 & 1) == 0) {
          return;
        }
        lVar4 = *(long *)(param_1 + 0x90);
        if (lVar4 != 0) {
          if ((bRam0000000005c2970f & 1) == 0) {
            FUN_012d0dc8(PTR_DAT_057c54b8,param_2,param_3,0);
            FUN_012d0dc8(PTR_DAT_05815f90);
            FUN_012d0dc8(PTR_DAT_057b8520);
            bRam0000000005c2970f = 1;
          }
          uVar6 = Modules_Contexts_GamePlay_SuperCharger_Scripts_SuperChargerInGameManager__IsEnabled_20e7344
                            (lVar4);
          puVar1 = PTR_DAT_057c54b8;
          if ((uVar6 & 1) == 0) {
            return;
          }
          if (0 < *(int *)(lVar4 + 0x68)) goto LAB_021e76c0;
          plVar5 = *(long **)(lVar4 + 0x60);
          if (plVar5 == (long *)0x0) goto LAB_021e77f8;
          lVar7 = *plVar5;
          uVar6 = (ulong)*(ushort *)(lVar7 + 0x12a);
          if (uVar6 == 0) goto LAB_021e7688;
          piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          goto LAB_021e7670;
        }
        break;
      }
      plVar5 = (long *)System_Collections_Generic_List_object___get_Item_21fc76c
                                 (lVar4,iVar10,*(undefined8 *)puVar2);
      if (plVar5 == (long *)0x0) break;
      if ((char)plVar5[8] == '\0') {
        (**(code **)(*plVar5 + 0x2e8))
                  (plVar5,param_2,param_3,param_4,*(undefined8 *)(*plVar5 + 0x2f0));
      }
      lVar4 = *(long *)(param_1 + 0x20);
      iVar10 = iVar10 + 1;
    } while (lVar4 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar8 = piVar8 + 4;
    if (uVar6 == 0) break;
LAB_021e7670:
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_057c54b8) {
      puVar3 = (undefined8 *)(lVar7 + (long)(*piVar8 + 4) * 0x10 + 0x138);
      goto LAB_021e76a8;
    }
  }
LAB_021e7688:
  puVar3 = (undefined8 *)FUN_0131971c(plVar5,*(long *)PTR_DAT_057c54b8,4);
LAB_021e76a8:
  uVar6 = (*(code *)*puVar3)(plVar5,puVar3[1]);
  if ((uVar6 & 1) != 0) {
    uVar6 = Modules_Contexts_GamePlay_SuperCharger_Scripts_SuperChargerInGameManager__UseSuperCharger_20e7058
                      (lVar4);
  }
LAB_021e76c0:
  uVar6 = Modules_Contexts_GamePlay_SuperCharger_Scripts_SuperChargerInGameManager__CheckMoveIsRepetitive_20e77fc
                    (uVar6,param_2,param_3);
  if ((uVar6 & 1) == 0) {
    *(int *)(lVar4 + 0x94) = *(int *)(lVar4 + 0x94) + 1;
    if ((*(long *)(lVar4 + 0x88) == 0) ||
       (lVar7 = Modules_Contexts_Home_SuperCharger_Scripts_SuperChargerService__GetConfig_29704d4
                          (*(long *)(lVar4 + 0x88),0), lVar7 == 0)) {
LAB_021e77f8:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    if (*(char *)(lVar7 + 0x20) != '\0') {
      plVar5 = *(long **)(lVar4 + 0x60);
      if (plVar5 == (long *)0x0) goto LAB_021e77f8;
      lVar7 = *plVar5;
      uVar6 = (ulong)*(ushort *)(lVar7 + 0x12a);
      if (uVar6 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar7 + (long)(*piVar8 + 3) * 0x10 + 0x138);
            goto LAB_021e7750;
          }
          uVar6 = uVar6 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_0131971c(plVar5,*(long *)puVar1,3);
LAB_021e7750:
      uVar6 = (*(code *)*puVar3)(plVar5,puVar3[1]);
      puVar2 = PTR_DAT_05815f90;
      puVar1 = PTR_DAT_057b8520;
      if (((uVar6 & 1) != 0) && (0 < *(int *)(lVar4 + 0x68))) {
        *(int *)(lVar4 + 0x68) = *(int *)(lVar4 + 0x68) + -1;
        Modules_Contexts_GamePlay_SuperCharger_Scripts_SuperChargerInGameManager__UpdateView_20e6dac
                  (lVar4,0);
        Modules_Contexts_GamePlay_SuperCharger_Scripts_SuperChargerInGameManager__TryStartTutorial_20e751c
                  (0,lVar4);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        lVar7 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                          (*(undefined8 *)puVar2);
        if (lVar7 != 0) {
          Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar7,0);
        }
        if ((*(int *)(lVar4 + 0x68) < 1) &&
           (uVar6 = Modules_Contexts_GamePlay_SuperCharger_Scripts_SuperChargerInGameManager__ShouldUseAutomatically_20e6e80
                              (lVar4), (uVar6 & 1) != 0)) {
          if ((bRam0000000005c29711 & 1) == 0) {
            FUN_012d0dc8(PTR_DAT_057c54b8);
            bRam0000000005c29711 = 1;
          }
          if ((*(long *)(lVar4 + 0x88) != 0) &&
             (lVar7 = Modules_Contexts_Home_SuperCharger_Scripts_SuperChargerService__GetConfig_29704d4
                                (*(long *)(lVar4 + 0x88),0), lVar7 != 0)) {
            if (*(int *)(lVar7 + 0x14) == 2) {
              *(undefined1 *)(lVar4 + 0x92) = 1;
            }
            if (*(long *)(lVar4 + 0x20) != 0) {
              uVar9 = Modules_Contexts_GamePlay_SuperCharger_SuperChargerButtonUI__GetTrailPivot_1617f78
                                (*(long *)(lVar4 + 0x20),0);
              plVar5 = *(long **)(lVar4 + 0x60);
              if (plVar5 != (long *)0x0) {
                lVar4 = *plVar5;
                uVar6 = (ulong)*(ushort *)(lVar4 + 0x12a);
                if (uVar6 != 0) {
                  piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_057c54b8) {
                      puVar3 = (undefined8 *)(lVar4 + (long)(*piVar8 + 1) * 0x10 + 0x138);
                      goto LAB_021e7120;
                    }
                    uVar6 = uVar6 - 1;
                    piVar8 = piVar8 + 4;
                  } while (uVar6 != 0);
                }
                puVar3 = (undefined8 *)FUN_0131971c(plVar5,*(long *)PTR_DAT_057c54b8,1);
LAB_021e7120:
                    /* WARNING: Could not recover jumptable at 0x021e7134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)*puVar3)(plVar5,uVar9,puVar3[1]);
                return;
              }
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
      }
    }
  }
  return;
}

