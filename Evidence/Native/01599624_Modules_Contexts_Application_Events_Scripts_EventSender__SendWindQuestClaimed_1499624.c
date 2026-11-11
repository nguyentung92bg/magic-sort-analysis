/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendWindQuestClaimed
void Modules_Contexts_Application_Events_Scripts_EventSender__SendWindQuestClaimed (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t goalIndex, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendWindQuestClaimed
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendWindQuestClaimed
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t goalIndex, const
   MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendWindQuestClaimed_1499624
               (undefined8 param_1,int param_2)

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
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  int iVar21;
  undefined8 uVar22;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_6c;
  int iStack_68;
  int iStack_64;
  
  puVar2 = PTR_DAT_0576aae0;
  if ((bRam0000000005c23893 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_05802ff8);
    FUN_012d0dc8(PTR_DAT_0575ba08);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_0579fa30);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_0578df08);
    FUN_012d0dc8(PTR_DAT_0576ef98);
    FUN_012d0dc8(PTR_DAT_057800a8);
    FUN_012d0dc8(PTR_DAT_057e3618);
    FUN_012d0dc8(PTR_DAT_05779590);
    FUN_012d0dc8(PTR_DAT_058131a8);
    FUN_012d0dc8(PTR_DAT_057b6548);
    FUN_012d0dc8(PTR_DAT_0576f4f0);
    FUN_012d0dc8(PTR_DAT_05774660);
    FUN_012d0dc8(PTR_DAT_057841a0);
    FUN_012d0dc8(PTR_DAT_0576b010);
    FUN_012d0dc8(PTR_DAT_0575a580);
    FUN_012d0dc8(PTR_DAT_057e26e0);
    FUN_012d0dc8(PTR_DAT_05774390);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057e66c0);
    bRam0000000005c23893 = 1;
  }
  if ((((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
       (lVar9 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar9 != 0)) &&
      (lVar9 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                         (lVar9,*(undefined8 *)PTR_DAT_0575ba08), lVar9 != 0)) &&
     (*(long *)(lVar9 + 0x18) != 0)) {
    lVar10 = Modules_Contexts_Home_WindQuest_Scripts_WindQuestDataService__GetGoals_2d9c0e8
                       (*(long *)(lVar9 + 0x18),0);
    uVar18 = 0;
    if (param_2 < 0) {
      iVar21 = 0;
    }
    else {
      iVar21 = 0;
      if (lVar10 != 0) {
        if (param_2 < *(int *)(lVar10 + 0x18)) {
          lVar11 = System_Collections_Generic_List_object___get_Item_21fc76c
                             (lVar10,param_2,*(undefined8 *)PTR_DAT_0576ef98);
          if (lVar11 == 0) goto LAB_01599bb4;
          iVar21 = *(int *)(lVar11 + 0x10);
          uVar18 = 1;
          if (*(int *)(lVar10 + 0x18) + -1 == param_2) {
            uVar18 = 2;
          }
        }
        else {
          uVar18 = 0;
          iVar21 = 0;
        }
      }
    }
    lVar10 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057c8a60);
    puVar1 = PTR_DAT_057e26e0;
    puVar3 = PTR_DAT_057db748;
    puVar2 = PTR_DAT_05774660;
    if (lVar10 != 0) {
      Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                (lVar10,*(undefined8 *)PTR_DAT_058131a8,0);
      Modules_Contexts_Application_Events_Scripts_EventSender__AddWindQuestCommonData_1498364
                (lVar10);
      iStack_64 = param_2 + 1;
      uVar12 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&iStack_64);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar10,*(undefined8 *)puVar2,uVar12,0);
      iStack_68 = iVar21;
      uVar12 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&iStack_68);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar10,*(undefined8 *)puVar1,uVar12,0);
      puVar4 = PTR_DAT_057e3618;
      puVar1 = PTR_DAT_057800a8;
      puVar2 = PTR_DAT_0576b010;
      if (*(long *)(lVar9 + 0x18) != 0) {
        uStack_6c = Modules_Contexts_Home_WindQuest_Scripts_WindQuestDataService__GetProgress_2d9c2e0
                              (*(long *)(lVar9 + 0x18),0);
        uVar12 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_6c);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar10,*(undefined8 *)puVar2,uVar12,0);
        uStack_88 = *(undefined8 *)puVar1;
        uStack_80 = 0xffffffffffffffff;
        uStack_78 = uVar18;
        uVar12 = System_Enum__ToString_23a4eac(&uStack_88,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar10,*(undefined8 *)puVar4,uVar12,0);
        puVar7 = PTR_DAT_05802ff8;
        puVar4 = PTR_DAT_057e66c0;
        puVar2 = PTR_DAT_05774390;
        if (*(long *)(lVar9 + 0x18) != 0) {
          iVar8 = Modules_Contexts_Home_WindQuest_Scripts_WindQuestDataService__GetProgress_2d9c2e0
                            (*(long *)(lVar9 + 0x18),0);
          uStack_a0 = *(undefined8 *)puVar1;
          uStack_98 = 0xffffffffffffffff;
          uStack_90 = uVar18;
          uVar12 = System_Enum__ToString_23a4eac(&uStack_a0,0);
          plVar13 = (long *)System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                      (*(undefined8 *)(lVar10 + 0x18),*(undefined8 *)puVar4,
                                       *(undefined8 *)puVar2,*(undefined8 *)puVar7);
          puVar1 = PTR_DAT_0575a580;
          if (plVar13 != (long *)0x0) {
            uVar14 = (**(code **)(*plVar13 + 0x168))(plVar13,*(undefined8 *)(*plVar13 + 0x170));
            plVar13 = (long *)System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                        (*(undefined8 *)(lVar10 + 0x18),*(undefined8 *)puVar1,
                                         *(undefined8 *)puVar2,*(undefined8 *)puVar7);
            puVar6 = PTR_DAT_057caaf0;
            puVar5 = PTR_DAT_057b6548;
            puVar4 = PTR_DAT_0579fa30;
            puVar1 = PTR_DAT_057841a0;
            if (plVar13 != (long *)0x0) {
              uVar15 = (**(code **)(*plVar13 + 0x168))(plVar13,*(undefined8 *)(*plVar13 + 0x170));
              uVar19 = *(undefined8 *)(lVar10 + 0x18);
              uStack_a4 = 0;
              uVar16 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_a4);
              uVar16 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                 (uVar19,*(undefined8 *)puVar5,uVar16,*(undefined8 *)puVar7);
              if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                thunk_FUN_0130472c(*(long *)puVar4);
              }
              uVar16 = System_Convert__ToInt64_2130754(uVar16,0);
              uVar20 = *(undefined8 *)(lVar10 + 0x18);
              uStack_a8 = 0;
              uVar19 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_a8);
              uVar19 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                 (uVar20,*(undefined8 *)puVar6,uVar19,*(undefined8 *)puVar7);
              uVar19 = System_Convert__ToInt64_2130754(uVar19,0);
              uVar22 = *(undefined8 *)(lVar10 + 0x18);
              uStack_ac = 0;
              uVar20 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_ac);
              uVar20 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                 (uVar22,*(undefined8 *)puVar1,uVar20,*(undefined8 *)puVar7);
              uVar20 = System_Convert__ToInt64_2130754(uVar20,0);
              plVar13 = (long *)System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                          (*(undefined8 *)(lVar10 + 0x18),
                                           *(undefined8 *)PTR_DAT_0576f4f0,*(undefined8 *)puVar2,
                                           *(undefined8 *)puVar7);
              puVar3 = PTR_DAT_05779590;
              if (plVar13 != (long *)0x0) {
                uVar22 = (**(code **)(*plVar13 + 0x168))(plVar13,*(undefined8 *)(*plVar13 + 0x170));
                plVar13 = (long *)System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                            (*(undefined8 *)(lVar10 + 0x18),*(undefined8 *)puVar3,
                                             *(undefined8 *)puVar2,*(undefined8 *)puVar7);
                puVar2 = PTR_DAT_0575f9f0;
                if (plVar13 != (long *)0x0) {
                  uVar17 = (**(code **)(*plVar13 + 0x168))
                                     (plVar13,*(undefined8 *)(*plVar13 + 0x170));
                  uVar12 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__WindQuestClaimed_2dbe68c
                                     ((long)(param_2 + 1),(long)iVar21,(long)iVar8,uVar12,uVar14,
                                      uVar15,uVar16,uVar19,uVar20,uVar22,uVar17,0);
                  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    thunk_FUN_0130472c(*(long *)puVar2);
                  }
                  GrandSDK_Analytics_Analytics__Track_2b38d30(uVar12,0);
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
LAB_01599bb4:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

