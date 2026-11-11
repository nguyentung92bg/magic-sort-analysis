/* IL2CPP: Modules.Contexts.GamePlay.Systems.Scripts.InputSystemNS.Regular.RegularSelectionAnimationHandler$$ApplySelection
void Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Regular_RegularSelectionAnimationHandler__ApplySelection (Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Regular_RegularSelectionAnimationHandler_o* __this, Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Selection_o* selection, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Systems.Scripts.InputSystemNS.Regular.RegularSelectionAnimationHandler$$ApplySelection
   void 
   Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Regular_RegularSelectionAnimationHandler__ApplySelection
   (Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Regular_RegularSelectionAnimationHandler_o*
   __this, Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Selection_o* selection, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Regular_RegularSelectionAnimationHandler__ApplySelection_16139c0
               (long param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long *plVar9;
  ulong uVar10;
  int *piVar11;
  undefined8 uVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  puVar2 = PTR_DAT_057b8520;
  if ((bRam0000000005c24493 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_057d5228);
                    /* try { // try from 01713a14 to 01813a3b has its CatchHandler @ 01713b68 */
    FUN_012d0dc8(PTR_DAT_05812de8);
    FUN_012d0dc8(PTR_DAT_05790438);
    FUN_012d0dc8(PTR_DAT_057b8520);
    bRam0000000005c24493 = 1;
  }
  puVar3 = PTR_DAT_05790438;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar4 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar3);
  if (lVar4 != 0) {
    Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar4,0);
    if (*(long *)(param_1 + 0x20) != 0) {
                    /* try { // try from 01713a70 to 01813a97 has its CatchHandler @ 01713b64 */
      DG_Tweening_TweenExtensions__Kill_1edd6a4(*(long *)(param_1 + 0x20),0,0);
    }
    if (param_2 != 0) {
      lVar4 = *(long *)(param_2 + 0x28);
      uVar1 = *(undefined8 *)(param_2 + 0x30);
      uVar7 = *(undefined8 *)(param_2 + 0x10);
      uVar12 = *(undefined8 *)(param_2 + 0x18);
      lVar5 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_0578b048);
      puVar2 = PTR_DAT_057d5228;
      if (lVar5 != 0) {
                    /* try { // try from 01713aa8 to 01813ac7 has its CatchHandler @ 01713b6c */
        System_Action___ctor_21239bc(lVar5,param_2,*(undefined8 *)PTR_DAT_05812de8,0);
        uVar14 = *(undefined4 *)(param_1 + 0x10);
        uVar15 = *(undefined4 *)(param_1 + 0x14);
                    /* try { // try from 01713ac8 to 01813b47 has its CatchHandler @ 01713894 */
        uVar16 = *(undefined4 *)(param_1 + 0x18);
        lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
        if (lVar6 != 0) {
          Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Regular_SelectionSuccessAnimation___ctor_1613b50
                    (uVar14,uVar15,uVar16,lVar6,lVar4,uVar7,uVar12,uVar1,lVar5,param_2);
          *(undefined1 *)(lVar6 + 0x160) = 1;
          if (((*(long *)(param_2 + 0x30) != 0) &&
              (lVar5 = *(long *)(*(long *)(param_2 + 0x30) + 0x10), lVar5 != 0)) && (lVar4 != 0)) {
            uVar7 = *(undefined8 *)(param_2 + 0x10);
            uVar1 = *(undefined8 *)(param_2 + 0x18);
            uVar14 = *(undefined4 *)(lVar5 + 0x70);
                    /* try { // try from 01713b48 to 01813b4b has its CatchHandler @ 01713b60 */
            if ((bRam0000000005c3091b & 1) == 0) {
              FUN_012d0dc8(PTR_DAT_05774380,uVar7,uVar1,uVar14,0);
              FUN_012d0dc8(PTR_DAT_05802430);
              FUN_012d0dc8(PTR_DAT_0576c200);
              bRam0000000005c3091b = 1;
            }
            puVar3 = PTR_DAT_05802430;
            puVar2 = PTR_DAT_0576c200;
            lVar5 = *(long *)(lVar4 + 0x20);
            if (lVar5 != 0) {
              iVar13 = 0;
              do {
                if (*(int *)(lVar5 + 0x18) <= iVar13) {
                  uVar12 = *(undefined8 *)(lVar4 + 0x90);
                  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    thunk_FUN_0130472c();
                  }
                  uVar10 = UnityEngine_Object__op_Inequality_408e110(uVar12,0,0);
                  if ((uVar10 & 1) == 0) {
                    return;
                  }
                  lVar4 = *(long *)(lVar4 + 0x90);
                  if (lVar4 != 0) {
                    if ((bRam0000000005c2970f & 1) == 0) {
                      FUN_012d0dc8(PTR_DAT_057c54b8,uVar7,uVar1,0);
                      FUN_012d0dc8(PTR_DAT_05815f90);
                      FUN_012d0dc8(PTR_DAT_057b8520);
                      bRam0000000005c2970f = 1;
                    }
                    uVar10 = Modules_Contexts_GamePlay_SuperCharger_Scripts_SuperChargerInGameManager__IsEnabled_20e7344
                                       (lVar4);
                    puVar2 = PTR_DAT_057c54b8;
                    if ((uVar10 & 1) == 0) {
                      return;
                    }
                    if (0 < *(int *)(lVar4 + 0x68)) goto LAB_021e76c0;
                    plVar9 = *(long **)(lVar4 + 0x60);
                    if (plVar9 == (long *)0x0) goto LAB_021e77f8;
                    lVar5 = *plVar9;
                    uVar10 = (ulong)*(ushort *)(lVar5 + 0x12a);
                    if (uVar10 == 0) goto LAB_021e7688;
                    piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                    goto LAB_021e7670;
                  }
                  break;
                }
                plVar9 = (long *)System_Collections_Generic_List_object___get_Item_21fc76c
                                           (lVar5,iVar13,*(undefined8 *)puVar3);
                if (plVar9 == (long *)0x0) break;
                if ((char)plVar9[8] == '\0') {
                  (**(code **)(*plVar9 + 0x2e8))
                            (plVar9,uVar7,uVar1,uVar14,*(undefined8 *)(*plVar9 + 0x2f0));
                }
                lVar5 = *(long *)(lVar4 + 0x20);
                iVar13 = iVar13 + 1;
              } while (lVar5 != 0);
            }
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 01713b4c to 01813b4f has its CatchHandler @ 01713b5c */
  FUN_012d0ef0();
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_021e7670:
    if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_057c54b8) {
      puVar8 = (undefined8 *)(lVar5 + (long)(*piVar11 + 4) * 0x10 + 0x138);
      goto LAB_021e76a8;
    }
  }
