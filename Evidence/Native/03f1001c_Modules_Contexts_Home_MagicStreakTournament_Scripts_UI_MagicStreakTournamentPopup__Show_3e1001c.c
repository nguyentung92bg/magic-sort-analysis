/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.MagicStreakTournamentPopup$$Show
void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentPopup__Show (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentPopup_o* __this, Modules_Infrastructure_UI_Common_Scripts_PopUp_PopUpArguments_o* popUpArguments, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.MagicStreakTournamentPopup$$Show
   void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentPopup__Show
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentPopup_o* __this,
   Modules_Infrastructure_UI_Common_Scripts_PopUp_PopUpArguments_o* popUpArguments, const
   MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentPopup__Show_3e1001c
               (long param_1,long *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  byte bVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  undefined8 uVar15;
  long *plVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  int *piVar25;
  long lVar26;
  undefined8 uVar27;
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
  
  if ((bRam0000000005c38075 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_058004f8);
    FUN_012d0dc8(PTR_DAT_0580c3b0);
    FUN_012d0dc8(PTR_DAT_057bce30);
    FUN_012d0dc8(PTR_DAT_057b8520);
    bRam0000000005c38075 = 1;
  }
  if (param_2 != (long *)0x0) {
    bVar9 = *(byte *)(*(long *)PTR_DAT_058004f8 + 300);
    if ((*(byte *)(*param_2 + 300) < bVar9) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar9 * 8 + -8) != *(long *)PTR_DAT_058004f8))
    {
                    /* WARNING: Subroutine does not return */
      FUN_012d1288(param_2);
    }
  }
  lVar21 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
  puVar7 = PTR_DAT_057bce30;
  puVar5 = PTR_DAT_057b8520;
  puVar3 = PTR_DAT_0578b048;
  if (lVar21 != 0) {
    UnityEngine_GameObject__SetActive_408e318(lVar21,1,0);
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    lVar21 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                       (*(undefined8 *)puVar7);
    lVar22 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
    if (((lVar22 != 0) &&
        (System_Action___ctor_21239bc(lVar22,param_1,*(undefined8 *)PTR_DAT_0580c3b0,0), lVar21 != 0
        )) && (Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Subscribe_40e7098
                         (lVar21,lVar22,0), param_2 != (long *)0x0)) {
      iVar1 = *(int *)((long)param_2 + 0x24);
      *(int *)(param_1 + 0x30) = iVar1;
      if (iVar1 == 4) {
        Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentPopup__ShowResultView_3e101c8
                  ();
      }
      else {
        Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentPopup__ShowInProgressView_3e101f0
                  (param_1);
      }
      if (cRam0000000005c230a8 == '\0') {
        FUN_012d0dc8(PTR_DAT_057ece38);
        cRam0000000005c230a8 = '\x01';
      }
      puVar3 = PTR_DAT_0576aae0;
      lVar21 = **(long **)(*(long *)PTR_DAT_057ece38 + 0xb8);
      if (lVar21 != 0) {
        uVar2 = (undefined4)param_2[5];
        if ((bRam0000000005c23772 & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_0575f9f0,uVar2,0);
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
        if (((**(long **)(*(long *)puVar3 + 0xb8) != 0) &&
            (lVar22 = *(long *)(**(long **)(*(long *)puVar3 + 0xb8) + 0x18), lVar22 != 0)) &&
           ((lVar22 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                (lVar22,*(undefined8 *)PTR_DAT_058030e0), lVar22 != 0 &&
            (lVar14 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetLeaderboard_411ed90
                                (lVar22,0), puVar3 = PTR_DAT_057a93a8, lVar14 != 0)))) {
          iVar1 = *(int *)(lVar14 + 0x18);
          uVar15 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetStartTimeAsUnix_4120248
                             (lVar22,0);
          iVar10 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetRemainingSeconds_411ec80
                             (lVar22,0);
          lVar23 = *(long *)puVar3;
          if (*(int *)(lVar23 + 0xe0) == 0) {
            thunk_FUN_0130472c(lVar23);
            lVar23 = *(long *)puVar3;
          }
          puVar5 = PTR_DAT_057e9860;
          lVar26 = *(long *)(*(long *)(lVar23 + 0xb8) + 0x10);
          if (lVar26 == 0) {
            if (*(int *)(lVar23 + 0xe0) == 0) {
              thunk_FUN_0130472c(lVar23);
              lVar23 = *(long *)puVar3;
            }
            uVar27 = **(undefined8 **)(lVar23 + 0xb8);
            lVar26 = thunk_FUN_01320e48(*(undefined8 *)puVar5);
            if (lVar26 == 0) goto LAB_01551034;
            System_Func_object__bool____ctor_338137c
                      (lVar26,uVar27,*(undefined8 *)PTR_DAT_057c9b68,0);
            plVar16 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
            *plVar16 = lVar26;
            FUN_012d0d74(plVar16,lVar26);
          }
          puVar3 = PTR_DAT_057c8a60;
          uVar11 = System_Linq_Enumerable__Count_object__241f07c
                             (lVar14,lVar26,*(undefined8 *)PTR_DAT_0578feb0);
          iVar12 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetRank_411e528
                             (lVar22,0);
          lVar22 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
          puVar6 = PTR_DAT_05815af0;
          puVar4 = PTR_DAT_057dbe68;
          puVar8 = PTR_DAT_057db748;
          puVar7 = PTR_DAT_057d6138;
          puVar5 = PTR_DAT_057aea40;
          puVar3 = PTR_DAT_057651b8;
          if (lVar22 != 0) {
            Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                      (lVar22,*(undefined8 *)PTR_DAT_0575e540,0);
            iStack_64 = iVar1;
            uVar27 = thunk_FUN_01320a8c(*(undefined8 *)puVar8,&iStack_64);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar22,*(undefined8 *)puVar5,uVar27,0);
            uStack_70 = uVar15;
            uVar27 = thunk_FUN_01320a8c(*(undefined8 *)puVar7,&uStack_70);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar22,*(undefined8 *)puVar6,uVar27,0);
            uStack_88 = *(undefined8 *)puVar3;
            uStack_80 = 0xffffffffffffffff;
            uStack_78 = uVar2;
            uVar27 = System_Enum__ToString_23a4eac(&uStack_88,0);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar22,*(undefined8 *)puVar4,uVar27,0);
            iStack_8c = iVar10;
            uVar27 = thunk_FUN_01320a8c(*(undefined8 *)puVar8,&iStack_8c);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar22,*(undefined8 *)PTR_DAT_057e4da8,uVar27,0);
            iStack_90 = iVar1 + ~uVar11;
            uVar27 = thunk_FUN_01320a8c(*(undefined8 *)puVar8,&iStack_90);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar22,*(undefined8 *)PTR_DAT_057eaf90,uVar27,0);
            uStack_94 = uVar11;
            uVar27 = thunk_FUN_01320a8c(*(undefined8 *)puVar8,&uStack_94);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar22,*(undefined8 *)PTR_DAT_05795788,uVar27,0);
            iStack_98 = iVar12;
            uVar27 = thunk_FUN_01320a8c(*(undefined8 *)puVar8,&iStack_98);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar22,*(undefined8 *)PTR_DAT_05798378,uVar27,0);
            puVar7 = PTR_DAT_057a1e60;
            puVar5 = PTR_DAT_0576aae0;
            if ((**(long **)(*(long *)PTR_DAT_0576aae0 + 0xb8) != 0) &&
               (lVar14 = *(long *)(**(long **)(*(long *)PTR_DAT_0576aae0 + 0xb8) + 0x18),
               lVar14 != 0)) {
              plVar16 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                          (lVar14,*(undefined8 *)PTR_DAT_057a1e60);
              puVar6 = PTR_DAT_05765f38;
              puVar4 = PTR_DAT_057636d0;
              if (plVar16 != (long *)0x0) {
                lVar14 = *plVar16;
                uVar24 = (ulong)*(ushort *)(lVar14 + 0x12a);
                if (uVar24 != 0) {
                  piVar25 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar25 + -2) == *(long *)PTR_DAT_057636d0) {
                      puVar17 = (undefined8 *)(lVar14 + (long)(*piVar25 + 0x21) * 0x10 + 0x138);
                      goto LAB_01550de0;
                    }
                    uVar24 = uVar24 - 1;
                    piVar25 = piVar25 + 4;
                  } while (uVar24 != 0);
                }
                puVar17 = (undefined8 *)FUN_0131971c(plVar16,*(long *)PTR_DAT_057636d0,0x21);
