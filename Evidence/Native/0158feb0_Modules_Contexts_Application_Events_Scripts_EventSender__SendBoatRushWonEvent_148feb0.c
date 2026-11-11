/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendBoatRushWonEvent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendBoatRushWonEvent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, System_String_o* leaderboardId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendBoatRushWonEvent
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendBoatRushWonEvent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, System_String_o*
   leaderboardId, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendBoatRushWonEvent_148feb0
               (undefined8 param_1,undefined8 param_2)

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
  int iVar10;
  int iVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  int *piVar20;
  int iStack_78;
  undefined4 uStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c2386f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057c21e0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057e4da8);
    FUN_012d0dc8(PTR_DAT_057e0a30);
    FUN_012d0dc8(PTR_DAT_057e0b60);
    FUN_012d0dc8(PTR_DAT_057fcce8);
    FUN_012d0dc8(PTR_DAT_058066f0);
    FUN_012d0dc8(PTR_DAT_0576ec08);
    FUN_012d0dc8(PTR_DAT_05772cc8);
    FUN_012d0dc8(PTR_DAT_057c7308);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057e66c0);
    bRam0000000005c2386f = 1;
  }
  lVar17 = **(long **)(*(long *)puVar1 + 0xb8);
  if ((lVar17 != 0) && (lVar17 = *(long *)(lVar17 + 0x18), lVar17 != 0)) {
    lVar17 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar17,*(undefined8 *)PTR_DAT_057c21e0);
    lVar18 = **(long **)(*(long *)puVar1 + 0xb8);
    if ((lVar18 != 0) &&
       ((lVar18 = *(long *)(lVar18 + 0x18), lVar18 != 0 &&
        (plVar12 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                     (lVar18,*(undefined8 *)PTR_DAT_057a1e60),
        puVar1 = PTR_DAT_057c8a60, lVar17 != 0)))) {
      iVar6 = Modules_Contexts_Home_BoatRush_Scripts_BoatRushService__GetRemainingSeconds_3fd0bc0
                        (lVar17,0);
      iVar7 = Modules_Contexts_Home_BoatRush_Scripts_BoatRushService__GetScore_3fd0cec(lVar17,0);
      iVar8 = Modules_Contexts_Home_BoatRush_Scripts_BoatRushService__GetCurrentStageIndex_3fceccc
                        (lVar17,0);
      iVar9 = Modules_Contexts_Home_BoatRush_Scripts_BoatRushService__GetTierIndex_3fcfcf4(lVar17,0)
      ;
      uVar13 = Modules_Contexts_Home_BoatRush_Scripts_BoatRushService__GetTournamentId_3fd114c
                         (lVar17,0);
      uVar14 = Modules_Contexts_Home_BoatRush_Scripts_BoatRushService__GetReadableEventId_3fd11bc
                         (lVar17,0);
      iVar10 = Modules_Contexts_Home_BoatRush_Scripts_BoatRushService__GetPlayerRank_3fd06dc
                         (lVar17,0);
      lVar17 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      puVar2 = PTR_DAT_057e4da8;
      puVar4 = PTR_DAT_057db748;
      puVar1 = PTR_DAT_057c7308;
      if (lVar17 != 0) {
        Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                  (lVar17,*(undefined8 *)PTR_DAT_057e0a30,0);
        iStack_64 = iVar6;
        uVar15 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&iStack_64);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar17,*(undefined8 *)puVar2,uVar15,0);
        iStack_68 = iVar7;
        uVar15 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&iStack_68);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar17,*(undefined8 *)puVar1,uVar15,0);
        iStack_6c = iVar8;
        uVar15 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&iStack_6c);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar17,*(undefined8 *)PTR_DAT_0576ec08,uVar15,0);
        iStack_70 = iVar9;
        uVar15 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&iStack_70);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar17,*(undefined8 *)PTR_DAT_058066f0,uVar15,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar17,*(undefined8 *)PTR_DAT_057fcce8,uVar13,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar17,*(undefined8 *)PTR_DAT_057e66c0,uVar14,0);
        puVar5 = PTR_DAT_057e0b60;
        puVar3 = PTR_DAT_057caaf0;
        puVar2 = PTR_DAT_05772cc8;
        puVar1 = PTR_DAT_057636d0;
        if (plVar12 != (long *)0x0) {
          lVar18 = *plVar12;
          uVar19 = (ulong)*(ushort *)(lVar18 + 0x12a);
          if (uVar19 != 0) {
            piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_057636d0) {
                puVar16 = (undefined8 *)(lVar18 + (long)(*piVar20 + 1) * 0x10 + 0x138);
                goto LAB_0159023c;
              }
              uVar19 = uVar19 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar19 != 0);
          }
          puVar16 = (undefined8 *)FUN_0131971c(plVar12,*(long *)PTR_DAT_057636d0,1);
LAB_0159023c:
          uStack_74 = (*(code *)*puVar16)(plVar12,puVar16[1]);
          uVar15 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_74);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar17,*(undefined8 *)puVar3,uVar15,0);
          iStack_78 = iVar10;
          uVar15 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&iStack_78);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar17,*(undefined8 *)puVar5,uVar15,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar17,*(undefined8 *)puVar2,param_2,0);
          lVar18 = *plVar12;
          uVar19 = (ulong)*(ushort *)(lVar18 + 0x12a);
          if (uVar19 != 0) {
            piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *(long *)puVar1) {
                puVar16 = (undefined8 *)(lVar18 + (long)(*piVar20 + 1) * 0x10 + 0x138);
                goto LAB_01590308;
              }
              uVar19 = uVar19 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar19 != 0);
          }
          puVar16 = (undefined8 *)FUN_0131971c(plVar12,*(long *)puVar1,1);
LAB_01590308:
          iVar11 = (*(code *)*puVar16)(plVar12,puVar16[1]);
          uVar13 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__BoatRushRaceWon_2dbde10
                             ((long)iVar6,(long)iVar7,(long)iVar8,(long)iVar9,uVar13,uVar14,
                              (long)iVar11,(long)iVar10,param_2,0);
          if (*(int *)(*(long *)PTR_DAT_0575f9f0 + 0xe0) == 0) {
            thunk_FUN_0130472c(*(long *)PTR_DAT_0575f9f0);
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

