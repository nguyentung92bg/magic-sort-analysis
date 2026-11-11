/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendCardReceived
void Modules_Contexts_Application_Events_Scripts_EventSender__SendCardReceived (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t cardCount, int32_t packType, int32_t source, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendCardReceived
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendCardReceived
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t cardCount, int32_t
   packType, int32_t source, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendCardReceived_147a198
               (undefined8 param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  int *piVar25;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c23822 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_05776540);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057bfac8);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057d6138);
    FUN_012d0dc8(PTR_DAT_057d8f18);
    FUN_012d0dc8(PTR_DAT_057e4da8);
    FUN_012d0dc8(PTR_DAT_057b8b10);
    FUN_012d0dc8(PTR_DAT_05780248);
    FUN_012d0dc8(PTR_DAT_057ab1a0);
    FUN_012d0dc8(PTR_DAT_057e3978);
    FUN_012d0dc8(PTR_DAT_057a1250);
    FUN_012d0dc8(PTR_DAT_058186c0);
    FUN_012d0dc8(PTR_DAT_05777418);
    FUN_012d0dc8(PTR_DAT_057fe008);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057990f8);
    FUN_012d0dc8(PTR_DAT_057d3f68);
    bRam0000000005c23822 = 1;
  }
  lVar21 = **(long **)(*(long *)puVar1 + 0xb8);
  if ((lVar21 != 0) && (lVar21 = *(long *)(lVar21 + 0x18), lVar21 != 0)) {
    lVar21 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar21,*(undefined8 *)PTR_DAT_05776540);
    puVar2 = PTR_DAT_057c8a60;
    lVar22 = **(long **)(*(long *)puVar1 + 0xb8);
    if ((lVar22 != 0) && (lVar22 = *(long *)(lVar22 + 0x18), lVar22 != 0)) {
      plVar13 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                  (lVar22,*(undefined8 *)PTR_DAT_057a1e60);
      lVar22 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
      if (lVar22 != 0) {
        Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                  (lVar22,*(undefined8 *)PTR_DAT_057a1250,0);
        puVar4 = PTR_DAT_057d8f18;
        puVar3 = PTR_DAT_057d6138;
        puVar2 = PTR_DAT_057d3f68;
        puVar1 = PTR_DAT_057b8b10;
        if (lVar21 != 0) {
          uVar14 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetReadableActiveCollectionName_3773de8
                             (lVar21,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar22,*(undefined8 *)puVar4,uVar14,0);
          uStack_68 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetStartTime_3773a98
                                (lVar21,0);
          uVar14 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_68);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar22,*(undefined8 *)puVar1,uVar14,0);
          uVar14 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetSegment_3773acc
                             (lVar21,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar22,*(undefined8 *)puVar2,uVar14,0);
          puVar8 = PTR_DAT_057fe008;
          puVar7 = PTR_DAT_057e4da8;
          puVar6 = PTR_DAT_057e3978;
          puVar5 = PTR_DAT_057db748;
          puVar4 = PTR_DAT_057caaf0;
          puVar3 = PTR_DAT_057ab1a0;
          puVar2 = PTR_DAT_05780248;
          puVar1 = PTR_DAT_057636d0;
          if (plVar13 != (long *)0x0) {
            lVar23 = *plVar13;
            uVar24 = (ulong)*(ushort *)(lVar23 + 0x12a);
            if (uVar24 != 0) {
              piVar25 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
              do {
                if (*(long *)(piVar25 + -2) == *(long *)PTR_DAT_057636d0) {
                  puVar15 = (undefined8 *)(lVar23 + (long)(*piVar25 + 1) * 0x10 + 0x138);
                  goto LAB_0157a4a8;
                }
                uVar24 = uVar24 - 1;
                piVar25 = piVar25 + 4;
              } while (uVar24 != 0);
            }
            puVar15 = (undefined8 *)FUN_0131971c(plVar13,*(long *)PTR_DAT_057636d0,1);
LAB_0157a4a8:
            uStack_6c = (*(code *)*puVar15)(plVar13,puVar15[1]);
            uVar14 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_6c);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar22,*(undefined8 *)puVar4,uVar14,0);
            uStack_78 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetRemainingSeconds_376c824
                                  (lVar21,0);
            uVar14 = thunk_FUN_01320a8c(*(undefined8 *)PTR_DAT_057d6138,&uStack_78);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar22,*(undefined8 *)puVar7,uVar14,0);
            uStack_7c = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetExtraStarCount_376cf10
                                  (lVar21,0);
            uVar14 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_7c);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar22,*(undefined8 *)PTR_DAT_057990f8,uVar14,0);
            iStack_80 = param_2;
            uVar14 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&iStack_80);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar22,*(undefined8 *)PTR_DAT_05777418,uVar14,0);
            iStack_84 = param_3;
            uVar14 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&iStack_84);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar22,*(undefined8 *)puVar8,uVar14,0);
            uStack_a0 = *(undefined8 *)PTR_DAT_057bfac8;
            uStack_98 = 0xffffffffffffffff;
            uStack_90 = param_4;
            uVar14 = System_Enum__ToString_23a4eac(&uStack_a0,0);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar22,*(undefined8 *)puVar3,uVar14,0);
            uStack_a4 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetTotalCardProgress_376fa78
                                  (lVar21,0);
            uVar14 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_a4);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar22,*(undefined8 *)puVar6,uVar14,0);
            uStack_a8 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetTotalCardCountInInventory_37703f4
                                  (lVar21,0);
            uVar14 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_a8);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar22,*(undefined8 *)PTR_DAT_058186c0,uVar14,0);
            uVar14 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetReadableEventId_3773d2c
                               (lVar21,0);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar22,*(undefined8 *)puVar2,uVar14,0);
            uVar14 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetReadableActiveCollectionName_3773de8
                               (lVar21,0);
            uVar16 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetStartTime_3773a98
                               (lVar21,0);
            uVar17 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetSegment_3773acc
                               (lVar21,0);
            lVar23 = *plVar13;
            uVar24 = (ulong)*(ushort *)(lVar23 + 0x12a);
            if (uVar24 != 0) {
              piVar25 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
              do {
                if (*(long *)(piVar25 + -2) == *(long *)puVar1) {
                  puVar15 = (undefined8 *)(lVar23 + (long)(*piVar25 + 1) * 0x10 + 0x138);
                  goto LAB_0157a6f8;
                }
                uVar24 = uVar24 - 1;
                piVar25 = piVar25 + 4;
              } while (uVar24 != 0);
            }
            puVar15 = (undefined8 *)FUN_0131971c(plVar13,*(long *)puVar1,1);
