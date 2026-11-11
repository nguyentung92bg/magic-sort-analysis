/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendLevelEvent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendLevelEvent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t levelState, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendLevelEvent
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendLevelEvent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t levelState, const
   MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendLevelEvent_144e414
               (undefined8 param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
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
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  long lVar29;
  ulong uVar30;
  int *piVar31;
  long lVar32;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  int iStack_64;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c23769 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_05802ff8);
    FUN_012d0dc8(PTR_DAT_057e8f70);
    FUN_012d0dc8(PTR_DAT_057bc240);
    FUN_012d0dc8(PTR_DAT_05792f78);
    FUN_012d0dc8(PTR_DAT_05767e30);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_0579fa30);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_0581aae8);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_0580a230);
    FUN_012d0dc8(PTR_DAT_057ef900);
    FUN_012d0dc8(PTR_DAT_0578d4b0);
    FUN_012d0dc8(PTR_DAT_05787810);
    FUN_012d0dc8(PTR_DAT_0577f918);
    FUN_012d0dc8(PTR_DAT_05795310);
    FUN_012d0dc8(PTR_DAT_05798838);
    FUN_012d0dc8(PTR_DAT_057f6bc0);
    FUN_012d0dc8(PTR_DAT_05761d98);
    FUN_012d0dc8(PTR_DAT_057aeed8);
    FUN_012d0dc8(PTR_DAT_05792a60);
    FUN_012d0dc8(PTR_DAT_057f16f8);
    FUN_012d0dc8(PTR_DAT_057f81d8);
    FUN_012d0dc8(PTR_DAT_057bb470);
    FUN_012d0dc8(PTR_DAT_05774390);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057fa818);
    FUN_012d0dc8(PTR_DAT_05792208);
    FUN_012d0dc8(PTR_DAT_05778280);
    FUN_012d0dc8(PTR_DAT_057d7a38);
    bRam0000000005c23769 = 1;
  }
  if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
     (lVar9 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar9 != 0)) {
    plVar10 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                (lVar9,*(undefined8 *)PTR_DAT_057e8f70);
    if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
       (lVar9 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar9 != 0)) {
      lVar9 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar9,*(undefined8 *)PTR_DAT_057bc240);
      if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
         (lVar11 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar11 != 0)) {
        lVar11 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                           (lVar11,*(undefined8 *)PTR_DAT_05792f78);
        if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
           ((lVar12 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar12 != 0 &&
            (lVar12 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                (lVar12,*(undefined8 *)PTR_DAT_05767e30), plVar10 != (long *)0x0))))
        {
          lVar29 = *plVar10;
          uVar30 = (ulong)*(ushort *)(lVar29 + 0x12a);
          if (uVar30 != 0) {
            piVar31 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
            do {
              if (*(long *)(piVar31 + -2) == *(long *)PTR_DAT_0581aae8) {
                puVar13 = (undefined8 *)(lVar29 + (long)(*piVar31 + 10) * 0x10 + 0x138);
                goto LAB_0154e6d4;
              }
              uVar30 = uVar30 - 1;
              piVar31 = piVar31 + 4;
            } while (uVar30 != 0);
          }
          puVar13 = (undefined8 *)FUN_0131971c(plVar10,*(long *)PTR_DAT_0581aae8,10);
LAB_0154e6d4:
          lVar29 = (*(code *)*puVar13)(plVar10,puVar13[1]);
          if (lVar29 != 0) {
            lVar32 = *(long *)(lVar29 + 0x20);
            lVar29 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057c8a60);
            puVar5 = PTR_DAT_057db748;
            puVar1 = PTR_DAT_057bb470;
            if (lVar29 != 0) {
              Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                        (lVar29,*(undefined8 *)PTR_DAT_057f6bc0,0);
              iStack_64 = param_2;
              uVar14 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&iStack_64);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar29,*(undefined8 *)puVar1,uVar14,0);
              puVar1 = PTR_DAT_0578d4b0;
              if (lVar11 != 0) {
                uVar14 = Modules_Contexts_Application_ServerCommunication_Scripts_SegmentService__GetSegment_3e2f82c
                                   (lVar11,0);
                Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                          (lVar29,*(undefined8 *)puVar1,uVar14,0);
                if (lVar32 != 0) {
                  uVar14 = Modules_Contexts_GamePlay_Levels_Scripts_LevelStats__GetLevelStats_1f196fc
                                     (lVar32,0);
                  Modules_Contexts_Application_Events_Scripts_Event__AddDatas_1cc6390
                            (lVar29,uVar14,0);
                  puVar2 = PTR_DAT_05792208;
                  puVar1 = PTR_DAT_05761d98;
                  if (lVar12 != 0) {
                    uStack_68 = Modules_Contexts_Application_Events_Scripts_Sessions_SessionTracker__GetSessionDurationInSeconds_1ccbfbc
                                          (lVar12,0);
                    uVar14 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_68);
                    Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                              (lVar29,*(undefined8 *)puVar1,uVar14,0);
                    uVar14 = Modules_Contexts_Application_Events_Scripts_EventSender__GetLiveOpsStats_144ec38
                                       ();
                    Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                              (lVar29,*(undefined8 *)puVar2,uVar14,0);
                    puVar6 = PTR_DAT_05802ff8;
                    puVar4 = PTR_DAT_057d7a38;
                    puVar3 = PTR_DAT_057caaf0;
                    puVar2 = PTR_DAT_0579fa30;
                    puVar1 = PTR_DAT_05798838;
                    if (lVar9 != 0) {
                      uStack_6c = Modules_Contexts_Home_Multiplier_MultiplierService__GetMultiplierStatusForAnalytic_315d54c
                                            (lVar9,0);
                      uVar14 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_6c);
                      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                                (lVar29,*(undefined8 *)puVar4,uVar14,0);
                      uVar14 = Modules_Contexts_GamePlay_Levels_Scripts_LevelStats__GetLevelStats_1f196fc
                                         (lVar32,0);
                      uVar15 = Modules_Contexts_Application_ServerCommunication_Scripts_SegmentService__GetSegment_3e2f82c
                                         (lVar11,0);
                      iVar7 = Modules_Contexts_Application_Events_Scripts_Sessions_SessionTracker__GetSessionDurationInSeconds_1ccbfbc
                                        (lVar12,0);
                      uVar16 = Modules_Contexts_Application_Events_Scripts_EventSender__GetLiveOpsStats_144ec38
                                         ();
                      iVar8 = Modules_Contexts_Home_Multiplier_MultiplierService__GetMultiplierStatusForAnalytic_315d54c
                                        (lVar9,0);
                      uStack_70 = 0;
                      uVar17 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_70);
                      uVar17 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                         (uVar14,*(undefined8 *)puVar3,uVar17,*(undefined8 *)puVar6)
                      ;
                      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                        thunk_FUN_0130472c(*(long *)puVar2);
                      }
                      uVar17 = System_Convert__ToInt64_2130754(uVar17,0);
                      uStack_74 = 0;
                      uVar18 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_74);
                      uVar18 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                         (uVar14,*(undefined8 *)puVar1,uVar18,*(undefined8 *)puVar6)
                      ;
                      uVar18 = System_Convert__ToInt64_2130754(uVar18,0);
                      uStack_78 = 0;
                      uVar19 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_78);
                      uVar19 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                         (uVar14,*(undefined8 *)PTR_DAT_057f16f8,uVar19,
                                          *(undefined8 *)puVar6);
                      uVar19 = System_Convert__ToInt64_2130754(uVar19,0);
                      uStack_7c = 0;
                      uVar20 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_7c);
                      uVar20 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                         (uVar14,*(undefined8 *)PTR_DAT_05795310,uVar20,
                                          *(undefined8 *)puVar6);
                      uVar20 = System_Convert__ToInt64_2130754(uVar20,0);
                      uStack_80 = 0;
                      uVar21 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_80);
                      uVar21 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                         (uVar14,*(undefined8 *)PTR_DAT_057fa818,uVar21,
                                          *(undefined8 *)puVar6);
                      uVar21 = System_Convert__ToInt64_2130754(uVar21,0);
                      uStack_84 = 0;
                      uVar22 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_84);
                      uVar22 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                         (uVar14,*(undefined8 *)PTR_DAT_057f81d8,uVar22,
                                          *(undefined8 *)puVar6);
                      uVar22 = System_Convert__ToInt64_2130754(uVar22,0);
                      puVar1 = PTR_DAT_05774390;
                      plVar10 = (long *)System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                                  (uVar14,*(undefined8 *)PTR_DAT_05778280,
                                                   *(undefined8 *)PTR_DAT_05774390,
                                                   *(undefined8 *)puVar6);
                      puVar4 = PTR_DAT_057ef900;
                      puVar3 = PTR_DAT_05787810;
                      puVar2 = PTR_DAT_0577f918;
                      if (plVar10 != (long *)0x0) {
                        uVar23 = (**(code **)(*plVar10 + 0x168))
                                           (plVar10,*(undefined8 *)(*plVar10 + 0x170));
                        uStack_88 = 0;
                        uVar24 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_88);
                        uVar24 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                           (uVar14,*(undefined8 *)puVar4,uVar24,
                                            *(undefined8 *)puVar6);
                        uVar24 = System_Convert__ToInt64_2130754(uVar24,0);
                        uStack_8c = 0;
                        uVar25 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_8c);
                        uVar25 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                           (uVar14,*(undefined8 *)puVar3,uVar25,
                                            *(undefined8 *)puVar6);
                        uVar25 = System_Convert__ToInt64_2130754(uVar25,0);
                        plVar10 = (long *)System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                                    (uVar14,*(undefined8 *)puVar2,
                                                     *(undefined8 *)puVar1,*(undefined8 *)puVar6);
                        puVar2 = PTR_DAT_05792a60;
                        if (plVar10 != (long *)0x0) {
                          uVar26 = (**(code **)(*plVar10 + 0x168))
                                             (plVar10,*(undefined8 *)(*plVar10 + 0x170));
                          plVar10 = (long *)System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                                      (uVar14,*(undefined8 *)puVar2,
                                                       *(undefined8 *)puVar1,*(undefined8 *)puVar6);
                          puVar3 = PTR_DAT_0580a230;
                          puVar2 = PTR_DAT_057aeed8;
                          if (plVar10 != (long *)0x0) {
                            uVar27 = (**(code **)(*plVar10 + 0x168))
                                               (plVar10,*(undefined8 *)(*plVar10 + 0x170));
                            uStack_90 = 0;
                            uVar28 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_90);
                            uVar28 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                               (uVar14,*(undefined8 *)puVar3,uVar28,
                                                *(undefined8 *)puVar6);
                            uVar28 = System_Convert__ToInt64_2130754(uVar28,0);
                            plVar10 = (long *)System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                                        (uVar14,*(undefined8 *)puVar2,
                                                         *(undefined8 *)puVar1,*(undefined8 *)puVar6
                                                        );
                            puVar1 = PTR_DAT_0575f9f0;
                            if (plVar10 != (long *)0x0) {
                              uVar14 = (**(code **)(*plVar10 + 0x168))
                                                 (plVar10,*(undefined8 *)(*plVar10 + 0x170));
                              uVar14 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__Level_2db8390
                                                 ((long)param_2,uVar15,(long)iVar7,uVar16,
                                                  (long)iVar8,uVar17,uVar18,uVar19,uVar20,uVar21,
                                                  uVar22,uVar23,uVar24,uVar25,uVar26,uVar27,uVar28,
                                                  uVar14,0);
                              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                                thunk_FUN_0130472c(*(long *)puVar1);
                              }
                              GrandSDK_Analytics_Analytics__Track_2b38d30(uVar14,0);
                              Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4
                                        (param_1,lVar29);
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

