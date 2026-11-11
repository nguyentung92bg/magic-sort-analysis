/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendMagicStreakGaeRewardCompletedEvent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendMagicStreakGaeRewardCompletedEvent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t totalCompletedStepCount, System_String_o* rewardAsString, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.Events.Scripts.EventSender$$SendMagicStreakGaeRewardCompletedEvent
   void 
   Modules_Contexts_Application_Events_Scripts_EventSender__SendMagicStreakGaeRewardCompletedEvent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t
   totalCompletedStepCount, System_String_o* rewardAsString, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendMagicStreakGaeRewardCompletedEvent_146ad78
               (undefined8 param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  long *plVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  int *piVar27;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  int iStack_9c;
  undefined8 uStack_98;
  int iStack_8c;
  undefined1 auStack_88 [4];
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  int iStack_70;
  
  puVar2 = PTR_DAT_0576aae0;
  if ((bRam0000000005c237d1 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_057dc3f0);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057d6138);
    FUN_012d0dc8(PTR_DAT_057c3c28);
    FUN_012d0dc8(PTR_DAT_0577a308);
    FUN_012d0dc8(PTR_DAT_057d6f00);
    FUN_012d0dc8(PTR_DAT_05764228);
    FUN_012d0dc8(PTR_DAT_05772560);
    FUN_012d0dc8(PTR_DAT_0581a9f8);
    FUN_012d0dc8(PTR_DAT_057e4da8);
    FUN_012d0dc8(PTR_DAT_0579db08);
    FUN_012d0dc8(PTR_DAT_057ae440);
    FUN_012d0dc8(PTR_DAT_058151d0);
    FUN_012d0dc8(PTR_DAT_05815af0);
    FUN_012d0dc8(PTR_DAT_057fcce8);
    FUN_012d0dc8(PTR_DAT_0579cca8);
    FUN_012d0dc8(PTR_DAT_0579c3a0);
    FUN_012d0dc8(PTR_DAT_05792228);
    FUN_012d0dc8(PTR_DAT_0580f7d0);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057d3f68);
    bRam0000000005c237d1 = 1;
  }
  lVar23 = **(long **)(*(long *)puVar2 + 0xb8);
  if ((lVar23 != 0) && (lVar23 = *(long *)(lVar23 + 0x18), lVar23 != 0)) {
    lVar23 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar23,*(undefined8 *)PTR_DAT_057dc3f0);
    lVar24 = **(long **)(*(long *)puVar2 + 0xb8);
    if ((lVar24 != 0) &&
       (((lVar24 = *(long *)(lVar24 + 0x18), lVar24 != 0 &&
         (plVar17 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                      (lVar24,*(undefined8 *)PTR_DAT_057a1e60),
         puVar3 = PTR_DAT_057c8a60, puVar2 = PTR_DAT_0577a308, lVar23 != 0)) &&
        (lVar24 = *(long *)(lVar23 + 0x60), lVar24 != 0)))) {
      iVar1 = *(int *)(lVar23 + 0x84);
      iVar11 = *(int *)(lVar24 + 0x18);
      if (*(int *)(*(long *)PTR_DAT_057d6f00 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar10 = System_Math__Min_26cd444(iVar1,iVar11 + -1,0);
      iVar11 = System_Collections_Generic_List_int___get_Item_204edf0
                         (lVar24,uVar10,*(undefined8 *)puVar2);
      Modules_Contexts_Home_MagicStreakGAE_Scripts_MagicStreakGaeService__GetViewModel_3cfd114
                (&uStack_78,lVar23,0,0);
      lVar24 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
      puVar5 = PTR_DAT_05815af0;
      puVar4 = PTR_DAT_057e4da8;
      puVar3 = PTR_DAT_057db748;
      puVar2 = PTR_DAT_057d6138;
      if (lVar24 != 0) {
        Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                  (lVar24,*(undefined8 *)PTR_DAT_05764228,0);
        uStack_78 = Modules_Contexts_Home_MagicStreakGAE_Scripts_MagicStreakGaeService__GetStartTimeAsUnix_3cfecdc
                              (lVar23,0);
        uVar18 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&uStack_78);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar24,*(undefined8 *)puVar5,uVar18,0);
        uStack_7c = Modules_Contexts_Home_MagicStreakGAE_Scripts_MagicStreakGaeService__GetRemainingSeconds_3cfed28
                              (lVar23,0);
        uVar18 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_7c);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar24,*(undefined8 *)puVar4,uVar18,0);
        puVar9 = PTR_DAT_0581a9f8;
        puVar7 = PTR_DAT_057d3f68;
        puVar6 = PTR_DAT_057caaf0;
        puVar5 = PTR_DAT_057ae440;
        puVar4 = PTR_DAT_0579cca8;
        puVar3 = PTR_DAT_0579c3a0;
        puVar2 = PTR_DAT_05792228;
        if (plVar17 != (long *)0x0) {
          lVar25 = *plVar17;
          uVar26 = (ulong)*(ushort *)(lVar25 + 0x12a);
          if (uVar26 != 0) {
            piVar27 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
            do {
              if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_057636d0) {
                puVar19 = (undefined8 *)(lVar25 + (long)(*piVar27 + 1) * 0x10 + 0x138);
                goto LAB_0156b11c;
              }
              uVar26 = uVar26 - 1;
              piVar27 = piVar27 + 4;
            } while (uVar26 != 0);
          }
          puVar19 = (undefined8 *)FUN_0131971c(plVar17,*(long *)PTR_DAT_057636d0,1);
