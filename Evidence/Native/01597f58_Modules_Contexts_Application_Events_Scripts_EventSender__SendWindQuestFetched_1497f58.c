/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendWindQuestFetched
void Modules_Contexts_Application_Events_Scripts_EventSender__SendWindQuestFetched (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendWindQuestFetched
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendWindQuestFetched
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendWindQuestFetched_1497f58
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  puVar2 = PTR_DAT_0576aae0;
  if ((bRam0000000005c2388f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_05802ff8);
    FUN_012d0dc8(PTR_DAT_0575ba08);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_0579fa30);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_05779590);
    FUN_012d0dc8(PTR_DAT_05785318);
    FUN_012d0dc8(PTR_DAT_057b6548);
    FUN_012d0dc8(PTR_DAT_0577bc50);
    FUN_012d0dc8(PTR_DAT_0576f4f0);
    FUN_012d0dc8(PTR_DAT_057841a0);
    FUN_012d0dc8(PTR_DAT_0575a580);
    FUN_012d0dc8(PTR_DAT_05774390);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057e66c0);
    bRam0000000005c2388f = 1;
  }
  puVar3 = PTR_DAT_057c8a60;
  if ((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
     (lVar9 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar9 != 0)) {
    lVar9 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                      (lVar9,*(undefined8 *)PTR_DAT_0575ba08);
    lVar10 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
    if (lVar10 != 0) {
      Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                (lVar10,*(undefined8 *)PTR_DAT_05785318,0);
      Modules_Contexts_Application_Events_Scripts_EventSender__AddWindQuestCommonData_1498364
                (lVar10);
      puVar3 = PTR_DAT_057db748;
      puVar2 = PTR_DAT_0577bc50;
      if ((lVar9 != 0) && (*(long *)(lVar9 + 0x18) != 0)) {
        uStack_64 = Modules_Contexts_Home_WindQuest_Scripts_WindQuestDataService__GetUnlockLevelRequirement_2d9c198
                              (*(long *)(lVar9 + 0x18),0);
        uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_64);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar10,*(undefined8 *)puVar2,uVar11,0);
        puVar7 = PTR_DAT_05802ff8;
        puVar1 = PTR_DAT_057e66c0;
        puVar2 = PTR_DAT_05774390;
        if (*(long *)(lVar9 + 0x18) != 0) {
          iVar8 = Modules_Contexts_Home_WindQuest_Scripts_WindQuestDataService__GetUnlockLevelRequirement_2d9c198
                            (*(long *)(lVar9 + 0x18),0);
          plVar12 = (long *)System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                      (*(undefined8 *)(lVar10 + 0x18),*(undefined8 *)puVar1,
                                       *(undefined8 *)puVar2,*(undefined8 *)puVar7);
          puVar1 = PTR_DAT_0575a580;
          if (plVar12 != (long *)0x0) {
            uVar11 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
            plVar12 = (long *)System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                        (*(undefined8 *)(lVar10 + 0x18),*(undefined8 *)puVar1,
                                         *(undefined8 *)puVar2,*(undefined8 *)puVar7);
            puVar6 = PTR_DAT_057caaf0;
            puVar5 = PTR_DAT_057b6548;
            puVar4 = PTR_DAT_0579fa30;
            puVar1 = PTR_DAT_057841a0;
            if (plVar12 != (long *)0x0) {
              uVar13 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
              uVar16 = *(undefined8 *)(lVar10 + 0x18);
              uStack_68 = 0;
              uVar14 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_68);
              uVar14 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                 (uVar16,*(undefined8 *)puVar5,uVar14,*(undefined8 *)puVar7);
              if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                thunk_FUN_0130472c(*(long *)puVar4);
              }
              uVar14 = System_Convert__ToInt64_2130754(uVar14,0);
              uVar17 = *(undefined8 *)(lVar10 + 0x18);
              uStack_6c = 0;
              uVar16 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_6c);
              uVar16 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                 (uVar17,*(undefined8 *)puVar6,uVar16,*(undefined8 *)puVar7);
              uVar16 = System_Convert__ToInt64_2130754(uVar16,0);
              uVar18 = *(undefined8 *)(lVar10 + 0x18);
              uStack_70 = 0;
              uVar17 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_70);
              uVar17 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                 (uVar18,*(undefined8 *)puVar1,uVar17,*(undefined8 *)puVar7);
              uVar17 = System_Convert__ToInt64_2130754(uVar17,0);
              plVar12 = (long *)System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                          (*(undefined8 *)(lVar10 + 0x18),
                                           *(undefined8 *)PTR_DAT_0576f4f0,*(undefined8 *)puVar2,
                                           *(undefined8 *)puVar7);
              puVar3 = PTR_DAT_05779590;
              if (plVar12 != (long *)0x0) {
                uVar18 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
                plVar12 = (long *)System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                            (*(undefined8 *)(lVar10 + 0x18),*(undefined8 *)puVar3,
                                             *(undefined8 *)puVar2,*(undefined8 *)puVar7);
                puVar2 = PTR_DAT_0575f9f0;
                if (plVar12 != (long *)0x0) {
                  uVar15 = (**(code **)(*plVar12 + 0x168))
                                     (plVar12,*(undefined8 *)(*plVar12 + 0x170));
                  uVar11 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__WindQuestReceived_2dbe0d4
                                     ((long)iVar8,uVar11,uVar13,uVar14,uVar16,uVar17,uVar18,uVar15,0
                                     );
                  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    thunk_FUN_0130472c(*(long *)puVar2);
                  }
                  GrandSDK_Analytics_Analytics__Track_2b38d30(uVar11,0);
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
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

