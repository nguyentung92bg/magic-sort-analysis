/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendCardSent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendCardSent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t source, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendCardSent
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendCardSent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t source, const
   MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendCardSent_147a818
               (undefined8 param_1,undefined4 param_2)

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
  long *plVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  int *piVar24;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c23823 & 1) == 0) {
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
    FUN_012d0dc8(PTR_DAT_058186c0);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057990f8);
    FUN_012d0dc8(PTR_DAT_057d3f68);
    FUN_012d0dc8(PTR_DAT_0576e1f0);
    bRam0000000005c23823 = 1;
  }
  lVar20 = **(long **)(*(long *)puVar1 + 0xb8);
  if ((lVar20 != 0) && (lVar20 = *(long *)(lVar20 + 0x18), lVar20 != 0)) {
    lVar20 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar20,*(undefined8 *)PTR_DAT_05776540);
    puVar2 = PTR_DAT_057c8a60;
    lVar21 = **(long **)(*(long *)puVar1 + 0xb8);
    if ((lVar21 != 0) && (lVar21 = *(long *)(lVar21 + 0x18), lVar21 != 0)) {
      plVar12 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                  (lVar21,*(undefined8 *)PTR_DAT_057a1e60);
      lVar21 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
      if ((lVar21 != 0) &&
         (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                    (lVar21,*(undefined8 *)PTR_DAT_0576e1f0,0), puVar4 = PTR_DAT_057d8f18,
         puVar3 = PTR_DAT_057d6138, puVar2 = PTR_DAT_057d3f68, puVar1 = PTR_DAT_057b8b10,
         lVar20 != 0)) {
        uVar13 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetReadableActiveCollectionName_3773de8
                           (lVar20,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar21,*(undefined8 *)puVar4,uVar13,0);
        uStack_68 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetStartTime_3773a98
                              (lVar20,0);
        uVar13 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_68);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar21,*(undefined8 *)puVar1,uVar13,0);
        uVar13 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetSegment_3773acc
                           (lVar20,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar21,*(undefined8 *)puVar2,uVar13,0);
        puVar8 = PTR_DAT_058186c0;
        puVar7 = PTR_DAT_057e4da8;
        puVar6 = PTR_DAT_057db748;
        puVar5 = PTR_DAT_057caaf0;
        puVar4 = PTR_DAT_057ab1a0;
        puVar3 = PTR_DAT_057990f8;
        puVar2 = PTR_DAT_05780248;
        puVar1 = PTR_DAT_057636d0;
        if (plVar12 != (long *)0x0) {
          lVar22 = *plVar12;
          uVar23 = (ulong)*(ushort *)(lVar22 + 0x12a);
          if (uVar23 != 0) {
            piVar24 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
            do {
              if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_057636d0) {
                puVar14 = (undefined8 *)(lVar22 + (long)(*piVar24 + 1) * 0x10 + 0x138);
                goto LAB_0157aaf8;
              }
              uVar23 = uVar23 - 1;
              piVar24 = piVar24 + 4;
            } while (uVar23 != 0);
          }
          puVar14 = (undefined8 *)FUN_0131971c(plVar12,*(long *)PTR_DAT_057636d0,1);
LAB_0157aaf8:
          uStack_6c = (*(code *)*puVar14)(plVar12,puVar14[1]);
          uVar13 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_6c);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar21,*(undefined8 *)puVar5,uVar13,0);
          uStack_78 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetRemainingSeconds_376c824
                                (lVar20,0);
          uVar13 = thunk_FUN_01320a8c(*(undefined8 *)PTR_DAT_057d6138,&uStack_78);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar21,*(undefined8 *)puVar7,uVar13,0);
          uStack_7c = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetExtraStarCount_376cf10
                                (lVar20,0);
          uVar13 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_7c);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar21,*(undefined8 *)puVar3,uVar13,0);
          puVar3 = PTR_DAT_057bfac8;
          uStack_98 = *(undefined8 *)PTR_DAT_057bfac8;
          uStack_90 = 0xffffffffffffffff;
          uStack_88 = param_2;
          uVar13 = System_Enum__ToString_23a4eac(&uStack_98,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar21,*(undefined8 *)puVar4,uVar13,0);
          uStack_9c = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetTotalCardCountInInventory_37703f4
                                (lVar20,0);
          uVar13 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_9c);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar21,*(undefined8 *)puVar8,uVar13,0);
          uVar13 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetReadableEventId_3773d2c
                             (lVar20,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar21,*(undefined8 *)puVar2,uVar13,0);
          uVar13 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetReadableActiveCollectionName_3773de8
                             (lVar20,0);
          uVar15 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetStartTime_3773a98
                             (lVar20,0);
          uVar16 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetSegment_3773acc
                             (lVar20,0);
          lVar22 = *plVar12;
          uVar23 = (ulong)*(ushort *)(lVar22 + 0x12a);
          if (uVar23 != 0) {
            piVar24 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
            do {
              if (*(long *)(piVar24 + -2) == *(long *)puVar1) {
                puVar14 = (undefined8 *)(lVar22 + (long)(*piVar24 + 1) * 0x10 + 0x138);
                goto LAB_0157acac;
              }
              uVar23 = uVar23 - 1;
              piVar24 = piVar24 + 4;
            } while (uVar23 != 0);
          }
          puVar14 = (undefined8 *)FUN_0131971c(plVar12,*(long *)puVar1,1);
LAB_0157acac:
          iVar9 = (*(code *)*puVar14)(plVar12,puVar14[1]);
          uVar17 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetRemainingSeconds_376c824
                             (lVar20,0);
          iVar10 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetExtraStarCount_376cf10
                             (lVar20,0);
          uStack_b8 = *(undefined8 *)puVar3;
          uStack_b0 = 0xffffffffffffffff;
          uStack_a8 = param_2;
          uVar18 = System_Enum__ToString_23a4eac(&uStack_b8,0);
          iVar11 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetTotalCardCountInInventory_37703f4
                             (lVar20,0);
          uVar19 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetReadableEventId_3773d2c
                             (lVar20,0);
          uVar13 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__CardSent_2db0e40
                             (uVar13,uVar15,uVar16,(long)iVar9,uVar17,(long)iVar10,uVar18,
                              (long)iVar11,uVar19,0);
          if (*(int *)(*(long *)PTR_DAT_0575f9f0 + 0xe0) == 0) {
            thunk_FUN_0130472c(*(long *)PTR_DAT_0575f9f0);
          }
          GrandSDK_Analytics_Analytics__Track_2b38d30(uVar13,0);
          Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar21)
          ;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

