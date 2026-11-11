/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendTowerWinStreakWon
void Modules_Contexts_Application_Events_Scripts_EventSender__SendTowerWinStreakWon (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendTowerWinStreakWon
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendTowerWinStreakWon
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendTowerWinStreakWon_1459b40
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
  long *plVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  int *piVar19;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 uStack_58;
  
  puVar2 = PTR_DAT_0576aae0;
  if ((bRam0000000005c2378d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_0580d478);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057d6138);
    FUN_012d0dc8(PTR_DAT_057d7ca8);
    FUN_012d0dc8(PTR_DAT_057e4da8);
    FUN_012d0dc8(PTR_DAT_05815af0);
    FUN_012d0dc8(PTR_DAT_057fcce8);
    FUN_012d0dc8(PTR_DAT_057a3988);
    FUN_012d0dc8(PTR_DAT_05765f38);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    bRam0000000005c2378d = 1;
  }
  lVar15 = **(long **)(*(long *)puVar2 + 0xb8);
  if ((lVar15 != 0) && (lVar15 = *(long *)(lVar15 + 0x18), lVar15 != 0)) {
    lVar15 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar15,*(undefined8 *)PTR_DAT_0580d478);
    puVar3 = PTR_DAT_057c8a60;
    lVar16 = **(long **)(*(long *)puVar2 + 0xb8);
    if ((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x18), lVar16 != 0)) {
      plVar11 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                  (lVar16,*(undefined8 *)PTR_DAT_057a1e60);
      lVar16 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
      if ((lVar16 != 0) &&
         (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                    (lVar16,*(undefined8 *)PTR_DAT_057d7ca8,0), puVar6 = PTR_DAT_05815af0,
         puVar1 = PTR_DAT_057fcce8, puVar4 = PTR_DAT_057e4da8, puVar5 = PTR_DAT_057db748,
         puVar3 = PTR_DAT_057d6138, puVar2 = PTR_DAT_05765f38, lVar15 != 0)) {
        uStack_58 = Modules_Contexts_Home_TowerWinStreak_Scripts_TowerWinStreakService__GetStartTimeAsUnix_32e405c
                              (lVar15,0);
        uVar12 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_58);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar16,*(undefined8 *)puVar6,uVar12,0);
        uVar12 = Modules_Contexts_Home_TowerWinStreak_Scripts_TowerWinStreakService__GetTournamentId_32e3f5c
                           (lVar15,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar16,*(undefined8 *)puVar1,uVar12,0);
        uStack_64 = Modules_Contexts_Home_TowerWinStreak_Scripts_TowerWinStreakService__GetRemainingSeconds_32e24dc
                              (lVar15,0);
        uVar12 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_64);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar16,*(undefined8 *)puVar4,uVar12,0);
        uStack_68 = Modules_Contexts_Home_TowerWinStreak_Scripts_TowerWinStreakService__GetCurrentWinCount_32e2714
                              (lVar15,0);
        uVar12 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_68);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar16,*(undefined8 *)puVar2,uVar12,0);
        puVar4 = PTR_DAT_057caaf0;
        puVar3 = PTR_DAT_057a3988;
        puVar2 = PTR_DAT_057636d0;
        if (plVar11 != (long *)0x0) {
          lVar17 = *plVar11;
          uVar18 = (ulong)*(ushort *)(lVar17 + 0x12a);
          if (uVar18 != 0) {
            piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_057636d0) {
                puVar13 = (undefined8 *)(lVar17 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                goto LAB_01559e14;
              }
              uVar18 = uVar18 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar18 != 0);
          }
          puVar13 = (undefined8 *)FUN_0131971c(plVar11,*(long *)PTR_DAT_057636d0,1);
LAB_01559e14:
          puVar1 = PTR_DAT_0575f9f0;
          uStack_6c = (*(code *)*puVar13)(plVar11,puVar13[1]);
          uVar12 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_6c);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar16,*(undefined8 *)puVar4,uVar12,0);
          uStack_70 = Modules_Contexts_Home_TowerWinStreak_Scripts_TowerWinStreakService__GetMaxWinCount_32e2ab8
                                (lVar15,0);
          uVar12 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_70);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar16,*(undefined8 *)puVar3,uVar12,0);
          uVar12 = Modules_Contexts_Home_TowerWinStreak_Scripts_TowerWinStreakService__GetStartTimeAsUnix_32e405c
                             (lVar15,0);
          uVar14 = Modules_Contexts_Home_TowerWinStreak_Scripts_TowerWinStreakService__GetTournamentId_32e3f5c
                             (lVar15,0);
          iVar7 = Modules_Contexts_Home_TowerWinStreak_Scripts_TowerWinStreakService__GetRemainingSeconds_32e24dc
                            (lVar15,0);
          iVar8 = Modules_Contexts_Home_TowerWinStreak_Scripts_TowerWinStreakService__GetCurrentWinCount_32e2714
                            (lVar15,0);
          lVar17 = *plVar11;
          uVar18 = (ulong)*(ushort *)(lVar17 + 0x12a);
          if (uVar18 != 0) {
            piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)puVar2) {
                puVar13 = (undefined8 *)(lVar17 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                goto LAB_01559f14;
              }
              uVar18 = uVar18 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar18 != 0);
          }
          puVar13 = (undefined8 *)FUN_0131971c(plVar11,*(long *)puVar2,1);
LAB_01559f14:
          iVar9 = (*(code *)*puVar13)(plVar11,puVar13[1]);
          iVar10 = Modules_Contexts_Home_TowerWinStreak_Scripts_TowerWinStreakService__GetMaxWinCount_32e2ab8
                             (lVar15,0);
          uVar12 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__BroomStreakWon_2daabc0
                             (uVar12,uVar14,(long)iVar7,(long)iVar8,(long)iVar9,(long)iVar10,0);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_0130472c(*(long *)puVar1);
          }
          GrandSDK_Analytics_Analytics__Track_2b38d30(uVar12,0);
          Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar16)
          ;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

