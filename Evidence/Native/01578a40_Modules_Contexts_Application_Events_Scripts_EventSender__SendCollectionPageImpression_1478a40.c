/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendCollectionPageImpression
void Modules_Contexts_Application_Events_Scripts_EventSender__SendCollectionPageImpression (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendCollectionPageImpression
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendCollectionPageImpression
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendCollectionPageImpression_1478a40
               (undefined8 param_1)

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
  long lVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  int *piVar23;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined4 uStack_64;
  
  puVar1 = PTR_DAT_0576aae0;
                    /* try { // try from 01578a48 to 01678a4b has its CatchHandler @ 01578ac4 */
  if ((bRam0000000005c2381d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
                    /* try { // try from 01578a88 to 01678aaf has its CatchHandler @ 01578acc */
    FUN_012d0dc8(PTR_DAT_05776540);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
                    /* try { // try from 01578ab0 to 01678abb has its CatchHandler @ 015788e8 */
    FUN_012d0dc8(PTR_DAT_057636d0);
                    /* try { // try from 01578abc to 01678ac3 has its CatchHandler @ 01578acc */
                    /* catch() { ... } // from try @ 01578a48 with catch @ 01578ac4 */
    FUN_012d0dc8(PTR_DAT_057db748);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 01578a88 with catch @ 01578acc
                       catch(type#2 @ 00000000) { ... } // from try @ 01578abc with catch @ 01578acc
                        */
    FUN_012d0dc8(PTR_DAT_057d6138);
    FUN_012d0dc8(PTR_DAT_057d8f18);
    FUN_012d0dc8(PTR_DAT_057e4da8);
    FUN_012d0dc8(PTR_DAT_05780248);
    FUN_012d0dc8(PTR_DAT_057e3978);
    FUN_012d0dc8(PTR_DAT_057b4550);
    FUN_012d0dc8(PTR_DAT_0576b048);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057990f8);
    FUN_012d0dc8(PTR_DAT_057d3f68);
    bRam0000000005c2381d = 1;
  }
  lVar19 = **(long **)(*(long *)puVar1 + 0xb8);
  if ((lVar19 != 0) && (lVar19 = *(long *)(lVar19 + 0x18), lVar19 != 0)) {
    lVar19 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar19,*(undefined8 *)PTR_DAT_05776540);
    puVar2 = PTR_DAT_057c8a60;
    lVar20 = **(long **)(*(long *)puVar1 + 0xb8);
    if ((lVar20 != 0) && (lVar20 = *(long *)(lVar20 + 0x18), lVar20 != 0)) {
      plVar13 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                  (lVar20,*(undefined8 *)PTR_DAT_057a1e60);
      lVar20 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
      if ((lVar20 != 0) &&
         (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                    (lVar20,*(undefined8 *)PTR_DAT_0576b048,0), puVar2 = PTR_DAT_057d8f18,
         puVar1 = PTR_DAT_057d3f68, lVar19 != 0)) {
        uVar14 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetReadableActiveCollectionName_3773de8
                           (lVar19,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar20,*(undefined8 *)puVar2,uVar14,0);
        uVar14 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetSegment_3773acc
                           (lVar19,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar20,*(undefined8 *)puVar1,uVar14,0);
        puVar8 = PTR_DAT_057e4da8;
        puVar7 = PTR_DAT_057e3978;
        puVar6 = PTR_DAT_057db748;
        puVar5 = PTR_DAT_057d6138;
        puVar4 = PTR_DAT_057caaf0;
        puVar3 = PTR_DAT_057990f8;
        puVar2 = PTR_DAT_05780248;
        puVar1 = PTR_DAT_057636d0;
        if (plVar13 != (long *)0x0) {
          lVar21 = *plVar13;
          uVar22 = (ulong)*(ushort *)(lVar21 + 0x12a);
          if (uVar22 != 0) {
            piVar23 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
            do {
              if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_057636d0) {
                puVar15 = (undefined8 *)(lVar21 + (long)(*piVar23 + 1) * 0x10 + 0x138);
                goto LAB_01578cbc;
              }
              uVar22 = uVar22 - 1;
              piVar23 = piVar23 + 4;
            } while (uVar22 != 0);
          }
          puVar15 = (undefined8 *)FUN_0131971c(plVar13,*(long *)PTR_DAT_057636d0,1);
LAB_01578cbc:
          uStack_64 = (*(code *)*puVar15)(plVar13,puVar15[1]);
          uVar14 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_64);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar20,*(undefined8 *)puVar4,uVar14,0);
          uStack_70 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetRemainingSeconds_376c824
                                (lVar19,0);
          uVar14 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_70);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar20,*(undefined8 *)puVar8,uVar14,0);
          uStack_74 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetCompletedThemeCount_3773b00
                                (lVar19,0);
          uVar14 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_74);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar20,*(undefined8 *)PTR_DAT_057b4550,uVar14,0);
          uStack_78 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetTotalCardProgress_376fa78
                                (lVar19,0);
          uVar14 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_78);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar20,*(undefined8 *)puVar7,uVar14,0);
          uStack_7c = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetExtraStarCount_376cf10
                                (lVar19,0);
          uVar14 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_7c);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar20,*(undefined8 *)puVar3,uVar14,0);
          uVar14 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetReadableEventId_3773d2c
                             (lVar19,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar20,*(undefined8 *)puVar2,uVar14,0);
          uVar14 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetReadableActiveCollectionName_3773de8
                             (lVar19,0);
          uVar16 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetSegment_3773acc
                             (lVar19,0);
          lVar21 = *plVar13;
          uVar22 = (ulong)*(ushort *)(lVar21 + 0x12a);
          if (uVar22 != 0) {
            piVar23 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
            do {
              if (*(long *)(piVar23 + -2) == *(long *)puVar1) {
                puVar15 = (undefined8 *)(lVar21 + (long)(*piVar23 + 1) * 0x10 + 0x138);
                goto LAB_01578e58;
              }
              uVar22 = uVar22 - 1;
              piVar23 = piVar23 + 4;
            } while (uVar22 != 0);
          }
          puVar15 = (undefined8 *)FUN_0131971c(plVar13,*(long *)puVar1,1);
LAB_01578e58:
          iVar9 = (*(code *)*puVar15)(plVar13,puVar15[1]);
          uVar17 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetRemainingSeconds_376c824
                             (lVar19,0);
          iVar10 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetCompletedThemeCount_3773b00
                             (lVar19,0);
          iVar11 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetTotalCardProgress_376fa78
                             (lVar19,0);
          iVar12 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetExtraStarCount_376cf10
                             (lVar19,0);
          uVar18 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetReadableEventId_3773d2c
                             (lVar19,0);
          uVar14 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__CollectionPageImpression_2db0694
                             (uVar14,uVar16,(long)iVar9,uVar17,(long)iVar10,(long)iVar11,
                              (long)iVar12,uVar18,0);
          if (*(int *)(*(long *)PTR_DAT_0575f9f0 + 0xe0) == 0) {
            thunk_FUN_0130472c(*(long *)PTR_DAT_0575f9f0);
          }
          GrandSDK_Analytics_Analytics__Track_2b38d30(uVar14,0);
          Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar20)
          ;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

