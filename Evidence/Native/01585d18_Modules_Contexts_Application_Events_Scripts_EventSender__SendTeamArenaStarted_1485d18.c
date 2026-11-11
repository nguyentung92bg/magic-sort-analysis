/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendTeamArenaStarted
void Modules_Contexts_Application_Events_Scripts_EventSender__SendTeamArenaStarted (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendTeamArenaStarted
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendTeamArenaStarted
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendTeamArenaStarted_1485d18
               (undefined8 param_1)

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
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined4 uStack_64;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c2384a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_05792f78);
    FUN_012d0dc8(PTR_DAT_0580bba8);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057d6138);
    FUN_012d0dc8(PTR_DAT_057e4da8);
    FUN_012d0dc8(PTR_DAT_057b8b10);
    FUN_012d0dc8(PTR_DAT_057e7e20);
    FUN_012d0dc8(PTR_DAT_057d6d80);
    FUN_012d0dc8(PTR_DAT_0575a580);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057d3f68);
    bRam0000000005c2384a = 1;
  }
  if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
     (lVar10 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar10 != 0)) {
    lVar10 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar10,*(undefined8 *)PTR_DAT_05792f78);
    if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
       (lVar11 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar11 != 0)) {
      plVar12 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                  (lVar11,*(undefined8 *)PTR_DAT_057a1e60);
      puVar2 = PTR_DAT_057c8a60;
      if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
         (lVar11 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar11 != 0)) {
        lVar11 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                           (lVar11,*(undefined8 *)PTR_DAT_0580bba8);
        lVar13 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
        if ((lVar13 != 0) &&
           (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                      (lVar13,*(undefined8 *)PTR_DAT_057e7e20,0), puVar1 = PTR_DAT_0575a580,
           lVar11 != 0)) {
          uVar14 = Modules_Contexts_Home_TeamArena_TeamArenaService__GetTournamentId_2de84cc
                             (lVar11,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar13,*(undefined8 *)puVar1,uVar14,0);
          puVar5 = PTR_DAT_057db748;
          puVar2 = PTR_DAT_057caaf0;
          puVar1 = PTR_DAT_057636d0;
          if (plVar12 != (long *)0x0) {
            lVar18 = *plVar12;
            uVar19 = (ulong)*(ushort *)(lVar18 + 0x12a);
            if (uVar19 != 0) {
              piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_057636d0) {
                  puVar15 = (undefined8 *)(lVar18 + (long)(*piVar20 + 1) * 0x10 + 0x138);
                  goto LAB_01585f60;
                }
                uVar19 = uVar19 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar19 != 0);
            }
            puVar15 = (undefined8 *)FUN_0131971c(plVar12,*(long *)PTR_DAT_057636d0,1);
LAB_01585f60:
            uStack_64 = (*(code *)*puVar15)(plVar12,puVar15[1]);
            uVar14 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_64);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar13,*(undefined8 *)puVar2,uVar14,0);
            puVar6 = PTR_DAT_057e4da8;
            puVar4 = PTR_DAT_057d6138;
            puVar3 = PTR_DAT_057d3f68;
            puVar2 = PTR_DAT_057b8b10;
            if (lVar10 != 0) {
              uVar14 = Modules_Contexts_Application_ServerCommunication_Scripts_SegmentService__GetSegment_3e2f82c
                                 (lVar10,0);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar13,*(undefined8 *)puVar3,uVar14,0);
              uStack_70 = Modules_Contexts_Home_TeamArena_TeamArenaService__GetStartTimeAsUnixTime_2de6068
                                    (lVar11,0);
              uVar14 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_70);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar13,*(undefined8 *)puVar2,uVar14,0);
              uStack_74 = Modules_Contexts_Home_TeamArena_TeamArenaService__GetRemainingTime_2de5ea8
                                    (lVar11,0);
              uVar14 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_74);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar13,*(undefined8 *)puVar6,uVar14,0);
              uStack_78 = Modules_Contexts_Home_TeamArena_TeamArenaService__GetEligibility_2de8454
                                    (lVar11,0);
              uVar14 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_78);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar13,*(undefined8 *)PTR_DAT_057d6d80,uVar14,0);
              uVar14 = Modules_Contexts_Home_TeamArena_TeamArenaService__GetTournamentId_2de84cc
                                 (lVar11,0);
              lVar18 = *plVar12;
              uVar19 = (ulong)*(ushort *)(lVar18 + 0x12a);
              if (uVar19 != 0) {
                piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar20 + -2) == *(long *)puVar1) {
                    puVar15 = (undefined8 *)(lVar18 + (long)(*piVar20 + 1) * 0x10 + 0x138);
                    goto LAB_015860e0;
                  }
                  uVar19 = uVar19 - 1;
                  piVar20 = piVar20 + 4;
                } while (uVar19 != 0);
              }
              puVar15 = (undefined8 *)FUN_0131971c(plVar12,*(long *)puVar1,1);
LAB_015860e0:
              iVar7 = (*(code *)*puVar15)(plVar12,puVar15[1]);
              uVar16 = Modules_Contexts_Application_ServerCommunication_Scripts_SegmentService__GetSegment_3e2f82c
                                 (lVar10,0);
              uVar17 = Modules_Contexts_Home_TeamArena_TeamArenaService__GetStartTimeAsUnixTime_2de6068
                                 (lVar11,0);
              iVar8 = Modules_Contexts_Home_TeamArena_TeamArenaService__GetRemainingTime_2de5ea8
                                (lVar11,0);
              iVar9 = Modules_Contexts_Home_TeamArena_TeamArenaService__GetEligibility_2de8454
                                (lVar11,0);
              uVar14 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__TeamArenaStarted_2db3240
                                 (uVar14,(long)iVar7,uVar16,uVar17,(long)iVar8,(long)iVar9,0);
              if (*(int *)(*(long *)PTR_DAT_0575f9f0 + 0xe0) == 0) {
                thunk_FUN_0130472c(*(long *)PTR_DAT_0575f9f0);
              }
              GrandSDK_Analytics_Analytics__Track_2b38d30(uVar14,0);
              Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4
                        (param_1,lVar13);
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

