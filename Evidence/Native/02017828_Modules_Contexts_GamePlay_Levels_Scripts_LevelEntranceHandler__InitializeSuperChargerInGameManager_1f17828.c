/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelEntranceHandler$$InitializeSuperChargerInGameManager
void Modules_Contexts_GamePlay_Levels_Scripts_LevelEntranceHandler__InitializeSuperChargerInGameManager (Modules_Contexts_GamePlay_Levels_Scripts_LevelEntranceHandler_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Modules.Contexts.GamePlay.Levels.Scripts.LevelEntranceHandler$$InitializeSuperChargerInGameManager
   void 
   Modules_Contexts_GamePlay_Levels_Scripts_LevelEntranceHandler__InitializeSuperChargerInGameManager
   (Modules_Contexts_GamePlay_Levels_Scripts_LevelEntranceHandler_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Levels_Scripts_LevelEntranceHandler__InitializeSuperChargerInGameManager_1f17828
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  
  if ((bRam0000000005c28642 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c28642 = 1;
  }
  puVar2 = PTR_DAT_0576c200;
  if (*(long *)(param_1 + 0x40) != 0) {
    lVar5 = *(long *)(*(long *)(param_1 + 0x40) + 0x68);
    if (lVar5 != 0) {
      Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__HideBottle_249d8f8(lVar5,0);
    }
    uVar9 = *(undefined8 *)(param_1 + 0x38);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar6 = UnityEngine_Object__op_Inequality_408e110(uVar9,0,0);
    puVar2 = PTR_DAT_0576aae0;
    if ((uVar6 & 1) == 0) {
      return;
    }
    lVar5 = *(long *)(param_1 + 0x38);
    if (lVar5 != 0) {
      uVar9 = *(undefined8 *)(param_1 + 0x10);
      if ((bRam0000000005c29709 & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_05817288,uVar9,0);
        FUN_012d0dc8(PTR_DAT_0578b048);
        FUN_012d0dc8(PTR_DAT_057a0c88);
        FUN_012d0dc8(PTR_DAT_0576aae0);
        FUN_012d0dc8(PTR_DAT_057b99d0);
        FUN_012d0dc8(PTR_DAT_0577a308);
        FUN_012d0dc8(PTR_DAT_05805bc0);
        FUN_012d0dc8(PTR_DAT_057d6390);
        FUN_012d0dc8(PTR_DAT_0576abf8);
        FUN_012d0dc8(PTR_DAT_0575d980);
        FUN_012d0dc8(PTR_DAT_057ba338);
        FUN_012d0dc8(PTR_DAT_057b8520);
        FUN_012d0dc8(PTR_DAT_057aad30);
        FUN_012d0dc8(PTR_DAT_057e3a98);
        FUN_012d0dc8(PTR_DAT_0578bdd0);
        FUN_012d0dc8(PTR_DAT_05785818);
        FUN_012d0dc8(PTR_DAT_0576caa0);
        bRam0000000005c29709 = 1;
      }
      if ((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
         (lVar7 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar7 != 0)) {
        lVar7 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                          (lVar7,*(undefined8 *)PTR_DAT_057a0c88);
        plVar10 = (long *)(lVar5 + 0x88);
        *plVar10 = lVar7;
        FUN_012d0d74(plVar10,lVar7);
        if (*plVar10 != 0) {
          uVar6 = Modules_Contexts_Home_SuperCharger_Scripts_SuperChargerService__IsActive_296fea4
                            (*plVar10,0);
          if ((uVar6 & 1) == 0) {
            if ((*(long *)(lVar5 + 0x20) != 0) &&
               (lVar5 = UnityEngine_Component__get_gameObject_408b480(*(long *)(lVar5 + 0x20),0),
               lVar5 != 0)) {
              if (pcRam0000000005c3a388 == (code *)0x0) {
                pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
              }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam0000000005c3a388)(lVar5,0);
              return;
            }
          }
          else if (*plVar10 != 0) {
            uVar6 = Modules_Contexts_Home_SuperCharger_Scripts_SuperChargerService__HasInGameUI_2970624
                              (*plVar10,0);
            if ((uVar6 & 1) == 0) {
              if ((*(long *)(lVar5 + 0x20) == 0) ||
                 (lVar7 = UnityEngine_Component__get_gameObject_408b480(*(long *)(lVar5 + 0x20),0),
                 lVar7 == 0)) goto LAB_021e6aac;
              UnityEngine_GameObject__SetActive_408e318(lVar7,0,0);
              if ((*(long *)(lVar5 + 0x18) == 0) ||
                 (lVar7 = UnityEngine_Component__get_gameObject_408b480(*(long *)(lVar5 + 0x18),0),
                 lVar7 == 0)) goto LAB_021e6aac;
              UnityEngine_GameObject__SetActive_408e318(lVar7,0,0);
            }
            else {
              if ((*(long *)(lVar5 + 0x18) == 0) ||
                 (lVar7 = UnityEngine_Component__get_gameObject_408b480(*(long *)(lVar5 + 0x18),0),
                 lVar7 == 0)) goto LAB_021e6aac;
              UnityEngine_GameObject__SetActive_408e318(lVar7,1,0);
              if ((*(long *)(lVar5 + 0x20) == 0) ||
                 (lVar7 = UnityEngine_Component__get_gameObject_408b480(*(long *)(lVar5 + 0x20),0),
                 lVar7 == 0)) goto LAB_021e6aac;
              UnityEngine_GameObject__SetActive_408e318(lVar7,1,0);
              if ((*plVar10 == 0) ||
                 (lVar7 = Modules_Contexts_Home_SuperCharger_Scripts_SuperChargerService__GetConfig_29704d4
                                    (*plVar10,0), lVar7 == 0)) goto LAB_021e6aac;
              if (*(int *)(lVar7 + 0x14) == 6) {
                if (*(long *)(lVar5 + 0x20) == 0) goto LAB_021e6aac;
                lVar7 = UnityEngine_Component__get_transform_408b444(*(long *)(lVar5 + 0x20),0);
                if (cRam0000000005c230a9 == '\0') {
                  FUN_012d0dc8(PTR_DAT_05805c10);
                  cRam0000000005c230a9 = '\x01';
                }
                if (lVar7 == 0) goto LAB_021e6aac;
                lVar8 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
                UnityEngine_Transform__set_localScale_40932d0
                          (*(float *)(lVar8 + 0xc) * _UNK_04359fcc,
                           *(float *)(lVar8 + 0x10) * _UNK_04359fcc,
                           *(float *)(lVar8 + 0x14) * _UNK_04359fcc,lVar7,0);
              }
            }
            lVar7 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05805bc0);
            if (lVar7 != 0) {
              System_Collections_Generic_List_Int32Enum____ctor_20512f0
                        (lVar7,*(undefined8 *)PTR_DAT_057b99d0);
              *(long *)(lVar5 + 0x70) = lVar7;
              FUN_012d0d74((long *)(lVar5 + 0x70),lVar7);
              if ((*(long *)(lVar5 + 0x88) != 0) &&
                 (lVar7 = Modules_Contexts_Home_SuperCharger_Scripts_SuperChargerService__GetConfig_29704d4
                                    (*(long *)(lVar5 + 0x88),0), lVar7 != 0)) {
                *(undefined8 *)(lVar5 + 0x80) = *(undefined8 *)(lVar7 + 0x28);
                FUN_012d0d74();
                *(undefined8 *)(lVar5 + 0x58) = uVar9;
                FUN_012d0d74((undefined8 *)(lVar5 + 0x58),uVar9);
                uVar6 = Modules_Contexts_GamePlay_SuperCharger_Scripts_SuperChargerInGameManager__TryCreateStrategy_20e6ab0
                                  (lVar5);
                if ((uVar6 & 1) == 0) {
                  return;
                }
                if (*(long *)(lVar5 + 0x30) != 0) {
                  Modules_Contexts_GamePlay_SuperCharger_UI_SuperChargerTrailAnimationController__Initialize_20e5b10
                            ();
                  *(undefined4 *)(lVar5 + 0x78) = 0;
                  *(undefined4 *)(lVar5 + 0x94) = 0;
                  *(undefined4 *)(lVar5 + 0x98) = 0;
                  if (*(long *)(lVar5 + 0x80) != 0) {
                    uVar4 = System_Collections_Generic_List_int___get_Item_204edf0
                                      (*(long *)(lVar5 + 0x80),0,*(undefined8 *)PTR_DAT_0577a308);
                    *(undefined4 *)(lVar5 + 0x68) = uVar4;
                    Modules_Contexts_GamePlay_SuperCharger_Scripts_SuperChargerInGameManager__TryApplyInitialCharge_20e6c64
                              (lVar5);
                    if (*(long *)(lVar5 + 0x88) != 0) {
                      lVar8 = *(long *)(lVar5 + 0x20);
                      lVar7 = Modules_Contexts_Home_SuperCharger_Scripts_SuperChargerService__GetConfig_29704d4
                                        (*(long *)(lVar5 + 0x88),0);
                      puVar2 = PTR_DAT_057b8520;
                      if ((lVar7 != 0) && (lVar8 != 0)) {
                        Modules_Contexts_GamePlay_SuperCharger_SuperChargerButtonUI__Initialize_1617d18
                                  (lVar8,*(undefined4 *)(lVar7 + 0x14),0);
                        Modules_Contexts_GamePlay_SuperCharger_Scripts_SuperChargerInGameManager__UpdateView_20e6dac
                                  (lVar5,1);
                        uVar6 = Modules_Contexts_GamePlay_SuperCharger_Scripts_SuperChargerInGameManager__ShouldUseAutomatically_20e6e80
                                          (lVar5);
                        if ((uVar6 & 1) == 0) {
                          Modules_Contexts_GamePlay_SuperCharger_Scripts_SuperChargerInGameManager__ActivateButton_20e6ec4
                                    (lVar5);
                        }
                        *(undefined2 *)(lVar5 + 0x91) = 0;
                        puVar1 = PTR_DAT_057ba338;
                        puVar3 = PTR_DAT_0578b048;
                        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                          thunk_FUN_0130472c();
                        }
                        lVar7 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                                          (*(undefined8 *)puVar1);
                        lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
                        if ((lVar8 != 0) &&
                           (System_Action___ctor_21239bc
                                      (lVar8,lVar5,*(undefined8 *)PTR_DAT_0578bdd0,0),
                           puVar1 = PTR_DAT_057d6390, lVar7 != 0)) {
                          Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Subscribe_40e7098
                                    (lVar7,lVar8,0);
                          lVar7 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                                            (*(undefined8 *)puVar1);
                          lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
                          if ((lVar8 != 0) &&
                             (System_Action___ctor_21239bc
                                        (lVar8,lVar5,*(undefined8 *)PTR_DAT_057e3a98,0),
                             puVar1 = PTR_DAT_0575d980, lVar7 != 0)) {
                            Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Subscribe_40e7098
                                      (lVar7,lVar8,0);
                            lVar7 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                                              (*(undefined8 *)puVar1);
                            if (lVar7 != 0) {
                              lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
                              if (lVar8 == 0) goto LAB_021e6aac;
                              System_Action___ctor_21239bc
                                        (lVar8,lVar5,*(undefined8 *)PTR_DAT_05785818,0);
                              Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Subscribe_40e7098
                                        (lVar7,lVar8,0);
                            }
                            puVar3 = PTR_DAT_0576abf8;
                            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                              thunk_FUN_0130472c();
                            }
                            lVar7 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                                              (*(undefined8 *)puVar3);
                            if (lVar7 == 0) {
                              return;
                            }
                            lVar8 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05817288);
                            puVar2 = PTR_DAT_057aad30;
                            if (lVar8 != 0) {
                              System_Action_object____ctor_1647468
                                        (lVar8,lVar5,*(undefined8 *)PTR_DAT_0576caa0,0);
                    /* WARNING: Could not recover jumptable at 0x0343d3e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                              (**(code **)(*(long *)(*(long *)(*(long *)(*(long *)puVar2 + 0x20) +
                                                              0xc0) + 8) + 8))(lVar7,lVar8);
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
LAB_021e6aac:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