LAB_01550de0:
                uStack_9c = (*(code *)*puVar17)(plVar16,puVar17[1]);
                uVar27 = thunk_FUN_01320a8c(*(undefined8 *)puVar8,&uStack_9c);
                Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                          (lVar22,*(undefined8 *)puVar6,uVar27,0);
                uVar27 = Modules_Contexts_Application_Events_Scripts_EventSender__GetStreakStats_1451038
                                   ();
                Modules_Contexts_Application_Events_Scripts_Event__AddDatas_1cc6390(lVar22,uVar27,0)
                ;
                lVar14 = Modules_Contexts_Application_Events_Scripts_EventSender__GetStreakStats_1451038
                                   ();
                uStack_b8 = *(undefined8 *)puVar3;
                uStack_b0 = 0xffffffffffffffff;
                uStack_a8 = uVar2;
                uVar27 = System_Enum__ToString_23a4eac(&uStack_b8,0);
                if (((**(long **)(*(long *)puVar5 + 0xb8) != 0) &&
                    (lVar23 = *(long *)(**(long **)(*(long *)puVar5 + 0xb8) + 0x18), lVar23 != 0))
                   && (plVar16 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                                   (lVar23,*(undefined8 *)puVar7),
                      plVar16 != (long *)0x0)) {
                  lVar23 = *plVar16;
                  uVar24 = (ulong)*(ushort *)(lVar23 + 0x12a);
                  if (uVar24 != 0) {
                    piVar25 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar25 + -2) == *(long *)puVar4) {
                        puVar17 = (undefined8 *)(lVar23 + (long)(*piVar25 + 0x21) * 0x10 + 0x138);
                        goto LAB_01550ec8;
                      }
                      uVar24 = uVar24 - 1;
                      piVar25 = piVar25 + 4;
                    } while (uVar24 != 0);
                  }
                  puVar17 = (undefined8 *)FUN_0131971c(plVar16,*(long *)puVar4,0x21);
