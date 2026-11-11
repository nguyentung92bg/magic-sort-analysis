/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendTeamQuestStarted
void Modules_Contexts_Application_Events_Scripts_EventSender__SendTeamQuestStarted (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendTeamQuestStarted
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendTeamQuestStarted
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendTeamQuestStarted_148a9e0
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  undefined4 uStack_64;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c23859 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_05792f78);
    FUN_012d0dc8(PTR_DAT_0579ada8);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057e4da8);
    FUN_012d0dc8(PTR_DAT_057b8b10);
    FUN_012d0dc8(PTR_DAT_0575a580);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057c4858);
    bRam0000000005c23859 = 1;
  }
  if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
     (lVar9 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar9 != 0)) {
    lVar9 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                      (lVar9,*(undefined8 *)PTR_DAT_0579ada8);
    if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
       (lVar10 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar10 != 0)) {
      plVar11 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                  (lVar10,*(undefined8 *)PTR_DAT_057a1e60);
      puVar2 = PTR_DAT_057c8a60;
      if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
         (lVar10 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar10 != 0)) {
        lVar10 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                           (lVar10,*(undefined8 *)PTR_DAT_05792f78);
        lVar12 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
        if ((lVar12 != 0) &&
           ((Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                       (lVar12,*(undefined8 *)PTR_DAT_057c4858,0), puVar1 = PTR_DAT_0575a580,
            lVar9 != 0 && (*(long *)(lVar9 + 0x20) != 0)))) {
          uVar13 = Modules_Contexts_Home_TeamQuest_Scripts_TeamQuestDataService__GetTournamentID_2f0f778
                             (*(long *)(lVar9 + 0x20),0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar12,*(undefined8 *)puVar1,uVar13,0);
          puVar5 = PTR_DAT_057e4da8;
          puVar4 = PTR_DAT_057db748;
          puVar3 = PTR_DAT_057caaf0;
          puVar2 = PTR_DAT_057b8b10;
          puVar1 = PTR_DAT_057636d0;
          if (plVar11 != (long *)0x0) {
            lVar16 = *plVar11;
            uVar17 = (ulong)*(ushort *)(lVar16 + 0x12a);
            if (uVar17 != 0) {
              piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_057636d0) {
                  puVar14 = (undefined8 *)(lVar16 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                  goto LAB_0158ac18;
                }
                uVar17 = uVar17 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar17 != 0);
            }
            puVar14 = (undefined8 *)FUN_0131971c(plVar11,*(long *)PTR_DAT_057636d0,1);
LAB_0158ac18:
            uStack_54 = (*(code *)*puVar14)(plVar11,puVar14[1]);
            uVar13 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_54);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar12,*(undefined8 *)puVar3,uVar13,0);
            uStack_58 = Modules_Contexts_Home_TeamQuest_Scripts_TeamQuestService__GetStartDateAsUnix_2dd6cd4
                                  (lVar9,0);
            uVar13 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_58);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar12,*(undefined8 *)puVar2,uVar13,0);
            uStack_64 = Modules_Contexts_Home_TeamQuest_Scripts_TeamQuestService__GetRemainingSeconds_2dd6b3c
                                  (lVar9,0);
            uVar13 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_64);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar12,*(undefined8 *)puVar5,uVar13,0);
            if (*(long *)(lVar9 + 0x20) != 0) {
              uVar13 = Modules_Contexts_Home_TeamQuest_Scripts_TeamQuestDataService__GetTournamentID_2f0f778
                                 (*(long *)(lVar9 + 0x20),0);
              lVar16 = *plVar11;
              uVar17 = (ulong)*(ushort *)(lVar16 + 0x12a);
              if (uVar17 != 0) {
                piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar18 + -2) == *(long *)puVar1) {
                    puVar14 = (undefined8 *)(lVar16 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                    goto LAB_0158ad18;
                  }
                  uVar17 = uVar17 - 1;
                  piVar18 = piVar18 + 4;
                } while (uVar17 != 0);
              }
              puVar14 = (undefined8 *)FUN_0131971c(plVar11,*(long *)puVar1,1);
LAB_0158ad18:
              iVar6 = (*(code *)*puVar14)(plVar11,puVar14[1]);
              iVar7 = Modules_Contexts_Home_TeamQuest_Scripts_TeamQuestService__GetStartDateAsUnix_2dd6cd4
                                (lVar9,0);
              iVar8 = Modules_Contexts_Home_TeamQuest_Scripts_TeamQuestService__GetRemainingSeconds_2dd6b3c
                                (lVar9,0);
              puVar1 = PTR_DAT_0575f9f0;
              if (lVar10 != 0) {
                uVar15 = Modules_Contexts_Application_ServerCommunication_Scripts_SegmentService__GetSegment_3e2f82c
                                   (lVar10,0);
                uVar13 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__TeamQuestStarted_2db40d4
                                   (uVar13,(long)iVar6,(long)iVar7,(long)iVar8,uVar15,0);
                if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                  thunk_FUN_0130472c(*(long *)puVar1);
                }
                GrandSDK_Analytics_Analytics__Track_2b38d30(uVar13,0);
                Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4
                          (param_1,lVar12);
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

