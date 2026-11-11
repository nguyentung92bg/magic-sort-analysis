/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendTeamQuestInfoPopUpImpression
void Modules_Contexts_Application_Events_Scripts_EventSender__SendTeamQuestInfoPopUpImpression (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t impressionSource, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendTeamQuestInfoPopUpImpression
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendTeamQuestInfoPopUpImpression
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t impressionSource,
   const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendTeamQuestInfoPopUpImpression_148ba1c
               (undefined8 param_1,undefined4 param_2)

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
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  ulong uVar19;
  int *piVar20;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  puVar1 = PTR_DAT_0576aae0;
                    /* try { // try from 0158ba4c to 0168ba53 has its CatchHandler @ 0158c2f8 */
  if ((bRam0000000005c2385c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_05792f78);
                    /* try { // try from 0158ba78 to 0168ba7b has its CatchHandler @ 0158bf94 */
                    /* try { // try from 0158ba7c to 0168bac7 has its CatchHandler @ 0158b810 */
    FUN_012d0dc8(PTR_DAT_0579ada8);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057a48a0);
                    /* try { // try from 0158bac8 to 0168bacf has its CatchHandler @ 0158c294 */
    FUN_012d0dc8(PTR_DAT_057e3618);
    FUN_012d0dc8(PTR_DAT_057e4da8);
    FUN_012d0dc8(PTR_DAT_057b8b10);
    FUN_012d0dc8(PTR_DAT_0575a580);
                    /* try { // try from 0158baf4 to 0168baf7 has its CatchHandler @ 0158bf90 */
                    /* try { // try from 0158baf8 to 0168bb47 has its CatchHandler @ 0158b810 */
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_0579ea60);
    bRam0000000005c2385c = 1;
  }
  if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
     (lVar10 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar10 != 0)) {
    lVar10 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar10,*(undefined8 *)PTR_DAT_0579ada8);
                    /* try { // try from 0158bb48 to 0168bb4f has its CatchHandler @ 0158c240 */
    if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
       (lVar11 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar11 != 0)) {
      plVar12 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                  (lVar11,*(undefined8 *)PTR_DAT_057a1e60);
      puVar2 = PTR_DAT_057c8a60;
                    /* try { // try from 0158bb64 to 0168bb67 has its CatchHandler @ 0158bf8c */
                    /* try { // try from 0158bb68 to 0168bbaf has its CatchHandler @ 0158b810 */
      if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
         (lVar11 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar11 != 0)) {
        lVar11 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                           (lVar11,*(undefined8 *)PTR_DAT_05792f78);
        lVar13 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                    /* try { // try from 0158bbb0 to 0168bbb7 has its CatchHandler @ 0158c1ec */
                    /* try { // try from 0158bbcc to 0168bbcf has its CatchHandler @ 0158bf88 */
        if ((lVar13 != 0) &&
           ((Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                       (lVar13,*(undefined8 *)PTR_DAT_0579ea60,0), puVar1 = PTR_DAT_0575a580,
            lVar10 != 0 && (*(long *)(lVar10 + 0x20) != 0)))) {
                    /* try { // try from 0158bbd0 to 0168bc17 has its CatchHandler @ 0158b810 */
          uVar14 = Modules_Contexts_Home_TeamQuest_Scripts_TeamQuestDataService__GetTournamentID_2f0f778
                             (*(long *)(lVar10 + 0x20),0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar13,*(undefined8 *)puVar1,uVar14,0);
          puVar6 = PTR_DAT_057e4da8;
          puVar5 = PTR_DAT_057e3618;
          puVar4 = PTR_DAT_057db748;
          puVar3 = PTR_DAT_057caaf0;
          puVar2 = PTR_DAT_057b8b10;
          puVar1 = PTR_DAT_057636d0;
          if (plVar12 != (long *)0x0) {
            lVar18 = *plVar12;
                    /* try { // try from 0158bc18 to 0168bc1f has its CatchHandler @ 0158c198 */
            uVar19 = (ulong)*(ushort *)(lVar18 + 0x12a);
                    /* try { // try from 0158bc34 to 0168bc37 has its CatchHandler @ 0158bf84 */
                    /* try { // try from 0158bc38 to 0168bc7f has its CatchHandler @ 0158b810 */
            if (uVar19 != 0) {
              piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_057636d0) {
                  puVar15 = (undefined8 *)(lVar18 + (long)(*piVar20 + 1) * 0x10 + 0x138);
                  goto LAB_0158bc7c;
                }
                uVar19 = uVar19 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar19 != 0);
            }
            puVar15 = (undefined8 *)FUN_0131971c(plVar12,*(long *)PTR_DAT_057636d0,1);
LAB_0158bc7c:
                    /* try { // try from 0158bc80 to 0168bc87 has its CatchHandler @ 0158c144 */
            uStack_64 = (*(code *)*puVar15)(plVar12,puVar15[1]);
            uVar14 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_64);
                    /* try { // try from 0158bc9c to 0168bc9f has its CatchHandler @ 0158bf80 */
                    /* try { // try from 0158bca0 to 0168bce7 has its CatchHandler @ 0158b810 */
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar13,*(undefined8 *)puVar3,uVar14,0);
            uStack_68 = Modules_Contexts_Home_TeamQuest_Scripts_TeamQuestService__GetStartDateAsUnix_2dd6cd4
                                  (lVar10,0);
            uVar14 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_68);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar13,*(undefined8 *)puVar2,uVar14,0);
                    /* try { // try from 0158bce8 to 0168bcef has its CatchHandler @ 0158c0f0 */
            uStack_6c = Modules_Contexts_Home_TeamQuest_Scripts_TeamQuestService__GetRemainingSeconds_2dd6b3c
                                  (lVar10,0);
            uVar14 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_6c);
                    /* try { // try from 0158bd04 to 0168bd07 has its CatchHandler @ 0158bf7c */
                    /* try { // try from 0158bd08 to 0168bd4f has its CatchHandler @ 0158b810 */
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar13,*(undefined8 *)puVar6,uVar14,0);
            puVar2 = PTR_DAT_057a48a0;
            uStack_88 = *(undefined8 *)PTR_DAT_057a48a0;
            uStack_80 = 0xffffffffffffffff;
            uStack_78 = param_2;
            uVar14 = System_Enum__ToString_23a4eac(&uStack_88,0);
                    /* try { // try from 0158bd50 to 0168bd57 has its CatchHandler @ 0158c09c */
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar13,*(undefined8 *)puVar5,uVar14,0);
            if (*(long *)(lVar10 + 0x20) != 0) {
              uVar14 = Modules_Contexts_Home_TeamQuest_Scripts_TeamQuestDataService__GetTournamentID_2f0f778
                                 (*(long *)(lVar10 + 0x20),0);
              lVar18 = *plVar12;
                    /* try { // try from 0158bd6c to 0168bd6f has its CatchHandler @ 0158bf78 */
                    /* try { // try from 0158bd70 to 0168bdb7 has its CatchHandler @ 0158b810 */
              uVar19 = (ulong)*(ushort *)(lVar18 + 0x12a);
              if (uVar19 != 0) {
                piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar20 + -2) == *(long *)puVar1) {
                    puVar15 = (undefined8 *)(lVar18 + (long)(*piVar20 + 1) * 0x10 + 0x138);
                    goto LAB_0158bdb8;
                  }
                  uVar19 = uVar19 - 1;
                  piVar20 = piVar20 + 4;
                } while (uVar19 != 0);
              }
              puVar15 = (undefined8 *)FUN_0131971c(plVar12,*(long *)puVar1,1);
