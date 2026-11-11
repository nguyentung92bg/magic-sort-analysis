/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendTeamQuestPopUpImpression
void Modules_Contexts_Application_Events_Scripts_EventSender__SendTeamQuestPopUpImpression (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t impressionSource, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendTeamQuestPopUpImpression
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendTeamQuestPopUpImpression
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t impressionSource,
   const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendTeamQuestPopUpImpression_148add0
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
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  long lVar25;
  ulong uVar26;
  int *piVar27;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  uint uStack_90;
  uint uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c2385a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_05792f78);
    FUN_012d0dc8(PTR_DAT_0579ada8);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057eb0b0);
    FUN_012d0dc8(PTR_DAT_057e3618);
    FUN_012d0dc8(PTR_DAT_057e4da8);
    FUN_012d0dc8(PTR_DAT_05764be0);
    FUN_012d0dc8(PTR_DAT_057b8b10);
    FUN_012d0dc8(PTR_DAT_05783590);
    FUN_012d0dc8(PTR_DAT_05819628);
    FUN_012d0dc8(PTR_DAT_05774660);
    FUN_012d0dc8(PTR_DAT_0575a580);
    FUN_012d0dc8(PTR_DAT_057adce8);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_0576a3d8);
    bRam0000000005c2385a = 1;
  }
  if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
     (lVar16 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar16 != 0)) {
    lVar16 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar16,*(undefined8 *)PTR_DAT_0579ada8);
    if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
       (lVar17 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar17 != 0)) {
      plVar18 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                  (lVar17,*(undefined8 *)PTR_DAT_057a1e60);
      if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
         (lVar17 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar17 != 0)) {
        lVar17 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                           (lVar17,*(undefined8 *)PTR_DAT_05792f78);
        puVar1 = PTR_DAT_057c8a60;
        if (lVar16 != 0) {
          uVar9 = Modules_Contexts_Home_TeamQuest_Scripts_TeamQuestService__GetTotalProgress_2dd679c
                            (lVar16,0);
          uVar10 = Modules_Contexts_Home_TeamQuest_Scripts_TeamQuestService__GetStepForProgress_2dd6fb4
                             (lVar16,uVar9,0);
          lVar19 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
          if (lVar19 != 0) {
            Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                      (lVar19,*(undefined8 *)PTR_DAT_05783590,0);
            puVar1 = PTR_DAT_0575a580;
            if (*(long *)(lVar16 + 0x20) != 0) {
              uVar20 = Modules_Contexts_Home_TeamQuest_Scripts_TeamQuestDataService__GetTournamentID_2f0f778
                                 (*(long *)(lVar16 + 0x20),0);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar19,*(undefined8 *)puVar1,uVar20,0);
              puVar8 = PTR_DAT_05819628;
              puVar7 = PTR_DAT_057e3618;
              puVar6 = PTR_DAT_057db748;
              puVar5 = PTR_DAT_057caaf0;
              puVar4 = PTR_DAT_057b8b10;
              puVar3 = PTR_DAT_057adce8;
              puVar2 = PTR_DAT_05764be0;
              puVar1 = PTR_DAT_057636d0;
              if (plVar18 != (long *)0x0) {
                lVar25 = *plVar18;
                uVar26 = (ulong)*(ushort *)(lVar25 + 0x12a);
                if (uVar26 != 0) {
                  piVar27 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_057636d0) {
                      puVar21 = (undefined8 *)(lVar25 + (long)(*piVar27 + 1) * 0x10 + 0x138);
                      goto LAB_0158b0b4;
                    }
                    uVar26 = uVar26 - 1;
                    piVar27 = piVar27 + 4;
                  } while (uVar26 != 0);
                }
                puVar21 = (undefined8 *)FUN_0131971c(plVar18,*(long *)PTR_DAT_057636d0,1);
LAB_0158b0b4:
                uStack_64 = (*(code *)*puVar21)(plVar18,puVar21[1]);
                uVar20 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_64);
                    /* try { // try from 0158b0d8 to 0168b19f has its CatchHandler @ 0158b0d8
                       catch() { ... } // from try @ 0158b0d8 with catch @ 0158b0d8
                       catch() { ... } // from try @ 0158b33c with catch @ 0158b0d8
                       catch() { ... } // from try @ 0158b3ac with catch @ 0158b0d8
                       catch() { ... } // from try @ 0158b48c with catch @ 0158b0d8
                       catch() { ... } // from try @ 0158b4d8 with catch @ 0158b0d8
                       catch() { ... } // from try @ 0158b508 with catch @ 0158b0d8
                       catch() { ... } // from try @ 0158b57c with catch @ 0158b0d8 */
                Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                          (lVar19,*(undefined8 *)puVar5,uVar20,0);
                uStack_68 = Modules_Contexts_Home_TeamQuest_Scripts_TeamQuestService__GetStartDateAsUnix_2dd6cd4
                                      (lVar16,0);
                uVar20 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_68);
                Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                          (lVar19,*(undefined8 *)puVar4,uVar20,0);
                uStack_6c = Modules_Contexts_Home_TeamQuest_Scripts_TeamQuestService__GetRemainingSeconds_2dd6b3c
                                      (lVar16,0);
                uVar20 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_6c);
                Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                          (lVar19,*(undefined8 *)PTR_DAT_057e4da8,uVar20,0);
                uStack_88 = *(undefined8 *)PTR_DAT_057eb0b0;
                uStack_80 = 0xffffffffffffffff;
                uStack_78 = param_2;
                uVar20 = System_Enum__ToString_23a4eac(&uStack_88,0);
                Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                          (lVar19,*(undefined8 *)puVar7,uVar20,0);
                uStack_8c = uVar10;
                    /* try { // try from 0158b1a0 to 0168b1b7 has its CatchHandler @ 0158b3f0 */
                uVar20 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_8c);
                Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                          (lVar19,*(undefined8 *)PTR_DAT_05774660,uVar20,0);
                    /* try { // try from 0158b1cc to 0168b1cf has its CatchHandler @ 0158b3c4 */
                uStack_90 = uVar9;
                    /* try { // try from 0158b1d0 to 0168b1e7 has its CatchHandler @ 0158b3ec */
                uVar20 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_90);
                Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                          (lVar19,*(undefined8 *)PTR_DAT_0576a3d8,uVar20,0);
                    /* try { // try from 0158b1f4 to 0168b1f7 has its CatchHandler @ 0158b3e0 */
                uStack_94 = Modules_Contexts_Home_TeamQuest_Scripts_TeamQuestService__RemainingScoreForStep_2dd8440
                                      (lVar16,uVar10,0);
                    /* try { // try from 0158b214 to 0168b217 has its CatchHandler @ 0158b3dc */
                uVar20 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_94);
                Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                          (lVar19,*(undefined8 *)puVar8,uVar20,0);
                uStack_98 = Modules_Contexts_Home_TeamQuest_Scripts_TeamQuestService__GetClaimableStepsCount_2dd781c
                                      (lVar16,0);
                    /* try { // try from 0158b240 to 0168b25b has its CatchHandler @ 0158b3e8 */
                uVar20 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_98);
                Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                          (lVar19,*(undefined8 *)puVar3,uVar20,0);
                uVar20 = Modules_Contexts_Home_TeamQuest_Scripts_TeamQuestService__GetTeamID_2dd6cf4
                                   (lVar16,0);
                    /* try { // try from 0158b270 to 0168b29b has its CatchHandler @ 0158b3d8 */
                Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                          (lVar19,*(undefined8 *)puVar2,uVar20,0);
                if (*(long *)(lVar16 + 0x20) != 0) {
                  uVar20 = Modules_Contexts_Home_TeamQuest_Scripts_TeamQuestDataService__GetTournamentID_2f0f778
                                     (*(long *)(lVar16 + 0x20),0);
                  lVar25 = *plVar18;
                  uVar26 = (ulong)*(ushort *)(lVar25 + 0x12a);
                  if (uVar26 != 0) {
                    piVar27 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                    do {
                    /* try { // try from 0158b2ac to 0168b2af has its CatchHandler @ 0158b3d4 */
                      if (*(long *)(piVar27 + -2) == *(long *)puVar1) {
                    /* try { // try from 0158b2dc to 0168b2e3 has its CatchHandler @ 0158b3c8 */
                    /* try { // try from 0158b2f0 to 0168b30f has its CatchHandler @ 0158b3cc */
                        puVar21 = (undefined8 *)(lVar25 + (long)(*piVar27 + 1) * 0x10 + 0x138);
                        goto LAB_0158b2f4;
                      }
                      uVar26 = uVar26 - 1;
                      piVar27 = piVar27 + 4;
                    /* try { // try from 0158b2c0 to 0168b2c7 has its CatchHandler @ 0158b3d0 */
                    } while (uVar26 != 0);
                  }
                  puVar21 = (undefined8 *)FUN_0131971c(plVar18,*(long *)puVar1,1);
LAB_0158b2f4:
                  iVar11 = (*(code *)*puVar21)(plVar18,puVar21[1]);
                  iVar12 = Modules_Contexts_Home_TeamQuest_Scripts_TeamQuestService__GetStartDateAsUnix_2dd6cd4
                                     (lVar16,0);
                  iVar13 = Modules_Contexts_Home_TeamQuest_Scripts_TeamQuestService__GetRemainingSeconds_2dd6b3c
                                     (lVar16,0);
                  uStack_b0 = *(undefined8 *)PTR_DAT_057eb0b0;
                    /* try { // try from 0158b338 to 0168b33b has its CatchHandler @ 0158b3e4 */
                    /* try { // try from 0158b33c to 0168b387 has its CatchHandler @ 0158b0d8 */
                  uStack_a8 = 0xffffffffffffffff;
                  uStack_a0 = param_2;
                  uVar22 = System_Enum__ToString_23a4eac(&uStack_b0,0);
                  iVar14 = Modules_Contexts_Home_TeamQuest_Scripts_TeamQuestService__RemainingScoreForStep_2dd8440
                                     (lVar16,uVar10,0);
                  iVar15 = Modules_Contexts_Home_TeamQuest_Scripts_TeamQuestService__GetClaimableStepsCount_2dd781c
                                     (lVar16,0);
                  uVar23 = Modules_Contexts_Home_TeamQuest_Scripts_TeamQuestService__GetTeamID_2dd6cf4
                                     (lVar16,0);
                  puVar1 = PTR_DAT_0575f9f0;
                  if (lVar17 != 0) {
                    /* try { // try from 0158b388 to 0168b38b has its CatchHandler @ 0158b3f0 */
                    /* try { // try from 0158b38c to 0168b38f has its CatchHandler @ 0158b3c0 */
                    /* try { // try from 0158b390 to 0168b393 has its CatchHandler @ 0158b3bc */
                    /* try { // try from 0158b394 to 0168b397 has its CatchHandler @ 0158b3b8 */
                    uVar24 = Modules_Contexts_Application_ServerCommunication_Scripts_SegmentService__GetSegment_3e2f82c
                                       (lVar17,0);
                    /* try { // try from 0158b398 to 0168b39b has its CatchHandler @ 0158b3b4 */
                    /* try { // try from 0158b39c to 0168b39f has its CatchHandler @ 0158b3b0 */
                    /* try { // try from 0158b3a0 to 0168b3a3 has its CatchHandler @ 0158b3e8 */
                    /* try { // try from 0158b3a4 to 0168b3a7 has its CatchHandler @ 0158b3ac */
                    /* try { // try from 0158b3a8 to 0168b3ab has its CatchHandler @ 0158b3d8 */
                    /* catch() { ... } // from try @ 0158b3a4 with catch @ 0158b3ac
                       try { // try from 0158b3ac to 0168b40b has its CatchHandler @ 0158b0d8 */
                    /* catch() { ... } // from try @ 0158b39c with catch @ 0158b3b0 */
                    /* catch() { ... } // from try @ 0158b398 with catch @ 0158b3b4 */
                    /* catch() { ... } // from try @ 0158b394 with catch @ 0158b3b8 */
                    /* catch() { ... } // from try @ 0158b390 with catch @ 0158b3bc */
                    /* catch() { ... } // from try @ 0158b38c with catch @ 0158b3c0 */
                    /* catch() { ... } // from try @ 0158b1cc with catch @ 0158b3c4 */
                    /* catch() { ... } // from try @ 0158b2dc with catch @ 0158b3c8 */
                    /* catch() { ... } // from try @ 0158b2f0 with catch @ 0158b3cc */
                    uVar20 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__TeamQuestPopupImpression_2db41bc
                                       (uVar20,(long)iVar11,(long)iVar12,(long)iVar13,uVar22,
                                        (long)(int)uVar10,(long)(int)uVar9,(long)iVar14,(long)iVar15
                                        ,uVar23,0,uVar24,0);
                    /* catch() { ... } // from try @ 0158b2c0 with catch @ 0158b3d0 */
                    /* catch() { ... } // from try @ 0158b2ac with catch @ 0158b3d4 */
                    /* catch() { ... } // from try @ 0158b270 with catch @ 0158b3d8
                       catch() { ... } // from try @ 0158b3a8 with catch @ 0158b3d8 */
                    /* catch() { ... } // from try @ 0158b214 with catch @ 0158b3dc */
                    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 0158b1f4 with catch @ 0158b3e0 */
                    /* catch() { ... } // from try @ 0158b338 with catch @ 0158b3e4 */
                      thunk_FUN_0130472c(*(long *)puVar1);
                    }
                    /* catch() { ... } // from try @ 0158b240 with catch @ 0158b3e8
                       catch() { ... } // from try @ 0158b3a0 with catch @ 0158b3e8 */
                    /* catch() { ... } // from try @ 0158b1d0 with catch @ 0158b3ec */
                    /* catch() { ... } // from try @ 0158b1a0 with catch @ 0158b3f0
                       catch() { ... } // from try @ 0158b388 with catch @ 0158b3f0 */
                    GrandSDK_Analytics_Analytics__Track_2b38d30(uVar20,0);
                    Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4
                              (param_1,lVar19);
                    /* try { // try from 0158b40c to 0168b423 has its CatchHandler @ 0158b4cc */
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
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

