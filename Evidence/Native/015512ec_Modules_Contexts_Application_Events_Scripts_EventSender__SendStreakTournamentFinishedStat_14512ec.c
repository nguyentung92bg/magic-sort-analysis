/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendStreakTournamentFinishedStat
void Modules_Contexts_Application_Events_Scripts_EventSender__SendStreakTournamentFinishedStat (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendStreakTournamentFinishedStat
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendStreakTournamentFinishedStat
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendStreakTournamentFinishedStat_14512ec
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
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long *plVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  ulong uVar21;
  int *piVar22;
  long lVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  int iStack_78;
  uint uStack_74;
  undefined8 uStack_70;
  int iStack_64;
  
  puVar2 = PTR_DAT_0576aae0;
  if ((bRam0000000005c23773 & 1) == 0) {
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
    FUN_012d0dc8(PTR_DAT_05804640);
    FUN_012d0dc8(PTR_DAT_057a93a8);
    FUN_012d0dc8(PTR_DAT_057a3048);
    FUN_012d0dc8(PTR_DAT_057641e8);
    FUN_012d0dc8(PTR_DAT_057aea40);
    FUN_012d0dc8(PTR_DAT_057e4da8);
    FUN_012d0dc8(PTR_DAT_0578ee60);
    FUN_012d0dc8(PTR_DAT_057b2e80);
    FUN_012d0dc8(PTR_DAT_05798378);
    FUN_012d0dc8(PTR_DAT_057eaf90);
    FUN_012d0dc8(PTR_DAT_05815af0);
    FUN_012d0dc8(PTR_DAT_05795788);
    FUN_012d0dc8(PTR_DAT_0579cca8);
    FUN_012d0dc8(PTR_DAT_0579c3a0);
    FUN_012d0dc8(PTR_DAT_05765f38);
    FUN_012d0dc8(PTR_DAT_05774390);
    bRam0000000005c23773 = 1;
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
    uVar8 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetRemainingSeconds_411ec80
                      (lVar13,0);
    lVar20 = *(long *)puVar2;
    if (*(int *)(lVar20 + 0xe0) == 0) {
      thunk_FUN_0130472c(lVar20);
      lVar20 = *(long *)puVar2;
    }
    puVar4 = PTR_DAT_057e9860;
    lVar23 = *(long *)(*(long *)(lVar20 + 0xb8) + 0x18);
    if (lVar23 == 0) {
      if (*(int *)(lVar20 + 0xe0) == 0) {
        thunk_FUN_0130472c(lVar20);
        lVar20 = *(long *)puVar2;
      }
      uVar24 = **(undefined8 **)(lVar20 + 0xb8);
      lVar23 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
      if (lVar23 == 0) goto LAB_01551a5c;
      System_Func_object__bool____ctor_338137c(lVar23,uVar24,*(undefined8 *)PTR_DAT_05804640,0);
      plVar16 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
      *plVar16 = lVar23;
      FUN_012d0d74(plVar16,lVar23);
    }
    puVar2 = PTR_DAT_057c8a60;
    uVar9 = System_Linq_Enumerable__Count_object__241f07c
                      (lVar14,lVar23,*(undefined8 *)PTR_DAT_0578feb0);
    iVar10 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetRank_411e528
                       (lVar13,0);
    lVar14 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
    puVar5 = PTR_DAT_05815af0;
    puVar3 = PTR_DAT_057e4da8;
    puVar6 = PTR_DAT_057db748;
    puVar4 = PTR_DAT_057d6138;
    puVar2 = PTR_DAT_057aea40;
    if (lVar14 != 0) {
      Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                (lVar14,*(undefined8 *)PTR_DAT_057a3048,0);
      iStack_64 = iVar1;
      uVar24 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&iStack_64);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar14,*(undefined8 *)puVar2,uVar24,0);
      uStack_70 = uVar15;
      uVar24 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_70);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar14,*(undefined8 *)puVar5,uVar24,0);
      uVar25 = *(undefined8 *)puVar3;
      uVar8 = uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU);
      uStack_70 = CONCAT44(uStack_70._4_4_,uVar8);
      uVar24 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_70);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310(lVar14,uVar25,uVar24,0);
      iStack_64 = iVar1 + ~uVar9;
      uVar24 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&iStack_64);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar14,*(undefined8 *)PTR_DAT_057eaf90,uVar24,0);
      uStack_74 = uVar9;
      uVar24 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_74);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar14,*(undefined8 *)PTR_DAT_05795788,uVar24,0);
      iStack_78 = iVar10;
      uVar24 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&iStack_78);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar14,*(undefined8 *)PTR_DAT_05798378,uVar24,0);
      lVar13 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetTournamentReward_411fe30
                         (lVar13,0);
      puVar4 = PTR_DAT_057b2e80;
      puVar2 = PTR_DAT_0576aae0;
      if (lVar13 == 0) {
        uVar24 = *(undefined8 *)PTR_DAT_05774390;
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_058031d8 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        uVar24 = Newtonsoft_Json_JsonConvert__SerializeObject_35368d4(lVar13,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar14,*(undefined8 *)puVar4,uVar24,0);
      }
      puVar4 = PTR_DAT_057a1e60;
      lVar13 = **(long **)(*(long *)puVar2 + 0xb8);
      if ((lVar13 != 0) && (lVar13 = *(long *)(lVar13 + 0x18), lVar13 != 0)) {
        plVar16 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                    (lVar13,*(undefined8 *)PTR_DAT_057a1e60);
        puVar5 = PTR_DAT_05765f38;
        puVar3 = PTR_DAT_057636d0;
        if (plVar16 != (long *)0x0) {
          lVar13 = *plVar16;
          uVar21 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar21 != 0) {
            piVar22 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_057636d0) {
                puVar17 = (undefined8 *)(lVar13 + (long)(*piVar22 + 0x21) * 0x10 + 0x138);
                goto LAB_01551828;
              }
              uVar21 = uVar21 - 1;
              piVar22 = piVar22 + 4;
            } while (uVar21 != 0);
          }
          puVar17 = (undefined8 *)FUN_0131971c(plVar16,*(long *)PTR_DAT_057636d0,0x21);
