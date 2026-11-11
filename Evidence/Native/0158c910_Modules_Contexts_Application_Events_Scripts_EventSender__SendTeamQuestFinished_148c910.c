/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendTeamQuestFinished
void Modules_Contexts_Application_Events_Scripts_EventSender__SendTeamQuestFinished (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendTeamQuestFinished
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendTeamQuestFinished
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendTeamQuestFinished_148c910
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  long lVar19;
  ulong uVar20;
  int *piVar21;
  int iStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
                    /* try { // try from 0158c910 to 0168c917 has its CatchHandler @ 0158cb30 */
  puVar1 = PTR_DAT_0576aae0;
                    /* try { // try from 0158c930 to 0168c937 has its CatchHandler @ 0158cb1c */
  if ((bRam0000000005c2385f & 1) == 0) {
                    /* try { // try from 0158c944 to 0168c95b has its CatchHandler @ 0158cb28 */
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_05792f78);
    FUN_012d0dc8(PTR_DAT_0579ada8);
    FUN_012d0dc8(PTR_DAT_0576aae0);
                    /* try { // try from 0158c988 to 0168c98f has its CatchHandler @ 0158cb48 */
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
                    /* try { // try from 0158c99c to 0168c9bb has its CatchHandler @ 0158cb4c */
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057e4da8);
    FUN_012d0dc8(PTR_DAT_057b8b10);
    FUN_012d0dc8(PTR_DAT_057db250);
    FUN_012d0dc8(PTR_DAT_05774660);
                    /* try { // try from 0158c9dc to 0168c9df has its CatchHandler @ 0158cb44 */
    FUN_012d0dc8(PTR_DAT_057fcce8);
                    /* try { // try from 0158c9e8 to 0168c9eb has its CatchHandler @ 0158cb3c */
    FUN_012d0dc8(PTR_DAT_057caaf0);
    bRam0000000005c2385f = 1;
  }
                    /* try { // try from 0158c9f4 to 0168c9fb has its CatchHandler @ 0158cb34 */
  if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
     (lVar12 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar12 != 0)) {
                    /* try { // try from 0158ca14 to 0168ca1b has its CatchHandler @ 0158cb20 */
    lVar12 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar12,*(undefined8 *)PTR_DAT_0579ada8);
                    /* try { // try from 0158ca28 to 0168ca3f has its CatchHandler @ 0158cb2c */
    if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
       (lVar13 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar13 != 0)) {
                    /* try { // try from 0158ca40 to 0168caab has its CatchHandler @ 0158c640 */
      plVar14 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                  (lVar13,*(undefined8 *)PTR_DAT_057a1e60);
      if (((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
          (lVar13 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar13 != 0)) &&
         (lVar13 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                             (lVar13,*(undefined8 *)PTR_DAT_05792f78), puVar1 = PTR_DAT_057c8a60,
         lVar12 != 0)) {
        uVar7 = Modules_Contexts_Home_TeamQuest_Scripts_TeamQuestService__GetTotalProgress_2dd679c
                          (lVar12,0);
        iVar8 = Modules_Contexts_Home_TeamQuest_Scripts_TeamQuestService__GetStepForProgress_2dd6fb4
                          (lVar12,uVar7,0);
                    /* try { // try from 0158caac to 0168caaf has its CatchHandler @ 0158cb18 */
        lVar15 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                    /* try { // try from 0158cab0 to 0168cab3 has its CatchHandler @ 0158cb14 */
        if (lVar15 != 0) {
                    /* try { // try from 0158cab4 to 0168cab7 has its CatchHandler @ 0158cb0c */
                    /* try { // try from 0158cab8 to 0168cabb has its CatchHandler @ 0158cb08 */
                    /* try { // try from 0158cabc to 0168cabf has its CatchHandler @ 0158cb74 */
                    /* try { // try from 0158cac0 to 0168cac3 has its CatchHandler @ 0158cb58 */
                    /* try { // try from 0158cac4 to 0168cac7 has its CatchHandler @ 0158cb04 */
                    /* try { // try from 0158cac8 to 0168cacb has its CatchHandler @ 0158cb00 */
          Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                    (lVar15,*(undefined8 *)PTR_DAT_057db250,0);
          puVar1 = PTR_DAT_057fcce8;
                    /* try { // try from 0158cacc to 0168cacf has its CatchHandler @ 0158cafc */
                    /* try { // try from 0158cad0 to 0168cad3 has its CatchHandler @ 0158caf8 */
          if (*(long *)(lVar12 + 0x20) != 0) {
                    /* try { // try from 0158cad4 to 0168cad7 has its CatchHandler @ 0158caf4 */
                    /* try { // try from 0158cad8 to 0168cadb has its CatchHandler @ 0158caf0 */
                    /* try { // try from 0158cadc to 0168cadf has its CatchHandler @ 0158cb40 */
                    /* try { // try from 0158cae0 to 0168cae3 has its CatchHandler @ 0158cb44 */
                    /* try { // try from 0158cae4 to 0168cae7 has its CatchHandler @ 0158caec */
            uVar16 = Modules_Contexts_Home_TeamQuest_Scripts_TeamQuestDataService__GetTournamentID_2f0f778
                               (*(long *)(lVar12 + 0x20),0);
                    /* try { // try from 0158cae8 to 0168caeb has its CatchHandler @ 0158cb24 */
                    /* catch() { ... } // from try @ 0158cae4 with catch @ 0158caec
                       try { // try from 0158caec to 0168cb8b has its CatchHandler @ 0158c640 */
                    /* catch() { ... } // from try @ 0158cad8 with catch @ 0158caf0 */
                    /* catch() { ... } // from try @ 0158cad4 with catch @ 0158caf4 */
                    /* catch() { ... } // from try @ 0158cad0 with catch @ 0158caf8 */
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar15,*(undefined8 *)puVar1,uVar16,0);
            puVar6 = PTR_DAT_057e4da8;
            puVar5 = PTR_DAT_057db748;
            puVar4 = PTR_DAT_057caaf0;
            puVar3 = PTR_DAT_057b8b10;
            puVar2 = PTR_DAT_05774660;
            puVar1 = PTR_DAT_057636d0;
                    /* catch() { ... } // from try @ 0158cacc with catch @ 0158cafc */
            if (plVar14 != (long *)0x0) {
                    /* catch() { ... } // from try @ 0158cac8 with catch @ 0158cb00 */
                    /* catch() { ... } // from try @ 0158cac4 with catch @ 0158cb04 */
              lVar19 = *plVar14;
                    /* catch() { ... } // from try @ 0158cab8 with catch @ 0158cb08 */
                    /* catch() { ... } // from try @ 0158cab4 with catch @ 0158cb0c */
                    /* catch() { ... } // from try @ 0158c7b0 with catch @ 0158cb10 */
                    /* catch() { ... } // from try @ 0158cab0 with catch @ 0158cb14 */
                    /* catch() { ... } // from try @ 0158caac with catch @ 0158cb18 */
                    /* catch() { ... } // from try @ 0158c930 with catch @ 0158cb1c */
                    /* catch() { ... } // from try @ 0158ca14 with catch @ 0158cb20 */
                    /* catch() { ... } // from try @ 0158c774 with catch @ 0158cb24
                       catch() { ... } // from try @ 0158cae8 with catch @ 0158cb24 */
                    /* catch() { ... } // from try @ 0158c944 with catch @ 0158cb28 */
              uVar20 = (ulong)*(ushort *)(lVar19 + 0x12a);
                    /* catch() { ... } // from try @ 0158ca28 with catch @ 0158cb2c */
                    /* catch() { ... } // from try @ 0158c910 with catch @ 0158cb30 */
                    /* catch() { ... } // from try @ 0158c9f4 with catch @ 0158cb34 */
                    /* catch() { ... } // from try @ 0158c904 with catch @ 0158cb38 */
                    /* catch() { ... } // from try @ 0158c9e8 with catch @ 0158cb3c */
              if (uVar20 != 0) {
                    /* catch() { ... } // from try @ 0158c8f4 with catch @ 0158cb40
                       catch() { ... } // from try @ 0158cadc with catch @ 0158cb40 */
                    /* catch() { ... } // from try @ 0158c9dc with catch @ 0158cb44
                       catch() { ... } // from try @ 0158cae0 with catch @ 0158cb44 */
                piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                do {
                    /* catch() { ... } // from try @ 0158c988 with catch @ 0158cb48 */
                    /* catch() { ... } // from try @ 0158c99c with catch @ 0158cb4c */
                    /* catch() { ... } // from try @ 0158c86c with catch @ 0158cb50 */
                  if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_057636d0) {
                    /* catch() { ... } // from try @ 0158c888 with catch @ 0158cb70 */
                    /* catch() { ... } // from try @ 0158c81c with catch @ 0158cb74
                       catch() { ... } // from try @ 0158cabc with catch @ 0158cb74 */
                    puVar17 = (undefined8 *)(lVar19 + (long)(*piVar21 + 1) * 0x10 + 0x138);
                    goto LAB_0158cb80;
                  }
                    /* catch() { ... } // from try @ 0158c858 with catch @ 0158cb54 */
                  uVar20 = uVar20 - 1;
                    /* catch() { ... } // from try @ 0158c83c with catch @ 0158cb58
                       catch() { ... } // from try @ 0158cac0 with catch @ 0158cb58 */
                  piVar21 = piVar21 + 4;
                    /* catch() { ... } // from try @ 0158c804 with catch @ 0158cb5c */
                } while (uVar20 != 0);
              }
                    /* catch() { ... } // from try @ 0158c7e4 with catch @ 0158cb60 */
                    /* catch() { ... } // from try @ 0158c744 with catch @ 0158cb64 */
                    /* catch() { ... } // from try @ 0158c798 with catch @ 0158cb68 */
              puVar17 = (undefined8 *)FUN_0131971c(plVar14,*(long *)PTR_DAT_057636d0,1);
                    /* catch() { ... } // from try @ 0158c898 with catch @ 0158cb6c */
LAB_0158cb80:
              uStack_64 = (*(code *)*puVar17)(plVar14,puVar17[1]);
                    /* try { // try from 0158cb8c to 0168cba3 has its CatchHandler @ 0158cc24 */
              uVar16 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_64);
                    /* try { // try from 0158cba4 to 0168cc13 has its CatchHandler @ 0158c640 */
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar15,*(undefined8 *)puVar4,uVar16,0);
              uStack_68 = Modules_Contexts_Home_TeamQuest_Scripts_TeamQuestService__GetStartDateAsUnix_2dd6cd4
                                    (lVar12,0);
              uVar16 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_68);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar15,*(undefined8 *)puVar3,uVar16,0);
              uStack_6c = Modules_Contexts_Home_TeamQuest_Scripts_TeamQuestService__GetRemainingSeconds_2dd6b3c
                                    (lVar12,0);
              uVar16 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_6c);
                    /* try { // try from 0158cc14 to 0168cc23 has its CatchHandler @ 0158cc24 */
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar15,*(undefined8 *)puVar6,uVar16,0);
              iStack_70 = iVar8;
                    /* catch() { ... } // from try @ 0158cb8c with catch @ 0158cc24
                       catch() { ... } // from try @ 0158cc14 with catch @ 0158cc24 */
                    /* try { // try from 0158cc28 to 0168cc2b has its CatchHandler @ 0158cc34 */
              uVar16 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&iStack_70);
                    /* try { // try from 0158cc2c to 0168cc37 has its CatchHandler @ 0158c640 */
                    /* catch() { ... } // from try @ 0158cc28 with catch @ 0158cc34 */
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar15,*(undefined8 *)puVar2,uVar16,0);
              if (*(long *)(lVar12 + 0x20) != 0) {
                uVar16 = Modules_Contexts_Home_TeamQuest_Scripts_TeamQuestDataService__GetTournamentID_2f0f778
                                   (*(long *)(lVar12 + 0x20),0);
                lVar19 = *plVar14;
                uVar20 = (ulong)*(ushort *)(lVar19 + 0x12a);
                if (uVar20 != 0) {
                  piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar21 + -2) == *(long *)puVar1) {
                      puVar17 = (undefined8 *)(lVar19 + (long)(*piVar21 + 1) * 0x10 + 0x138);
                      goto LAB_0158cca4;
                    }
                    uVar20 = uVar20 - 1;
                    piVar21 = piVar21 + 4;
                  } while (uVar20 != 0);
                }
                puVar17 = (undefined8 *)FUN_0131971c(plVar14,*(long *)puVar1,1);
LAB_0158cca4:
                iVar9 = (*(code *)*puVar17)(plVar14,puVar17[1]);
                iVar10 = Modules_Contexts_Home_TeamQuest_Scripts_TeamQuestService__GetStartDateAsUnix_2dd6cd4
                                   (lVar12,0);
                iVar11 = Modules_Contexts_Home_TeamQuest_Scripts_TeamQuestService__GetRemainingSeconds_2dd6b3c
                                   (lVar12,0);
                puVar1 = PTR_DAT_0575f9f0;
                if (lVar13 != 0) {
                  uVar18 = Modules_Contexts_Application_ServerCommunication_Scripts_SegmentService__GetSegment_3e2f82c
                                     (lVar13,0);
                  uVar16 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__TeamQuestFinished_2db46d4
                                     (uVar16,(long)iVar9,(long)iVar10,(long)iVar11,(long)iVar8,
                                      uVar18,0);
                  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    thunk_FUN_0130472c(*(long *)puVar1);
                  }
                  GrandSDK_Analytics_Analytics__Track_2b38d30(uVar16,0);
                  Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4
                            (param_1,lVar15);
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

