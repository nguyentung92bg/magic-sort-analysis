/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendJetpackRaceWon
void Modules_Contexts_Application_Events_Scripts_EventSender__SendJetpackRaceWon (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendJetpackRaceWon
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendJetpackRaceWon
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendJetpackRaceWon_145be74
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
  int iVar10;
  int iVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  int *piVar20;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 uStack_58;
  
  puVar2 = PTR_DAT_0576aae0;
  if ((bRam0000000005c23796 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_057a5778);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057d6138);
    FUN_012d0dc8(PTR_DAT_057a8880);
    FUN_012d0dc8(PTR_DAT_057e4da8);
    FUN_012d0dc8(PTR_DAT_057b8b10);
    FUN_012d0dc8(PTR_DAT_057fcce8);
    FUN_012d0dc8(PTR_DAT_0580c590);
    FUN_012d0dc8(PTR_DAT_0579d2a0);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057af510);
    bRam0000000005c23796 = 1;
  }
  lVar16 = **(long **)(*(long *)puVar2 + 0xb8);
  if ((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x18), lVar16 != 0)) {
    lVar16 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar16,*(undefined8 *)PTR_DAT_057a5778);
    puVar3 = PTR_DAT_057c8a60;
    lVar17 = **(long **)(*(long *)puVar2 + 0xb8);
    if ((lVar17 != 0) && (lVar17 = *(long *)(lVar17 + 0x18), lVar17 != 0)) {
      plVar12 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                  (lVar17,*(undefined8 *)PTR_DAT_057a1e60);
      lVar17 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
      if ((lVar17 != 0) &&
         (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                    (lVar17,*(undefined8 *)PTR_DAT_057af510,0), puVar1 = PTR_DAT_057fcce8,
         puVar6 = PTR_DAT_057e4da8, puVar5 = PTR_DAT_057db748, puVar4 = PTR_DAT_057d6138,
         puVar3 = PTR_DAT_057b8b10, puVar2 = PTR_DAT_057a8880, lVar16 != 0)) {
        uVar13 = Modules_Contexts_Home_JetpackRace_Scripts_JetpackRaceService__GetTournamentId_3b1cc58
                           (lVar16,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar17,*(undefined8 *)puVar1,uVar13,0);
        uStack_58 = Modules_Contexts_Home_JetpackRace_Scripts_JetpackRaceService__GetStartTimeAsUnix_3b1c0f4
                              (lVar16,0);
        uVar13 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_58);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar17,*(undefined8 *)puVar3,uVar13,0);
        uStack_64 = Modules_Contexts_Home_JetpackRace_Scripts_JetpackRaceService__GetRemainingSeconds_3b1bf24
                              (lVar16,0);
        uVar13 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_64);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar17,*(undefined8 *)puVar6,uVar13,0);
        uStack_68 = Modules_Contexts_Home_JetpackRace_Scripts_JetpackRaceService__GetScore_3b1c3b4
                              (lVar16,0);
        uVar13 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_68);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar17,*(undefined8 *)puVar2,uVar13,0);
        puVar6 = PTR_DAT_0580c590;
        puVar4 = PTR_DAT_057caaf0;
        puVar3 = PTR_DAT_0579d2a0;
        puVar2 = PTR_DAT_057636d0;
        if (plVar12 != (long *)0x0) {
          lVar18 = *plVar12;
          uVar19 = (ulong)*(ushort *)(lVar18 + 0x12a);
          if (uVar19 != 0) {
            piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_057636d0) {
                puVar14 = (undefined8 *)(lVar18 + (long)(*piVar20 + 1) * 0x10 + 0x138);
                goto LAB_0155c15c;
              }
              uVar19 = uVar19 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar19 != 0);
          }
          puVar14 = (undefined8 *)FUN_0131971c(plVar12,*(long *)PTR_DAT_057636d0,1);
LAB_0155c15c:
          puVar1 = PTR_DAT_0575f9f0;
          uStack_6c = (*(code *)*puVar14)(plVar12,puVar14[1]);
          uVar13 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_6c);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar17,*(undefined8 *)puVar4,uVar13,0);
          uStack_70 = Modules_Contexts_Home_JetpackRace_Scripts_JetpackRaceService__GetRank_3b1ccc0
                                (lVar16,0);
          uVar13 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_70);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar17,*(undefined8 *)puVar6,uVar13,0);
          uStack_74 = Modules_Contexts_Home_JetpackRace_Scripts_JetpackRaceService__GetMaxScore_3b1cde4
                                (lVar16,0);
          uVar13 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_74);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar17,*(undefined8 *)puVar3,uVar13,0);
          uVar13 = Modules_Contexts_Home_JetpackRace_Scripts_JetpackRaceService__GetTournamentId_3b1cc58
                             (lVar16,0);
          uVar15 = Modules_Contexts_Home_JetpackRace_Scripts_JetpackRaceService__GetStartTimeAsUnix_3b1c0f4
                             (lVar16,0);
          iVar7 = Modules_Contexts_Home_JetpackRace_Scripts_JetpackRaceService__GetRemainingSeconds_3b1bf24
                            (lVar16,0);
          iVar8 = Modules_Contexts_Home_JetpackRace_Scripts_JetpackRaceService__GetScore_3b1c3b4
                            (lVar16,0);
          lVar18 = *plVar12;
          uVar19 = (ulong)*(ushort *)(lVar18 + 0x12a);
          if (uVar19 != 0) {
            piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *(long *)puVar2) {
                puVar14 = (undefined8 *)(lVar18 + (long)(*piVar20 + 1) * 0x10 + 0x138);
                goto LAB_0155c290;
              }
              uVar19 = uVar19 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar19 != 0);
          }
          puVar14 = (undefined8 *)FUN_0131971c(plVar12,*(long *)puVar2,1);
LAB_0155c290:
          iVar9 = (*(code *)*puVar14)(plVar12,puVar14[1]);
          iVar10 = Modules_Contexts_Home_JetpackRace_Scripts_JetpackRaceService__GetRank_3b1ccc0
                             (lVar16,0);
          iVar11 = Modules_Contexts_Home_JetpackRace_Scripts_JetpackRaceService__GetMaxScore_3b1cde4
                             (lVar16,0);
          uVar13 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__JetpackRaceWon_2dab72c
                             (uVar13,uVar15,(long)iVar7,(long)iVar8,(long)iVar9,(long)iVar10,
                              (long)iVar11,0);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_0130472c(*(long *)puVar1);
          }
          GrandSDK_Analytics_Analytics__Track_2b38d30(uVar13,0);
          Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar17)
          ;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

