/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendStrikeShowJoined
void Modules_Contexts_Application_Events_Scripts_EventSender__SendStrikeShowJoined (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendStrikeShowJoined
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendStrikeShowJoined
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendStrikeShowJoined_149a6b4
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  long lVar25;
  long lVar26;
  undefined8 uVar27;
  int iStack_74;
  undefined4 uStack_64;
  
  puVar2 = PTR_DAT_0576aae0;
  if ((bRam0000000005c23897 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_05802ff8);
    FUN_012d0dc8(PTR_DAT_0581a738);
    FUN_012d0dc8(PTR_DAT_057a4328);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_0579fa30);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057cad80);
    FUN_012d0dc8(PTR_DAT_057d6f00);
    FUN_012d0dc8(PTR_DAT_05775f28);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    bRam0000000005c23897 = 1;
  }
  lVar25 = **(long **)(*(long *)puVar2 + 0xb8);
  if ((lVar25 != 0) && (lVar25 = *(long *)(lVar25 + 0x18), lVar25 != 0)) {
    lVar25 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar25,*(undefined8 *)PTR_DAT_0581a738);
    puVar1 = PTR_DAT_057c8a60;
    lVar26 = **(long **)(*(long *)puVar2 + 0xb8);
    if ((lVar26 != 0) && (lVar26 = *(long *)(lVar26 + 0x18), lVar26 != 0)) {
      lVar26 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                         (lVar26,*(undefined8 *)PTR_DAT_057a4328);
      lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      if (lVar8 != 0) {
        Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                  (lVar8,*(undefined8 *)PTR_DAT_05775f28,0);
        Modules_Contexts_Application_Events_Scripts_EventSender__AddStrikeShowCommonData_149ab20
                  (lVar8);
        puVar4 = PTR_DAT_05802ff8;
        puVar3 = PTR_DAT_057db748;
        puVar1 = PTR_DAT_057caaf0;
        puVar2 = PTR_DAT_0579fa30;
        if (lVar25 != 0) {
          lVar9 = Modules_Contexts_Home_StrikeShow_Scripts_StrikeShowDataService__GetMyPlayer_2af5554
                            (lVar25,0);
          lVar10 = Modules_Contexts_Home_StrikeShow_Scripts_StrikeShowDataService__GetLeaderboardLeader_2af56cc
                             (lVar25,0);
          lVar11 = Modules_Contexts_Home_StrikeShow_Scripts_StrikeShowDataService__GetLeaderboardPlayers_2af54c8
                             (lVar25,0);
          if (lVar11 == 0) {
            iStack_74 = 0;
          }
          else {
            iStack_74 = *(int *)(lVar11 + 0x18);
          }
          iVar5 = Modules_Contexts_Home_StrikeShow_Scripts_StrikeShowDataService__GetLeaderboardBotCount_2af5848
                            (lVar25,0);
          uVar27 = *(undefined8 *)(lVar8 + 0x18);
          uStack_64 = 0;
          uVar12 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_64);
          uVar12 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                             (uVar27,*(undefined8 *)puVar1,uVar12,*(undefined8 *)puVar4);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_0130472c(*(long *)puVar2);
          }
          uVar12 = System_Convert__ToInt64_2130754(uVar12,0);
          uVar27 = Modules_Contexts_Home_StrikeShow_Scripts_StrikeShowDataService__GetStartTime_2af4480
                             (lVar25,0);
          uVar27 = System_Convert__ToInt64_21309c8(uVar27,0);
          puVar1 = PTR_DAT_057d6f00;
          if (lVar26 != 0) {
            uVar6 = Modules_Contexts_Home_StrikeShow_Scripts_StrikeShowService__GetRemainingSeconds_2af6738
                              (lVar26,0);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_0130472c(*(long *)puVar1);
            }
            uVar13 = System_Math__Max_26cd24c(uVar6,0,0);
            uVar13 = System_Convert__ToInt64_2130964(uVar13,0);
            uVar14 = Modules_Contexts_Home_StrikeShow_Scripts_StrikeShowService__GetReadableEventId_2af82cc
                               (lVar26,0);
            uVar15 = Modules_Contexts_Home_StrikeShow_Scripts_StrikeShowDataService__GetLeaderboardId_2af44c8
                               (lVar25,0);
            uVar7 = Modules_Contexts_Home_StrikeShow_Scripts_StrikeShowDataService__IsStreakEnabled_2af4770
                              (lVar25,0);
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_0130472c(*(long *)puVar2);
            }
            uVar16 = System_Convert__ToInt64_2130964(uVar7 & 1,0);
            uVar7 = Modules_Contexts_Home_StrikeShow_Scripts_StrikeShowDataService__IsLeagueEnabled_2af5374
                              (lVar25,0);
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_0130472c(*(long *)puVar2);
            }
            uVar17 = System_Convert__ToInt64_2130964(uVar7 & 1,0);
            uVar18 = Modules_Contexts_Application_Events_Scripts_EventSender__GetStrikeShowCurrentLeague_149a2a8
                               (lVar25);
            if (lVar9 == 0) {
              uVar6 = Modules_Contexts_Home_StrikeShow_Scripts_StrikeShowDataService__GetScore_2af4728
                                (lVar25,0);
            }
            else {
              uVar6 = *(undefined4 *)(lVar9 + 0x48);
            }
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_0130472c();
            }
            uVar19 = System_Convert__ToInt64_2130964(uVar6,0);
            uVar6 = 0;
            if (lVar9 != 0) {
              uVar6 = *(undefined4 *)(lVar9 + 0x4c);
            }
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_0130472c();
            }
            uVar20 = System_Convert__ToInt64_2130964(uVar6,0);
            uVar21 = Modules_Contexts_Home_StrikeShow_Scripts_StrikeShowService__GetCurrentMultiplier_2af711c
                               (lVar26,0);
            uVar21 = System_Convert__ToInt64_2130964(uVar21,0);
            puVar1 = PTR_DAT_0575f9f0;
            uVar6 = 0;
            if (lVar10 != 0) {
              uVar6 = *(undefined4 *)(lVar10 + 0x48);
            }
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_0130472c();
            }
            uVar22 = System_Convert__ToInt64_2130964(uVar6,0);
            uVar23 = System_Convert__ToInt64_2130964(iVar5,0);
            uVar24 = System_Convert__ToInt64_2130964(iStack_74 - iVar5,0);
            uVar12 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__StrikeShowJoined_2dbf140
                               (uVar12,uVar27,uVar13,uVar14,uVar15,uVar16,uVar17,uVar18,uVar19,
                                uVar20,uVar21,uVar22,uVar23,uVar24,0);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_0130472c(*(long *)puVar1);
            }
            GrandSDK_Analytics_Analytics__Track_2b38d30(uVar12,0);
            Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4
                      (param_1,lVar8);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

