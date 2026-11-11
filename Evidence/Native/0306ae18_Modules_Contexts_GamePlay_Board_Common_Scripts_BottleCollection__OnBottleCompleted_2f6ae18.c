/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$OnBottleCompleted
void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__OnBottleCompleted (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* completedBottle, int32_t waterColorId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$OnBottleCompleted
   void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__OnBottleCompleted
   (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* completedBottle, int32_t
   waterColorId, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__OnBottleCompleted_2f6ae18
               (long param_1,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  undefined8 uVar12;
  int iVar13;
  
  if ((bRam0000000005c3091a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05774380);
    FUN_012d0dc8(PTR_DAT_05802430);
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c3091a = 1;
  }
  puVar3 = PTR_DAT_05802430;
  puVar2 = PTR_DAT_0576c200;
  lVar6 = *(long *)(param_1 + 0x20);
  if (lVar6 != 0) {
    iVar13 = 0;
    do {
      if (*(int *)(lVar6 + 0x18) <= iVar13) {
        uVar12 = *(undefined8 *)(param_1 + 0x90);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        uVar8 = UnityEngine_Object__op_Inequality_408e110(uVar12,0,0);
        if ((uVar8 & 1) == 0) {
          return;
        }
        lVar6 = *(long *)(param_1 + 0x90);
        if (lVar6 != 0) {
          if ((bRam0000000005c2970e & 1) == 0) {
            FUN_012d0dc8(PTR_DAT_057c54b8,param_3,0);
            FUN_012d0dc8(PTR_DAT_05814878);
            FUN_012d0dc8(PTR_DAT_05815f90);
            FUN_012d0dc8(PTR_DAT_057b8520);
            bRam0000000005c2970e = 1;
          }
          uVar8 = Modules_Contexts_GamePlay_SuperCharger_Scripts_SuperChargerInGameManager__IsEnabled_20e7344
                            (lVar6);
          if ((uVar8 & 1) == 0) {
            return;
          }
          *(int *)(lVar6 + 0x98) = *(int *)(lVar6 + 0x98) + 1;
          if ((*(long *)(lVar6 + 0x88) == 0) ||
             (lVar4 = Modules_Contexts_Home_SuperCharger_Scripts_SuperChargerService__GetConfig_29704d4
                                (*(long *)(lVar6 + 0x88),0), lVar4 == 0)) goto LAB_021e7340;
          if (*(char *)(lVar4 + 0x20) != '\0') {
            return;
          }
          plVar7 = *(long **)(lVar6 + 0x60);
          if (plVar7 == (long *)0x0) goto LAB_021e7340;
          lVar4 = *plVar7;
          uVar8 = (ulong)*(ushort *)(lVar4 + 0x12a);
          if (uVar8 == 0) goto LAB_021e7204;
          piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          goto LAB_021e71ec;
        }
        break;
      }
      plVar7 = (long *)System_Collections_Generic_List_object___get_Item_21fc76c
                                 (lVar6,iVar13,*(undefined8 *)puVar3);
      if (plVar7 == (long *)0x0) break;
      if ((char)plVar7[8] == '\0') {
        (**(code **)(*plVar7 + 0x2d8))(plVar7,param_2,param_3,*(undefined8 *)(*plVar7 + 0x2e0));
      }
      lVar6 = *(long *)(param_1 + 0x20);
      iVar13 = iVar13 + 1;
    } while (lVar6 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar11 = piVar11 + 4;
    if (uVar8 == 0) break;
LAB_021e71ec:
    if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_057c54b8) {
      puVar5 = (undefined8 *)(lVar4 + (long)(*piVar11 + 3) * 0x10 + 0x138);
      goto LAB_021e7224;
    }
  }
LAB_021e7204:
  puVar5 = (undefined8 *)FUN_0131971c(plVar7,*(long *)PTR_DAT_057c54b8,3);
LAB_021e7224:
  uVar8 = (*(code *)*puVar5)(plVar7,puVar5[1]);
  if ((((uVar8 & 1) == 0) || (*(int *)(lVar6 + 0x68) < 1)) ||
     (uVar8 = Modules_Contexts_GamePlay_SuperCharger_Scripts_SuperChargerInGameManager__CountsTowardCharge_20e73dc
                        (lVar6,param_3), (uVar8 & 1) == 0)) {
    return;
  }
  lVar4 = *(long *)(lVar6 + 0x70);
  if (lVar4 != 0) {
    lVar9 = *(long *)(lVar4 + 0x10);
    lVar10 = *(long *)PTR_DAT_05814878;
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    puVar2 = PTR_DAT_057b8520;
    if (lVar9 != 0) {
      uVar1 = *(uint *)(lVar4 + 0x18);
      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = param_3;
      }
      else {
        (**(code **)(*(long *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x58) + 8))
                  (lVar4,param_3);
      }
      puVar3 = PTR_DAT_05815f90;
      *(int *)(lVar6 + 0x68) = *(int *)(lVar6 + 0x68) + -1;
      Modules_Contexts_GamePlay_SuperCharger_Scripts_SuperChargerInGameManager__UpdateView_20e6dac
                (lVar6,0);
      Modules_Contexts_GamePlay_SuperCharger_Scripts_SuperChargerInGameManager__TryStartTutorial_20e751c
                (0,lVar6);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      lVar4 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                        (*(undefined8 *)puVar3);
      if (lVar4 != 0) {
        Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar4,0);
      }
      if (0 < *(int *)(lVar6 + 0x68)) {
        return;
      }
      uVar8 = Modules_Contexts_GamePlay_SuperCharger_Scripts_SuperChargerInGameManager__ShouldUseAutomatically_20e6e80
                        (lVar6);
      if ((uVar8 & 1) == 0) {
        return;
      }
      if ((bRam0000000005c29711 & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_057c54b8);
        bRam0000000005c29711 = 1;
      }
      if ((*(long *)(lVar6 + 0x88) != 0) &&
         (lVar4 = Modules_Contexts_Home_SuperCharger_Scripts_SuperChargerService__GetConfig_29704d4
                            (*(long *)(lVar6 + 0x88),0), lVar4 != 0)) {
        if (*(int *)(lVar4 + 0x14) == 2) {
          *(undefined1 *)(lVar6 + 0x92) = 1;
        }
        if (*(long *)(lVar6 + 0x20) != 0) {
          uVar12 = Modules_Contexts_GamePlay_SuperCharger_SuperChargerButtonUI__GetTrailPivot_1617f78
                             (*(long *)(lVar6 + 0x20),0);
          plVar7 = *(long **)(lVar6 + 0x60);
          if (plVar7 != (long *)0x0) {
            lVar6 = *plVar7;
            uVar8 = (ulong)*(ushort *)(lVar6 + 0x12a);
            if (uVar8 != 0) {
              piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_057c54b8) {
                  puVar5 = (undefined8 *)(lVar6 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                  goto LAB_021e7120;
                }
                uVar8 = uVar8 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar8 != 0);
            }
            puVar5 = (undefined8 *)FUN_0131971c(plVar7,*(long *)PTR_DAT_057c54b8,1);
LAB_021e7120:
                    /* WARNING: Could not recover jumptable at 0x021e7134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)*puVar5)(plVar7,uVar12,puVar5[1]);
            return;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
LAB_021e7340:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

