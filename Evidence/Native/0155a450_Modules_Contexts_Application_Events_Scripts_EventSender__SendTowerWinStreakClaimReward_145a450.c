/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendTowerWinStreakClaimReward
void Modules_Contexts_Application_Events_Scripts_EventSender__SendTowerWinStreakClaimReward (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, System_String_o* rewardsAsString, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendTowerWinStreakClaimReward
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendTowerWinStreakClaimReward
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, System_String_o*
   rewardsAsString, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendTowerWinStreakClaimReward_145a450
               (undefined8 param_1,undefined8 param_2)

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
  long *plVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  
  puVar2 = PTR_DAT_0576aae0;
  if ((bRam0000000005c2378f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_0580d478);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057d6138);
    FUN_012d0dc8(PTR_DAT_05772560);
    FUN_012d0dc8(PTR_DAT_057e4da8);
    FUN_012d0dc8(PTR_DAT_05796040);
    FUN_012d0dc8(PTR_DAT_05815af0);
    FUN_012d0dc8(PTR_DAT_057fcce8);
    FUN_012d0dc8(PTR_DAT_05765f38);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    bRam0000000005c2378f = 1;
  }
  lVar14 = **(long **)(*(long *)puVar2 + 0xb8);
  if ((lVar14 != 0) && (lVar14 = *(long *)(lVar14 + 0x18), lVar14 != 0)) {
    lVar14 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar14,*(undefined8 *)PTR_DAT_0580d478);
    puVar3 = PTR_DAT_057c8a60;
    lVar15 = **(long **)(*(long *)puVar2 + 0xb8);
    if ((lVar15 != 0) && (lVar15 = *(long *)(lVar15 + 0x18), lVar15 != 0)) {
      plVar10 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                  (lVar15,*(undefined8 *)PTR_DAT_057a1e60);
      lVar15 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
      if ((lVar15 != 0) &&
         (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                    (lVar15,*(undefined8 *)PTR_DAT_05796040,0), puVar6 = PTR_DAT_05815af0,
         puVar1 = PTR_DAT_057fcce8, puVar4 = PTR_DAT_057e4da8, puVar5 = PTR_DAT_057db748,
         puVar3 = PTR_DAT_057d6138, puVar2 = PTR_DAT_05765f38, lVar14 != 0)) {
        uStack_68 = Modules_Contexts_Home_TowerWinStreak_Scripts_TowerWinStreakService__GetStartTimeAsUnix_32e405c
                              (lVar14,0);
        uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_68);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar15,*(undefined8 *)puVar6,uVar11,0);
        uVar11 = Modules_Contexts_Home_TowerWinStreak_Scripts_TowerWinStreakService__GetTournamentId_32e3f5c
                           (lVar14,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar15,*(undefined8 *)puVar1,uVar11,0);
        uStack_6c = Modules_Contexts_Home_TowerWinStreak_Scripts_TowerWinStreakService__GetRemainingSeconds_32e24dc
                              (lVar14,0);
        uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_6c);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar15,*(undefined8 *)puVar4,uVar11,0);
        uStack_70 = Modules_Contexts_Home_TowerWinStreak_Scripts_TowerWinStreakService__GetCurrentWinCount_32e2714
                              (lVar14,0);
        uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_70);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar15,*(undefined8 *)puVar2,uVar11,0);
        puVar4 = PTR_DAT_057caaf0;
        puVar3 = PTR_DAT_05772560;
        puVar2 = PTR_DAT_057636d0;
        if (plVar10 != (long *)0x0) {
          lVar16 = *plVar10;
          uVar17 = (ulong)*(ushort *)(lVar16 + 0x12a);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_057636d0) {
                puVar12 = (undefined8 *)(lVar16 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                goto LAB_0155a728;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar12 = (undefined8 *)FUN_0131971c(plVar10,*(long *)PTR_DAT_057636d0,1);
LAB_0155a728:
          puVar1 = PTR_DAT_0575f9f0;
          uStack_74 = (*(code *)*puVar12)(plVar10,puVar12[1]);
          uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_74);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar15,*(undefined8 *)puVar4,uVar11,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar15,*(undefined8 *)puVar3,param_2,0);
          uVar11 = Modules_Contexts_Home_TowerWinStreak_Scripts_TowerWinStreakService__GetStartTimeAsUnix_32e405c
                             (lVar14,0);
          uVar13 = Modules_Contexts_Home_TowerWinStreak_Scripts_TowerWinStreakService__GetTournamentId_32e3f5c
                             (lVar14,0);
          iVar7 = Modules_Contexts_Home_TowerWinStreak_Scripts_TowerWinStreakService__GetRemainingSeconds_32e24dc
                            (lVar14,0);
          iVar8 = Modules_Contexts_Home_TowerWinStreak_Scripts_TowerWinStreakService__GetCurrentWinCount_32e2714
                            (lVar14,0);
          lVar14 = *plVar10;
          uVar17 = (ulong)*(ushort *)(lVar14 + 0x12a);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)puVar2) {
                puVar12 = (undefined8 *)(lVar14 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                goto LAB_0155a808;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar12 = (undefined8 *)FUN_0131971c(plVar10,*(long *)puVar2,1);
LAB_0155a808:
          iVar9 = (*(code *)*puVar12)(plVar10,puVar12[1]);
          uVar11 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__BroomStreakRewardClaim_2daacb8
                             (uVar11,uVar13,(long)iVar7,(long)iVar8,(long)iVar9,param_2,0);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_0130472c(*(long *)puVar1);
          }
          GrandSDK_Analytics_Analytics__Track_2b38d30(uVar11,0);
          Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar15)
          ;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

