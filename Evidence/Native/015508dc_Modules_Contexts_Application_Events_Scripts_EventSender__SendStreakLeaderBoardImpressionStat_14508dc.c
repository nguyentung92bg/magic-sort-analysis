/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendStreakLeaderBoardImpressionStat
void Modules_Contexts_Application_Events_Scripts_EventSender__SendStreakLeaderBoardImpressionStat (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t impressionSource, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.Events.Scripts.EventSender$$SendStreakLeaderBoardImpressionStat
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendStreakLeaderBoardImpressionStat
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t impressionSource,
   const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendStreakLeaderBoardImpressionStat_14508dc
               (undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long *plVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  ulong uVar22;
  int *piVar23;
  long lVar24;
  undefined8 uVar25;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_9c;
  int iStack_98;
  uint uStack_94;
  int iStack_90;
  int iStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  int iStack_64;
  
  puVar2 = PTR_DAT_0576aae0;
  if ((bRam0000000005c23772 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_058030e0);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_0579fa30);
    FUN_012d0dc8(PTR_DAT_057592d0);
    FUN_012d0dc8(PTR_DAT_0578feb0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057e9860);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057d6138);
    FUN_012d0dc8(PTR_DAT_057f0490);
    FUN_012d0dc8(PTR_DAT_057651b8);
    FUN_012d0dc8(PTR_DAT_057c9b68);
    FUN_012d0dc8(PTR_DAT_057a93a8);
    FUN_012d0dc8(PTR_DAT_057641e8);
    FUN_012d0dc8(PTR_DAT_057aea40);
    FUN_012d0dc8(PTR_DAT_057dbe68);
    FUN_012d0dc8(PTR_DAT_057e4da8);
    FUN_012d0dc8(PTR_DAT_0578ee60);
    FUN_012d0dc8(PTR_DAT_0575e540);
    FUN_012d0dc8(PTR_DAT_05798378);
    FUN_012d0dc8(PTR_DAT_057eaf90);
    FUN_012d0dc8(PTR_DAT_05815af0);
    FUN_012d0dc8(PTR_DAT_05795788);
    FUN_012d0dc8(PTR_DAT_0579cca8);
    FUN_012d0dc8(PTR_DAT_0579c3a0);
    FUN_012d0dc8(PTR_DAT_05765f38);
    bRam0000000005c23772 = 1;
  }
  if ((((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
       (lVar13 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar13 != 0)) &&
      (lVar13 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                          (lVar13,*(undefined8 *)PTR_DAT_058030e0), lVar13 != 0)) &&
     (lVar14 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetLeaderboard_411ed90
                         (lVar13,0), puVar2 = PTR_DAT_057a93a8, lVar14 != 0)) {
    iVar1 = *(int *)(lVar14 + 0x18);
    uVar15 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetStartTimeAsUnix_4120248
                       (lVar13,0);
    iVar9 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetRemainingSeconds_411ec80
                      (lVar13,0);
    lVar21 = *(long *)puVar2;
    if (*(int *)(lVar21 + 0xe0) == 0) {
      thunk_FUN_0130472c(lVar21);
      lVar21 = *(long *)puVar2;
    }
    puVar4 = PTR_DAT_057e9860;
    lVar24 = *(long *)(*(long *)(lVar21 + 0xb8) + 0x10);
    if (lVar24 == 0) {
      if (*(int *)(lVar21 + 0xe0) == 0) {
        thunk_FUN_0130472c(lVar21);
        lVar21 = *(long *)puVar2;
      }
      uVar25 = **(undefined8 **)(lVar21 + 0xb8);
      lVar24 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
      if (lVar24 == 0) goto LAB_01551034;
      System_Func_object__bool____ctor_338137c(lVar24,uVar25,*(undefined8 *)PTR_DAT_057c9b68,0);
      plVar16 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
      *plVar16 = lVar24;
      FUN_012d0d74(plVar16,lVar24);
    }
    puVar2 = PTR_DAT_057c8a60;
    uVar10 = System_Linq_Enumerable__Count_object__241f07c
                       (lVar14,lVar24,*(undefined8 *)PTR_DAT_0578feb0);
    iVar11 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetRank_411e528
                       (lVar13,0);
    lVar13 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
    puVar5 = PTR_DAT_05815af0;
    puVar3 = PTR_DAT_057dbe68;
    puVar7 = PTR_DAT_057db748;
    puVar6 = PTR_DAT_057d6138;
    puVar4 = PTR_DAT_057aea40;
    puVar2 = PTR_DAT_057651b8;
    if (lVar13 != 0) {
      Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                (lVar13,*(undefined8 *)PTR_DAT_0575e540,0);
      iStack_64 = iVar1;
      uVar25 = thunk_FUN_01320a8c(*(undefined8 *)puVar7,&iStack_64);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar13,*(undefined8 *)puVar4,uVar25,0);
      uStack_70 = uVar15;
      uVar25 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_70);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar13,*(undefined8 *)puVar5,uVar25,0);
      uStack_88 = *(undefined8 *)puVar2;
      uStack_80 = 0xffffffffffffffff;
      uStack_78 = param_2;
      uVar25 = System_Enum__ToString_23a4eac(&uStack_88,0);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar13,*(undefined8 *)puVar3,uVar25,0);
      iStack_8c = iVar9;
      uVar25 = thunk_FUN_01320a8c(*(undefined8 *)puVar7,&iStack_8c);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar13,*(undefined8 *)PTR_DAT_057e4da8,uVar25,0);
      iStack_90 = iVar1 + ~uVar10;
      uVar25 = thunk_FUN_01320a8c(*(undefined8 *)puVar7,&iStack_90);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar13,*(undefined8 *)PTR_DAT_057eaf90,uVar25,0);
      uStack_94 = uVar10;
      uVar25 = thunk_FUN_01320a8c(*(undefined8 *)puVar7,&uStack_94);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar13,*(undefined8 *)PTR_DAT_05795788,uVar25,0);
      iStack_98 = iVar11;
      uVar25 = thunk_FUN_01320a8c(*(undefined8 *)puVar7,&iStack_98);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar13,*(undefined8 *)PTR_DAT_05798378,uVar25,0);
      puVar6 = PTR_DAT_057a1e60;
      puVar4 = PTR_DAT_0576aae0;
      if ((**(long **)(*(long *)PTR_DAT_0576aae0 + 0xb8) != 0) &&
         (lVar14 = *(long *)(**(long **)(*(long *)PTR_DAT_0576aae0 + 0xb8) + 0x18), lVar14 != 0)) {
        plVar16 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                    (lVar14,*(undefined8 *)PTR_DAT_057a1e60);
        puVar5 = PTR_DAT_05765f38;
        puVar3 = PTR_DAT_057636d0;
        if (plVar16 != (long *)0x0) {
          lVar14 = *plVar16;
          uVar22 = (ulong)*(ushort *)(lVar14 + 0x12a);
          if (uVar22 != 0) {
            piVar23 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_057636d0) {
                puVar17 = (undefined8 *)(lVar14 + (long)(*piVar23 + 0x21) * 0x10 + 0x138);
                goto LAB_01550de0;
              }
              uVar22 = uVar22 - 1;
              piVar23 = piVar23 + 4;
            } while (uVar22 != 0);
          }
          puVar17 = (undefined8 *)FUN_0131971c(plVar16,*(long *)PTR_DAT_057636d0,0x21);
