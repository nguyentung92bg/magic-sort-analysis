/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendJetpackRaceJoinedEvent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendJetpackRaceJoinedEvent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendJetpackRaceJoinedEvent
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendJetpackRaceJoinedEvent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendJetpackRaceJoinedEvent_145ae0c
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  
  puVar2 = PTR_DAT_0576aae0;
  if ((bRam0000000005c23792 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_057a5778);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057d6138);
    FUN_012d0dc8(PTR_DAT_057e4da8);
    FUN_012d0dc8(PTR_DAT_057b8b10);
    FUN_012d0dc8(PTR_DAT_057fcce8);
    FUN_012d0dc8(PTR_DAT_05768ba8);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    bRam0000000005c23792 = 1;
  }
  lVar12 = **(long **)(*(long *)puVar2 + 0xb8);
  if ((lVar12 != 0) && (lVar12 = *(long *)(lVar12 + 0x18), lVar12 != 0)) {
    lVar12 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar12,*(undefined8 *)PTR_DAT_057a5778);
    puVar3 = PTR_DAT_057c8a60;
    lVar13 = **(long **)(*(long *)puVar2 + 0xb8);
    if ((lVar13 != 0) && (lVar13 = *(long *)(lVar13 + 0x18), lVar13 != 0)) {
      plVar8 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                 (lVar13,*(undefined8 *)PTR_DAT_057a1e60);
      lVar13 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
      if ((lVar13 != 0) &&
         (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                    (lVar13,*(undefined8 *)PTR_DAT_05768ba8,0), puVar5 = PTR_DAT_057fcce8,
         puVar1 = PTR_DAT_057e4da8, puVar4 = PTR_DAT_057db748, puVar3 = PTR_DAT_057d6138,
         puVar2 = PTR_DAT_057b8b10, lVar12 != 0)) {
        uVar9 = Modules_Contexts_Home_JetpackRace_Scripts_JetpackRaceService__GetTournamentId_3b1cc58
                          (lVar12,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar13,*(undefined8 *)puVar5,uVar9,0);
        uStack_58 = Modules_Contexts_Home_JetpackRace_Scripts_JetpackRaceService__GetStartTimeAsUnix_3b1c0f4
                              (lVar12,0);
        uVar9 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_58);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar13,*(undefined8 *)puVar2,uVar9,0);
        uStack_5c = Modules_Contexts_Home_JetpackRace_Scripts_JetpackRaceService__GetRemainingSeconds_3b1bf24
                              (lVar12,0);
        uVar9 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_5c);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar13,*(undefined8 *)puVar1,uVar9,0);
        puVar3 = PTR_DAT_057caaf0;
        puVar2 = PTR_DAT_057636d0;
        if (plVar8 != (long *)0x0) {
          lVar14 = *plVar8;
          uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_057636d0) {
                puVar10 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                goto LAB_0155b080;
              }
              uVar15 = uVar15 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar15 != 0);
          }
          puVar10 = (undefined8 *)FUN_0131971c(plVar8,*(long *)PTR_DAT_057636d0,1);
LAB_0155b080:
          puVar1 = PTR_DAT_0575f9f0;
          uStack_60 = (*(code *)*puVar10)(plVar8,puVar10[1]);
          uVar9 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_60);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar13,*(undefined8 *)puVar3,uVar9,0);
          uVar9 = Modules_Contexts_Home_JetpackRace_Scripts_JetpackRaceService__GetTournamentId_3b1cc58
                            (lVar12,0);
          uVar11 = Modules_Contexts_Home_JetpackRace_Scripts_JetpackRaceService__GetStartTimeAsUnix_3b1c0f4
                             (lVar12,0);
          iVar6 = Modules_Contexts_Home_JetpackRace_Scripts_JetpackRaceService__GetRemainingSeconds_3b1bf24
                            (lVar12,0);
          lVar12 = *plVar8;
          uVar15 = (ulong)*(ushort *)(lVar12 + 0x12a);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
                puVar10 = (undefined8 *)(lVar12 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                goto LAB_0155b13c;
              }
              uVar15 = uVar15 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar15 != 0);
          }
          puVar10 = (undefined8 *)FUN_0131971c(plVar8,*(long *)puVar2,1);
LAB_0155b13c:
          iVar7 = (*(code *)*puVar10)(plVar8,puVar10[1]);
          uVar9 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__JetpackRaceJoined_2dab380
                            (uVar9,uVar11,(long)iVar6,(long)iVar7,0);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_0130472c(*(long *)puVar1);
          }
          GrandSDK_Analytics_Analytics__Track_2b38d30(uVar9,0);
          Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar13)
          ;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

