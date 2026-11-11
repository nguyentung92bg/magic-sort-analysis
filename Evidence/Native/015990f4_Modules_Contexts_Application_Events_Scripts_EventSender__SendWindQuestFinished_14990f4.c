/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendWindQuestFinished
void Modules_Contexts_Application_Events_Scripts_EventSender__SendWindQuestFinished (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, bool isAutoClaim, bool isCompleted, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendWindQuestFinished
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendWindQuestFinished
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, bool isAutoClaim, bool
   isCompleted, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendWindQuestFinished_14990f4
               (undefined8 param_1,ulong param_2,ulong param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  puVar3 = PTR_DAT_0576aae0;
  if ((bRam0000000005c23892 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_05802ff8);
    FUN_012d0dc8(PTR_DAT_0575ba08);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_0579fa30);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_0578d348);
    FUN_012d0dc8(PTR_DAT_0576b928);
    FUN_012d0dc8(PTR_DAT_05779590);
    FUN_012d0dc8(PTR_DAT_057b6548);
    FUN_012d0dc8(PTR_DAT_0578c230);
    FUN_012d0dc8(PTR_DAT_0580d818);
    FUN_012d0dc8(PTR_DAT_0576f4f0);
    FUN_012d0dc8(PTR_DAT_057841a0);
    FUN_012d0dc8(PTR_DAT_0576b010);
    FUN_012d0dc8(PTR_DAT_0575a580);
    FUN_012d0dc8(PTR_DAT_05774390);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057e66c0);
    bRam0000000005c23892 = 1;
  }
  puVar4 = PTR_DAT_057c8a60;
  if ((**(long **)(*(long *)puVar3 + 0xb8) != 0) &&
     (lVar12 = *(long *)(**(long **)(*(long *)puVar3 + 0xb8) + 0x18), lVar12 != 0)) {
    lVar12 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar12,*(undefined8 *)PTR_DAT_0575ba08);
    uVar9 = 1;
    if ((param_2 & 1) == 0) {
      uVar9 = 2;
    }
    uVar1 = 3;
    if ((param_3 & 1) == 0) {
      uVar1 = uVar9;
    }
    lVar13 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
    if (lVar13 != 0) {
      Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                (lVar13,*(undefined8 *)PTR_DAT_0578c230,0);
      Modules_Contexts_Application_Events_Scripts_EventSender__AddWindQuestCommonData_1498364
                (lVar13);
      puVar4 = PTR_DAT_057db748;
      puVar3 = PTR_DAT_0576b010;
      if ((lVar12 != 0) && (*(long *)(lVar12 + 0x18) != 0)) {
        uStack_64 = Modules_Contexts_Home_WindQuest_Scripts_WindQuestDataService__GetProgress_2d9c2e0
                              (*(long *)(lVar12 + 0x18),0);
        uVar14 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_64);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar13,*(undefined8 *)puVar3,uVar14,0);
        puVar5 = PTR_DAT_0580d818;
        puVar2 = PTR_DAT_0578d348;
        puVar3 = PTR_DAT_0576b928;
        if (*(long *)(lVar12 + 0x18) != 0) {
          uVar9 = Modules_Contexts_Home_WindQuest_Scripts_WindQuestDataService__GetProgress_2d9c2e0
                            (*(long *)(lVar12 + 0x18),0);
          uStack_68 = Modules_Contexts_Home_WindQuest_Scripts_WindQuestService__GetCompletedGoalCountForProgress_2d9e918
                                (lVar12,uVar9,0);
          uVar14 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_68);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar13,*(undefined8 *)puVar5,uVar14,0);
          uStack_80 = *(undefined8 *)puVar2;
          uStack_78 = 0xffffffffffffffff;
          uStack_70 = uVar1;
          uVar14 = System_Enum__ToString_23a4eac(&uStack_80,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar13,*(undefined8 *)puVar3,uVar14,0);
          if (*(long *)(lVar12 + 0x18) != 0) {
            iVar10 = Modules_Contexts_Home_WindQuest_Scripts_WindQuestDataService__GetProgress_2d9c2e0
                               (*(long *)(lVar12 + 0x18),0);
            puVar8 = PTR_DAT_05802ff8;
            puVar5 = PTR_DAT_057e66c0;
            puVar3 = PTR_DAT_05774390;
            if (*(long *)(lVar12 + 0x18) != 0) {
              uVar9 = Modules_Contexts_Home_WindQuest_Scripts_WindQuestDataService__GetProgress_2d9c2e0
                                (*(long *)(lVar12 + 0x18),0);
              iVar11 = Modules_Contexts_Home_WindQuest_Scripts_WindQuestService__GetCompletedGoalCountForProgress_2d9e918
                                 (lVar12,uVar9,0);
              uStack_98 = *(undefined8 *)puVar2;
              uStack_90 = 0xffffffffffffffff;
              uStack_88 = uVar1;
              uVar14 = System_Enum__ToString_23a4eac(&uStack_98,0);
              plVar15 = (long *)System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                          (*(undefined8 *)(lVar13 + 0x18),*(undefined8 *)puVar5,
                                           *(undefined8 *)puVar3,*(undefined8 *)puVar8);
              puVar2 = PTR_DAT_0575a580;
              if (plVar15 != (long *)0x0) {
                uVar16 = (**(code **)(*plVar15 + 0x168))(plVar15,*(undefined8 *)(*plVar15 + 0x170));
                plVar15 = (long *)System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                            (*(undefined8 *)(lVar13 + 0x18),*(undefined8 *)puVar2,
                                             *(undefined8 *)puVar3,*(undefined8 *)puVar8);
                puVar7 = PTR_DAT_057caaf0;
                puVar6 = PTR_DAT_057b6548;
                puVar5 = PTR_DAT_0579fa30;
                puVar2 = PTR_DAT_057841a0;
                if (plVar15 != (long *)0x0) {
                  uVar17 = (**(code **)(*plVar15 + 0x168))
                                     (plVar15,*(undefined8 *)(*plVar15 + 0x170));
                  uVar20 = *(undefined8 *)(lVar13 + 0x18);
                  uStack_9c = 0;
                  uVar18 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_9c);
                  uVar18 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                     (uVar20,*(undefined8 *)puVar6,uVar18,*(undefined8 *)puVar8);
                  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                    thunk_FUN_0130472c(*(long *)puVar5);
                  }
                  uVar18 = System_Convert__ToInt64_2130754(uVar18,0);
                  uVar21 = *(undefined8 *)(lVar13 + 0x18);
                  uStack_a0 = 0;
                  uVar20 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_a0);
                  uVar20 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                     (uVar21,*(undefined8 *)puVar7,uVar20,*(undefined8 *)puVar8);
                  uVar20 = System_Convert__ToInt64_2130754(uVar20,0);
                  uVar22 = *(undefined8 *)(lVar13 + 0x18);
                  uStack_a4 = 0;
                  uVar21 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_a4);
                  uVar21 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                     (uVar22,*(undefined8 *)puVar2,uVar21,*(undefined8 *)puVar8);
                  uVar21 = System_Convert__ToInt64_2130754(uVar21,0);
                  plVar15 = (long *)System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                              (*(undefined8 *)(lVar13 + 0x18),
                                               *(undefined8 *)PTR_DAT_0576f4f0,*(undefined8 *)puVar3
                                               ,*(undefined8 *)puVar8);
                  puVar4 = PTR_DAT_05779590;
                  if (plVar15 != (long *)0x0) {
                    uVar22 = (**(code **)(*plVar15 + 0x168))
                                       (plVar15,*(undefined8 *)(*plVar15 + 0x170));
                    plVar15 = (long *)System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                                (*(undefined8 *)(lVar13 + 0x18),
                                                 *(undefined8 *)puVar4,*(undefined8 *)puVar3,
                                                 *(undefined8 *)puVar8);
                    puVar3 = PTR_DAT_0575f9f0;
                    if (plVar15 != (long *)0x0) {
                      uVar19 = (**(code **)(*plVar15 + 0x168))
                                         (plVar15,*(undefined8 *)(*plVar15 + 0x170));
                      uVar14 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__WindQuestFinished_2dbe510
                                         ((long)iVar10,(long)iVar11,uVar14,uVar16,uVar17,uVar18,
                                          uVar20,uVar21,uVar22,uVar19,0);
                      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                        thunk_FUN_0130472c(*(long *)puVar3);
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

