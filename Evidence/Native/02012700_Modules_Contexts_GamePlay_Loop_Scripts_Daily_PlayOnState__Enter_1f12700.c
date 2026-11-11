/* IL2CPP: Modules.Contexts.GamePlay.Loop.Scripts.Daily.PlayOnState$$Enter
void Modules_Contexts_GamePlay_Loop_Scripts_Daily_PlayOnState__Enter (Modules_Contexts_GamePlay_Loop_Scripts_Daily_PlayOnState_o* __this, Modules_Infrastructure_FiniteStateMachine_StateArguments_o* stateArguments, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Loop.Scripts.Daily.PlayOnState$$Enter
   void Modules_Contexts_GamePlay_Loop_Scripts_Daily_PlayOnState__Enter
   (Modules_Contexts_GamePlay_Loop_Scripts_Daily_PlayOnState_o* __this,
   Modules_Infrastructure_FiniteStateMachine_StateArguments_o* stateArguments, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Loop_Scripts_Daily_PlayOnState__Enter_1f12700(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  long lVar25;
  long *plVar26;
  undefined8 *puVar27;
  long *plVar28;
  ulong uVar29;
  int *piVar30;
  long lVar31;
  undefined8 uVar32;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  puVar1 = PTR_DAT_057b8520;
  if ((bRam0000000005c28613 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057e8f70);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_0581aae8);
    FUN_012d0dc8(PTR_DAT_057620d8);
    FUN_012d0dc8(PTR_DAT_0576eb40);
    FUN_012d0dc8(PTR_DAT_057952f0);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057f81c0);
    bRam0000000005c28613 = 1;
  }
  puVar2 = PTR_DAT_0576eb40;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar25 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                     (*(undefined8 *)puVar2);
  puVar1 = PTR_DAT_057952f0;
  if (lVar25 != 0) {
    Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar25,0);
    lVar25 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                       (*(undefined8 *)puVar1);
    puVar1 = PTR_DAT_057620d8;
    if (lVar25 != 0) {
      Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar25,0);
      lVar25 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                         (*(undefined8 *)puVar1);
      puVar1 = PTR_DAT_0576aae0;
      if (lVar25 != 0) {
        Modules_Infrastructure_Common_Scripts_SignalNS_Signal_Int32Enum___Invoke_333d1f4
                  (lVar25,2,*(undefined8 *)PTR_DAT_057f81c0);
        if (((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
            (lVar25 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar25 != 0)) &&
           (plVar26 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                        (lVar25,*(undefined8 *)PTR_DAT_057e8f70),
           puVar1 = PTR_DAT_0581aae8, plVar26 != (long *)0x0)) {
          lVar25 = *plVar26;
          uVar29 = (ulong)*(ushort *)(lVar25 + 0x12a);
          if (uVar29 != 0) {
            piVar30 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
            do {
              if (*(long *)(piVar30 + -2) == *(long *)PTR_DAT_0581aae8) {
                puVar27 = (undefined8 *)(lVar25 + (long)(*piVar30 + 10) * 0x10 + 0x138);
                goto LAB_02012884;
              }
              uVar29 = uVar29 - 1;
              piVar30 = piVar30 + 4;
            } while (uVar29 != 0);
          }
          puVar27 = (undefined8 *)FUN_0131971c(plVar26,*(long *)PTR_DAT_0581aae8,10);
LAB_02012884:
          plVar28 = (long *)(*(code *)*puVar27)(plVar26,puVar27[1]);
          if (plVar28 != (long *)0x0) {
            uVar9 = (**(code **)(*plVar28 + 0x1c8))(plVar28,*(undefined8 *)(*plVar28 + 0x1d0));
            lVar25 = *plVar26;
            uVar29 = (ulong)*(ushort *)(lVar25 + 0x12a);
            if (uVar29 != 0) {
              piVar30 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
              do {
                if (*(long *)(piVar30 + -2) == *(long *)puVar1) {
                  puVar27 = (undefined8 *)(lVar25 + (long)(*piVar30 + 5) * 0x10 + 0x138);
                  goto LAB_020128f4;
                }
                uVar29 = uVar29 - 1;
                piVar30 = piVar30 + 4;
              } while (uVar29 != 0);
            }
            puVar27 = (undefined8 *)FUN_0131971c(plVar26,*(long *)puVar1,5);
LAB_020128f4:
            (*(code *)*puVar27)(plVar26,0,puVar27[1]);
            if (cRam0000000005c230a8 == '\0') {
              FUN_012d0dc8(PTR_DAT_057ece38);
              cRam0000000005c230a8 = '\x01';
            }
            puVar1 = PTR_DAT_0576aae0;
            lVar25 = **(long **)(*(long *)PTR_DAT_057ece38 + 0xb8);
            if (lVar25 != 0) {
              if ((bRam0000000005c2376c & 1) == 0) {
                FUN_012d0dc8(PTR_DAT_0575f9f0,5,uVar9,0);
                FUN_012d0dc8(PTR_DAT_05802ff8);
                FUN_012d0dc8(PTR_DAT_057e8f70);
                FUN_012d0dc8(PTR_DAT_0576aae0);
                FUN_012d0dc8(PTR_DAT_0579fa30);
                FUN_012d0dc8(PTR_DAT_057c8a60);
                FUN_012d0dc8(PTR_DAT_0581aae8);
                FUN_012d0dc8(PTR_DAT_057db748);
                FUN_012d0dc8(PTR_DAT_05768e10);
                FUN_012d0dc8(PTR_DAT_0580a230);
                FUN_012d0dc8(PTR_DAT_057a3040);
                FUN_012d0dc8(PTR_DAT_057ef900);
                FUN_012d0dc8(PTR_DAT_0580ac18);
                FUN_012d0dc8(PTR_DAT_057c3218);
                FUN_012d0dc8(PTR_DAT_05787810);
                FUN_012d0dc8(PTR_DAT_0577f918);
                FUN_012d0dc8(PTR_DAT_057e5598);
                FUN_012d0dc8(PTR_DAT_057a8558);
                FUN_012d0dc8(PTR_DAT_058120e8);
                FUN_012d0dc8(PTR_DAT_057f16f8);
                FUN_012d0dc8(PTR_DAT_057bb470);
                FUN_012d0dc8(PTR_DAT_057a3170);
                FUN_012d0dc8(PTR_DAT_057fe5c0);
                FUN_012d0dc8(PTR_DAT_0575e318);
                FUN_012d0dc8(PTR_DAT_05774390);
                FUN_012d0dc8(PTR_DAT_057caaf0);
                FUN_012d0dc8(PTR_DAT_05778280);
                bRam0000000005c2376c = 1;
              }
              if (((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
                  (lVar10 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar10 != 0)) &&
                 (plVar26 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                              (lVar10,*(undefined8 *)PTR_DAT_057e8f70),
                 plVar26 != (long *)0x0)) {
                lVar10 = *plVar26;
                uVar29 = (ulong)*(ushort *)(lVar10 + 0x12a);
                if (uVar29 != 0) {
                  piVar30 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar30 + -2) == *(long *)PTR_DAT_0581aae8) {
                      puVar27 = (undefined8 *)(lVar10 + (long)(*piVar30 + 10) * 0x10 + 0x138);
                      goto LAB_0154f3f0;
                    }
                    uVar29 = uVar29 - 1;
                    piVar30 = piVar30 + 4;
                  } while (uVar29 != 0);
                }
                puVar27 = (undefined8 *)FUN_0131971c(plVar26,*(long *)PTR_DAT_0581aae8,10);
LAB_0154f3f0:
                lVar10 = (*(code *)*puVar27)(plVar26,puVar27[1]);
                if (lVar10 != 0) {
                  lVar31 = *(long *)(lVar10 + 0x20);
                  lVar10 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057c8a60);
                  puVar3 = PTR_DAT_0580ac18;
                  puVar5 = PTR_DAT_057db748;
                  puVar2 = PTR_DAT_057bb470;
                  puVar1 = PTR_DAT_05768e10;
                  if (lVar10 != 0) {
                    Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                              (lVar10,*(undefined8 *)PTR_DAT_0575e318,0);
                    uStack_64 = 5;
                    uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_64);
                    Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                              (lVar10,*(undefined8 *)puVar2,uVar11,0);
                    uStack_88 = *(undefined8 *)puVar1;
                    uStack_80 = 0xffffffffffffffff;
                    uStack_78 = uVar9;
                    uVar11 = System_Enum__ToString_23a4eac(&uStack_88,0);
                    Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                              (lVar10,*(undefined8 *)puVar3,uVar11,0);
                    puVar8 = PTR_DAT_05802ff8;
                    puVar4 = PTR_DAT_057caaf0;
                    puVar3 = PTR_DAT_0579fa30;
                    puVar2 = PTR_DAT_05774390;
                    if (lVar31 != 0) {
                      uVar11 = Modules_Contexts_GamePlay_Levels_Scripts_LevelStats__GetDailyLevelStats_1f1a0d4
                                         (lVar31,5,0);
                      Modules_Contexts_Application_Events_Scripts_Event__AddDatas_1cc6390
                                (lVar10,uVar11,0);
                      uVar11 = Modules_Contexts_GamePlay_Levels_Scripts_LevelStats__GetDailyLevelStats_1f1a0d4
                                         (lVar31,5,0);
                      uStack_a0 = *(undefined8 *)puVar1;
                      uStack_98 = 0xffffffffffffffff;
                      uStack_90 = uVar9;
                      uVar12 = System_Enum__ToString_23a4eac(&uStack_a0,0);
                      uStack_68 = 0;
                      uVar13 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_68);
                      uVar13 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                         (uVar11,*(undefined8 *)puVar4,uVar13,*(undefined8 *)puVar8)
                      ;
                      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                        thunk_FUN_0130472c(*(long *)puVar3);
                      }
                      uVar13 = System_Convert__ToInt64_2130754(uVar13,0);
                      uStack_a4 = 0;
                      uVar14 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_a4);
                      uVar14 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                         (uVar11,*(undefined8 *)PTR_DAT_057f16f8,uVar14,
                                          *(undefined8 *)puVar8);
                      uVar14 = System_Convert__ToInt64_2130754(uVar14,0);
                      plVar26 = (long *)System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                                  (uVar11,*(undefined8 *)PTR_DAT_05778280,
                                                   *(undefined8 *)puVar2,*(undefined8 *)puVar8);
                      puVar7 = PTR_DAT_057fe5c0;
                      puVar6 = PTR_DAT_057ef900;
                      puVar4 = PTR_DAT_057a3170;
                      puVar3 = PTR_DAT_05787810;
                      puVar1 = PTR_DAT_0577f918;
                      if (plVar26 != (long *)0x0) {
                        uVar15 = (**(code **)(*plVar26 + 0x168))
                                           (plVar26,*(undefined8 *)(*plVar26 + 0x170));
                        uStack_a8 = 0;
                        uVar16 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_a8);
                        uVar16 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                           (uVar11,*(undefined8 *)puVar6,uVar16,
                                            *(undefined8 *)puVar8);
                        uVar16 = System_Convert__ToInt64_2130754(uVar16,0);
                        uStack_ac = 0;
                        uVar17 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_ac);
                        uVar17 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                           (uVar11,*(undefined8 *)puVar4,uVar17,
                                            *(undefined8 *)puVar8);
                        uVar17 = System_Convert__ToInt64_2130754(uVar17,0);
                        uStack_b0 = 0;
                        uVar18 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_b0);
                        uVar18 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                           (uVar11,*(undefined8 *)puVar7,uVar18,
                                            *(undefined8 *)puVar8);
                        uVar18 = System_Convert__ToInt64_2130754(uVar18,0);
                        uStack_b4 = 0;
                        uVar19 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_b4);
                        uVar19 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                           (uVar11,*(undefined8 *)puVar3,uVar19,
                                            *(undefined8 *)puVar8);
                        uVar19 = System_Convert__ToInt64_2130754(uVar19,0);
                        plVar26 = (long *)System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                                    (uVar11,*(undefined8 *)puVar1,
                                                     *(undefined8 *)puVar2,*(undefined8 *)puVar8);
                        puVar1 = PTR_DAT_058120e8;
                        if (plVar26 != (long *)0x0) {
                          uVar20 = (**(code **)(*plVar26 + 0x168))
                                             (plVar26,*(undefined8 *)(*plVar26 + 0x170));
                          plVar26 = (long *)System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                                      (uVar11,*(undefined8 *)puVar1,
                                                       *(undefined8 *)puVar2,*(undefined8 *)puVar8);
                          puVar4 = PTR_DAT_057c3218;
                          puVar3 = PTR_DAT_057a8558;
                          puVar1 = PTR_DAT_057a3040;
                          if (plVar26 != (long *)0x0) {
                            uVar21 = (**(code **)(*plVar26 + 0x168))
                                               (plVar26,*(undefined8 *)(*plVar26 + 0x170));
                            uStack_b8 = 0;
                            uVar22 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_b8);
                            uVar22 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                               (uVar11,*(undefined8 *)puVar1,uVar22,
                                                *(undefined8 *)puVar8);
                            uVar22 = System_Convert__ToInt64_2130754(uVar22,0);
                            uStack_bc = 0;
                            uVar23 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_bc);
                            uVar23 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                               (uVar11,*(undefined8 *)puVar4,uVar23,
                                                *(undefined8 *)puVar8);
                            uVar23 = System_Convert__ToInt64_2130754(uVar23,0);
                            uStack_c0 = 0;
                            uVar24 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_c0);
                            uVar24 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                               (uVar11,*(undefined8 *)puVar3,uVar24,
                                                *(undefined8 *)puVar8);
                            uVar32 = System_Convert__ToDouble_21312e0(uVar24,0);
                            uStack_c4 = 0;
                            uVar24 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_c4);
                            uVar24 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                               (uVar11,*(undefined8 *)PTR_DAT_0580a230,uVar24,
                                                *(undefined8 *)puVar8);
                            uVar24 = System_Convert__ToInt64_2130754(uVar24,0);
                            plVar26 = (long *)System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                                        (uVar11,*(undefined8 *)PTR_DAT_057e5598,
                                                         *(undefined8 *)puVar2,*(undefined8 *)puVar8
                                                        );
                            puVar1 = PTR_DAT_0575f9f0;
                            if (plVar26 != (long *)0x0) {
                              uVar11 = (**(code **)(*plVar26 + 0x168))
                                                 (plVar26,*(undefined8 *)(*plVar26 + 0x170));
                              uVar11 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__DailyLevel_2db85d0
                                                 (uVar32,5,uVar12,uVar13,uVar14,uVar15,uVar16,uVar17
                                                  ,uVar18,uVar19,uVar20,uVar21,uVar22,uVar23,uVar24,
                                                  uVar11,0);
                              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                                thunk_FUN_0130472c(*(long *)puVar1);
                              }
                              GrandSDK_Analytics_Analytics__Track_2b38d30(uVar11,0);
                              Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4
                                        (lVar25,lVar10);
                              return;
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
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