LAB_01550de0:
          uStack_9c = (*(code *)*puVar17)(plVar16,puVar17[1]);
          uVar25 = thunk_FUN_01320a8c(*(undefined8 *)puVar7,&uStack_9c);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar13,*(undefined8 *)puVar5,uVar25,0);
          uVar25 = Modules_Contexts_Application_Events_Scripts_EventSender__GetStreakStats_1451038()
          ;
          Modules_Contexts_Application_Events_Scripts_Event__AddDatas_1cc6390(lVar13,uVar25,0);
          lVar14 = Modules_Contexts_Application_Events_Scripts_EventSender__GetStreakStats_1451038()
          ;
          uStack_b8 = *(undefined8 *)puVar2;
          uStack_b0 = 0xffffffffffffffff;
          uStack_a8 = param_2;
          uVar25 = System_Enum__ToString_23a4eac(&uStack_b8,0);
          if (((**(long **)(*(long *)puVar4 + 0xb8) != 0) &&
              (lVar21 = *(long *)(**(long **)(*(long *)puVar4 + 0xb8) + 0x18), lVar21 != 0)) &&
             (plVar16 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                          (lVar21,*(undefined8 *)puVar6), plVar16 != (long *)0x0)) {
            lVar21 = *plVar16;
            uVar22 = (ulong)*(ushort *)(lVar21 + 0x12a);
            if (uVar22 != 0) {
              piVar23 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
              do {
                if (*(long *)(piVar23 + -2) == *(long *)puVar3) {
                  puVar17 = (undefined8 *)(lVar21 + (long)(*piVar23 + 0x21) * 0x10 + 0x138);
                  goto LAB_01550ec8;
                }
                uVar22 = uVar22 - 1;
                piVar23 = piVar23 + 4;
              } while (uVar22 != 0);
            }
            puVar17 = (undefined8 *)FUN_0131971c(plVar16,*(long *)puVar3,0x21);
LAB_01550ec8:
            iVar12 = (*(code *)*puVar17)(plVar16,puVar17[1]);
            puVar3 = PTR_DAT_0579fa30;
            puVar7 = PTR_DAT_0579cca8;
            puVar6 = PTR_DAT_0579c3a0;
            puVar4 = PTR_DAT_057641e8;
            puVar2 = PTR_DAT_057592d0;
            if (lVar14 != 0) {
              uVar18 = System_Collections_Generic_Dictionary_object__object___get_Item_3ed021c
                                 (lVar14,*(undefined8 *)PTR_DAT_0578ee60,
                                  *(undefined8 *)PTR_DAT_057592d0);
              if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                thunk_FUN_0130472c(*(long *)puVar3);
              }
              bVar8 = System_Convert__ToBoolean_212e304(uVar18,0);
              uVar18 = System_Collections_Generic_Dictionary_object__object___get_Item_3ed021c
                                 (lVar14,*(undefined8 *)puVar4,*(undefined8 *)puVar2);
              uVar18 = System_Convert__ToInt64_2130754(uVar18,0);
              uVar19 = System_Collections_Generic_Dictionary_object__object___get_Item_3ed021c
                                 (lVar14,*(undefined8 *)puVar6,*(undefined8 *)puVar2);
              uVar19 = System_Convert__ToInt64_2130754(uVar19,0);
              uVar20 = System_Collections_Generic_Dictionary_object__object___get_Item_3ed021c
                                 (lVar14,*(undefined8 *)puVar7,*(undefined8 *)puVar2);
              uVar20 = System_Convert__ToInt64_2130754(uVar20,0);
              uVar15 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__StreakLeaderboardImpression_2db93f0
                                 ((long)iVar1,uVar15,uVar25,(long)iVar9,(long)(int)(iVar1 + ~uVar10)
                                  ,(long)(int)uVar10,(long)iVar11,(long)iVar12,bVar8 & 1,uVar18,
                                  uVar19,uVar20,0);
              if (*(int *)(*(long *)PTR_DAT_0575f9f0 + 0xe0) == 0) {
                thunk_FUN_0130472c(*(long *)PTR_DAT_0575f9f0);
              }
              GrandSDK_Analytics_Analytics__Track_2b38d30(uVar15,0);
              Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4
                        (param_1,lVar13);
              return;
            }
          }
        }
      }
    }
  }
LAB_01551034:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

