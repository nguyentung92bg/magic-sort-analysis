/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendBroomStreakClaimReward
void Modules_Contexts_Application_Events_Scripts_EventSender__SendBroomStreakClaimReward (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, System_String_o* rewardsAsString, int32_t rewardIndex, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendBroomStreakClaimReward
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendBroomStreakClaimReward
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, System_String_o*
   rewardsAsString, int32_t rewardIndex, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendBroomStreakClaimReward_145a888
               (undefined8 param_1,undefined8 param_2,int param_3)

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
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  int *piVar19;
  int iStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c23790 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057f6990);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057d6138);
    FUN_012d0dc8(PTR_DAT_05772560);
    FUN_012d0dc8(PTR_DAT_057e4da8);
    FUN_012d0dc8(PTR_DAT_05812638);
    FUN_012d0dc8(PTR_DAT_05815af0);
    FUN_012d0dc8(PTR_DAT_057fcce8);
    FUN_012d0dc8(PTR_DAT_057ce6d0);
    FUN_012d0dc8(PTR_DAT_05765f38);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057e66c0);
    bRam0000000005c23790 = 1;
  }
  lVar15 = **(long **)(*(long *)puVar1 + 0xb8);
  if ((lVar15 != 0) && (lVar15 = *(long *)(lVar15 + 0x18), lVar15 != 0)) {
    lVar15 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar15,*(undefined8 *)PTR_DAT_057f6990);
    puVar2 = PTR_DAT_057c8a60;
    lVar16 = **(long **)(*(long *)puVar1 + 0xb8);
    if ((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x18), lVar16 != 0)) {
      plVar10 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                  (lVar16,*(undefined8 *)PTR_DAT_057a1e60);
      lVar16 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
      if (lVar16 != 0) {
        Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                  (lVar16,*(undefined8 *)PTR_DAT_05812638,0);
        puVar6 = PTR_DAT_05815af0;
        puVar4 = PTR_DAT_057fcce8;
        puVar3 = PTR_DAT_057e4da8;
        puVar5 = PTR_DAT_057db748;
        puVar2 = PTR_DAT_057d6138;
        puVar1 = PTR_DAT_05765f38;
        if (lVar15 != 0) {
          uStack_68 = Modules_Contexts_Home_BroomStreak_Scripts_BroomStreakService__GetStartTimeAsUnix_3fbf28c
                                (lVar15,0);
          uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&uStack_68);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar16,*(undefined8 *)puVar6,uVar11,0);
          uVar11 = Modules_Contexts_Home_BroomStreak_Scripts_BroomStreakService__GetTournamentId_3fbf174
                             (lVar15,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar16,*(undefined8 *)puVar4,uVar11,0);
          uStack_6c = Modules_Contexts_Home_BroomStreak_Scripts_BroomStreakService__GetRemainingSeconds_3fbd04c
                                (lVar15,0);
          uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_6c);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar16,*(undefined8 *)puVar3,uVar11,0);
          uStack_70 = Modules_Contexts_Home_BroomStreak_Scripts_BroomStreakService__GetCurrentWinCount_3fbd28c
                                (lVar15,0);
          uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_70);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar16,*(undefined8 *)puVar1,uVar11,0);
          puVar6 = PTR_DAT_057e66c0;
          puVar4 = PTR_DAT_057ce6d0;
          puVar3 = PTR_DAT_057caaf0;
          puVar2 = PTR_DAT_05772560;
          puVar1 = PTR_DAT_057636d0;
          if (plVar10 != (long *)0x0) {
            lVar17 = *plVar10;
            uVar18 = (ulong)*(ushort *)(lVar17 + 0x12a);
            if (uVar18 != 0) {
              piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_057636d0) {
                  puVar12 = (undefined8 *)(lVar17 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                  goto LAB_0155ab90;
                }
                uVar18 = uVar18 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar18 != 0);
            }
            puVar12 = (undefined8 *)FUN_0131971c(plVar10,*(long *)PTR_DAT_057636d0,1);
LAB_0155ab90:
            uStack_74 = (*(code *)*puVar12)(plVar10,puVar12[1]);
            uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_74);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar16,*(undefined8 *)puVar3,uVar11,0);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar16,*(undefined8 *)puVar2,param_2,0);
            uVar11 = Modules_Contexts_Home_BroomStreak_Scripts_BroomStreakService__GetReadableEventId_3fbf464
                               (lVar15,0);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar16,*(undefined8 *)puVar6,uVar11,0);
            iStack_78 = param_3 + 1;
            uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&iStack_78);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar16,*(undefined8 *)puVar4,uVar11,0);
            uVar11 = Modules_Contexts_Home_BroomStreak_Scripts_BroomStreakService__GetStartTimeAsUnix_3fbf28c
                               (lVar15,0);
            uVar13 = Modules_Contexts_Home_BroomStreak_Scripts_BroomStreakService__GetTournamentId_3fbf174
                               (lVar15,0);
            iVar7 = Modules_Contexts_Home_BroomStreak_Scripts_BroomStreakService__GetRemainingSeconds_3fbd04c
                              (lVar15,0);
            iVar8 = Modules_Contexts_Home_BroomStreak_Scripts_BroomStreakService__GetCurrentWinCount_3fbd28c
                              (lVar15,0);
            lVar17 = *plVar10;
            uVar18 = (ulong)*(ushort *)(lVar17 + 0x12a);
            if (uVar18 != 0) {
              piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == *(long *)puVar1) {
                  puVar12 = (undefined8 *)(lVar17 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                  goto LAB_0155acb0;
                }
                uVar18 = uVar18 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar18 != 0);
            }
            puVar12 = (undefined8 *)FUN_0131971c(plVar10,*(long *)puVar1,1);
LAB_0155acb0:
            iVar9 = (*(code *)*puVar12)(plVar10,puVar12[1]);
            uVar14 = Modules_Contexts_Home_BroomStreak_Scripts_BroomStreakService__GetReadableEventId_3fbf464
                               (lVar15,0);
            uVar11 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__BroomStreakV2RewardClaim_2dab1e4
                               (uVar11,uVar13,(long)iVar7,(long)iVar8,(long)iVar9,param_2,uVar14,
                                (long)(param_3 + 1),0);
            if (*(int *)(*(long *)PTR_DAT_0575f9f0 + 0xe0) == 0) {
              thunk_FUN_0130472c(*(long *)PTR_DAT_0575f9f0);
            }
            GrandSDK_Analytics_Analytics__Track_2b38d30(uVar11,0);
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

