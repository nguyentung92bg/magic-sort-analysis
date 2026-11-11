/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendTeamArenaInfoPopupSeen
void Modules_Contexts_Application_Events_Scripts_EventSender__SendTeamArenaInfoPopupSeen (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, bool showForced, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendTeamArenaInfoPopupSeen
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendTeamArenaInfoPopupSeen
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, bool showForced, const
   MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendTeamArenaInfoPopupSeen_1486c3c
               (undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined4 uVar20;
  long lVar21;
  ulong uVar22;
  int *piVar23;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined4 uStack_64;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c2384d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_05792f78);
    FUN_012d0dc8(PTR_DAT_0580bba8);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057d6138);
    FUN_012d0dc8(PTR_DAT_057e3618);
    FUN_012d0dc8(PTR_DAT_057e4da8);
    FUN_012d0dc8(PTR_DAT_057b8b10);
    FUN_012d0dc8(PTR_DAT_057d6d80);
    FUN_012d0dc8(PTR_DAT_05774660);
    FUN_012d0dc8(PTR_DAT_0575a580);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057f3978);
    FUN_012d0dc8(PTR_DAT_057d3f68);
    bRam0000000005c2384d = 1;
  }
  if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
     (lVar11 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar11 != 0)) {
    lVar11 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar11,*(undefined8 *)PTR_DAT_05792f78);
    if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
       (lVar12 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar12 != 0)) {
      plVar13 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                  (lVar12,*(undefined8 *)PTR_DAT_057a1e60);
      puVar2 = PTR_DAT_057c8a60;
      if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
         (lVar12 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar12 != 0)) {
        lVar12 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                           (lVar12,*(undefined8 *)PTR_DAT_0580bba8);
        lVar14 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
        if ((lVar14 != 0) &&
           (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                      (lVar14,*(undefined8 *)PTR_DAT_057f3978,0), puVar1 = PTR_DAT_0575a580,
           lVar12 != 0)) {
          uVar15 = Modules_Contexts_Home_TeamArena_TeamArenaService__GetTournamentId_2de84cc
                             (lVar12,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar14,*(undefined8 *)puVar1,uVar15,0);
          puVar2 = PTR_DAT_057db748;
          puVar1 = PTR_DAT_057caaf0;
          if (plVar13 != (long *)0x0) {
            lVar21 = *plVar13;
            uVar22 = (ulong)*(ushort *)(lVar21 + 0x12a);
            if (uVar22 != 0) {
              piVar23 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
              do {
                if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_057636d0) {
                  puVar16 = (undefined8 *)(lVar21 + (long)(*piVar23 + 1) * 0x10 + 0x138);
                  goto LAB_01586ea0;
                }
                uVar22 = uVar22 - 1;
                piVar23 = piVar23 + 4;
              } while (uVar22 != 0);
            }
            puVar16 = (undefined8 *)FUN_0131971c(plVar13,*(long *)PTR_DAT_057636d0,1);
LAB_01586ea0:
            uStack_64 = (*(code *)*puVar16)(plVar13,puVar16[1]);
            uVar15 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&uStack_64);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar14,*(undefined8 *)puVar1,uVar15,0);
            puVar6 = PTR_DAT_057e4da8;
            puVar5 = PTR_DAT_057d6d80;
            puVar4 = PTR_DAT_057d6138;
            puVar3 = PTR_DAT_057d3f68;
            puVar1 = PTR_DAT_057b8b10;
            if (lVar11 != 0) {
              uVar15 = Modules_Contexts_Application_ServerCommunication_Scripts_SegmentService__GetSegment_3e2f82c
                                 (lVar11,0);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar14,*(undefined8 *)puVar3,uVar15,0);
              uStack_70 = Modules_Contexts_Home_TeamArena_TeamArenaService__GetStartTimeAsUnixTime_2de6068
                                    (lVar12,0);
              uVar15 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_70);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar14,*(undefined8 *)puVar1,uVar15,0);
              uStack_74 = Modules_Contexts_Home_TeamArena_TeamArenaService__GetRemainingTime_2de5ea8
                                    (lVar12,0);
              uVar15 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&uStack_74);
                    /* try { // try from 01586f7c to 01687013 has its CatchHandler @ 01586f7c
                       catch() { ... } // from try @ 01586f7c with catch @ 01586f7c
                       catch() { ... } // from try @ 015870b8 with catch @ 01586f7c
                       catch() { ... } // from try @ 01587104 with catch @ 01586f7c
                       catch() { ... } // from try @ 0158721c with catch @ 01586f7c
                       catch() { ... } // from try @ 0158725c with catch @ 01586f7c
                       catch() { ... } // from try @ 0158729c with catch @ 01586f7c
                       catch() { ... } // from try @ 01587310 with catch @ 01586f7c */
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar14,*(undefined8 *)puVar6,uVar15,0);
              uStack_78 = Modules_Contexts_Home_TeamArena_TeamArenaService__GetEligibility_2de8454
                                    (lVar12,0);
              uVar15 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&uStack_78);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar14,*(undefined8 *)puVar5,uVar15,0);
              uVar15 = *(undefined8 *)PTR_DAT_057e3618;
              uVar20 = 1;
              if ((param_2 & 1) == 0) {
                uVar20 = 2;
              }
              uStack_70 = CONCAT44(uStack_70._4_4_,uVar20);
              uVar17 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&uStack_70);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar14,uVar15,uVar17,0);
              uStack_64 = Modules_Contexts_Home_TeamArena_TeamArenaService__GetCurrentStep_2de8428
                                    (lVar12,0);
                    /* try { // try from 01587014 to 01687017 has its CatchHandler @ 01587118 */
              uVar15 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&uStack_64);
                    /* try { // try from 01587028 to 0168702b has its CatchHandler @ 01587114 */
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar14,*(undefined8 *)PTR_DAT_05774660,uVar15,0);
                    /* try { // try from 0158703c to 01687043 has its CatchHandler @ 01587110 */
              uVar15 = Modules_Contexts_Home_TeamArena_TeamArenaService__GetTournamentId_2de84cc
                                 (lVar12,0);
              lVar21 = *plVar13;
              uVar22 = (ulong)*(ushort *)(lVar21 + 0x12a);
                    /* try { // try from 01587058 to 0168705f has its CatchHandler @ 01587108 */
              if (uVar22 != 0) {
                piVar23 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
                do {
                    /* try { // try from 0158706c to 0168708b has its CatchHandler @ 0158710c */
                  if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_057636d0) {
                    puVar16 = (undefined8 *)(lVar21 + (long)(*piVar23 + 1) * 0x10 + 0x138);
                    goto LAB_015870a4;
                  }
                  uVar22 = uVar22 - 1;
                  piVar23 = piVar23 + 4;
                } while (uVar22 != 0);
              }
              puVar16 = (undefined8 *)FUN_0131971c(plVar13,*(long *)PTR_DAT_057636d0,1);
