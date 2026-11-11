/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendStrikeShowFinished
void Modules_Contexts_Application_Events_Scripts_EventSender__SendStrikeShowFinished (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendStrikeShowFinished
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendStrikeShowFinished
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendStrikeShowFinished_149ba28
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
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
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  long lVar29;
  long lVar30;
  undefined8 uVar31;
  undefined1 uVar32;
  int iStack_9c;
  ulong auStack_80 [2];
  undefined4 uStack_70;
  uint uStack_64;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c2389a & 1) == 0) {
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
    FUN_012d0dc8(PTR_DAT_05780d88);
    FUN_012d0dc8(PTR_DAT_057ca308);
    FUN_012d0dc8(PTR_DAT_0580f610);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_05797d68);
    bRam0000000005c2389a = 1;
  }
  lVar29 = **(long **)(*(long *)puVar1 + 0xb8);
  if ((lVar29 != 0) && (lVar29 = *(long *)(lVar29 + 0x18), lVar29 != 0)) {
    lVar29 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar29,*(undefined8 *)PTR_DAT_0581a738);
    puVar3 = PTR_DAT_057c8a60;
    lVar30 = **(long **)(*(long *)puVar1 + 0xb8);
    if ((lVar30 != 0) && (lVar30 = *(long *)(lVar30 + 0x18), lVar30 != 0)) {
      lVar30 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                         (lVar30,*(undefined8 *)PTR_DAT_057a4328);
      lVar10 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
      if (lVar10 != 0) {
        Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                  (lVar10,*(undefined8 *)PTR_DAT_05797d68,0);
        Modules_Contexts_Application_Events_Scripts_EventSender__AddStrikeShowCommonData_149ab20
                  (lVar10);
        puVar3 = PTR_DAT_057db748;
        puVar1 = PTR_DAT_057ca308;
        if (lVar29 != 0) {
          lVar11 = Modules_Contexts_Home_StrikeShow_Scripts_StrikeShowDataService__GetLeaderboardLeader_2af56cc
                             (lVar29,0);
          uVar31 = *(undefined8 *)puVar1;
          if (lVar11 == 0) {
            uStack_64 = 0;
          }
          else {
            uStack_64 = (uint)*(byte *)(lVar11 + 0x50);
          }
          uVar12 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_64);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310(lVar10,uVar31,uVar12,0)
          ;
          puVar6 = PTR_DAT_0580f610;
          puVar5 = PTR_DAT_05802ff8;
          puVar4 = PTR_DAT_057caaf0;
          puVar2 = PTR_DAT_0579fa30;
          puVar1 = PTR_DAT_05780d88;
          if (lVar30 != 0) {
            uStack_70 = Modules_Contexts_Home_StrikeShow_Scripts_StrikeShowService__GetMyPromotionState_2af7ad0
                                  (lVar30,0);
            auStack_80[0] = *(ulong *)puVar1;
            auStack_80[1] = 0xffffffffffffffff;
            uVar31 = System_Enum__ToString_23a4eac(auStack_80,0);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar10,*(undefined8 *)puVar6,uVar31,0);
            lVar13 = Modules_Contexts_Home_StrikeShow_Scripts_StrikeShowDataService__GetMyPlayer_2af5554
                               (lVar29,0);
            lVar14 = Modules_Contexts_Home_StrikeShow_Scripts_StrikeShowDataService__GetLeaderboardPlayers_2af54c8
                               (lVar29,0);
            puVar1 = PTR_DAT_057d6f00;
            if (lVar14 == 0) {
              iStack_9c = 0;
            }
            else {
              iStack_9c = *(int *)(lVar14 + 0x18);
            }
            iVar7 = Modules_Contexts_Home_StrikeShow_Scripts_StrikeShowDataService__GetLeaderboardBotCount_2af5848
                              (lVar29,0);
            uVar12 = *(undefined8 *)(lVar10 + 0x18);
            auStack_80[0] = auStack_80[0] & 0xffffffff00000000;
            uVar31 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,auStack_80);
            uVar31 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                               (uVar12,*(undefined8 *)puVar4,uVar31,*(undefined8 *)puVar5);
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_0130472c(*(long *)puVar2);
            }
            uVar31 = System_Convert__ToInt64_2130754(uVar31,0);
            uVar12 = Modules_Contexts_Home_StrikeShow_Scripts_StrikeShowDataService__GetStartTime_2af4480
                               (lVar29,0);
            uVar12 = System_Convert__ToInt64_21309c8(uVar12,0);
            uVar8 = Modules_Contexts_Home_StrikeShow_Scripts_StrikeShowService__GetRemainingSeconds_2af6738
                              (lVar30,0);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_0130472c(*(long *)puVar1);
            }
            uVar15 = System_Math__Max_26cd24c(uVar8,0,0);
            uVar15 = System_Convert__ToInt64_2130964(uVar15,0);
            uVar16 = Modules_Contexts_Home_StrikeShow_Scripts_StrikeShowService__GetReadableEventId_2af82cc
                               (lVar30,0);
            uVar17 = Modules_Contexts_Home_StrikeShow_Scripts_StrikeShowDataService__GetLeaderboardId_2af44c8
                               (lVar29,0);
            uVar9 = Modules_Contexts_Home_StrikeShow_Scripts_StrikeShowDataService__IsStreakEnabled_2af4770
                              (lVar29,0);
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_0130472c(*(long *)puVar2);
            }
            uVar18 = System_Convert__ToInt64_2130964(uVar9 & 1,0);
            uVar9 = Modules_Contexts_Home_StrikeShow_Scripts_StrikeShowDataService__IsLeagueEnabled_2af5374
                              (lVar29,0);
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_0130472c(*(long *)puVar2);
            }
            uVar19 = System_Convert__ToInt64_2130964(uVar9 & 1,0);
            uVar20 = Modules_Contexts_Application_Events_Scripts_EventSender__GetStrikeShowCurrentLeague_149a2a8
                               (lVar29);
            if (lVar13 == 0) {
              uVar8 = Modules_Contexts_Home_StrikeShow_Scripts_StrikeShowDataService__GetScore_2af4728
                                (lVar29,0);
            }
            else {
              uVar8 = *(undefined4 *)(lVar13 + 0x48);
            }
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_0130472c();
            }
            uVar21 = System_Convert__ToInt64_2130964(uVar8,0);
            if (lVar13 == 0) {
              uVar8 = 0;
            }
            else {
              uVar8 = *(undefined4 *)(lVar13 + 0x4c);
            }
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_0130472c();
            }
            uVar22 = System_Convert__ToInt64_2130964(uVar8,0);
            uVar23 = Modules_Contexts_Home_StrikeShow_Scripts_StrikeShowService__GetCurrentMultiplier_2af711c
                               (lVar30,0);
            uVar23 = System_Convert__ToInt64_2130964(uVar23,0);
            if (lVar11 == 0) {
              uVar8 = 0;
            }
            else {
              uVar8 = *(undefined4 *)(lVar11 + 0x48);
            }
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_0130472c();
            }
            uVar24 = System_Convert__ToInt64_2130964(uVar8,0);
            uVar25 = System_Convert__ToInt64_2130964(iVar7,0);
            uVar26 = System_Convert__ToInt64_2130964(iStack_9c - iVar7,0);
            puVar1 = PTR_DAT_0575f9f0;
            uVar32 = 0;
            if (lVar11 != 0) {
              uVar32 = *(undefined1 *)(lVar11 + 0x50);
            }
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_0130472c();
            }
            uVar27 = System_Convert__ToInt64_2130964(uVar32,0);
            uStack_70 = Modules_Contexts_Home_StrikeShow_Scripts_StrikeShowService__GetMyPromotionState_2af7ad0
                                  (lVar30,0);
            auStack_80[0] = *(ulong *)PTR_DAT_05780d88;
            auStack_80[1] = 0xffffffffffffffff;
            uVar28 = System_Enum__ToString_23a4eac(auStack_80,0);
            uVar31 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__StrikeShowFinished_2dbf6b0
                               (uVar31,uVar12,uVar15,uVar16,uVar17,uVar18,uVar19,uVar20,uVar21,
                                uVar22,uVar23,uVar24,uVar25,uVar26,uVar27,uVar28,0);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_0130472c(*(long *)puVar1);
            }
            GrandSDK_Analytics_Analytics__Track_2b38d30(uVar31,0);
            Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4
                      (param_1,lVar10);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

