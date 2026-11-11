/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendTeamArenaEventPopupSeen
void Modules_Contexts_Application_Events_Scripts_EventSender__SendTeamArenaEventPopupSeen (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t directory, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendTeamArenaEventPopupSeen
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendTeamArenaEventPopupSeen
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t directory, const
   MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendTeamArenaEventPopupSeen_1486704
               (undefined8 param_1,int param_2)

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
  long lVar19;
  ulong uVar20;
  int *piVar21;
  undefined4 uStack_80;
  int iStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined4 uStack_64;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c2384c & 1) == 0) {
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
    FUN_012d0dc8(PTR_DAT_057626a0);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057d3f68);
    bRam0000000005c2384c = 1;
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
                      (lVar14,*(undefined8 *)PTR_DAT_057626a0,0), puVar1 = PTR_DAT_0575a580,
           lVar12 != 0)) {
          uVar15 = Modules_Contexts_Home_TeamArena_TeamArenaService__GetTournamentId_2de84cc
                             (lVar12,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar14,*(undefined8 *)puVar1,uVar15,0);
          puVar2 = PTR_DAT_057db748;
          puVar1 = PTR_DAT_057caaf0;
          if (plVar13 != (long *)0x0) {
            lVar19 = *plVar13;
            uVar20 = (ulong)*(ushort *)(lVar19 + 0x12a);
            if (uVar20 != 0) {
              piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
              do {
                if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_057636d0) {
                  puVar16 = (undefined8 *)(lVar19 + (long)(*piVar21 + 1) * 0x10 + 0x138);
                  goto LAB_01586968;
                }
                uVar20 = uVar20 - 1;
                piVar21 = piVar21 + 4;
              } while (uVar20 != 0);
            }
            puVar16 = (undefined8 *)FUN_0131971c(plVar13,*(long *)PTR_DAT_057636d0,1);
LAB_01586968:
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
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar14,*(undefined8 *)puVar6,uVar15,0);
              uStack_78 = Modules_Contexts_Home_TeamArena_TeamArenaService__GetEligibility_2de8454
                                    (lVar12,0);
              uVar15 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&uStack_78);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar14,*(undefined8 *)puVar5,uVar15,0);
              iStack_7c = param_2;
              uVar15 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&iStack_7c);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar14,*(undefined8 *)PTR_DAT_057e3618,uVar15,0);
              uStack_80 = Modules_Contexts_Home_TeamArena_TeamArenaService__GetCurrentStep_2de8428
                                    (lVar12,0);
              uVar15 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&uStack_80);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar14,*(undefined8 *)PTR_DAT_05774660,uVar15,0);
              uVar15 = Modules_Contexts_Home_TeamArena_TeamArenaService__GetTournamentId_2de84cc
                                 (lVar12,0);
              lVar19 = *plVar13;
              uVar20 = (ulong)*(ushort *)(lVar19 + 0x12a);
              if (uVar20 != 0) {
                piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_057636d0) {
                    puVar16 = (undefined8 *)(lVar19 + (long)(*piVar21 + 1) * 0x10 + 0x138);
                    goto LAB_01586b5c;
                  }
                  uVar20 = uVar20 - 1;
                  piVar21 = piVar21 + 4;
                } while (uVar20 != 0);
              }
              puVar16 = (undefined8 *)FUN_0131971c(plVar13,*(long *)PTR_DAT_057636d0,1);
LAB_01586b5c:
              iVar7 = (*(code *)*puVar16)(plVar13,puVar16[1]);
              uVar17 = Modules_Contexts_Application_ServerCommunication_Scripts_SegmentService__GetSegment_3e2f82c
                                 (lVar11,0);
              uVar18 = Modules_Contexts_Home_TeamArena_TeamArenaService__GetStartTimeAsUnixTime_2de6068
                                 (lVar12,0);
              iVar8 = Modules_Contexts_Home_TeamArena_TeamArenaService__GetRemainingTime_2de5ea8
                                (lVar12,0);
              iVar9 = Modules_Contexts_Home_TeamArena_TeamArenaService__GetEligibility_2de8454
                                (lVar12,0);
              iVar10 = Modules_Contexts_Home_TeamArena_TeamArenaService__GetCurrentStep_2de8428
                                 (lVar12,0);
              uVar15 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__TeamArenaEventPopupImpression_2db3478
                                 (uVar15,(long)iVar7,uVar17,uVar18,(long)iVar8,(long)iVar9,
                                  (long)param_2,(long)iVar10,0);
              if (*(int *)(*(long *)PTR_DAT_0575f9f0 + 0xe0) == 0) {
                thunk_FUN_0130472c(*(long *)PTR_DAT_0575f9f0);
              }
              GrandSDK_Analytics_Analytics__Track_2b38d30(uVar15,0);
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

