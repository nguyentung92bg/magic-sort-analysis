/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendWeeklyTournamentJoinedEvent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendWeeklyTournamentJoinedEvent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendWeeklyTournamentJoinedEvent
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendWeeklyTournamentJoinedEvent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendWeeklyTournamentJoinedEvent_1456dac
               (undefined8 param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  undefined8 uStack_70;
  int iStack_64;
  
  puVar2 = PTR_DAT_0576aae0;
  if ((bRam0000000005c23782 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_05790e10);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057fa640);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_05811748);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057d6138);
    FUN_012d0dc8(PTR_DAT_057b4ad8);
    FUN_012d0dc8(PTR_DAT_057b57a0);
    FUN_012d0dc8(PTR_DAT_057f42a0);
    FUN_012d0dc8(PTR_DAT_057a93a8);
    FUN_012d0dc8(PTR_DAT_057aea40);
    FUN_012d0dc8(PTR_DAT_0579d750);
    FUN_012d0dc8(PTR_DAT_057e4da8);
    FUN_012d0dc8(PTR_DAT_057eaf90);
    FUN_012d0dc8(PTR_DAT_05815af0);
    FUN_012d0dc8(PTR_DAT_057fcce8);
    FUN_012d0dc8(PTR_DAT_05795788);
    FUN_012d0dc8(PTR_DAT_057bc700);
    bRam0000000005c23782 = 1;
  }
  if ((((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
       (lVar10 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar10 != 0)) &&
      (lVar10 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                          (lVar10,*(undefined8 *)PTR_DAT_05790e10), lVar10 != 0)) &&
     (lVar11 = Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__GetLeaderboardViewModels_32d9a28
                         (lVar10,0), puVar2 = PTR_DAT_057a93a8, lVar11 != 0)) {
    iVar1 = *(int *)(lVar11 + 0x18);
    uVar12 = Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__GetStartTimeAsUnix_32da644
                       (lVar10,0);
    iVar6 = Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__GetRemainingSeconds_32d9518
                      (lVar10,0);
    lVar15 = *(long *)puVar2;
    if (*(int *)(lVar15 + 0xe0) == 0) {
      thunk_FUN_0130472c(lVar15);
      lVar15 = *(long *)puVar2;
    }
    puVar3 = PTR_DAT_05811748;
    lVar16 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x28);
    if (lVar16 == 0) {
      if (*(int *)(lVar15 + 0xe0) == 0) {
        thunk_FUN_0130472c(lVar15);
        lVar15 = *(long *)puVar2;
      }
      uVar17 = **(undefined8 **)(lVar15 + 0xb8);
      lVar16 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
      if (lVar16 == 0) goto LAB_01557290;
      System_Func_object__bool____ctor_338137c(lVar16,uVar17,*(undefined8 *)PTR_DAT_057b57a0,0);
      plVar13 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28);
      *plVar13 = lVar16;
      FUN_012d0d74(plVar13,lVar16);
    }
    puVar4 = PTR_DAT_057fa640;
    iVar7 = System_Linq_Enumerable__Count_object__241f07c
                      (lVar11,lVar16,*(undefined8 *)PTR_DAT_057fa640);
    lVar15 = *(long *)puVar2;
    if (*(int *)(lVar15 + 0xe0) == 0) {
      thunk_FUN_0130472c(lVar15);
      lVar15 = *(long *)puVar2;
    }
    lVar16 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x30);
    if (lVar16 == 0) {
      if (*(int *)(lVar15 + 0xe0) == 0) {
        thunk_FUN_0130472c(lVar15);
        lVar15 = *(long *)puVar2;
      }
      uVar17 = **(undefined8 **)(lVar15 + 0xb8);
      lVar16 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
      if (lVar16 == 0) goto LAB_01557290;
      System_Func_object__bool____ctor_338137c(lVar16,uVar17,*(undefined8 *)PTR_DAT_057f42a0,0);
      plVar13 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
      *plVar13 = lVar16;
      FUN_012d0d74(plVar13,lVar16);
    }
    iVar8 = System_Linq_Enumerable__Count_object__241f07c(lVar11,lVar16,*(undefined8 *)puVar4);
    iVar9 = Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__GetRank_32da278
                      (lVar10,0);
    puVar2 = PTR_DAT_057c8a60;
    if (*(long *)(lVar10 + 0x20) != 0) {
      uVar17 = Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentDataService__GetTournamentId_32d5eac
                         (*(long *)(lVar10 + 0x20),0);
      lVar10 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
      puVar5 = PTR_DAT_05815af0;
      puVar4 = PTR_DAT_057db748;
      puVar3 = PTR_DAT_057d6138;
      puVar2 = PTR_DAT_057aea40;
      if (lVar10 != 0) {
        Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                  (lVar10,*(undefined8 *)PTR_DAT_0579d750,0);
        iStack_64 = iVar1;
        uVar14 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&iStack_64);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar10,*(undefined8 *)puVar2,uVar14,0);
        uStack_70 = uVar12;
        uVar14 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_70);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar10,*(undefined8 *)puVar5,uVar14,0);
        iStack_74 = iVar6;
        uVar14 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&iStack_74);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar10,*(undefined8 *)PTR_DAT_057e4da8,uVar14,0);
        iStack_78 = iVar7;
        uVar14 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&iStack_78);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar10,*(undefined8 *)PTR_DAT_057eaf90,uVar14,0);
        iStack_7c = iVar8;
        uVar14 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&iStack_7c);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar10,*(undefined8 *)PTR_DAT_05795788,uVar14,0);
        iStack_80 = iVar9;
        uVar14 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&iStack_80);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar10,*(undefined8 *)PTR_DAT_057bc700,uVar14,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar10,*(undefined8 *)PTR_DAT_057fcce8,uVar17,0);
        uVar12 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__WeeklyTournamentJoined_2db99bc
                           ((long)iVar1,uVar12,(long)iVar6,(long)iVar7,(long)iVar8,(long)iVar9,
                            uVar17,0);
        if (*(int *)(*(long *)PTR_DAT_0575f9f0 + 0xe0) == 0) {
          thunk_FUN_0130472c(*(long *)PTR_DAT_0575f9f0);
        }
        GrandSDK_Analytics_Analytics__Track_2b38d30(uVar12,0);
        Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar10);
        return;
      }
    }
  }
LAB_01557290:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