LAB_0156b11c:
          iStack_80 = (*(code *)*puVar19)(plVar17,puVar19[1]);
          puVar8 = PTR_DAT_057db748;
          iStack_80 = iStack_80 + -1;
          uVar18 = thunk_FUN_01320a8c(*(undefined8 *)PTR_DAT_057db748,&iStack_80);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar24,*(undefined8 *)puVar6,uVar18,0);
          iStack_84 = iVar11;
          uVar18 = thunk_FUN_01320a8c(*(undefined8 *)puVar8,&iStack_84);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar24,*(undefined8 *)puVar3,uVar18,0);
          uVar18 = thunk_FUN_01320a8c(*(undefined8 *)puVar8,auStack_88);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar24,*(undefined8 *)puVar4,uVar18,0);
          iVar1 = iVar1 + 1;
          iStack_8c = iVar1;
          uVar18 = thunk_FUN_01320a8c(*(undefined8 *)puVar8,&iStack_8c);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar24,*(undefined8 *)puVar2,uVar18,0);
          uVar18 = Modules_Contexts_Home_MagicStreakGAE_Scripts_MagicStreakGaeService__GetTournamentId_3cfec40
                             (lVar23,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar24,*(undefined8 *)PTR_DAT_057fcce8,uVar18,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar24,*(undefined8 *)PTR_DAT_05772560,param_3,0);
          uStack_98 = Modules_Contexts_Home_MagicStreakGAE_Scripts_MagicStreakGaeService__GetEndTimeAsUnix_3cfeca8
                                (lVar23,0);
          uVar18 = thunk_FUN_01320a8c(*(undefined8 *)PTR_DAT_057d6138,&uStack_98);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar24,*(undefined8 *)PTR_DAT_0579db08,uVar18,0);
          uVar18 = Modules_Contexts_Home_MagicStreakGAE_Scripts_MagicStreakGaeService__GetSegment_3cfed10
                             (lVar23,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar24,*(undefined8 *)puVar7,uVar18,0);
          iStack_9c = param_2;
          uVar18 = thunk_FUN_01320a8c(*(undefined8 *)puVar8,&iStack_9c);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar24,*(undefined8 *)puVar5,uVar18,0);
          uStack_a0 = Modules_Contexts_Home_MagicStreakGAE_Scripts_MagicStreakGaeService__GetTotalRewardScore_3cfefb0
                                (lVar23,0);
          uVar18 = thunk_FUN_01320a8c(*(undefined8 *)puVar8,&uStack_a0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar24,*(undefined8 *)puVar9,uVar18,0);
          uStack_a4 = Modules_Contexts_Home_MagicStreakGAE_Scripts_MagicStreakGaeService__GetPlayOnCountBetweenSteps_3cfeb5c
                                (lVar23,0);
          uVar18 = thunk_FUN_01320a8c(*(undefined8 *)puVar8,&uStack_a4);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar24,*(undefined8 *)PTR_DAT_058151d0,uVar18,0);
          uStack_a8 = Modules_Contexts_Home_MagicStreakGAE_Scripts_MagicStreakGaeService__GetCumulativePlayOnCount_3cfeb80
                                (lVar23,0);
          uVar18 = thunk_FUN_01320a8c(*(undefined8 *)puVar8,&uStack_a8);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar24,*(undefined8 *)PTR_DAT_0580f7d0,uVar18,0);
          uVar18 = Modules_Contexts_Home_MagicStreakGAE_Scripts_MagicStreakGaeService__GetStartTimeAsUnix_3cfecdc
                             (lVar23,0);
          iVar12 = Modules_Contexts_Home_MagicStreakGAE_Scripts_MagicStreakGaeService__GetRemainingSeconds_3cfed28
                             (lVar23,0);
          lVar25 = *plVar17;
          uVar26 = (ulong)*(ushort *)(lVar25 + 0x12a);
          if (uVar26 != 0) {
            piVar27 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
            do {
              if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_057636d0) {
                puVar19 = (undefined8 *)(lVar25 + (long)(*piVar27 + 1) * 0x10 + 0x138);
                goto LAB_0156b3d0;
              }
              uVar26 = uVar26 - 1;
              piVar27 = piVar27 + 4;
            } while (uVar26 != 0);
          }
          puVar19 = (undefined8 *)FUN_0131971c(plVar17,*(long *)PTR_DAT_057636d0,1);