LAB_021e7688:
  puVar8 = (undefined8 *)FUN_0131971c(plVar9,*(long *)PTR_DAT_057c54b8,4);
LAB_021e76a8:
  uVar10 = (*(code *)*puVar8)(plVar9,puVar8[1]);
  if ((uVar10 & 1) != 0) {
    uVar10 = Modules_Contexts_GamePlay_SuperCharger_Scripts_SuperChargerInGameManager__UseSuperCharger_20e7058
                       (lVar4);
  }
LAB_021e76c0:
  uVar10 = Modules_Contexts_GamePlay_SuperCharger_Scripts_SuperChargerInGameManager__CheckMoveIsRepetitive_20e77fc
                     (uVar10,uVar7,uVar1);
  if ((uVar10 & 1) == 0) {
    *(int *)(lVar4 + 0x94) = *(int *)(lVar4 + 0x94) + 1;
    if ((*(long *)(lVar4 + 0x88) == 0) ||
       (lVar5 = Modules_Contexts_Home_SuperCharger_Scripts_SuperChargerService__GetConfig_29704d4
                          (*(long *)(lVar4 + 0x88),0), lVar5 == 0)) {
LAB_021e77f8:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    if (*(char *)(lVar5 + 0x20) != '\0') {
      plVar9 = *(long **)(lVar4 + 0x60);
      if (plVar9 == (long *)0x0) goto LAB_021e77f8;
      lVar5 = *plVar9;
      uVar10 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
            puVar8 = (undefined8 *)(lVar5 + (long)(*piVar11 + 3) * 0x10 + 0x138);
            goto LAB_021e7750;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar8 = (undefined8 *)FUN_0131971c(plVar9,*(long *)puVar2,3);
LAB_021e7750:
      uVar10 = (*(code *)*puVar8)(plVar9,puVar8[1]);
      puVar3 = PTR_DAT_05815f90;
      puVar2 = PTR_DAT_057b8520;
      if (((uVar10 & 1) != 0) && (0 < *(int *)(lVar4 + 0x68))) {
        *(int *)(lVar4 + 0x68) = *(int *)(lVar4 + 0x68) + -1;
        Modules_Contexts_GamePlay_SuperCharger_Scripts_SuperChargerInGameManager__UpdateView_20e6dac
                  (lVar4,0);
        Modules_Contexts_GamePlay_SuperCharger_Scripts_SuperChargerInGameManager__TryStartTutorial_20e751c
                  (0,lVar4);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                          (*(undefined8 *)puVar3);
        if (lVar5 != 0) {
          Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar5,0);
        }
        if ((*(int *)(lVar4 + 0x68) < 1) &&
           (uVar10 = Modules_Contexts_GamePlay_SuperCharger_Scripts_SuperChargerInGameManager__ShouldUseAutomatically_20e6e80
                               (lVar4), (uVar10 & 1) != 0)) {
          if ((bRam0000000005c29711 & 1) == 0) {
            FUN_012d0dc8(PTR_DAT_057c54b8);
            bRam0000000005c29711 = 1;
          }
          if ((*(long *)(lVar4 + 0x88) != 0) &&
             (lVar5 = Modules_Contexts_Home_SuperCharger_Scripts_SuperChargerService__GetConfig_29704d4
                                (*(long *)(lVar4 + 0x88),0), lVar5 != 0)) {
            if (*(int *)(lVar5 + 0x14) == 2) {
              *(undefined1 *)(lVar4 + 0x92) = 1;
            }
            if (*(long *)(lVar4 + 0x20) != 0) {
              uVar7 = Modules_Contexts_GamePlay_SuperCharger_SuperChargerButtonUI__GetTrailPivot_1617f78
                                (*(long *)(lVar4 + 0x20),0);
              plVar9 = *(long **)(lVar4 + 0x60);
              if (plVar9 != (long *)0x0) {
                lVar4 = *plVar9;
                uVar10 = (ulong)*(ushort *)(lVar4 + 0x12a);
                if (uVar10 != 0) {
                  piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_057c54b8) {
                      puVar8 = (undefined8 *)(lVar4 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                      goto LAB_021e7120;
                    }
                    uVar10 = uVar10 - 1;
                    piVar11 = piVar11 + 4;
                  } while (uVar10 != 0);
                }
                puVar8 = (undefined8 *)FUN_0131971c(plVar9,*(long *)PTR_DAT_057c54b8,1);
LAB_021e7120:
                    /* WARNING: Could not recover jumptable at 0x021e7134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)*puVar8)(plVar9,uVar7,puVar8[1]);
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