LAB_01551828:
          uVar11 = (*(code *)*puVar17)(plVar16,puVar17[1]);
          uStack_70 = CONCAT44(uStack_70._4_4_,uVar11);
          uVar25 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_70);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar14,*(undefined8 *)puVar5,uVar25,0);
          uVar25 = Modules_Contexts_Application_Events_Scripts_EventSender__GetStreakStats_1451038()
          ;
          Modules_Contexts_Application_Events_Scripts_Event__AddDatas_1cc6390(lVar14,uVar25,0);
          lVar13 = Modules_Contexts_Application_Events_Scripts_EventSender__GetStreakStats_1451038()
          ;
          lVar20 = **(long **)(*(long *)puVar2 + 0xb8);
          if (((lVar20 != 0) && (lVar20 = *(long *)(lVar20 + 0x18), lVar20 != 0)) &&
             (plVar16 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                          (lVar20,*(undefined8 *)puVar4), plVar16 != (long *)0x0)) {
            lVar20 = *plVar16;
            uVar21 = (ulong)*(ushort *)(lVar20 + 0x12a);
            if (uVar21 != 0) {
              piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
              do {
                if (*(long *)(piVar22 + -2) == *(long *)puVar3) {
                  puVar17 = (undefined8 *)(lVar20 + (long)(*piVar22 + 0x21) * 0x10 + 0x138);
                  goto LAB_015518f0;
                }
                uVar21 = uVar21 - 1;
                piVar22 = piVar22 + 4;
              } while (uVar21 != 0);
            }
            puVar17 = (undefined8 *)FUN_0131971c(plVar16,*(long *)puVar3,0x21);
LAB_015518f0:
            iVar12 = (*(code *)*puVar17)(plVar16,puVar17[1]);
            puVar3 = PTR_DAT_0579fa30;
            puVar6 = PTR_DAT_0579c3a0;
            puVar4 = PTR_DAT_057641e8;
            puVar2 = PTR_DAT_057592d0;
            if (lVar13 != 0) {
              uVar25 = System_Collections_Generic_Dictionary_object__object___get_Item_3ed021c
                                 (lVar13,*(undefined8 *)PTR_DAT_0578ee60,
                                  *(undefined8 *)PTR_DAT_057592d0);
              if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                thunk_FUN_0130472c(*(long *)puVar3);
              }
              bVar7 = System_Convert__ToBoolean_212e304(uVar25,0);
              uVar25 = System_Collections_Generic_Dictionary_object__object___get_Item_3ed021c
                                 (lVar13,*(undefined8 *)puVar4,*(undefined8 *)puVar2);
              uVar25 = System_Convert__ToInt64_2130754(uVar25,0);
              uVar18 = System_Collections_Generic_Dictionary_object__object___get_Item_3ed021c
                                 (lVar13,*(undefined8 *)puVar6,*(undefined8 *)puVar2);
              uVar18 = System_Convert__ToInt64_2130754(uVar18,0);
              uVar19 = System_Collections_Generic_Dictionary_object__object___get_Item_3ed021c
                                 (lVar13,*(undefined8 *)PTR_DAT_0579cca8,*(undefined8 *)puVar2);
              uVar19 = System_Convert__ToInt64_2130754(uVar19,0);
              uVar15 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__StreakTournamentFinished_2db9574
                                 ((long)iVar1,uVar15,uVar8,(long)(int)(iVar1 + ~uVar9),
                                  (long)(int)uVar9,(long)iVar10,uVar24,(long)iVar12,bVar7 & 1,uVar25
                                  ,uVar18,uVar19,0);
              if (*(int *)(*(long *)PTR_DAT_0575f9f0 + 0xe0) == 0) {
                thunk_FUN_0130472c(*(long *)PTR_DAT_0575f9f0);
              }
              GrandSDK_Analytics_Analytics__Track_2b38d30(uVar15,0);
              Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4
                        (param_1,lVar14);
              return;
            }
          }
        }
      }
    }
  }
LAB_01551a5c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

