/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendBoosterPurchasedEvent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendBoosterPurchasedEvent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t currencyType, int32_t price, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendBoosterPurchasedEvent
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendBoosterPurchasedEvent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t currencyType, int32_t
   price, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendBoosterPurchasedEvent_144dd88
               (undefined8 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
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
  ulong uVar29;
  int *piVar30;
  long lVar31;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  int iStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c23768 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_05802ff8);
    FUN_012d0dc8(PTR_DAT_057e8f70);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_0579fa30);
    FUN_012d0dc8(PTR_DAT_057ada20);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_0581aae8);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_0580a230);
    FUN_012d0dc8(PTR_DAT_057ef900);
    FUN_012d0dc8(PTR_DAT_057b8e40);
    FUN_012d0dc8(PTR_DAT_05787810);
    FUN_012d0dc8(PTR_DAT_0577f918);
    FUN_012d0dc8(PTR_DAT_05795310);
    FUN_012d0dc8(PTR_DAT_05798838);
    FUN_012d0dc8(PTR_DAT_058056c0);
    FUN_012d0dc8(PTR_DAT_057bfe88);
    FUN_012d0dc8(PTR_DAT_057aeed8);
    FUN_012d0dc8(PTR_DAT_05792a60);
    FUN_012d0dc8(PTR_DAT_057f16f8);
    FUN_012d0dc8(PTR_DAT_057f81d8);
    FUN_012d0dc8(PTR_DAT_05774390);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057fa818);
    FUN_012d0dc8(PTR_DAT_05778280);
    bRam0000000005c23768 = 1;
  }
  if (((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
      (lVar10 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar10 != 0)) &&
     (plVar11 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                  (lVar10,*(undefined8 *)PTR_DAT_057e8f70), plVar11 != (long *)0x0))
  {
    lVar10 = *plVar11;
    uVar29 = (ulong)*(ushort *)(lVar10 + 0x12a);
    if (uVar29 != 0) {
      piVar30 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar30 + -2) == *(long *)PTR_DAT_0581aae8) {
          puVar12 = (undefined8 *)(lVar10 + (long)(*piVar30 + 10) * 0x10 + 0x138);
          goto LAB_0154df8c;
        }
        uVar29 = uVar29 - 1;
        piVar30 = piVar30 + 4;
      } while (uVar29 != 0);
    }
    puVar12 = (undefined8 *)FUN_0131971c(plVar11,*(long *)PTR_DAT_0581aae8,10);
