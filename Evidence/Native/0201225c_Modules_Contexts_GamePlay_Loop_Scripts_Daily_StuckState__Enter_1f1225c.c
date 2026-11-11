/* IL2CPP: Modules.Contexts.GamePlay.Loop.Scripts.Daily.StuckState$$Enter
void Modules_Contexts_GamePlay_Loop_Scripts_Daily_StuckState__Enter (Modules_Contexts_GamePlay_Loop_Scripts_Daily_StuckState_o* __this, Modules_Infrastructure_FiniteStateMachine_StateArguments_o* stateArguments, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Loop.Scripts.Daily.StuckState$$Enter
   void Modules_Contexts_GamePlay_Loop_Scripts_Daily_StuckState__Enter
   (Modules_Contexts_GamePlay_Loop_Scripts_Daily_StuckState_o* __this,
   Modules_Infrastructure_FiniteStateMachine_StateArguments_o* stateArguments, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Loop_Scripts_Daily_StuckState__Enter_1f1225c
               (undefined8 param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
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
  long lVar23;
  long *plVar24;
  undefined8 *puVar25;
  ulong uVar26;
  int *piVar27;
  undefined4 uVar28;
  long lVar29;
  long lVar30;
  undefined8 uVar31;
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
  
  puVar2 = PTR_DAT_057b8520;
  if ((bRam0000000005c28610 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057e8f70);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_05780680);
    FUN_012d0dc8(PTR_DAT_0581aae8);
    FUN_012d0dc8(PTR_DAT_057c6288);
    FUN_012d0dc8(PTR_DAT_057f0e20);
    FUN_012d0dc8(PTR_DAT_0576f370);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_058078f0);
    FUN_012d0dc8(PTR_DAT_057ff190);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_05779458);
    FUN_012d0dc8(PTR_DAT_057810c0);
    bRam0000000005c28610 = 1;
  }
  puVar4 = PTR_DAT_0576f370;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar23 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                     (*(undefined8 *)puVar4);
  if (lVar23 != 0) {
    Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar23,0);
    puVar4 = PTR_DAT_057810c0;
    if (param_2 == (long *)0x0) {
      uVar28 = 1;
    }
    else {
      bVar1 = *(byte *)(*(long *)PTR_DAT_057ff190 + 300);
      if ((*(byte *)(*param_2 + 300) < bVar1) ||
         (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_057ff190)
         ) {
                    /* WARNING: Subroutine does not return */
        FUN_012d1288(param_2);
      }
      uVar28 = (undefined4)param_2[2];
    }
    lVar23 = *(long *)PTR_DAT_057810c0;
    if (*(int *)(lVar23 + 0xe0) == 0) {
      thunk_FUN_0130472c();
      lVar23 = *(long *)puVar4;
    }
    puVar3 = PTR_DAT_057606c8;
    lVar30 = *(long *)(*(long *)(lVar23 + 0xb8) + 8);
    if (lVar30 == 0) {
      if (*(int *)(lVar23 + 0xe0) == 0) {
        thunk_FUN_0130472c();
        lVar23 = *(long *)puVar4;
      }
      uVar31 = **(undefined8 **)(lVar23 + 0xb8);
      lVar30 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
      if (lVar30 == 0) goto LAB_020125a4;
      DG_Tweening_TweenCallback___ctor_1ed6da8(lVar30,uVar31,*(undefined8 *)PTR_DAT_05779458,0);
      plVar24 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
      *plVar24 = lVar30;
      FUN_012d0d74(plVar24,lVar30);
    }
    puVar4 = PTR_DAT_057c6288;
    DG_Tweening_DOVirtual__DelayedCall_1edcb38(0x3f000000,lVar30,1,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    lVar23 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                       (*(undefined8 *)puVar4);
    puVar2 = PTR_DAT_0576aae0;
    if (lVar23 != 0) {
      Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar23,0);
      if (((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
          (lVar23 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar23 != 0)) &&
         (plVar24 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                      (lVar23,*(undefined8 *)PTR_DAT_057e8f70),
         puVar4 = PTR_DAT_057f0e20, puVar2 = PTR_DAT_05780680, plVar24 != (long *)0x0)) {
        lVar23 = *plVar24;
        uVar26 = (ulong)*(ushort *)(lVar23 + 0x12a);
        if (uVar26 != 0) {
          piVar27 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
          do {
            if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_0581aae8) {
              puVar25 = (undefined8 *)(lVar23 + (long)(*piVar27 + 4) * 0x10 + 0x138);
              goto LAB_020124f8;
            }
            uVar26 = uVar26 - 1;
            piVar27 = piVar27 + 4;
          } while (uVar26 != 0);
        }
        puVar25 = (undefined8 *)FUN_0131971c(plVar24,*(long *)PTR_DAT_0581aae8,4);
LAB_020124f8:
        (*(code *)*puVar25)(plVar24,uVar28,puVar25[1]);
        lVar23 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                           (*(undefined8 *)puVar4);
        lVar30 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
        if ((lVar30 != 0) &&
           (Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpArguments___ctor_3e22834
                      (lVar30,uVar28,0), lVar23 != 0)) {
          Modules_Infrastructure_Common_Scripts_SignalNS_Signal_object___Invoke_333d418
                    (lVar23,lVar30,*(undefined8 *)PTR_DAT_058078f0);
          if (cRam0000000005c230a8 == '\0') {
            FUN_012d0dc8(PTR_DAT_057ece38);
            cRam0000000005c230a8 = '\x01';
          }
          puVar2 = PTR_DAT_0576aae0;
          lVar23 = **(long **)(*(long *)PTR_DAT_057ece38 + 0xb8);
          if (lVar23 != 0) {
            if ((bRam0000000005c2376c & 1) == 0) {
              FUN_012d0dc8(PTR_DAT_0575f9f0,4,uVar28,0);
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
            if (((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
                (lVar30 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar30 != 0)) &&
               (plVar24 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                            (lVar30,*(undefined8 *)PTR_DAT_057e8f70),
               plVar24 != (long *)0x0)) {
              lVar30 = *plVar24;
              uVar26 = (ulong)*(ushort *)(lVar30 + 0x12a);
              if (uVar26 != 0) {
                piVar27 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_0581aae8) {
                    puVar25 = (undefined8 *)(lVar30 + (long)(*piVar27 + 10) * 0x10 + 0x138);
                    goto LAB_0154f3f0;
                  }
                  uVar26 = uVar26 - 1;
                  piVar27 = piVar27 + 4;
                } while (uVar26 != 0);
              }
              puVar25 = (undefined8 *)FUN_0131971c(plVar24,*(long *)PTR_DAT_0581aae8,10);
LAB_0154f3f0:
              lVar30 = (*(code *)*puVar25)(plVar24,puVar25[1]);
              if (lVar30 != 0) {
                lVar29 = *(long *)(lVar30 + 0x20);
                lVar30 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057c8a60);
                puVar5 = PTR_DAT_0580ac18;
                puVar3 = PTR_DAT_057db748;
                puVar4 = PTR_DAT_057bb470;
                puVar2 = PTR_DAT_05768e10;
                if (lVar30 != 0) {
                  Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                            (lVar30,*(undefined8 *)PTR_DAT_0575e318,0);
                  uStack_64 = 4;
                  uVar31 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_64);
                  Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                            (lVar30,*(undefined8 *)puVar4,uVar31,0);
                  uStack_88 = *(undefined8 *)puVar2;
                  uStack_80 = 0xffffffffffffffff;
                  uStack_78 = uVar28;
                  uVar31 = System_Enum__ToString_23a4eac(&uStack_88,0);
                  Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                            (lVar30,*(undefined8 *)puVar5,uVar31,0);
                  puVar9 = PTR_DAT_05802ff8;
                  puVar6 = PTR_DAT_057caaf0;
                  puVar5 = PTR_DAT_0579fa30;
                  puVar4 = PTR_DAT_05774390;
                  if (lVar29 != 0) {
                    uVar31 = Modules_Contexts_GamePlay_Levels_Scripts_LevelStats__GetDailyLevelStats_1f1a0d4
                                       (lVar29,4,0);
                    Modules_Contexts_Application_Events_Scripts_Event__AddDatas_1cc6390
                              (lVar30,uVar31,0);
                    uVar31 = Modules_Contexts_GamePlay_Levels_Scripts_LevelStats__GetDailyLevelStats_1f1a0d4
                                       (lVar29,4,0);
                    uStack_a0 = *(undefined8 *)puVar2;
                    uStack_98 = 0xffffffffffffffff;
                    uStack_90 = uVar28;
                    uVar10 = System_Enum__ToString_23a4eac(&uStack_a0,0);
                    uStack_68 = 0;
                    uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_68);
                    uVar11 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                       (uVar31,*(undefined8 *)puVar6,uVar11,*(undefined8 *)puVar9);
                    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                      thunk_FUN_0130472c(*(long *)puVar5);
                    }
                    uVar11 = System_Convert__ToInt64_2130754(uVar11,0);
                    uStack_a4 = 0;
                    uVar12 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_a4);
                    uVar12 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                       (uVar31,*(undefined8 *)PTR_DAT_057f16f8,uVar12,
                                        *(undefined8 *)puVar9);
                    uVar12 = System_Convert__ToInt64_2130754(uVar12,0);
                    plVar24 = (long *)System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                                (uVar31,*(undefined8 *)PTR_DAT_05778280,
                                                 *(undefined8 *)puVar4,*(undefined8 *)puVar9);
                    puVar8 = PTR_DAT_057fe5c0;
                    puVar7 = PTR_DAT_057ef900;
                    puVar6 = PTR_DAT_057a3170;
                    puVar5 = PTR_DAT_05787810;
                    puVar2 = PTR_DAT_0577f918;
                    if (plVar24 != (long *)0x0) {
                      uVar13 = (**(code **)(*plVar24 + 0x168))
                                         (plVar24,*(undefined8 *)(*plVar24 + 0x170));
                      uStack_a8 = 0;
                      uVar14 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_a8);
                      uVar14 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                         (uVar31,*(undefined8 *)puVar7,uVar14,*(undefined8 *)puVar9)
                      ;
                      uVar14 = System_Convert__ToInt64_2130754(uVar14,0);
                      uStack_ac = 0;
                      uVar15 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_ac);
                      uVar15 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                         (uVar31,*(undefined8 *)puVar6,uVar15,*(undefined8 *)puVar9)
                      ;
                      uVar15 = System_Convert__ToInt64_2130754(uVar15,0);
                      uStack_b0 = 0;
                      uVar16 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_b0);
                      uVar16 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                         (uVar31,*(undefined8 *)puVar8,uVar16,*(undefined8 *)puVar9)
                      ;
                      uVar16 = System_Convert__ToInt64_2130754(uVar16,0);
                      uStack_b4 = 0;
                      uVar17 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_b4);
                      uVar17 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                         (uVar31,*(undefined8 *)puVar5,uVar17,*(undefined8 *)puVar9)
                      ;
                      uVar17 = System_Convert__ToInt64_2130754(uVar17,0);
                      plVar24 = (long *)System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                                  (uVar31,*(undefined8 *)puVar2,
                                                   *(undefined8 *)puVar4,*(undefined8 *)puVar9);
                      puVar2 = PTR_DAT_058120e8;
                      if (plVar24 != (long *)0x0) {
                        uVar18 = (**(code **)(*plVar24 + 0x168))
                                           (plVar24,*(undefined8 *)(*plVar24 + 0x170));
                        plVar24 = (long *)System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                                    (uVar31,*(undefined8 *)puVar2,
                                                     *(undefined8 *)puVar4,*(undefined8 *)puVar9);
                        puVar6 = PTR_DAT_057c3218;
                        puVar5 = PTR_DAT_057a8558;
                        puVar2 = PTR_DAT_057a3040;
                        if (plVar24 != (long *)0x0) {
                          uVar19 = (**(code **)(*plVar24 + 0x168))
                                             (plVar24,*(undefined8 *)(*plVar24 + 0x170));
                          uStack_b8 = 0;
                          uVar20 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_b8);
                          uVar20 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                             (uVar31,*(undefined8 *)puVar2,uVar20,
                                              *(undefined8 *)puVar9);
                          uVar20 = System_Convert__ToInt64_2130754(uVar20,0);
                          uStack_bc = 0;
                          uVar21 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_bc);
                          uVar21 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                             (uVar31,*(undefined8 *)puVar6,uVar21,
                                              *(undefined8 *)puVar9);
                          uVar21 = System_Convert__ToInt64_2130754(uVar21,0);
                          uStack_c0 = 0;
                          uVar22 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_c0);
                          uVar22 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                             (uVar31,*(undefined8 *)puVar5,uVar22,
                                              *(undefined8 *)puVar9);
                          uVar32 = System_Convert__ToDouble_21312e0(uVar22,0);
                          uStack_c4 = 0;
                          uVar22 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_c4);
                          uVar22 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                             (uVar31,*(undefined8 *)PTR_DAT_0580a230,uVar22,
                                              *(undefined8 *)puVar9);
                          uVar22 = System_Convert__ToInt64_2130754(uVar22,0);
                          plVar24 = (long *)System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                                      (uVar31,*(undefined8 *)PTR_DAT_057e5598,
                                                       *(undefined8 *)puVar4,*(undefined8 *)puVar9);
                          puVar2 = PTR_DAT_0575f9f0;
                          if (plVar24 != (long *)0x0) {
                            uVar31 = (**(code **)(*plVar24 + 0x168))
                                               (plVar24,*(undefined8 *)(*plVar24 + 0x170));
                            uVar31 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__DailyLevel_2db85d0
                                               (uVar32,4,uVar10,uVar11,uVar12,uVar13,uVar14,uVar15,
                                                uVar16,uVar17,uVar18,uVar19,uVar20,uVar21,uVar22,
                                                uVar31,0);
                            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                              thunk_FUN_0130472c(*(long *)puVar2);
                            }
                            GrandSDK_Analytics_Analytics__Track_2b38d30(uVar31,0);
                            Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4
                                      (lVar23,lVar30);
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
LAB_020125a4:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

