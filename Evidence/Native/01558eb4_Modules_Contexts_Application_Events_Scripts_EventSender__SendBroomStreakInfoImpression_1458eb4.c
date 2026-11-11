/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendBroomStreakInfoImpression
void Modules_Contexts_Application_Events_Scripts_EventSender__SendBroomStreakInfoImpression (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendBroomStreakInfoImpression
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendBroomStreakInfoImpression
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendBroomStreakInfoImpression_1458eb4
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
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  puVar2 = PTR_DAT_0576aae0;
  if ((bRam0000000005c2378a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057f6990);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_0579c768);
    FUN_012d0dc8(PTR_DAT_057fcce8);
    FUN_012d0dc8(PTR_DAT_05765f38);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057e66c0);
    bRam0000000005c2378a = 1;
  }
  lVar12 = **(long **)(*(long *)puVar2 + 0xb8);
  if ((lVar12 != 0) && (lVar12 = *(long *)(lVar12 + 0x18), lVar12 != 0)) {
    lVar12 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar12,*(undefined8 *)PTR_DAT_057f6990);
    puVar3 = PTR_DAT_057c8a60;
    lVar13 = **(long **)(*(long *)puVar2 + 0xb8);
    if ((lVar13 != 0) && (lVar13 = *(long *)(lVar13 + 0x18), lVar13 != 0)) {
      plVar8 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                 (lVar13,*(undefined8 *)PTR_DAT_057a1e60);
      lVar13 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
      if ((lVar13 != 0) &&
         (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                    (lVar13,*(undefined8 *)PTR_DAT_0579c768,0), puVar4 = PTR_DAT_057fcce8,
         puVar3 = PTR_DAT_057db748, puVar2 = PTR_DAT_05765f38, lVar12 != 0)) {
        uVar9 = Modules_Contexts_Home_BroomStreak_Scripts_BroomStreakService__GetTournamentId_3fbf174
                          (lVar12,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar13,*(undefined8 *)puVar4,uVar9,0);
        uStack_54 = Modules_Contexts_Home_BroomStreak_Scripts_BroomStreakService__GetCurrentWinCount_3fbd28c
                              (lVar12,0);
        uVar9 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_54);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar13,*(undefined8 *)puVar2,uVar9,0);
        puVar5 = PTR_DAT_057e66c0;
        puVar4 = PTR_DAT_057caaf0;
        puVar2 = PTR_DAT_057636d0;
        if (plVar8 != (long *)0x0) {
          lVar14 = *plVar8;
          uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_057636d0) {
                puVar10 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                goto LAB_015590e0;
              }
              uVar15 = uVar15 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar15 != 0);
          }
          puVar10 = (undefined8 *)FUN_0131971c(plVar8,*(long *)PTR_DAT_057636d0,1);
LAB_015590e0:
          puVar1 = PTR_DAT_0575f9f0;
          uStack_58 = (*(code *)*puVar10)(plVar8,puVar10[1]);
          uVar9 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_58);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar13,*(undefined8 *)puVar4,uVar9,0);
          uVar9 = Modules_Contexts_Home_BroomStreak_Scripts_BroomStreakService__GetReadableEventId_3fbf464
                            (lVar12,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar13,*(undefined8 *)puVar5,uVar9,0);
          uVar9 = Modules_Contexts_Home_BroomStreak_Scripts_BroomStreakService__GetTournamentId_3fbf174
                            (lVar12,0);
          iVar6 = Modules_Contexts_Home_BroomStreak_Scripts_BroomStreakService__GetCurrentWinCount_3fbd28c
                            (lVar12,0);
          lVar14 = *plVar8;
          uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
                puVar10 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                goto LAB_015591ac;
              }
              uVar15 = uVar15 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar15 != 0);
          }
          puVar10 = (undefined8 *)FUN_0131971c(plVar8,*(long *)puVar2,1);
LAB_015591ac:
          iVar7 = (*(code *)*puVar10)(plVar8,puVar10[1]);
          uVar11 = Modules_Contexts_Home_BroomStreak_Scripts_BroomStreakService__GetReadableEventId_3fbf464
                             (lVar12,0);
          uVar9 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__BroomStreakV2InfoImpression_2daaee0
                            (uVar9,(long)iVar6,(long)iVar7,uVar11,0);
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