LAB_015870a4:
              iVar7 = (*(code *)*puVar16)(plVar13,puVar16[1]);
                    /* try { // try from 015870b0 to 016870b7 has its CatchHandler @ 0158711c */
                    /* try { // try from 015870b8 to 016870fb has its CatchHandler @ 01586f7c */
              uVar18 = Modules_Contexts_Application_ServerCommunication_Scripts_SegmentService__GetSegment_3e2f82c
                                 (lVar11,0);
              uVar19 = Modules_Contexts_Home_TeamArena_TeamArenaService__GetStartTimeAsUnixTime_2de6068
                                 (lVar12,0);
              iVar8 = Modules_Contexts_Home_TeamArena_TeamArenaService__GetRemainingTime_2de5ea8
                                (lVar12,0);
              iVar9 = Modules_Contexts_Home_TeamArena_TeamArenaService__GetEligibility_2de8454
                                (lVar12,0);
                    /* try { // try from 015870fc to 016870ff has its CatchHandler @ 01587104 */
                    /* try { // try from 01587100 to 01687103 has its CatchHandler @ 01587118 */
                    /* catch() { ... } // from try @ 015870fc with catch @ 01587104
                       try { // try from 01587104 to 01687137 has its CatchHandler @ 01586f7c */
                    /* catch() { ... } // from try @ 01587058 with catch @ 01587108 */
                    /* catch() { ... } // from try @ 0158706c with catch @ 0158710c */
              uVar17 = 1;
              if ((param_2 & 1) == 0) {
                uVar17 = 2;
              }
                    /* catch() { ... } // from try @ 0158703c with catch @ 01587110 */
              iVar10 = Modules_Contexts_Home_TeamArena_TeamArenaService__GetCurrentStep_2de8428
                                 (lVar12,0);
                    /* catch() { ... } // from try @ 01587028 with catch @ 01587114 */
                    /* catch() { ... } // from try @ 01587014 with catch @ 01587118
                       catch() { ... } // from try @ 01587100 with catch @ 01587118 */
                    /* catch() { ... } // from try @ 015870b0 with catch @ 0158711c */
                    /* try { // try from 01587138 to 0168714f has its CatchHandler @ 01587250 */
              uVar15 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__TeamArenaInfoPopupImpression_2db35ac
                                 (uVar15,(long)iVar7,uVar18,uVar19,(long)iVar8,(long)iVar9,uVar17,
                                  (long)iVar10,0);
              if (*(int *)(*(long *)PTR_DAT_0575f9f0 + 0xe0) == 0) {
                    /* try { // try from 01587158 to 0168715b has its CatchHandler @ 0158724c */
                thunk_FUN_0130472c(*(long *)PTR_DAT_0575f9f0);
              }
              GrandSDK_Analytics_Analytics__Track_2b38d30(uVar15,0);
                    /* try { // try from 01587168 to 0168716f has its CatchHandler @ 01587248 */
              Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4
                        (param_1,lVar14);
                    /* try { // try from 0158717c to 01687183 has its CatchHandler @ 01587244 */
                    /* try { // try from 01587188 to 016871bb has its CatchHandler @ 01587260 */
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

