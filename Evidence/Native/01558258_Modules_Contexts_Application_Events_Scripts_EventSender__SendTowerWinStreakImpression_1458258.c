/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendTowerWinStreakImpression
void Modules_Contexts_Application_Events_Scripts_EventSender__SendTowerWinStreakImpression (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t towerWinStreakSource, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendTowerWinStreakImpression
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendTowerWinStreakImpression
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t towerWinStreakSource,
   const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendTowerWinStreakImpression_1458258
               (undefined8 param_1,undefined4 param_2)

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
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  puVar2 = PTR_DAT_0576aae0;
  if ((bRam0000000005c23787 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_0580d478);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057df540);
    FUN_012d0dc8(PTR_DAT_057dbe68);
    FUN_012d0dc8(PTR_DAT_057e4da8);
    FUN_012d0dc8(PTR_DAT_05774ec8);
    FUN_012d0dc8(PTR_DAT_057fcce8);
    FUN_012d0dc8(PTR_DAT_057a3988);
    FUN_012d0dc8(PTR_DAT_05765f38);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    bRam0000000005c23787 = 1;
  }
  lVar15 = **(long **)(*(long *)puVar2 + 0xb8);
  if ((lVar15 != 0) && (lVar15 = *(long *)(lVar15 + 0x18), lVar15 != 0)) {
    lVar15 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar15,*(undefined8 *)PTR_DAT_0580d478);
    puVar4 = PTR_DAT_057c8a60;
    lVar16 = **(long **)(*(long *)puVar2 + 0xb8);
    if ((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x18), lVar16 != 0)) {
      plVar11 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                  (lVar16,*(undefined8 *)PTR_DAT_057a1e60);
      lVar16 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
      puVar4 = PTR_DAT_057df540;
      puVar2 = PTR_DAT_057dbe68;
      if (lVar16 != 0) {
        Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                  (lVar16,*(undefined8 *)PTR_DAT_05774ec8,0);
        uStack_78 = *(undefined8 *)puVar4;
        uStack_70 = 0xffffffffffffffff;
        uStack_68 = param_2;
        uVar12 = System_Enum__ToString_23a4eac(&uStack_78,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar16,*(undefined8 *)puVar2,uVar12,0);
        puVar5 = PTR_DAT_057fcce8;
        puVar3 = PTR_DAT_057e4da8;
        puVar6 = PTR_DAT_057db748;
        puVar2 = PTR_DAT_05765f38;
        if (lVar15 != 0) {
          uVar12 = Modules_Contexts_Home_TowerWinStreak_Scripts_TowerWinStreakService__GetTournamentId_32e3f5c
                             (lVar15,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar16,*(undefined8 *)puVar5,uVar12,0);
          uStack_7c = Modules_Contexts_Home_TowerWinStreak_Scripts_TowerWinStreakService__GetRemainingSeconds_32e24dc
                                (lVar15,0);
          uVar12 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_7c);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar16,*(undefined8 *)puVar3,uVar12,0);
          uStack_80 = Modules_Contexts_Home_TowerWinStreak_Scripts_TowerWinStreakService__GetCurrentWinCount_32e2714
                                (lVar15,0);
          uVar12 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_80);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar16,*(undefined8 *)puVar2,uVar12,0);
          puVar5 = PTR_DAT_057caaf0;
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
                  goto LAB_0155852c;
                }
                uVar18 = uVar18 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar18 != 0);
            }
            puVar13 = (undefined8 *)FUN_0131971c(plVar11,*(long *)PTR_DAT_057636d0,1);
LAB_0155852c:
            puVar1 = PTR_DAT_0575f9f0;
            uStack_84 = (*(code *)*puVar13)(plVar11,puVar13[1]);
            uVar12 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_84);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar16,*(undefined8 *)puVar5,uVar12,0);
            uStack_88 = Modules_Contexts_Home_TowerWinStreak_Scripts_TowerWinStreakService__GetMaxWinCount_32e2ab8
                                  (lVar15,0);
            uVar12 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_88);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar16,*(undefined8 *)puVar3,uVar12,0);
            uStack_a0 = *(undefined8 *)puVar4;
            uStack_98 = 0xffffffffffffffff;
            uStack_90 = param_2;
            uVar12 = System_Enum__ToString_23a4eac(&uStack_a0,0);
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
                  goto LAB_0155863c;
                }
                uVar18 = uVar18 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar18 != 0);
            }
            puVar13 = (undefined8 *)FUN_0131971c(plVar11,*(long *)puVar2,1);
LAB_0155863c:
            iVar9 = (*(code *)*puVar13)(plVar11,puVar13[1]);
            iVar10 = Modules_Contexts_Home_TowerWinStreak_Scripts_TowerWinStreakService__GetMaxWinCount_32e2ab8
                               (lVar15,0);
            uVar12 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__BroomStreakImpression_2daa918
                               (uVar12,uVar14,(long)iVar7,(long)iVar8,(long)iVar9,(long)iVar10,0);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_0130472c(*(long *)puVar1);
            }
            GrandSDK_Analytics_Analytics__Track_2b38d30(uVar12,0);
            Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4
                      (param_1,lVar16);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