LAB_0158bdb8:
                    /* try { // try from 0158bdb8 to 0168bdbf has its CatchHandler @ 0158c048 */
              iVar7 = (*(code *)*puVar15)(plVar12,puVar15[1]);
              iVar8 = Modules_Contexts_Home_TeamQuest_Scripts_TeamQuestService__GetStartDateAsUnix_2dd6cd4
                                (lVar10,0);
                    /* try { // try from 0158bdd4 to 0168bdd7 has its CatchHandler @ 0158bf74 */
                    /* try { // try from 0158bdd8 to 0168be1f has its CatchHandler @ 0158b810 */
              iVar9 = Modules_Contexts_Home_TeamQuest_Scripts_TeamQuestService__GetRemainingSeconds_2dd6b3c
                                (lVar10,0);
              uStack_a0 = *(undefined8 *)puVar2;
              uStack_98 = 0xffffffffffffffff;
              uStack_90 = param_2;
              uVar16 = System_Enum__ToString_23a4eac(&uStack_a0,0);
              puVar1 = PTR_DAT_0575f9f0;
              if (lVar11 != 0) {
                uVar17 = Modules_Contexts_Application_ServerCommunication_Scripts_SegmentService__GetSegment_3e2f82c
                                   (lVar11,0);
                    /* try { // try from 0158be20 to 0168be27 has its CatchHandler @ 0158bff4 */
                    /* try { // try from 0158be3c to 0168be3f has its CatchHandler @ 0158bf70 */
                uVar14 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__TeamQuestInfoPopupImpression_2db435c
                                   (uVar14,(long)iVar7,(long)iVar8,(long)iVar9,uVar16,uVar17,0);
                    /* try { // try from 0158be40 to 0168be87 has its CatchHandler @ 0158b810 */
                if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                  thunk_FUN_0130472c(*(long *)puVar1);
                }
                GrandSDK_Analytics_Analytics__Track_2b38d30(uVar14,0);
                Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4
                          (param_1,lVar13);
                    /* try { // try from 0158be88 to 0168be8f has its CatchHandler @ 0158bf9c */
                return;
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

