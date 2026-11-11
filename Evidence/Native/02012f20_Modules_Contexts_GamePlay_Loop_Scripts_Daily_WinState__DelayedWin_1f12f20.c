/* IL2CPP: Modules.Contexts.GamePlay.Loop.Scripts.Daily.WinState$$DelayedWin
void Modules_Contexts_GamePlay_Loop_Scripts_Daily_WinState__DelayedWin (Modules_Contexts_GamePlay_Loop_Scripts_Daily_WinState_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Loop.Scripts.Daily.WinState$$DelayedWin
   void Modules_Contexts_GamePlay_Loop_Scripts_Daily_WinState__DelayedWin
   (Modules_Contexts_GamePlay_Loop_Scripts_Daily_WinState_o* __this, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Loop_Scripts_Daily_WinState__DelayedWin_1f12f20(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
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
  long lVar22;
  long *plVar23;
  long lVar24;
  undefined8 *puVar25;
  undefined4 uVar26;
  long lVar27;
  long lVar28;
  ulong uVar29;
  int *piVar30;
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
  
  puVar1 = PTR_DAT_057b8520;
  if ((bRam0000000005c28617 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05778bf8);
    FUN_012d0dc8(PTR_DAT_057e8f70);
    FUN_012d0dc8(PTR_DAT_057d9070);
    FUN_012d0dc8(PTR_DAT_057913b0);
    FUN_012d0dc8(PTR_DAT_057bc6b0);
    FUN_012d0dc8(PTR_DAT_0576b260);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_0581aae8);
    FUN_012d0dc8(PTR_DAT_05815298);
    FUN_012d0dc8(PTR_DAT_057e7410);
    FUN_012d0dc8(PTR_DAT_05811368);
    FUN_012d0dc8(PTR_DAT_057f0e20);
    FUN_012d0dc8(PTR_DAT_058164b8);
    FUN_012d0dc8(PTR_DAT_0576f370);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057916a0);
    FUN_012d0dc8(PTR_DAT_058078f0);
    FUN_012d0dc8(PTR_DAT_0578de60);
    bRam0000000005c28617 = 1;
  }
  puVar2 = PTR_DAT_0576f370;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar22 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                     (*(undefined8 *)puVar2);
  puVar4 = PTR_DAT_057e7410;
  puVar2 = PTR_DAT_057815e0;
  if (lVar22 != 0) {
    Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar22,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    DG_Tweening_DOTween__KillAll_1eda810(0,0);
    lVar22 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                       (*(undefined8 *)puVar4);
    puVar2 = PTR_DAT_0576aae0;
    if (lVar22 != 0) {
      Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar22,0);
      if ((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
         (lVar22 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar22 != 0)) {
        plVar23 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                    (lVar22,*(undefined8 *)PTR_DAT_057e8f70);
        lVar22 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
        if ((lVar22 != 0) && (lVar22 = *(long *)(lVar22 + 0x18), lVar22 != 0)) {
          lVar22 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                             (lVar22,*(undefined8 *)PTR_DAT_057913b0);
          if (((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
              (lVar24 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar24 != 0)) &&
             (lVar24 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                 (lVar24,*(undefined8 *)PTR_DAT_057bc6b0), puVar4 = PTR_DAT_0581aae8
             , plVar23 != (long *)0x0)) {
            lVar27 = *plVar23;
            uVar29 = (ulong)*(ushort *)(lVar27 + 0x12a);
            if (uVar29 != 0) {
              piVar30 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
              do {
                if (*(long *)(piVar30 + -2) == *(long *)PTR_DAT_0581aae8) {
                  puVar25 = (undefined8 *)(lVar27 + (long)(*piVar30 + 10) * 0x10 + 0x138);
                  goto LAB_02013184;
                }
                uVar29 = uVar29 - 1;
                piVar30 = piVar30 + 4;
              } while (uVar29 != 0);
            }
            puVar25 = (undefined8 *)FUN_0131971c(plVar23,*(long *)PTR_DAT_0581aae8,10);
LAB_02013184:
            lVar27 = (*(code *)*puVar25)(plVar23,puVar25[1]);
            if ((lVar27 != 0) && (*(long *)(lVar27 + 0x20) != 0)) {
              lVar28 = *plVar23;
              uVar31 = *(undefined8 *)(*(long *)(lVar27 + 0x20) + 0x20);
              lVar27 = *(long *)puVar4;
              uVar29 = (ulong)*(ushort *)(lVar28 + 0x12a);
              if (uVar29 != 0) {
                piVar30 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar30 + -2) == lVar27) {
                    puVar25 = (undefined8 *)(lVar28 + (long)(*piVar30 + 8) * 0x10 + 0x138);
                    goto LAB_020131f0;
                  }
                  uVar29 = uVar29 - 1;
                  piVar30 = piVar30 + 4;
                } while (uVar29 != 0);
              }
              puVar25 = (undefined8 *)FUN_0131971c(plVar23,lVar27,8);
LAB_020131f0:
              (*(code *)*puVar25)(plVar23,puVar25[1]);
              lVar28 = *plVar23;
              lVar27 = *(long *)puVar4;
              uVar29 = (ulong)*(ushort *)(lVar28 + 0x12a);
              if (uVar29 != 0) {
                piVar30 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar30 + -2) == lVar27) {
                    puVar25 = (undefined8 *)(lVar28 + (long)(*piVar30 + 10) * 0x10 + 0x138);
                    goto LAB_0201324c;
                  }
                  uVar29 = uVar29 - 1;
                  piVar30 = piVar30 + 4;
                } while (uVar29 != 0);
              }
              puVar25 = (undefined8 *)FUN_0131971c(plVar23,lVar27,10);
LAB_0201324c:
              lVar27 = (*(code *)*puVar25)(plVar23,puVar25[1]);
              if ((lVar27 != 0) && (*(long *)(lVar27 + 0x28) != 0)) {
                Modules_Contexts_GamePlay_Systems_Scripts_TimeNS_LevelTimeTracker__SendLevelDurationEvent_1611118
                          (*(long *)(lVar27 + 0x28),0,7,0);
                if ((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
                   ((((lVar27 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar27 != 0
                      && (lVar27 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                             (lVar27,*(undefined8 *)PTR_DAT_057d9070), lVar27 != 0))
                     && (*(long *)(lVar27 + 0x18) != 0)) &&
                    ((lVar27 = *(long *)(*(long *)(lVar27 + 0x18) + 0xa8), lVar27 != 0 &&
                     (lVar24 != 0)))))) {
                  lVar27 = *(long *)(lVar27 + 0x18);
                  Modules_Contexts_Application_Reward_Scripts_RewardService__QueueReward_3ce86b0
                            (lVar24,0xf,lVar27,0);
                  if ((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
                     ((lVar28 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar28 != 0
                      && (lVar28 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                             (lVar28,*(undefined8 *)PTR_DAT_05778bf8), lVar28 != 0))
                     )) {
                    uVar29 = Modules_Contexts_Home_Daily_Scripts_DailyService__DidTutorialLevelPlay_4105ba0
                                       (lVar28,0);
                    if ((uVar29 & 1) == 0) {
                      Modules_Contexts_Home_Daily_Scripts_DailyService__SetTutorialLevelPlayed_4105bc4
                                (lVar28,0);
                    }
                    lVar28 = Modules_Contexts_Home_Daily_Scripts_DailyService__ClaimSelectedDayAndProgressBarReward_41051e4
                                       (lVar28,0);
                    if (lVar28 != 0) {
                      Modules_Contexts_Application_Reward_Scripts_RewardService__QueueBulkReward_3ce9518
                                (lVar24,0x10,lVar28,0);
                    }
                    puVar4 = PTR_DAT_058164b8;
                    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                      thunk_FUN_0130472c();
                    }
                    lVar24 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                                       (*(undefined8 *)puVar4);
                    if ((lVar24 != 0) &&
                       (Modules_Infrastructure_Common_Scripts_SignalNS_Signal_Int32Enum___Invoke_333d1f4
                                  (lVar24,6,*(undefined8 *)PTR_DAT_057916a0),
                       puVar3 = PTR_DAT_05815298, puVar4 = PTR_DAT_057f0e20, lVar22 != 0)) {
                      Modules_Contexts_GamePlay_Loop_Scripts_ReturnToHomeSequenceService__LevelWin_2154280
                                (lVar22,uVar31,0);
                      lVar22 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                                         (*(undefined8 *)puVar4);
                      lVar24 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
                      puVar4 = PTR_DAT_0578de60;
                      if (lVar24 != 0) {
                        Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelCongratsPopUpArguments___ctor_16ec830
                                  (lVar24,0);
                        *(undefined8 *)(lVar24 + 0x10) = *(undefined8 *)puVar4;
                        FUN_012d0d74();
                        *(undefined8 *)(lVar24 + 0x28) = uVar31;
                        FUN_012d0d74((undefined8 *)(lVar24 + 0x28),uVar31);
                        *(undefined1 *)(lVar24 + 0x30) = 0;
                        if (lVar27 == 0) {
                          uVar26 = 0;
                        }
                        else {
                          uVar26 = *(undefined4 *)(lVar27 + 0x14);
                        }
                        *(undefined4 *)(lVar24 + 0x34) = uVar26;
                        if (lVar22 != 0) {
                          Modules_Infrastructure_Common_Scripts_SignalNS_Signal_object___Invoke_333d418
                                    (lVar22,lVar24,*(undefined8 *)PTR_DAT_058078f0);
                          if (((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
                              (lVar22 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18),
                              lVar22 != 0)) &&
                             (lVar22 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                                 (lVar22,*(undefined8 *)PTR_DAT_0576b260),
                             puVar2 = PTR_DAT_05811368, lVar22 != 0)) {
                            Modules_Contexts_Application_ServerCommunication_Scripts_SyncService__TrySyncAllData_3e33320
                                      (lVar22,0,0);
                            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                              thunk_FUN_0130472c();
                            }
                            lVar22 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                                               (*(undefined8 *)puVar2);
                            if (lVar22 != 0) {
                              Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4
                                        (lVar22,0);
                              if (cRam0000000005c230a8 == '\0') {
                                FUN_012d0dc8(PTR_DAT_057ece38);
                                cRam0000000005c230a8 = '\x01';
                              }
                              puVar1 = PTR_DAT_0576aae0;
                              lVar22 = **(long **)(*(long *)PTR_DAT_057ece38 + 0xb8);
                              if (lVar22 != 0) {
                                if ((bRam0000000005c2376c & 1) == 0) {
                                  FUN_012d0dc8(PTR_DAT_0575f9f0,3,0,0);
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
                                    (lVar24 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18),
                                    lVar24 != 0)) &&
                                   (plVar23 = (long *)
                                                  Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                                            (lVar24,*(undefined8 *)PTR_DAT_057e8f70)
                                   , plVar23 != (long *)0x0)) {
                                  lVar24 = *plVar23;
                                  uVar29 = (ulong)*(ushort *)(lVar24 + 0x12a);
                                  if (uVar29 != 0) {
                                    piVar30 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
                                    do {
                                      if (*(long *)(piVar30 + -2) == *(long *)PTR_DAT_0581aae8) {
                                        puVar25 = (undefined8 *)
                                                  (lVar24 + (long)(*piVar30 + 10) * 0x10 + 0x138);
                                        goto LAB_0154f3f0;
                                      }
                                      uVar29 = uVar29 - 1;
                                      piVar30 = piVar30 + 4;
                                    } while (uVar29 != 0);
                                  }
                                  puVar25 = (undefined8 *)
                                            FUN_0131971c(plVar23,*(long *)PTR_DAT_0581aae8,10);
LAB_0154f3f0:
                                  lVar24 = (*(code *)*puVar25)(plVar23,puVar25[1]);
                                  if (lVar24 != 0) {
                                    lVar27 = *(long *)(lVar24 + 0x20);
                                    lVar24 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057c8a60);
                                    puVar3 = PTR_DAT_0580ac18;
                                    puVar4 = PTR_DAT_057db748;
                                    puVar2 = PTR_DAT_057bb470;
                                    puVar1 = PTR_DAT_05768e10;
                                    if (lVar24 != 0) {
                                      Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                                                (lVar24,*(undefined8 *)PTR_DAT_0575e318,0);
                                      uStack_64 = 3;
                                      uVar31 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_64);
                                      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                                                (lVar24,*(undefined8 *)puVar2,uVar31,0);
                                      uStack_88 = *(undefined8 *)puVar1;
                                      uStack_80 = 0xffffffffffffffff;
                                      uStack_78 = 0;
                                      uVar31 = System_Enum__ToString_23a4eac(&uStack_88,0);
                                      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                                                (lVar24,*(undefined8 *)puVar3,uVar31,0);
                                      puVar8 = PTR_DAT_05802ff8;
                                      puVar5 = PTR_DAT_057caaf0;
                                      puVar3 = PTR_DAT_0579fa30;
                                      puVar2 = PTR_DAT_05774390;
                                      if (lVar27 != 0) {
                                        uVar31 = Modules_Contexts_GamePlay_Levels_Scripts_LevelStats__GetDailyLevelStats_1f1a0d4
                                                           (lVar27,3,0);
                                        Modules_Contexts_Application_Events_Scripts_Event__AddDatas_1cc6390
                                                  (lVar24,uVar31,0);
                                        uVar31 = Modules_Contexts_GamePlay_Levels_Scripts_LevelStats__GetDailyLevelStats_1f1a0d4
                                                           (lVar27,3,0);
                                        uStack_a0 = *(undefined8 *)puVar1;
                                        uStack_98 = 0xffffffffffffffff;
                                        uStack_90 = 0;
                                        uVar9 = System_Enum__ToString_23a4eac(&uStack_a0,0);
                                        uStack_68 = 0;
                                        uVar10 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_68
                                                                   );
                                        uVar10 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                                           (uVar31,*(undefined8 *)puVar5,uVar10,
                                                            *(undefined8 *)puVar8);
                                        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                                          thunk_FUN_0130472c(*(long *)puVar3);
                                        }
                                        uVar10 = System_Convert__ToInt64_2130754(uVar10,0);
                                        uStack_a4 = 0;
                                        uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_a4
                                                                   );
                                        uVar11 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                                           (uVar31,*(undefined8 *)PTR_DAT_057f16f8,
                                                            uVar11,*(undefined8 *)puVar8);
                                        uVar11 = System_Convert__ToInt64_2130754(uVar11,0);
                                        plVar23 = (long *)
                                                  System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                                            (uVar31,*(undefined8 *)PTR_DAT_05778280,
                                                             *(undefined8 *)puVar2,
                                                             *(undefined8 *)puVar8);
                                        puVar7 = PTR_DAT_057fe5c0;
                                        puVar6 = PTR_DAT_057ef900;
                                        puVar5 = PTR_DAT_057a3170;
                                        puVar3 = PTR_DAT_05787810;
                                        puVar1 = PTR_DAT_0577f918;
                                        if (plVar23 != (long *)0x0) {
                                          uVar12 = (**(code **)(*plVar23 + 0x168))
                                                             (plVar23,*(undefined8 *)
                                                                       (*plVar23 + 0x170));
                                          uStack_a8 = 0;
                                          uVar13 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,
                                                                      &uStack_a8);
                                          uVar13 = 
                                                  System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                                            (uVar31,*(undefined8 *)puVar6,uVar13,
                                                             *(undefined8 *)puVar8);
                                          uVar13 = System_Convert__ToInt64_2130754(uVar13,0);
                                          uStack_ac = 0;
                                          uVar14 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,
                                                                      &uStack_ac);
                                          uVar14 = 
                                                  System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                                            (uVar31,*(undefined8 *)puVar5,uVar14,
                                                             *(undefined8 *)puVar8);
                                          uVar14 = System_Convert__ToInt64_2130754(uVar14,0);
                                          uStack_b0 = 0;
                                          uVar15 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,
                                                                      &uStack_b0);
                                          uVar15 = 
                                                  System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                                            (uVar31,*(undefined8 *)puVar7,uVar15,
                                                             *(undefined8 *)puVar8);
                                          uVar15 = System_Convert__ToInt64_2130754(uVar15,0);
                                          uStack_b4 = 0;
                                          uVar16 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,
                                                                      &uStack_b4);
                                          uVar16 = 
                                                  System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                                            (uVar31,*(undefined8 *)puVar3,uVar16,
                                                             *(undefined8 *)puVar8);
                                          uVar16 = System_Convert__ToInt64_2130754(uVar16,0);
                                          plVar23 = (long *)
                                                  System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                                            (uVar31,*(undefined8 *)puVar1,
                                                             *(undefined8 *)puVar2,
                                                             *(undefined8 *)puVar8);
                                          puVar1 = PTR_DAT_058120e8;
                                          if (plVar23 != (long *)0x0) {
                                            uVar17 = (**(code **)(*plVar23 + 0x168))
                                                               (plVar23,*(undefined8 *)
                                                                         (*plVar23 + 0x170));
                                            plVar23 = (long *)
                                                  System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                                            (uVar31,*(undefined8 *)puVar1,
                                                             *(undefined8 *)puVar2,
                                                             *(undefined8 *)puVar8);
                                            puVar5 = PTR_DAT_057c3218;
                                            puVar3 = PTR_DAT_057a8558;
                                            puVar1 = PTR_DAT_057a3040;
                                            if (plVar23 != (long *)0x0) {
                                              uVar18 = (**(code **)(*plVar23 + 0x168))
                                                                 (plVar23,*(undefined8 *)
                                                                           (*plVar23 + 0x170));
                                              uStack_b8 = 0;
                                              uVar19 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,
                                                                          &uStack_b8);
                                              uVar19 = 
                                                  System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                                            (uVar31,*(undefined8 *)puVar1,uVar19,
                                                             *(undefined8 *)puVar8);
                                              uVar19 = System_Convert__ToInt64_2130754(uVar19,0);
                                              uStack_bc = 0;
                                              uVar20 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,
                                                                          &uStack_bc);
                                              uVar20 = 
                                                  System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                                            (uVar31,*(undefined8 *)puVar5,uVar20,
                                                             *(undefined8 *)puVar8);
                                              uVar20 = System_Convert__ToInt64_2130754(uVar20,0);
                                              uStack_c0 = 0;
                                              uVar21 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,
                                                                          &uStack_c0);
                                              uVar21 = 
                                                  System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                                            (uVar31,*(undefined8 *)puVar3,uVar21,
                                                             *(undefined8 *)puVar8);
                                              uVar32 = System_Convert__ToDouble_21312e0(uVar21,0);
                                              uStack_c4 = 0;
                                              uVar21 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,
                                                                          &uStack_c4);
                                              uVar21 = 
                                                  System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                                            (uVar31,*(undefined8 *)PTR_DAT_0580a230,
                                                             uVar21,*(undefined8 *)puVar8);
                                              uVar21 = System_Convert__ToInt64_2130754(uVar21,0);
                                              plVar23 = (long *)
                                                  System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                                            (uVar31,*(undefined8 *)PTR_DAT_057e5598,
                                                             *(undefined8 *)puVar2,
                                                             *(undefined8 *)puVar8);
                                              puVar1 = PTR_DAT_0575f9f0;
                                              if (plVar23 != (long *)0x0) {
                                                uVar31 = (**(code **)(*plVar23 + 0x168))
                                                                   (plVar23,*(undefined8 *)
                                                                             (*plVar23 + 0x170));
                                                uVar31 = 
                                                  GrandSDK_Models_MagicSort_Events_AnalyticsEvents__DailyLevel_2db85d0
                                                            (uVar32,3,uVar9,uVar10,uVar11,uVar12,
                                                             uVar13,uVar14,uVar15,uVar16,uVar17,
                                                             uVar18,uVar19,uVar20,uVar21,uVar31,0);
                                                if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                                                  thunk_FUN_0130472c(*(long *)puVar1);
                                                }
                                                GrandSDK_Analytics_Analytics__Track_2b38d30
                                                          (uVar31,0);
                                                Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4
                                                          (lVar22,lVar24);
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

