/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendWeeklyTournamentClaimedEvent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendWeeklyTournamentClaimedEvent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t visualRank, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendWeeklyTournamentClaimedEvent
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendWeeklyTournamentClaimedEvent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t visualRank, const
   MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendWeeklyTournamentClaimedEvent_1457294
               (undefined8 param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  int iStack_6c;
  undefined8 uStack_68;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c23783 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_05790e10);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8188);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_0578eec0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057d6138);
    FUN_012d0dc8(PTR_DAT_05809c98);
    FUN_012d0dc8(PTR_DAT_05805718);
    FUN_012d0dc8(PTR_DAT_0579e8e8);
    FUN_012d0dc8(PTR_DAT_057a93a8);
    FUN_012d0dc8(PTR_DAT_0576f020);
    FUN_012d0dc8(PTR_DAT_05815af0);
    FUN_012d0dc8(PTR_DAT_0575a9d0);
    FUN_012d0dc8(PTR_DAT_057d4ed0);
    bRam0000000005c23783 = 1;
  }
  if (((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
      (lVar10 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar10 != 0)) &&
     (lVar10 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                         (lVar10,*(undefined8 *)PTR_DAT_05790e10), lVar10 != 0)) {
    uVar11 = Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__GetStartTimeAsUnix_32da644
                       (lVar10,0);
    if (*(long *)(lVar10 + 0x20) != 0) {
      iVar6 = Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentDataService__GetCurrentScore_32d5e90
                        (*(long *)(lVar10 + 0x20),0);
      puVar1 = PTR_DAT_057c8a60;
      if (*(long *)(lVar10 + 0x20) != 0) {
        uVar12 = Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentDataService__GetTournamentId_32d5eac
                           (*(long *)(lVar10 + 0x20),0);
        lVar13 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
        puVar5 = PTR_DAT_05815af0;
        puVar4 = PTR_DAT_057db748;
        puVar3 = PTR_DAT_057d6138;
        puVar2 = PTR_DAT_057d4ed0;
        puVar1 = PTR_DAT_0575a9d0;
        if (lVar13 != 0) {
          Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                    (lVar13,*(undefined8 *)PTR_DAT_0576f020,0);
          uStack_68 = uVar11;
          uVar14 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_68);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar13,*(undefined8 *)puVar5,uVar14,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar13,*(undefined8 *)puVar2,uVar12,0);
          iStack_6c = iVar6;
          uVar14 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&iStack_6c);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar13,*(undefined8 *)puVar1,uVar14,0);
          if (*(long *)(lVar10 + 0x20) != 0) {
            lVar15 = Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentDataService__GetCachedLeaderboard_32d5f0c
                               (*(long *)(lVar10 + 0x20),0);
            puVar1 = PTR_DAT_057a93a8;
            if ((lVar15 == 0) || (lVar15 = *(long *)(lVar15 + 0x18), lVar15 == 0)) {
              iVar7 = Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__GetRemainingSeconds_32d9518
                                (lVar10,0);
              iVar9 = Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__GetRank_32da278
                                (lVar10,0);
              lVar17 = -1;
              lVar19 = -1;
              lVar10 = -1;
            }
            else {
              lVar19 = (long)*(int *)(lVar15 + 0x18);
              iVar7 = Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__GetRemainingSeconds_32d9518
                                (lVar10,0);
              lVar17 = *(long *)puVar1;
              if (*(int *)(lVar17 + 0xe0) == 0) {
                thunk_FUN_0130472c(lVar17);
                lVar17 = *(long *)puVar1;
              }
              lVar18 = *(long *)(*(long *)(lVar17 + 0xb8) + 0x38);
              if (lVar18 == 0) {
                if (*(int *)(lVar17 + 0xe0) == 0) {
                  thunk_FUN_0130472c(lVar17);
                  lVar17 = *(long *)PTR_DAT_057a93a8;
                }
                uVar14 = **(undefined8 **)(lVar17 + 0xb8);
                lVar18 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_0578eec0);
                if (lVar18 == 0) goto LAB_0155772c;
                System_Func_object__bool____ctor_338137c
                          (lVar18,uVar14,*(undefined8 *)PTR_DAT_05805718,0);
                plVar16 = (long *)(*(long *)(*(long *)PTR_DAT_057a93a8 + 0xb8) + 0x38);
                *plVar16 = lVar18;
                FUN_012d0d74(plVar16,lVar18);
              }
              iVar8 = System_Linq_Enumerable__Count_object__241f07c
                                (lVar15,lVar18,*(undefined8 *)PTR_DAT_057c8188);
              iVar9 = Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__GetRank_32da278
                                (lVar10,0);
              puVar1 = PTR_DAT_057a93a8;
              lVar10 = *(long *)PTR_DAT_057a93a8;
              if (*(int *)(lVar10 + 0xe0) == 0) {
                thunk_FUN_0130472c(lVar10);
                lVar10 = *(long *)puVar1;
              }
              lVar18 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x40);
              if (lVar18 == 0) {
                if (*(int *)(lVar10 + 0xe0) == 0) {
                  thunk_FUN_0130472c(lVar10);
                  lVar10 = *(long *)PTR_DAT_057a93a8;
                }
                uVar14 = **(undefined8 **)(lVar10 + 0xb8);
                lVar18 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_0578eec0);
                if (lVar18 == 0) goto LAB_0155772c;
                System_Func_object__bool____ctor_338137c
                          (lVar18,uVar14,*(undefined8 *)PTR_DAT_0579e8e8,0);
                plVar16 = (long *)(*(long *)(*(long *)PTR_DAT_057a93a8 + 0xb8) + 0x40);
                *plVar16 = lVar18;
                FUN_012d0d74(plVar16,lVar18);
              }
              lVar17 = (long)iVar8;
              iVar8 = System_Linq_Enumerable__Count_object__241f07c
                                (lVar15,lVar18,*(undefined8 *)PTR_DAT_057c8188);
              lVar10 = (long)iVar8;
            }
            puVar1 = PTR_DAT_0575f9f0;
            uVar11 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__WeeklyTournamentClaimed_2db9ac8
                               (lVar19,uVar11,(long)iVar7,lVar17,lVar10,(long)param_2,(long)iVar9,
                                uVar12,(long)iVar6,0);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_0130472c(*(long *)puVar1);
            }
            GrandSDK_Analytics_Analytics__Track_2b38d30(uVar11,0);
            Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4
                      (param_1,lVar13);
            return;
          }
        }
      }
    }
  }
LAB_0155772c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