LAB_01550ec8:
                  iVar13 = (*(code *)*puVar17)(plVar16,puVar17[1]);
                  puVar4 = PTR_DAT_0579fa30;
                  puVar8 = PTR_DAT_0579cca8;
                  puVar7 = PTR_DAT_0579c3a0;
                  puVar5 = PTR_DAT_057641e8;
                  puVar3 = PTR_DAT_057592d0;
                  if (lVar14 != 0) {
                    uVar18 = System_Collections_Generic_Dictionary_object__object___get_Item_3ed021c
                                       (lVar14,*(undefined8 *)PTR_DAT_0578ee60,
                                        *(undefined8 *)PTR_DAT_057592d0);
                    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                      thunk_FUN_0130472c(*(long *)puVar4);
                    }
                    bVar9 = System_Convert__ToBoolean_212e304(uVar18,0);
                    uVar18 = System_Collections_Generic_Dictionary_object__object___get_Item_3ed021c
                                       (lVar14,*(undefined8 *)puVar5,*(undefined8 *)puVar3);
                    uVar18 = System_Convert__ToInt64_2130754(uVar18,0);
                    uVar19 = System_Collections_Generic_Dictionary_object__object___get_Item_3ed021c
                                       (lVar14,*(undefined8 *)puVar7,*(undefined8 *)puVar3);
                    uVar19 = System_Convert__ToInt64_2130754(uVar19,0);
                    uVar20 = System_Collections_Generic_Dictionary_object__object___get_Item_3ed021c
                                       (lVar14,*(undefined8 *)puVar8,*(undefined8 *)puVar3);
                    uVar20 = System_Convert__ToInt64_2130754(uVar20,0);
                    uVar15 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__StreakLeaderboardImpression_2db93f0
                                       ((long)iVar1,uVar15,uVar27,(long)iVar10,
                                        (long)(int)(iVar1 + ~uVar11),(long)(int)uVar11,(long)iVar12,
                                        (long)iVar13,bVar9 & 1,uVar18,uVar19,uVar20,0);
                    if (*(int *)(*(long *)PTR_DAT_0575f9f0 + 0xe0) == 0) {
                      thunk_FUN_0130472c(*(long *)PTR_DAT_0575f9f0);
                    }
                    GrandSDK_Analytics_Analytics__Track_2b38d30(uVar15,0);
                    Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4
                              (lVar21,lVar22);
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
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

