/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendWindQuestPopupImpression
void Modules_Contexts_Application_Events_Scripts_EventSender__SendWindQuestPopupImpression (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t impressionSource, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendWindQuestPopupImpression
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendWindQuestPopupImpression
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t impressionSource,
   const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendWindQuestPopupImpression_1498b4c
               (undefined8 param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long *plVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined4 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  puVar2 = PTR_DAT_0576aae0;
  if ((bRam0000000005c23891 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_05802ff8);
    FUN_012d0dc8(PTR_DAT_0575ba08);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_0579fa30);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_05774648);
    FUN_012d0dc8(PTR_DAT_057ccc50);
    FUN_012d0dc8(PTR_DAT_057e3618);
    FUN_012d0dc8(PTR_DAT_0576b928);
    FUN_012d0dc8(PTR_DAT_05779590);
    FUN_012d0dc8(PTR_DAT_057b6548);
    FUN_012d0dc8(PTR_DAT_0580d818);
    FUN_012d0dc8(PTR_DAT_0576f4f0);
    FUN_012d0dc8(PTR_DAT_057841a0);
    FUN_012d0dc8(PTR_DAT_0576b010);
    FUN_012d0dc8(PTR_DAT_057d1f60);
    FUN_012d0dc8(PTR_DAT_0575a580);
    FUN_012d0dc8(PTR_DAT_05774390);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057e66c0);
    bRam0000000005c23891 = 1;
  }
  if ((((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
       (lVar11 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar11 != 0)) &&
      (lVar11 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                          (lVar11,*(undefined8 *)PTR_DAT_0575ba08), puVar2 = PTR_DAT_057c8a60,
      lVar11 != 0)) && (*(long *)(lVar11 + 0x20) != 0)) {
    uVar12 = Modules_Contexts_Home_WindQuest_Scripts_WindQuestStateService__IsInProgress_2da019c
                       (*(long *)(lVar11 + 0x20),0);
    uVar21 = 1;
    if ((uVar12 & 1) == 0) {
      uVar21 = 2;
    }
    lVar13 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
    puVar1 = PTR_DAT_057e3618;
    puVar2 = PTR_DAT_057ccc50;
    if (lVar13 != 0) {
      Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                (lVar13,*(undefined8 *)PTR_DAT_057d1f60,0);
      Modules_Contexts_Application_Events_Scripts_EventSender__AddWindQuestCommonData_1498364
                (lVar13);
      uStack_78 = *(undefined8 *)puVar2;
      uStack_70 = 0xffffffffffffffff;
      uStack_68 = param_2;
      uVar14 = System_Enum__ToString_23a4eac(&uStack_78,0);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar13,*(undefined8 *)puVar1,uVar14,0);
      puVar6 = PTR_DAT_057db748;
      puVar1 = PTR_DAT_0576b010;
      if (*(long *)(lVar11 + 0x18) != 0) {
        uStack_7c = Modules_Contexts_Home_WindQuest_Scripts_WindQuestDataService__GetProgress_2d9c2e0
                              (*(long *)(lVar11 + 0x18),0);
        uVar14 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_7c);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar13,*(undefined8 *)puVar1,uVar14,0);
        puVar7 = PTR_DAT_0580d818;
        puVar3 = PTR_DAT_05774648;
        puVar1 = PTR_DAT_0576b928;
        if (*(long *)(lVar11 + 0x18) != 0) {
          uVar8 = Modules_Contexts_Home_WindQuest_Scripts_WindQuestDataService__GetProgress_2d9c2e0
                            (*(long *)(lVar11 + 0x18),0);
          uStack_80 = Modules_Contexts_Home_WindQuest_Scripts_WindQuestService__GetCompletedGoalCountForProgress_2d9e918
                                (lVar11,uVar8,0);
          uVar14 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_80);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar13,*(undefined8 *)puVar7,uVar14,0);
          uStack_98 = *(undefined8 *)puVar3;
          uStack_90 = 0xffffffffffffffff;
          uStack_88 = uVar21;
          uVar14 = System_Enum__ToString_23a4eac(&uStack_98,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar13,*(undefined8 *)puVar1,uVar14,0);
          uStack_b0 = *(undefined8 *)puVar2;
          uStack_a8 = 0xffffffffffffffff;
          uStack_a0 = param_2;
          uVar14 = System_Enum__ToString_23a4eac(&uStack_b0,0);
          if (*(long *)(lVar11 + 0x18) != 0) {
            iVar9 = Modules_Contexts_Home_WindQuest_Scripts_WindQuestDataService__GetProgress_2d9c2e0
                              (*(long *)(lVar11 + 0x18),0);
            puVar7 = PTR_DAT_05802ff8;
            puVar1 = PTR_DAT_057e66c0;
            puVar2 = PTR_DAT_05774390;
            if (*(long *)(lVar11 + 0x18) != 0) {
              uVar8 = Modules_Contexts_Home_WindQuest_Scripts_WindQuestDataService__GetProgress_2d9c2e0
                                (*(long *)(lVar11 + 0x18),0);
              iVar10 = Modules_Contexts_Home_WindQuest_Scripts_WindQuestService__GetCompletedGoalCountForProgress_2d9e918
                                 (lVar11,uVar8,0);
              uStack_c8 = *(undefined8 *)puVar3;
              uStack_c0 = 0xffffffffffffffff;
              uStack_b8 = uVar21;
              uVar15 = System_Enum__ToString_23a4eac(&uStack_c8,0);
              plVar16 = (long *)System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                          (*(undefined8 *)(lVar13 + 0x18),*(undefined8 *)puVar1,
                                           *(undefined8 *)puVar2,*(undefined8 *)puVar7);
              puVar1 = PTR_DAT_0575a580;
              if (plVar16 != (long *)0x0) {
                uVar17 = (**(code **)(*plVar16 + 0x168))(plVar16,*(undefined8 *)(*plVar16 + 0x170));
                plVar16 = (long *)System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                            (*(undefined8 *)(lVar13 + 0x18),*(undefined8 *)puVar1,
                                             *(undefined8 *)puVar2,*(undefined8 *)puVar7);
                puVar5 = PTR_DAT_057caaf0;
                puVar4 = PTR_DAT_057b6548;
                puVar3 = PTR_DAT_0579fa30;
                puVar1 = PTR_DAT_057841a0;
                if (plVar16 != (long *)0x0) {
                  uVar18 = (**(code **)(*plVar16 + 0x168))
                                     (plVar16,*(undefined8 *)(*plVar16 + 0x170));
                  uVar22 = *(undefined8 *)(lVar13 + 0x18);
                  uStack_cc = 0;
                  uVar19 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_cc);
                  uVar19 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                     (uVar22,*(undefined8 *)puVar4,uVar19,*(undefined8 *)puVar7);
                  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                    thunk_FUN_0130472c(*(long *)puVar3);
                  }
                  uVar19 = System_Convert__ToInt64_2130754(uVar19,0);
                  uVar23 = *(undefined8 *)(lVar13 + 0x18);
                  uStack_d0 = 0;
                  uVar22 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_d0);
                  uVar22 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                     (uVar23,*(undefined8 *)puVar5,uVar22,*(undefined8 *)puVar7);
                  uVar22 = System_Convert__ToInt64_2130754(uVar22,0);
                  uVar24 = *(undefined8 *)(lVar13 + 0x18);
                  uStack_d4 = 0;
                  uVar23 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_d4);
                  uVar23 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                     (uVar24,*(undefined8 *)puVar1,uVar23,*(undefined8 *)puVar7);
                  uVar23 = System_Convert__ToInt64_2130754(uVar23,0);
                  plVar16 = (long *)System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                              (*(undefined8 *)(lVar13 + 0x18),
                                               *(undefined8 *)PTR_DAT_0576f4f0,*(undefined8 *)puVar2
                                               ,*(undefined8 *)puVar7);
                  puVar1 = PTR_DAT_05779590;
                  if (plVar16 != (long *)0x0) {
                    uVar24 = (**(code **)(*plVar16 + 0x168))
                                       (plVar16,*(undefined8 *)(*plVar16 + 0x170));
                    plVar16 = (long *)System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                                (*(undefined8 *)(lVar13 + 0x18),
                                                 *(undefined8 *)puVar1,*(undefined8 *)puVar2,
                                                 *(undefined8 *)puVar7);
                    puVar2 = PTR_DAT_0575f9f0;
                    if (plVar16 != (long *)0x0) {
                      uVar20 = (**(code **)(*plVar16 + 0x168))
                                         (plVar16,*(undefined8 *)(*plVar16 + 0x170));
                      uVar14 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__WindQuestPopupImpression_2dbe36c
                                         (uVar14,(long)iVar9,(long)iVar10,uVar15,uVar17,uVar18,
                                          uVar19,uVar22,uVar23,uVar24,uVar20,0);
                      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                        thunk_FUN_0130472c(*(long *)puVar2);
                      }
                      GrandSDK_Analytics_Analytics__Track_2b38d30(uVar14,0);
                      Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4
                                (param_1,lVar13);
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