LAB_0156b3d0:
          iVar13 = (*(code *)*puVar19)(plVar17,puVar19[1]);
          uVar20 = Modules_Contexts_Home_MagicStreakGAE_Scripts_MagicStreakGaeService__GetTournamentId_3cfec40
                             (lVar23,0);
          uVar21 = Modules_Contexts_Home_MagicStreakGAE_Scripts_MagicStreakGaeService__GetEndTimeAsUnix_3cfeca8
                             (lVar23,0);
          uVar22 = Modules_Contexts_Home_MagicStreakGAE_Scripts_MagicStreakGaeService__GetSegment_3cfed10
                             (lVar23,0);
          iVar14 = Modules_Contexts_Home_MagicStreakGAE_Scripts_MagicStreakGaeService__GetPlayOnCountBetweenSteps_3cfeb5c
                             (lVar23,0);
          iVar15 = Modules_Contexts_Home_MagicStreakGAE_Scripts_MagicStreakGaeService__GetCumulativePlayOnCount_3cfeb80
                             (lVar23,0);
          iVar16 = Modules_Contexts_Home_MagicStreakGAE_Scripts_MagicStreakGaeService__GetTotalRewardScore_3cfefb0
                             (lVar23,0);
          uVar18 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__MagicStreakGaeRewardClaim_2dba140
                             (uVar18,(long)iVar12,(long)(iVar13 + -1),(long)iVar11,(long)iStack_70,
                              (long)iVar1,uVar20,param_3,uVar21,uVar22,(long)param_2,(long)iVar14,
                              (long)iVar15,(long)iVar16,0);
          if (*(int *)(*(long *)PTR_DAT_0575f9f0 + 0xe0) == 0) {
            thunk_FUN_0130472c(*(long *)PTR_DAT_0575f9f0);
          }
          GrandSDK_Analytics_Analytics__Track_2b38d30(uVar18,0);
          Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar24)
          ;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

