/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendMagicStreakGaeInfoImpressionEvent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendMagicStreakGaeInfoImpressionEvent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.Events.Scripts.EventSender$$SendMagicStreakGaeInfoImpressionEvent
   void 
   Modules_Contexts_Application_Events_Scripts_EventSender__SendMagicStreakGaeInfoImpressionEvent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendMagicStreakGaeInfoImpressionEvent_146a47c
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uStack_68;
  undefined4 uStack_54;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c237cf & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057dc3f0);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057d6138);
    FUN_012d0dc8(PTR_DAT_057e4da8);
    FUN_012d0dc8(PTR_DAT_0579db08);
    FUN_012d0dc8(PTR_DAT_057fcce8);
    FUN_012d0dc8(PTR_DAT_057f1470);
    FUN_012d0dc8(PTR_DAT_057d3f68);
    bRam0000000005c237cf = 1;
  }
  puVar2 = PTR_DAT_057c8a60;
  if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
     (lVar9 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar9 != 0)) {
    lVar9 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                      (lVar9,*(undefined8 *)PTR_DAT_057dc3f0);
    lVar10 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
    if ((lVar10 != 0) &&
       (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                  (lVar10,*(undefined8 *)PTR_DAT_057f1470,0), puVar7 = PTR_DAT_057fcce8,
       puVar6 = PTR_DAT_057e4da8, puVar5 = PTR_DAT_057db748, puVar4 = PTR_DAT_057d6138,
       puVar3 = PTR_DAT_057d3f68, puVar2 = PTR_DAT_0579db08, puVar1 = PTR_DAT_0575f9f0, lVar9 != 0))
    {
      uStack_54 = Modules_Contexts_Home_MagicStreakGAE_Scripts_MagicStreakGaeService__GetRemainingSeconds_3cfed28
                            (lVar9,0);
      uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_54);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar10,*(undefined8 *)puVar6,uVar11,0);
      uVar11 = Modules_Contexts_Home_MagicStreakGAE_Scripts_MagicStreakGaeService__GetTournamentId_3cfec40
                         (lVar9,0);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar10,*(undefined8 *)puVar7,uVar11,0);
      uStack_68 = Modules_Contexts_Home_MagicStreakGAE_Scripts_MagicStreakGaeService__GetEndTimeAsUnix_3cfeca8
                            (lVar9,0);
      uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_68);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar10,*(undefined8 *)puVar2,uVar11,0);
      uVar11 = Modules_Contexts_Home_MagicStreakGAE_Scripts_MagicStreakGaeService__GetSegment_3cfed10
                         (lVar9,0);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar10,*(undefined8 *)puVar3,uVar11,0);
      iVar8 = Modules_Contexts_Home_MagicStreakGAE_Scripts_MagicStreakGaeService__GetRemainingSeconds_3cfed28
                        (lVar9,0);
      uVar11 = Modules_Contexts_Home_MagicStreakGAE_Scripts_MagicStreakGaeService__GetTournamentId_3cfec40
                         (lVar9,0);
      uVar12 = Modules_Contexts_Home_MagicStreakGAE_Scripts_MagicStreakGaeService__GetEndTimeAsUnix_3cfeca8
                         (lVar9,0);
      uVar13 = Modules_Contexts_Home_MagicStreakGAE_Scripts_MagicStreakGaeService__GetSegment_3cfed10
                         (lVar9,0);
      uVar11 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__MagicStreakGaeInfoImpression_2db9df0
                         ((long)iVar8,uVar11,uVar12,uVar13,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c(*(long *)puVar1);
      }
      GrandSDK_Analytics_Analytics__Track_2b38d30(uVar11,0);
      Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar10);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

