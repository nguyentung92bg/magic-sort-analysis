/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendMagicStreakGaeFinishedEvent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendMagicStreakGaeFinishedEvent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendMagicStreakGaeFinishedEvent
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendMagicStreakGaeFinishedEvent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendMagicStreakGaeFinishedEvent_146b4e8
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  int *piVar22;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  
  puVar2 = PTR_DAT_0576aae0;
  if ((bRam0000000005c237d2 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_057dc3f0);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057d6138);
    FUN_012d0dc8(PTR_DAT_057e4da8);
    FUN_012d0dc8(PTR_DAT_0579db08);
    FUN_012d0dc8(PTR_DAT_057ae440);
    FUN_012d0dc8(PTR_DAT_057fc100);
    FUN_012d0dc8(PTR_DAT_05815af0);
    FUN_012d0dc8(PTR_DAT_057fcce8);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057d3f68);
    bRam0000000005c237d2 = 1;
  }
  lVar18 = **(long **)(*(long *)puVar2 + 0xb8);
  if ((lVar18 != 0) && (lVar18 = *(long *)(lVar18 + 0x18), lVar18 != 0)) {
    lVar18 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar18,*(undefined8 *)PTR_DAT_057dc3f0);
    puVar5 = PTR_DAT_057c8a60;
    lVar19 = **(long **)(*(long *)puVar2 + 0xb8);
    if ((lVar19 != 0) && (lVar19 = *(long *)(lVar19 + 0x18), lVar19 != 0)) {
      plVar12 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                  (lVar19,*(undefined8 *)PTR_DAT_057a1e60);
      lVar19 = thunk_FUN_01320e48(*(undefined8 *)puVar5);
      if ((lVar19 != 0) &&
         (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                    (lVar19,*(undefined8 *)PTR_DAT_057fc100,0), puVar3 = PTR_DAT_05815af0,
         puVar1 = PTR_DAT_057e4da8, puVar5 = PTR_DAT_057db748, puVar2 = PTR_DAT_057d6138,
         lVar18 != 0)) {
        uStack_68 = Modules_Contexts_Home_MagicStreakGAE_Scripts_MagicStreakGaeService__GetStartTimeAsUnix_3cfecdc
                              (lVar18,0);
        uVar13 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&uStack_68);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar19,*(undefined8 *)puVar3,uVar13,0);
        uStack_6c = Modules_Contexts_Home_MagicStreakGAE_Scripts_MagicStreakGaeService__GetRemainingSeconds_3cfed28
                              (lVar18,0);
        uVar13 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_6c);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar19,*(undefined8 *)puVar1,uVar13,0);
        puVar8 = PTR_DAT_057fcce8;
        puVar7 = PTR_DAT_057d3f68;
        puVar6 = PTR_DAT_057caaf0;
        puVar4 = PTR_DAT_057ae440;
        puVar3 = PTR_DAT_0579db08;
        puVar1 = PTR_DAT_057636d0;
        if (plVar12 != (long *)0x0) {
          lVar20 = *plVar12;
          uVar21 = (ulong)*(ushort *)(lVar20 + 0x12a);
          if (uVar21 != 0) {
            piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_057636d0) {
                puVar14 = (undefined8 *)(lVar20 + (long)(*piVar22 + 1) * 0x10 + 0x138);
                goto LAB_0156b780;
              }
              uVar21 = uVar21 - 1;
              piVar22 = piVar22 + 4;
            } while (uVar21 != 0);
          }
          puVar14 = (undefined8 *)FUN_0131971c(plVar12,*(long *)PTR_DAT_057636d0,1);
LAB_0156b780:
          uStack_70 = (*(code *)*puVar14)(plVar12,puVar14[1]);
          uVar13 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_70);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar19,*(undefined8 *)puVar6,uVar13,0);
          uVar13 = Modules_Contexts_Home_MagicStreakGAE_Scripts_MagicStreakGaeService__GetTournamentId_3cfec40
                             (lVar18,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar19,*(undefined8 *)puVar8,uVar13,0);
          uStack_78 = Modules_Contexts_Home_MagicStreakGAE_Scripts_MagicStreakGaeService__GetEndTimeAsUnix_3cfeca8
                                (lVar18,0);
          uVar13 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&uStack_78);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar19,*(undefined8 *)puVar3,uVar13,0);
          uVar13 = Modules_Contexts_Home_MagicStreakGAE_Scripts_MagicStreakGaeService__GetSegment_3cfed10
                             (lVar18,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar19,*(undefined8 *)puVar7,uVar13,0);
          uStack_7c = Modules_Contexts_Home_MagicStreakGAE_Scripts_MagicStreakGaeService__GetTotalCompletedStepCount_3cfee38
                                (lVar18,0);
          uVar13 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_7c);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar19,*(undefined8 *)puVar4,uVar13,0);
          uVar13 = Modules_Contexts_Home_MagicStreakGAE_Scripts_MagicStreakGaeService__GetStartTimeAsUnix_3cfecdc
                             (lVar18,0);
          iVar9 = Modules_Contexts_Home_MagicStreakGAE_Scripts_MagicStreakGaeService__GetRemainingSeconds_3cfed28
                            (lVar18,0);
          lVar20 = *plVar12;
          uVar21 = (ulong)*(ushort *)(lVar20 + 0x12a);
          if (uVar21 != 0) {
            piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(long *)(piVar22 + -2) == *(long *)puVar1) {
                puVar14 = (undefined8 *)(lVar20 + (long)(*piVar22 + 1) * 0x10 + 0x138);
                goto LAB_0156b8cc;
              }
              uVar21 = uVar21 - 1;
              piVar22 = piVar22 + 4;
            } while (uVar21 != 0);
          }
          puVar14 = (undefined8 *)FUN_0131971c(plVar12,*(long *)puVar1,1);
LAB_0156b8cc:
          iVar10 = (*(code *)*puVar14)(plVar12,puVar14[1]);
          uVar15 = Modules_Contexts_Home_MagicStreakGAE_Scripts_MagicStreakGaeService__GetTournamentId_3cfec40
                             (lVar18,0);
          uVar16 = Modules_Contexts_Home_MagicStreakGAE_Scripts_MagicStreakGaeService__GetEndTimeAsUnix_3cfeca8
                             (lVar18,0);
          uVar17 = Modules_Contexts_Home_MagicStreakGAE_Scripts_MagicStreakGaeService__GetSegment_3cfed10
                             (lVar18,0);
          iVar11 = Modules_Contexts_Home_MagicStreakGAE_Scripts_MagicStreakGaeService__GetTotalCompletedStepCount_3cfee38
                             (lVar18,0);
          uVar13 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__MagicStreakGaeFinished_2dba304
                             (uVar13,(long)iVar9,(long)iVar10,uVar15,uVar16,uVar17,(long)iVar11,0);
          if (*(int *)(*(long *)PTR_DAT_0575f9f0 + 0xe0) == 0) {
            thunk_FUN_0130472c(*(long *)PTR_DAT_0575f9f0);
          }
          GrandSDK_Analytics_Analytics__Track_2b38d30(uVar13,0);
          Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar19)
          ;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

