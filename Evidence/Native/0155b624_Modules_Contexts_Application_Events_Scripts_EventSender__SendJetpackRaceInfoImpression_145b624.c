/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendJetpackRaceInfoImpression
void Modules_Contexts_Application_Events_Scripts_EventSender__SendJetpackRaceInfoImpression (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendJetpackRaceInfoImpression
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendJetpackRaceInfoImpression
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendJetpackRaceInfoImpression_145b624
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
  int iVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  puVar2 = PTR_DAT_0576aae0;
  if ((bRam0000000005c23794 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_057a5778);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057a8880);
    FUN_012d0dc8(PTR_DAT_057e4da8);
    FUN_012d0dc8(PTR_DAT_057ec2c8);
    FUN_012d0dc8(PTR_DAT_057fcce8);
    FUN_012d0dc8(PTR_DAT_0580c590);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    bRam0000000005c23794 = 1;
  }
  lVar13 = **(long **)(*(long *)puVar2 + 0xb8);
  if ((lVar13 != 0) && (lVar13 = *(long *)(lVar13 + 0x18), lVar13 != 0)) {
    lVar13 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar13,*(undefined8 *)PTR_DAT_057a5778);
    puVar3 = PTR_DAT_057c8a60;
    lVar14 = **(long **)(*(long *)puVar2 + 0xb8);
    if ((lVar14 != 0) && (lVar14 = *(long *)(lVar14 + 0x18), lVar14 != 0)) {
      plVar10 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                  (lVar14,*(undefined8 *)PTR_DAT_057a1e60);
      lVar14 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
      if ((lVar14 != 0) &&
         (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                    (lVar14,*(undefined8 *)PTR_DAT_057ec2c8,0), puVar5 = PTR_DAT_057fcce8,
         puVar4 = PTR_DAT_057e4da8, puVar3 = PTR_DAT_057db748, puVar2 = PTR_DAT_057a8880,
         lVar13 != 0)) {
        uVar11 = Modules_Contexts_Home_JetpackRace_Scripts_JetpackRaceService__GetTournamentId_3b1cc58
                           (lVar13,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar14,*(undefined8 *)puVar5,uVar11,0);
        uStack_54 = Modules_Contexts_Home_JetpackRace_Scripts_JetpackRaceService__GetRemainingSeconds_3b1bf24
                              (lVar13,0);
        uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_54);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar14,*(undefined8 *)puVar4,uVar11,0);
        uStack_58 = Modules_Contexts_Home_JetpackRace_Scripts_JetpackRaceService__GetScore_3b1c3b4
                              (lVar13,0);
        uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_58);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar14,*(undefined8 *)puVar2,uVar11,0);
        puVar5 = PTR_DAT_0580c590;
        puVar4 = PTR_DAT_057caaf0;
        puVar2 = PTR_DAT_057636d0;
        if (plVar10 != (long *)0x0) {
          lVar15 = *plVar10;
          uVar16 = (ulong)*(ushort *)(lVar15 + 0x12a);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_057636d0) {
                puVar12 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                goto LAB_0155b898;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          puVar12 = (undefined8 *)FUN_0131971c(plVar10,*(long *)PTR_DAT_057636d0,1);
LAB_0155b898:
          puVar1 = PTR_DAT_0575f9f0;
          uStack_5c = (*(code *)*puVar12)(plVar10,puVar12[1]);
          uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_5c);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar14,*(undefined8 *)puVar4,uVar11,0);
          uStack_60 = Modules_Contexts_Home_JetpackRace_Scripts_JetpackRaceService__GetRank_3b1ccc0
                                (lVar13,0);
          uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_60);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar14,*(undefined8 *)puVar5,uVar11,0);
          uVar11 = Modules_Contexts_Home_JetpackRace_Scripts_JetpackRaceService__GetTournamentId_3b1cc58
                             (lVar13,0);
          iVar6 = Modules_Contexts_Home_JetpackRace_Scripts_JetpackRaceService__GetRemainingSeconds_3b1bf24
                            (lVar13,0);
          iVar7 = Modules_Contexts_Home_JetpackRace_Scripts_JetpackRaceService__GetScore_3b1c3b4
                            (lVar13,0);
          lVar15 = *plVar10;
          uVar16 = (ulong)*(ushort *)(lVar15 + 0x12a);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
                puVar12 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                goto LAB_0155b988;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          puVar12 = (undefined8 *)FUN_0131971c(plVar10,*(long *)puVar2,1);
LAB_0155b988:
          iVar8 = (*(code *)*puVar12)(plVar10,puVar12[1]);
          iVar9 = Modules_Contexts_Home_JetpackRace_Scripts_JetpackRaceService__GetRank_3b1ccc0
                            (lVar13,0);
          uVar11 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__JetpackRaceInfoImpression_2dab54c
                             (uVar11,(long)iVar6,(long)iVar7,(long)iVar8,(long)iVar9,0);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_0130472c(*(long *)puVar1);
          }
          GrandSDK_Analytics_Analytics__Track_2b38d30(uVar11,0);
          Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar14)
          ;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

