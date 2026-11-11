/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.WeeklyTournamentService$$TrySendTournamentFinishEvent
void Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__TrySendTournamentFinishEvent (Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService_o* __this, Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyGetLeaderboardResponse_o* responseData, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.WeeklyTournament.Scripts.WeeklyTournamentService$$TrySendTournamentFinishEvent
   void 
   Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__TrySendTournamentFinishEvent
   (Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService_o* __this,
   Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyGetLeaderboardResponse_o* responseData,
   const MethodInfo* method); */

void Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__TrySendTournamentFinishEvent_32d9f9c
               (long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  int iVar13;
  int iStack_70;
  int iStack_6c;
  undefined8 uStack_68;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar11 = Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentStateService__GetLeaderboardState_32db8a0
                       ();
    if ((int)uVar11 != 5) {
      return;
    }
    if (param_2 != 0) {
      if (*(char *)(param_2 + 0x31) == '\0') {
        return;
      }
      lVar12 = Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__FindPlayer_32d9400
                         (uVar11,*(undefined8 *)(param_2 + 0x18));
      if (lVar12 == 0) {
        iVar13 = -1;
      }
      else {
        iVar13 = *(int *)(lVar12 + 0x18);
      }
      if (cRam0000000005c230a8 == '\0') {
        FUN_012d0dc8(PTR_DAT_057ece38);
        cRam0000000005c230a8 = '\x01';
      }
      puVar1 = PTR_DAT_0576aae0;
      lVar12 = **(long **)(*(long *)PTR_DAT_057ece38 + 0xb8);
      if (lVar12 != 0) {
        uVar11 = *(undefined8 *)(param_2 + 0x10);
        if ((bRam0000000005c23784 & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_0575f9f0,iVar13,uVar11,0);
          FUN_012d0dc8(PTR_DAT_05790e10);
          FUN_012d0dc8(PTR_DAT_0576aae0);
          FUN_012d0dc8(PTR_DAT_057c8a60);
          FUN_012d0dc8(PTR_DAT_057db748);
          FUN_012d0dc8(PTR_DAT_057d6138);
          FUN_012d0dc8(PTR_DAT_057ad930);
          FUN_012d0dc8(PTR_DAT_057a4f58);
          FUN_012d0dc8(PTR_DAT_05815af0);
          FUN_012d0dc8(PTR_DAT_0575a9d0);
          FUN_012d0dc8(PTR_DAT_058190d8);
          FUN_012d0dc8(PTR_DAT_057d4ed0);
          bRam0000000005c23784 = 1;
        }
        if (((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
            (lVar7 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar7 != 0)) &&
           (lVar7 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                              (lVar7,*(undefined8 *)PTR_DAT_05790e10), lVar7 != 0)) {
          uVar8 = Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__GetStartTimeAsUnix_32da644
                            (lVar7,0);
          if (*(long *)(lVar7 + 0x20) != 0) {
            iVar6 = Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentDataService__GetCurrentScore_32d5e90
                              (*(long *)(lVar7 + 0x20),0);
            puVar1 = PTR_DAT_057c8a60;
            if (*(long *)(lVar7 + 0x20) != 0) {
              uVar9 = Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentDataService__GetTournamentId_32d5eac
                                (*(long *)(lVar7 + 0x20),0);
              lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
              puVar5 = PTR_DAT_05815af0;
              puVar4 = PTR_DAT_057db748;
              puVar3 = PTR_DAT_057d6138;
              puVar2 = PTR_DAT_057d4ed0;
              puVar1 = PTR_DAT_0575a9d0;
              if (lVar7 != 0) {
                Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                          (lVar7,*(undefined8 *)PTR_DAT_057ad930,0);
                uStack_68 = uVar8;
                uVar10 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_68);
                Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                          (lVar7,*(undefined8 *)puVar5,uVar10,0);
                Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                          (lVar7,*(undefined8 *)puVar2,uVar9,0);
                iStack_6c = iVar6;
                uVar10 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&iStack_6c);
                Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                          (lVar7,*(undefined8 *)puVar1,uVar10,0);
                iStack_70 = iVar13;
                uVar10 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&iStack_70);
                Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                          (lVar7,*(undefined8 *)PTR_DAT_057a4f58,uVar10,0);
                Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                          (lVar7,*(undefined8 *)PTR_DAT_058190d8,uVar11,0);
                uVar11 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__WeeklyTournamentFinished_2dbc520
                                   (uVar8,uVar9,(long)iVar6,(long)iVar13,uVar11,0);
                if (*(int *)(*(long *)PTR_DAT_0575f9f0 + 0xe0) == 0) {
                  thunk_FUN_0130472c(*(long *)PTR_DAT_0575f9f0);
                }
                GrandSDK_Analytics_Analytics__Track_2b38d30(uVar11,0);
                Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4
                          (lVar12,lVar7);
                return;
              }
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

