/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendStreakTournamentProgressClaimStat
void Modules_Contexts_Application_Events_Scripts_EventSender__SendStreakTournamentProgressClaimStat (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.Events.Scripts.EventSender$$SendStreakTournamentProgressClaimStat
   void 
   Modules_Contexts_Application_Events_Scripts_EventSender__SendStreakTournamentProgressClaimStat
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendStreakTournamentProgressClaimStat_1451a60
               (undefined8 param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  long *plVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  long lVar23;
  ulong uVar24;
  int *piVar25;
  long lVar26;
  undefined8 uVar27;
  undefined4 uStack_88;
  undefined4 uStack_84;
  int iStack_80;
  uint uStack_7c;
  int iStack_78;
  uint uStack_74;
  undefined8 uStack_70;
  int iStack_64;
  
  puVar2 = PTR_DAT_0576aae0;
  if ((bRam0000000005c23774 & 1) == 0) {
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
    FUN_012d0dc8(PTR_DAT_058031d8);
    FUN_012d0dc8(PTR_DAT_057f0490);
    FUN_012d0dc8(PTR_DAT_0578af00);
    FUN_012d0dc8(PTR_DAT_057a93a8);
    FUN_012d0dc8(PTR_DAT_0577a6e8);
    FUN_012d0dc8(PTR_DAT_057641e8);
    FUN_012d0dc8(PTR_DAT_057aea40);
    FUN_012d0dc8(PTR_DAT_057e4da8);
    FUN_012d0dc8(PTR_DAT_0578ee60);
    FUN_012d0dc8(PTR_DAT_057b2e80);
    FUN_012d0dc8(PTR_DAT_05798378);
    FUN_012d0dc8(PTR_DAT_057eaf90);
    FUN_012d0dc8(PTR_DAT_05815af0);
    FUN_012d0dc8(PTR_DAT_05811418);
    FUN_012d0dc8(PTR_DAT_05795788);
    FUN_012d0dc8(PTR_DAT_0579cca8);
    FUN_012d0dc8(PTR_DAT_0579c3a0);
    FUN_012d0dc8(PTR_DAT_05765f38);
    FUN_012d0dc8(PTR_DAT_05774390);
    FUN_012d0dc8(PTR_DAT_0576a2d0);
    bRam0000000005c23774 = 1;
  }
  if ((((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
       (lVar15 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar15 != 0)) &&
      (lVar15 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                          (lVar15,*(undefined8 *)PTR_DAT_058030e0), lVar15 != 0)) &&
     (lVar16 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetLeaderboard_411ed90
                         (lVar15,0), puVar2 = PTR_DAT_057a93a8, lVar16 != 0)) {
    iVar1 = *(int *)(lVar16 + 0x18);
    uVar17 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetStartTimeAsUnix_4120248
                       (lVar15,0);
    uVar8 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetRemainingSeconds_411ec80
                      (lVar15,0);
    lVar23 = *(long *)puVar2;
    if (*(int *)(lVar23 + 0xe0) == 0) {
      thunk_FUN_0130472c(lVar23);
      lVar23 = *(long *)puVar2;
    }
    puVar4 = PTR_DAT_057e9860;
    lVar26 = *(long *)(*(long *)(lVar23 + 0xb8) + 0x20);
    if (lVar26 == 0) {
      if (*(int *)(lVar23 + 0xe0) == 0) {
        thunk_FUN_0130472c(lVar23);
        lVar23 = *(long *)puVar2;
      }
      uVar27 = **(undefined8 **)(lVar23 + 0xb8);
      lVar26 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
      if (lVar26 == 0) goto LAB_01552288;
      System_Func_object__bool____ctor_338137c(lVar26,uVar27,*(undefined8 *)PTR_DAT_0578af00,0);
      plVar18 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20);
      *plVar18 = lVar26;
      FUN_012d0d74(plVar18,lVar26);
    }
    puVar2 = PTR_DAT_057c8a60;
    uVar9 = System_Linq_Enumerable__Count_object__241f07c
                      (lVar16,lVar26,*(undefined8 *)PTR_DAT_0578feb0);
    iVar10 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetRank_411e528
                       (lVar15,0);
    lVar16 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
    puVar5 = PTR_DAT_05815af0;
    puVar3 = PTR_DAT_057e4da8;
    puVar6 = PTR_DAT_057db748;
    puVar4 = PTR_DAT_057d6138;
    puVar2 = PTR_DAT_057aea40;
    if (lVar16 != 0) {
      Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                (lVar16,*(undefined8 *)PTR_DAT_0577a6e8,0);
      iStack_64 = iVar1;
      uVar27 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&iStack_64);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar16,*(undefined8 *)puVar2,uVar27,0);
      uStack_70 = uVar17;
      uVar27 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_70);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar16,*(undefined8 *)puVar5,uVar27,0);
      uStack_74 = uVar8;
      uVar27 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_74);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar16,*(undefined8 *)puVar3,uVar27,0);
      iStack_78 = iVar1 + ~uVar9;
      uVar27 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&iStack_78);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar16,*(undefined8 *)PTR_DAT_057eaf90,uVar27,0);
      uStack_7c = uVar9;
      uVar27 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_7c);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar16,*(undefined8 *)PTR_DAT_05795788,uVar27,0);
      iStack_80 = iVar10;
      uVar27 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&iStack_80);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar16,*(undefined8 *)PTR_DAT_05798378,uVar27,0);
      uVar27 = Modules_Contexts_Application_Events_Scripts_EventSender__GetStreakStats_1451038();
      Modules_Contexts_Application_Events_Scripts_Event__AddDatas_1cc6390(lVar16,uVar27,0);
      uStack_84 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetClaimedProgressbarStepRank_412027c
                            (lVar15,0);
      uVar27 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_84);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar16,*(undefined8 *)PTR_DAT_05811418,uVar27,0);
      uStack_88 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetNeededScoreForProgressbarCurrentStep_41202a4
                            (lVar15,0);
      uVar27 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_88);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar16,*(undefined8 *)PTR_DAT_0576a2d0,uVar27,0);
      lVar23 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetProgressbarClaimedStepReward_4120334
                         (lVar15,0);
      puVar2 = PTR_DAT_057b2e80;
      if (lVar23 == 0) {
        uVar27 = *(undefined8 *)PTR_DAT_05774390;
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_058031d8 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        uVar27 = Newtonsoft_Json_JsonConvert__SerializeObject_35368d4(lVar23,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar16,*(undefined8 *)puVar2,uVar27,0);
      }
      puVar4 = PTR_DAT_057a1e60;
      puVar2 = PTR_DAT_0576aae0;
      if ((**(long **)(*(long *)PTR_DAT_0576aae0 + 0xb8) != 0) &&
         (lVar23 = *(long *)(**(long **)(*(long *)PTR_DAT_0576aae0 + 0xb8) + 0x18), lVar23 != 0)) {
        plVar18 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                    (lVar23,*(undefined8 *)PTR_DAT_057a1e60);
        puVar5 = PTR_DAT_05765f38;
        puVar3 = PTR_DAT_057636d0;
        if (plVar18 != (long *)0x0) {
          lVar23 = *plVar18;
          uVar24 = (ulong)*(ushort *)(lVar23 + 0x12a);
          if (uVar24 != 0) {
            piVar25 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
            do {
              if (*(long *)(piVar25 + -2) == *(long *)PTR_DAT_057636d0) {
                puVar19 = (undefined8 *)(lVar23 + (long)(*piVar25 + 0x21) * 0x10 + 0x138);
                goto LAB_01552030;
              }
              uVar24 = uVar24 - 1;
              piVar25 = piVar25 + 4;
            } while (uVar24 != 0);
          }
          puVar19 = (undefined8 *)FUN_0131971c(plVar18,*(long *)PTR_DAT_057636d0,0x21);
LAB_01552030:
          uVar11 = (*(code *)*puVar19)(plVar18,puVar19[1]);
          uStack_70 = CONCAT44(uStack_70._4_4_,uVar11);
          uVar20 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_70);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar16,*(undefined8 *)puVar5,uVar20,0);
          lVar23 = Modules_Contexts_Application_Events_Scripts_EventSender__GetStreakStats_1451038()
          ;
          if (((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
              (lVar26 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar26 != 0)) &&
             (plVar18 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                          (lVar26,*(undefined8 *)puVar4), plVar18 != (long *)0x0)) {
            lVar26 = *plVar18;
            uVar24 = (ulong)*(ushort *)(lVar26 + 0x12a);
            if (uVar24 != 0) {
              piVar25 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
              do {
                if (*(long *)(piVar25 + -2) == *(long *)puVar3) {
                  puVar19 = (undefined8 *)(lVar26 + (long)(*piVar25 + 0x21) * 0x10 + 0x138);
                  goto LAB_015520e8;
                }
                uVar24 = uVar24 - 1;
                piVar25 = piVar25 + 4;
              } while (uVar24 != 0);
            }
            puVar19 = (undefined8 *)FUN_0131971c(plVar18,*(long *)puVar3,0x21);
LAB_015520e8:
            iVar12 = (*(code *)*puVar19)(plVar18,puVar19[1]);
            puVar5 = PTR_DAT_0579fa30;
            puVar3 = PTR_DAT_0579cca8;
            puVar6 = PTR_DAT_0579c3a0;
            puVar4 = PTR_DAT_057641e8;
            puVar2 = PTR_DAT_057592d0;
            if (lVar23 != 0) {
              uVar20 = System_Collections_Generic_Dictionary_object__object___get_Item_3ed021c
                                 (lVar23,*(undefined8 *)PTR_DAT_0578ee60,
                                  *(undefined8 *)PTR_DAT_057592d0);
              if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                thunk_FUN_0130472c(*(long *)puVar5);
              }
              bVar7 = System_Convert__ToBoolean_212e304(uVar20,0);
              uVar20 = System_Collections_Generic_Dictionary_object__object___get_Item_3ed021c
                                 (lVar23,*(undefined8 *)puVar4,*(undefined8 *)puVar2);
              uVar20 = System_Convert__ToInt64_2130754(uVar20,0);
              uVar21 = System_Collections_Generic_Dictionary_object__object___get_Item_3ed021c
                                 (lVar23,*(undefined8 *)puVar6,*(undefined8 *)puVar2);
              uVar21 = System_Convert__ToInt64_2130754(uVar21,0);
              uVar22 = System_Collections_Generic_Dictionary_object__object___get_Item_3ed021c
                                 (lVar23,*(undefined8 *)puVar3,*(undefined8 *)puVar2);
              uVar22 = System_Convert__ToInt64_2130754(uVar22,0);
              iVar13 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetClaimedProgressbarStepRank_412027c
                                 (lVar15,0);
              iVar14 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetNeededScoreForProgressbarCurrentStep_41202a4
                                 (lVar15,0);
              uVar17 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__StreakTournamentProgressClaim_2db96f8
                                 ((long)iVar1,uVar17,uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU),
                                  (long)(int)(iVar1 + ~uVar9),(long)(int)uVar9,(long)iVar10,
                                  (long)iVar13,(long)iVar14,uVar27,(long)iVar12,bVar7 & 1,uVar20,
                                  uVar21,uVar22,0);
              if (*(int *)(*(long *)PTR_DAT_0575f9f0 + 0xe0) == 0) {
                thunk_FUN_0130472c(*(long *)PTR_DAT_0575f9f0);
              }
              GrandSDK_Analytics_Analytics__Track_2b38d30(uVar17,0);
              Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4
                        (param_1,lVar16);
              return;
            }
          }
        }
      }
    }
  }
LAB_01552288:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

