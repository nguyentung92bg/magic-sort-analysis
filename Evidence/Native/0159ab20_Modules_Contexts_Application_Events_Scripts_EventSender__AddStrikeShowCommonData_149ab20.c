/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$AddStrikeShowCommonData
void Modules_Contexts_Application_Events_Scripts_EventSender__AddStrikeShowCommonData (Modules_Contexts_Application_Events_Scripts_Event_o* eventToSend, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$AddStrikeShowCommonData
   void Modules_Contexts_Application_Events_Scripts_EventSender__AddStrikeShowCommonData
   (Modules_Contexts_Application_Events_Scripts_Event_o* eventToSend, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__AddStrikeShowCommonData_149ab20
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  ulong uVar17;
  int *piVar18;
  int iVar19;
  undefined8 uVar20;
  undefined4 uStack_74;
  undefined8 uStack_70;
  int iStack_64;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c2389d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_0581a738);
    FUN_012d0dc8(PTR_DAT_057a4328);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057d6138);
    FUN_012d0dc8(PTR_DAT_057cad80);
    FUN_012d0dc8(PTR_DAT_057d6f00);
    FUN_012d0dc8(PTR_DAT_057be6f0);
    FUN_012d0dc8(PTR_DAT_057f57a0);
    FUN_012d0dc8(PTR_DAT_057f17c8);
    FUN_012d0dc8(PTR_DAT_057e4da8);
    FUN_012d0dc8(PTR_DAT_05815af0);
    FUN_012d0dc8(PTR_DAT_05795788);
    FUN_012d0dc8(PTR_DAT_05771950);
    FUN_012d0dc8(PTR_DAT_057815e8);
    FUN_012d0dc8(PTR_DAT_05803ca0);
    FUN_012d0dc8(PTR_DAT_057b9a08);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057f52e0);
    FUN_012d0dc8(PTR_DAT_05806668);
    FUN_012d0dc8(PTR_DAT_057e66c0);
    bRam0000000005c2389d = 1;
  }
  if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
     (lVar11 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar11 != 0)) {
    lVar11 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar11,*(undefined8 *)PTR_DAT_057a4328);
    if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
       (lVar12 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar12 != 0)) {
      lVar12 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                         (lVar12,*(undefined8 *)PTR_DAT_0581a738);
      if (((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
          (lVar13 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar13 != 0)) &&
         (plVar14 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                      (lVar13,*(undefined8 *)PTR_DAT_057a1e60),
         puVar1 = PTR_DAT_057db748, plVar14 != (long *)0x0)) {
        lVar13 = *plVar14;
        uVar17 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_057636d0) {
              puVar15 = (undefined8 *)(lVar13 + (long)(*piVar18 + 1) * 0x10 + 0x138);
              goto LAB_0159ad58;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar15 = (undefined8 *)FUN_0131971c(plVar14,*(long *)PTR_DAT_057636d0,1);
LAB_0159ad58:
        iStack_64 = (*(code *)*puVar15)(plVar14,puVar15[1]);
        uVar16 = thunk_FUN_01320a8c(*(undefined8 *)puVar1,&iStack_64);
        if ((param_1 != 0) &&
           (Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (param_1,*(undefined8 *)PTR_DAT_057caaf0,uVar16,0), puVar2 = PTR_DAT_05815af0,
           puVar4 = PTR_DAT_057d6138, lVar12 != 0)) {
          uStack_70 = Modules_Contexts_Home_StrikeShow_Scripts_StrikeShowDataService__GetStartTime_2af4480
                                (lVar12,0);
          uVar16 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_70);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (param_1,*(undefined8 *)puVar2,uVar16,0);
          puVar8 = PTR_DAT_05806668;
          puVar7 = PTR_DAT_05803ca0;
          puVar6 = PTR_DAT_057f57a0;
          puVar5 = PTR_DAT_057f52e0;
          puVar3 = PTR_DAT_057e66c0;
          puVar2 = PTR_DAT_057e4da8;
          puVar4 = PTR_DAT_057d6f00;
          if (lVar11 != 0) {
            uVar9 = Modules_Contexts_Home_StrikeShow_Scripts_StrikeShowService__GetRemainingSeconds_2af6738
                              (lVar11,0);
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_0130472c(*(long *)puVar4);
            }
            uStack_74 = System_Math__Max_26cd24c(uVar9,0,0);
            uVar16 = thunk_FUN_01320a8c(*(undefined8 *)puVar1,&uStack_74);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (param_1,*(undefined8 *)puVar2,uVar16,0);
            uVar16 = Modules_Contexts_Home_StrikeShow_Scripts_StrikeShowService__GetReadableEventId_2af82cc
                               (lVar11,0);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (param_1,*(undefined8 *)puVar3,uVar16,0);
            uVar16 = Modules_Contexts_Home_StrikeShow_Scripts_StrikeShowDataService__GetLeaderboardId_2af44c8
                               (lVar12,0);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (param_1,*(undefined8 *)puVar7,uVar16,0);
            uVar9 = Modules_Contexts_Home_StrikeShow_Scripts_StrikeShowDataService__IsStreakEnabled_2af4770
                              (lVar12,0);
            uVar20 = *(undefined8 *)puVar6;
            uStack_70 = CONCAT44(uStack_70._4_4_,uVar9) & 0xffffffff00000001;
            uVar16 = thunk_FUN_01320a8c(*(undefined8 *)puVar1,&uStack_70);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (param_1,uVar20,uVar16,0);
            uVar9 = Modules_Contexts_Home_StrikeShow_Scripts_StrikeShowDataService__IsLeagueEnabled_2af5374
                              (lVar12,0);
            uVar20 = *(undefined8 *)puVar5;
            uStack_70 = CONCAT44(uStack_70._4_4_,uVar9) & 0xffffffff00000001;
            uVar16 = thunk_FUN_01320a8c(*(undefined8 *)puVar1,&uStack_70);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (param_1,uVar20,uVar16,0);
            uVar16 = Modules_Contexts_Application_Events_Scripts_EventSender__GetStrikeShowCurrentLeague_149a2a8
                               (lVar12);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (param_1,*(undefined8 *)puVar8,uVar16,0);
            lVar13 = Modules_Contexts_Home_StrikeShow_Scripts_StrikeShowDataService__GetMyPlayer_2af5554
                               (lVar12,0);
            uVar16 = *(undefined8 *)PTR_DAT_057be6f0;
            if (lVar13 == 0) {
              uVar9 = Modules_Contexts_Home_StrikeShow_Scripts_StrikeShowDataService__GetScore_2af4728
                                (lVar12,0);
            }
            else {
              uVar9 = *(undefined4 *)(lVar13 + 0x48);
            }
            puVar2 = PTR_DAT_057f17c8;
            puVar4 = PTR_DAT_057b9a08;
            uStack_70._0_4_ = uVar9;
            uVar20 = thunk_FUN_01320a8c(*(undefined8 *)puVar1,&uStack_70);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (param_1,uVar16,uVar20,0);
            uVar16 = *(undefined8 *)PTR_DAT_05771950;
            if (lVar13 == 0) {
              uStack_70._0_4_ = 0;
            }
            else {
              uStack_70._0_4_ = *(undefined4 *)(lVar13 + 0x4c);
            }
            uVar20 = thunk_FUN_01320a8c(*(undefined8 *)puVar1,&uStack_70);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (param_1,uVar16,uVar20,0);
            iStack_64 = Modules_Contexts_Home_StrikeShow_Scripts_StrikeShowService__GetCurrentMultiplier_2af711c
                                  (lVar11,0);
            uVar16 = thunk_FUN_01320a8c(*(undefined8 *)puVar1,&iStack_64);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (param_1,*(undefined8 *)puVar2,uVar16,0);
            lVar11 = Modules_Contexts_Home_StrikeShow_Scripts_StrikeShowDataService__GetLeaderboardLeader_2af56cc
                               (lVar12,0);
            puVar3 = PTR_DAT_05795788;
            puVar2 = PTR_DAT_057815e8;
            uVar16 = *(undefined8 *)puVar4;
            if (lVar11 == 0) {
              uStack_70._0_4_ = 0;
            }
            else {
              uStack_70._0_4_ = *(undefined4 *)(lVar11 + 0x48);
            }
            uVar20 = thunk_FUN_01320a8c(*(undefined8 *)puVar1,&uStack_70);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (param_1,uVar16,uVar20,0);
            lVar11 = Modules_Contexts_Home_StrikeShow_Scripts_StrikeShowDataService__GetLeaderboardPlayers_2af54c8
                               (lVar12,0);
            if (lVar11 == 0) {
              iVar19 = 0;
            }
            else {
              iVar19 = *(int *)(lVar11 + 0x18);
            }
            iVar10 = Modules_Contexts_Home_StrikeShow_Scripts_StrikeShowDataService__GetLeaderboardBotCount_2af5848
                               (lVar12,0);
            uStack_70 = CONCAT44(uStack_70._4_4_,iVar10);
            uVar16 = thunk_FUN_01320a8c(*(undefined8 *)puVar1,&uStack_70);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (param_1,*(undefined8 *)puVar3,uVar16,0);
            iStack_64 = iVar19 - iVar10;
            uVar16 = thunk_FUN_01320a8c(*(undefined8 *)puVar1,&iStack_64);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (param_1,*(undefined8 *)puVar2,uVar16,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

