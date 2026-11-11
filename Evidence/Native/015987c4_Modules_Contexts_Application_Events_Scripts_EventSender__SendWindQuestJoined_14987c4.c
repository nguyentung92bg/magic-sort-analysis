/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendWindQuestJoined
void Modules_Contexts_Application_Events_Scripts_EventSender__SendWindQuestJoined (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendWindQuestJoined
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendWindQuestJoined
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendWindQuestJoined_14987c4
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  puVar1 = PTR_DAT_057c8a60;
  if ((bRam0000000005c23890 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_05802ff8);
    FUN_012d0dc8(PTR_DAT_0579fa30);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_05779590);
    FUN_012d0dc8(PTR_DAT_057b6548);
    FUN_012d0dc8(PTR_DAT_0576f4f0);
    FUN_012d0dc8(PTR_DAT_057841a0);
    FUN_012d0dc8(PTR_DAT_0576b010);
    FUN_012d0dc8(PTR_DAT_057772a0);
    FUN_012d0dc8(PTR_DAT_0575a580);
    FUN_012d0dc8(PTR_DAT_05774390);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057e66c0);
    bRam0000000005c23890 = 1;
  }
  lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar7 = PTR_DAT_05802ff8;
  puVar3 = PTR_DAT_057e66c0;
  puVar6 = PTR_DAT_057db748;
  puVar2 = PTR_DAT_05774390;
  puVar1 = PTR_DAT_0576b010;
  if (lVar8 != 0) {
    Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
              (lVar8,*(undefined8 *)PTR_DAT_057772a0,0);
    Modules_Contexts_Application_Events_Scripts_EventSender__AddWindQuestCommonData_1498364(lVar8);
    uStack_64 = 0;
    uVar9 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_64);
    Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
              (lVar8,*(undefined8 *)puVar1,uVar9,0);
    plVar10 = (long *)System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                (*(undefined8 *)(lVar8 + 0x18),*(undefined8 *)puVar3,
                                 *(undefined8 *)puVar2,*(undefined8 *)puVar7);
    puVar1 = PTR_DAT_0575a580;
    if (plVar10 != (long *)0x0) {
      uVar9 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
      plVar10 = (long *)System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                  (*(undefined8 *)(lVar8 + 0x18),*(undefined8 *)puVar1,
                                   *(undefined8 *)puVar2,*(undefined8 *)puVar7);
      puVar5 = PTR_DAT_057caaf0;
      puVar4 = PTR_DAT_057b6548;
      puVar3 = PTR_DAT_0579fa30;
      puVar1 = PTR_DAT_057841a0;
      if (plVar10 != (long *)0x0) {
        uVar11 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
        uVar14 = *(undefined8 *)(lVar8 + 0x18);
        uStack_68 = 0;
        uVar12 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_68);
        uVar12 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                           (uVar14,*(undefined8 *)puVar4,uVar12,*(undefined8 *)puVar7);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_0130472c(*(long *)puVar3);
        }
        uVar12 = System_Convert__ToInt64_2130754(uVar12,0);
        uVar15 = *(undefined8 *)(lVar8 + 0x18);
        uStack_6c = 0;
        uVar14 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_6c);
        uVar14 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                           (uVar15,*(undefined8 *)puVar5,uVar14,*(undefined8 *)puVar7);
        uVar14 = System_Convert__ToInt64_2130754(uVar14,0);
        uVar16 = *(undefined8 *)(lVar8 + 0x18);
        uStack_70 = 0;
        uVar15 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_70);
        uVar15 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                           (uVar16,*(undefined8 *)puVar1,uVar15,*(undefined8 *)puVar7);
        uVar15 = System_Convert__ToInt64_2130754(uVar15,0);
        plVar10 = (long *)System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                    (*(undefined8 *)(lVar8 + 0x18),*(undefined8 *)PTR_DAT_0576f4f0,
                                     *(undefined8 *)puVar2,*(undefined8 *)puVar7);
        puVar1 = PTR_DAT_05779590;
        if (plVar10 != (long *)0x0) {
          uVar16 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
          plVar10 = (long *)System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                      (*(undefined8 *)(lVar8 + 0x18),*(undefined8 *)puVar1,
                                       *(undefined8 *)puVar2,*(undefined8 *)puVar7);
          puVar1 = PTR_DAT_0575f9f0;
          if (plVar10 != (long *)0x0) {
            uVar13 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
            uVar9 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__WindQuestJoined_2dbe220
                              (0,uVar9,uVar11,uVar12,uVar14,uVar15,uVar16,uVar13,0);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_0130472c(*(long *)puVar1);
            }
            GrandSDK_Analytics_Analytics__Track_2b38d30(uVar9,0);
            Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4
                      (param_1,lVar8);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