LAB_0157a6f8:
            iVar9 = (*(code *)*puVar15)(plVar13,puVar15[1]);
            uVar18 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetRemainingSeconds_376c824
                               (lVar21,0);
            iVar10 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetExtraStarCount_376cf10
                               (lVar21,0);
            uStack_c0 = *(undefined8 *)PTR_DAT_057bfac8;
            uStack_b8 = 0xffffffffffffffff;
            uStack_b0 = param_4;
            uVar19 = System_Enum__ToString_23a4eac(&uStack_c0,0);
            iVar11 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetTotalCardProgress_376fa78
                               (lVar21,0);
            iVar12 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetTotalCardCountInInventory_37703f4
                               (lVar21,0);
            uVar20 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetReadableEventId_3773d2c
                               (lVar21,0);
            uVar14 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__CardReceived_2db0ca0
                               (uVar14,uVar16,uVar17,(long)iVar9,uVar18,(long)iVar10,(long)param_2,
                                (long)param_3,uVar19,(long)iVar11,(long)iVar12,uVar20,0);
            if (*(int *)(*(long *)PTR_DAT_0575f9f0 + 0xe0) == 0) {
              thunk_FUN_0130472c(*(long *)PTR_DAT_0575f9f0);
            }
            GrandSDK_Analytics_Analytics__Track_2b38d30(uVar14,0);
            Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4
                      (param_1,lVar22);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