LAB_0154df8c:
    lVar10 = (*(code *)*puVar12)(plVar11,puVar12[1]);
    if (lVar10 != 0) {
      lVar31 = *(long *)(lVar10 + 0x20);
      lVar10 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057c8a60);
      puVar1 = PTR_DAT_057ada20;
      if (lVar10 != 0) {
        Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                  (lVar10,*(undefined8 *)PTR_DAT_057b8e40,0);
        uStack_78 = *(undefined8 *)puVar1;
        uStack_70 = 0xffffffffffffffff;
        uStack_68 = param_2;
        lVar13 = System_Enum__ToString_23a4eac(&uStack_78,0);
        puVar8 = PTR_DAT_058056c0;
        puVar5 = PTR_DAT_057db748;
        puVar2 = PTR_DAT_057bfe88;
        if (lVar13 != 0) {
          uVar14 = System_String__ToLower_1ed4ee0(lVar13,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar10,*(undefined8 *)puVar8,uVar14,0);
          iStack_7c = param_3;
          uVar14 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&iStack_7c);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar10,*(undefined8 *)puVar2,uVar14,0);
          if (lVar31 != 0) {
            uVar14 = Modules_Contexts_GamePlay_Levels_Scripts_LevelStats__GetLevelStats_1f196fc
                               (lVar31,0);
            Modules_Contexts_Application_Events_Scripts_Event__AddDatas_1cc6390(lVar10,uVar14,0);
            uStack_98 = *(undefined8 *)puVar1;
            uStack_90 = 0xffffffffffffffff;
            uStack_88 = param_2;
            lVar31 = System_Enum__ToString_23a4eac(&uStack_98,0);
            puVar8 = PTR_DAT_05802ff8;
            puVar2 = PTR_DAT_05778280;
            puVar1 = PTR_DAT_05774390;
            if (lVar31 != 0) {
              uVar15 = System_String__ToLower_1ed4ee0(lVar31,0);
              plVar11 = (long *)System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                          (uVar14,*(undefined8 *)puVar2,*(undefined8 *)puVar1,
                                           *(undefined8 *)puVar8);
              puVar6 = PTR_DAT_057f81d8;
              puVar4 = PTR_DAT_0579fa30;
              puVar3 = PTR_DAT_05792a60;
              puVar2 = PTR_DAT_05787810;
              if (plVar11 != (long *)0x0) {
                uVar16 = (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
                uStack_9c = 0;
                uVar17 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_9c);
                uVar17 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                   (uVar14,*(undefined8 *)puVar2,uVar17,*(undefined8 *)puVar8);
                if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                  thunk_FUN_0130472c(*(long *)puVar4);
                }
                uVar17 = System_Convert__ToInt64_2130754(uVar17,0);
                uStack_a0 = 0;
                uVar18 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_a0);
                uVar18 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                   (uVar14,*(undefined8 *)puVar6,uVar18,*(undefined8 *)puVar8);
                uVar18 = System_Convert__ToInt64_2130754(uVar18,0);
                plVar11 = (long *)System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                            (uVar14,*(undefined8 *)puVar3,*(undefined8 *)puVar1,
                                             *(undefined8 *)puVar8);
                puVar3 = PTR_DAT_05795310;
                puVar2 = PTR_DAT_0577f918;
                if (plVar11 != (long *)0x0) {
                  uVar19 = (**(code **)(*plVar11 + 0x168))
                                     (plVar11,*(undefined8 *)(*plVar11 + 0x170));
                  uStack_a4 = 0;
                  uVar20 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_a4);
                  uVar20 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                     (uVar14,*(undefined8 *)puVar3,uVar20,*(undefined8 *)puVar8);
                  uVar20 = System_Convert__ToInt64_2130754(uVar20,0);
                  plVar11 = (long *)System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                              (uVar14,*(undefined8 *)puVar2,*(undefined8 *)puVar1,
                                               *(undefined8 *)puVar8);
                  puVar9 = PTR_DAT_0580a230;
                  puVar7 = PTR_DAT_057fa818;
                  puVar6 = PTR_DAT_057ef900;
                  puVar4 = PTR_DAT_057caaf0;
                  puVar3 = PTR_DAT_057aeed8;
                  puVar2 = PTR_DAT_05798838;
                  if (plVar11 != (long *)0x0) {
                    uVar21 = (**(code **)(*plVar11 + 0x168))
                                       (plVar11,*(undefined8 *)(*plVar11 + 0x170));
                    uStack_a8 = 0;
                    uVar22 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_a8);
                    uVar22 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                       (uVar14,*(undefined8 *)puVar9,uVar22,*(undefined8 *)puVar8);
                    uVar22 = System_Convert__ToInt64_2130754(uVar22,0);
                    uStack_ac = 0;
                    uVar23 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_ac);
                    uVar23 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                       (uVar14,*(undefined8 *)puVar6,uVar23,*(undefined8 *)puVar8);
                    uVar23 = System_Convert__ToInt64_2130754(uVar23,0);
                    uStack_b0 = 0;
                    uVar24 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_b0);
                    uVar24 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                       (uVar14,*(undefined8 *)puVar7,uVar24,*(undefined8 *)puVar8);
                    uVar24 = System_Convert__ToInt64_2130754(uVar24,0);
                    uStack_b4 = 0;
                    uVar25 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_b4);
                    uVar25 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                       (uVar14,*(undefined8 *)puVar2,uVar25,*(undefined8 *)puVar8);
                    uVar25 = System_Convert__ToInt64_2130754(uVar25,0);
                    uStack_b8 = 0;
                    uVar26 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_b8);
                    uVar26 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                       (uVar14,*(undefined8 *)puVar4,uVar26,*(undefined8 *)puVar8);
                    uVar26 = System_Convert__ToInt64_2130754(uVar26,0);
                    plVar11 = (long *)System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                                (uVar14,*(undefined8 *)puVar3,*(undefined8 *)puVar1,
                                                 *(undefined8 *)puVar8);
                    puVar2 = PTR_DAT_057f16f8;
                    puVar1 = PTR_DAT_0575f9f0;
                    if (plVar11 != (long *)0x0) {
                      uVar27 = (**(code **)(*plVar11 + 0x168))
                                         (plVar11,*(undefined8 *)(*plVar11 + 0x170));
                      uStack_bc = 0;
                      uVar28 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_bc);
                      uVar14 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                         (uVar14,*(undefined8 *)puVar2,uVar28,*(undefined8 *)puVar8)
                      ;
                      uVar14 = System_Convert__ToInt64_2130754(uVar14,0);
                      uVar14 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__BoosterPurchased_2db6f98
                                         (uVar15,(long)param_3,uVar16,uVar17,uVar18,uVar19,uVar20,
                                          uVar21,uVar22,uVar23,uVar24,uVar25,uVar26,uVar27,uVar14,0)
                      ;
                      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                        thunk_FUN_0130472c(*(long *)puVar1);
                      }
                      GrandSDK_Analytics_Analytics__Track_2b38d30(uVar14,0);
                      Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4
                                (param_1,lVar10);
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
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

