/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendMergeEventFinishedEvent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendMergeEventFinishedEvent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendMergeEventFinishedEvent
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendMergeEventFinishedEvent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendMergeEventFinishedEvent_1491bdc
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
  int iVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  ulong uVar23;
  int *piVar24;
  int iStack_84;
  undefined8 uStack_80;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  
  puVar1 = PTR_DAT_0576aae0;
                    /* try { // try from 01591bf8 to 01691c03 has its CatchHandler @ 01590c20 */
                    /* try { // try from 01591c04 to 01691c0b has its CatchHandler @ 01591c18 */
                    /* catch() { ... } // from try @ 01591b88 with catch @ 01591c0c */
  if ((bRam0000000005c23875 & 1) == 0) {
                    /* catch() { ... } // from try @ 01591bd0 with catch @ 01591c18
                       catch() { ... } // from try @ 01591c04 with catch @ 01591c18 */
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_057c39a8);
    FUN_012d0dc8(PTR_DAT_05792f78);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c1328);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_0576c1b8);
    FUN_012d0dc8(PTR_DAT_057beff8);
    FUN_012d0dc8(PTR_DAT_057e8d70);
    FUN_012d0dc8(PTR_DAT_0576ed20);
    FUN_012d0dc8(PTR_DAT_0580be48);
    FUN_012d0dc8(PTR_DAT_057b0120);
    FUN_012d0dc8(PTR_DAT_0575a580);
    FUN_012d0dc8(PTR_DAT_057e93b0);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057d3f68);
    FUN_012d0dc8(PTR_DAT_057e66c0);
    FUN_012d0dc8(PTR_DAT_05818d38);
    bRam0000000005c23875 = 1;
  }
  uStack_68 = 0;
  if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
     (lVar14 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar14 != 0)) {
    lVar14 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar14,*(undefined8 *)PTR_DAT_057c39a8);
    if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
       (lVar15 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar15 != 0)) {
      plVar16 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                  (lVar15,*(undefined8 *)PTR_DAT_057a1e60);
      if (((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
          (lVar15 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar15 != 0)) &&
         (lVar15 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                             (lVar15,*(undefined8 *)PTR_DAT_05792f78), lVar14 != 0)) {
        uVar17 = Modules_Contexts_Home_MergeMiniGame_Scripts_MergeMiniGameService__GetReadableEventId_219b8b8
                           (lVar14,0);
        uVar18 = Modules_Contexts_Home_MergeMiniGame_Scripts_MergeMiniGameService__GetEventId_2196fc8
                           (lVar14,0);
        puVar1 = PTR_DAT_057c8a60;
        if (lVar15 != 0) {
          uVar19 = Modules_Contexts_Application_ServerCommunication_Scripts_SegmentService__GetSegment_3e2f82c
                             (lVar15,0);
          iVar9 = Modules_Contexts_Home_MergeMiniGame_Scripts_MergeMiniGameService__GetCurrentStage_219a9ac
                            (lVar14,0,0);
          iVar10 = Modules_Contexts_Home_MergeMiniGame_Scripts_MergeMiniGameService__GetEnergyCount_2197298
                             (lVar14,0);
          uVar20 = Modules_Contexts_Home_MergeMiniGame_Scripts_MergeMiniGameService__GetBoardState_219ba70
                             (lVar14,0);
          iVar11 = Modules_Contexts_Home_MergeMiniGame_Scripts_MergeMiniGameService__GetTotalCollectedEnergy_219b838
                             (lVar14,0);
          uStack_68 = Modules_Contexts_Home_MergeMiniGame_Scripts_MergeMiniGameService__GetTotalCollectedUnlimitedTime_219ba58
                                (lVar14,0);
          iVar12 = Modules_Contexts_Home_MergeMiniGame_Scripts_MergeMiniGameService__GetTotalCollectedCoinAmount_219ba24
                             (lVar14,0);
          lVar14 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
          puVar2 = PTR_DAT_057d3f68;
          puVar1 = PTR_DAT_0575a580;
          if (lVar14 != 0) {
            Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                      (lVar14,*(undefined8 *)PTR_DAT_05818d38,0);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar14,*(undefined8 *)puVar1,uVar18,0);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar14,*(undefined8 *)puVar2,uVar19,0);
            puVar8 = PTR_DAT_0580be48;
            puVar7 = PTR_DAT_057e93b0;
            puVar6 = PTR_DAT_057e8d70;
            puVar5 = PTR_DAT_057db748;
            puVar4 = PTR_DAT_057caaf0;
            puVar3 = PTR_DAT_057b0120;
            puVar2 = PTR_DAT_0576c1b8;
            puVar1 = PTR_DAT_057636d0;
            if (plVar16 != (long *)0x0) {
              lVar15 = *plVar16;
              uVar23 = (ulong)*(ushort *)(lVar15 + 0x12a);
              if (uVar23 != 0) {
                piVar24 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_057636d0) {
                    puVar21 = (undefined8 *)(lVar15 + (long)(*piVar24 + 1) * 0x10 + 0x138);
                    goto LAB_01591f3c;
                  }
                  uVar23 = uVar23 - 1;
                  piVar24 = piVar24 + 4;
                } while (uVar23 != 0);
              }
              puVar21 = (undefined8 *)FUN_0131971c(plVar16,*(long *)PTR_DAT_057636d0,1);
LAB_01591f3c:
              uStack_6c = (*(code *)*puVar21)(plVar16,puVar21[1]);
              uVar22 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_6c);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar14,*(undefined8 *)puVar4,uVar22,0);
              iStack_70 = iVar9;
              uVar22 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&iStack_70);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar14,*(undefined8 *)puVar3,uVar22,0);
              iStack_74 = iVar10;
              uVar22 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&iStack_74);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar14,*(undefined8 *)puVar8,uVar22,0);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar14,*(undefined8 *)puVar6,uVar20,0);
              iStack_78 = iVar11;
              uVar22 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&iStack_78);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar14,*(undefined8 *)puVar7,uVar22,0);
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_0130472c();
              }
              uStack_80 = System_TimeSpan__get_TotalSeconds_26999ac(&uStack_68,0);
              uVar22 = thunk_FUN_01320a8c(*(undefined8 *)PTR_DAT_057c1328,&uStack_80);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar14,*(undefined8 *)PTR_DAT_0576ed20,uVar22,0);
              iStack_84 = iVar12;
              uVar22 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&iStack_84);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar14,*(undefined8 *)PTR_DAT_057beff8,uVar22,0);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar14,*(undefined8 *)PTR_DAT_057e66c0,uVar17,0);
              lVar15 = *plVar16;
              uVar23 = (ulong)*(ushort *)(lVar15 + 0x12a);
              if (uVar23 != 0) {
                piVar24 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar24 + -2) == *(long *)puVar1) {
                    puVar21 = (undefined8 *)(lVar15 + (long)(*piVar24 + 1) * 0x10 + 0x138);
                    goto LAB_015920f4;
                  }
                  uVar23 = uVar23 - 1;
                  piVar24 = piVar24 + 4;
                } while (uVar23 != 0);
              }
              puVar21 = (undefined8 *)FUN_0131971c(plVar16,*(long *)puVar1,1);
LAB_015920f4:
              iVar13 = (*(code *)*puVar21)(plVar16,puVar21[1]);
              System_TimeSpan__get_TotalSeconds_26999ac(&uStack_68,0);
              uVar17 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__MergeEventFinished_2dbd4a8
                                 (uVar18,uVar19,(long)iVar13,(long)iVar9,(long)iVar10,uVar20,
                                  (long)iVar11,(long)iVar12,uVar17,0);
              if (*(int *)(*(long *)PTR_DAT_0575f9f0 + 0xe0) == 0) {
                thunk_FUN_0130472c(*(long *)PTR_DAT_0575f9f0);
              }
              GrandSDK_Analytics_Analytics__Track_2b38d30(uVar17,0);
              Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4
                        (param_1,lVar14);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

