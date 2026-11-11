/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendMagicStreakGaePopupImpressionEvent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendMagicStreakGaePopupImpressionEvent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.Events.Scripts.EventSender$$SendMagicStreakGaePopupImpressionEvent
   void 
   Modules_Contexts_Application_Events_Scripts_EventSender__SendMagicStreakGaePopupImpressionEvent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendMagicStreakGaePopupImpressionEvent_146a080
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  undefined8 auStack_78 [3];
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c237ce & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057dc3f0);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057d6138);
    FUN_012d0dc8(PTR_DAT_057c3c28);
    FUN_012d0dc8(PTR_DAT_0577a308);
    FUN_012d0dc8(PTR_DAT_057d6f00);
    FUN_012d0dc8(PTR_DAT_057e4da8);
    FUN_012d0dc8(PTR_DAT_0579db08);
    FUN_012d0dc8(PTR_DAT_057d6050);
    FUN_012d0dc8(PTR_DAT_057fcce8);
    FUN_012d0dc8(PTR_DAT_0579cca8);
    FUN_012d0dc8(PTR_DAT_0579c3a0);
    FUN_012d0dc8(PTR_DAT_05792228);
    FUN_012d0dc8(PTR_DAT_057d3f68);
    bRam0000000005c237ce = 1;
  }
  if (((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
      (lVar10 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar10 != 0)) &&
     (lVar10 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                         (lVar10,*(undefined8 *)PTR_DAT_057dc3f0), lVar10 != 0)) {
    lVar14 = *(long *)(lVar10 + 0x60);
    iVar6 = Modules_Contexts_Home_MagicStreakGAE_Scripts_MagicStreakGaeService__GetCurrentStreakMultiplierIndex_3cf3840
                      (lVar10,0);
    puVar2 = PTR_DAT_057c8a60;
    puVar1 = PTR_DAT_0577a308;
    if (lVar14 != 0) {
      iVar8 = *(int *)(lVar14 + 0x18);
      if (*(int *)(*(long *)PTR_DAT_057d6f00 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar7 = System_Math__Min_26cd444(iVar6,iVar8 + -1,0);
      iVar8 = System_Collections_Generic_List_int___get_Item_204edf0
                        (lVar14,uVar7,*(undefined8 *)puVar1);
      Modules_Contexts_Home_MagicStreakGAE_Scripts_MagicStreakGaeService__GetViewModel_3cfd114
                (auStack_78,lVar10,0,0);
      lVar14 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
      puVar5 = PTR_DAT_057e4da8;
      puVar4 = PTR_DAT_057db748;
      puVar3 = PTR_DAT_0579cca8;
      puVar2 = PTR_DAT_0579c3a0;
      puVar1 = PTR_DAT_05792228;
      if (lVar14 != 0) {
        lVar15 = (long)(int)auStack_78[0];
        Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                  (lVar14,*(undefined8 *)PTR_DAT_057d6050,0);
        uStack_7c = Modules_Contexts_Home_MagicStreakGAE_Scripts_MagicStreakGaeService__GetRemainingSeconds_3cfed28
                              (lVar10,0);
        uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_7c);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar14,*(undefined8 *)puVar5,uVar11,0);
        iStack_80 = iVar8;
        uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&iStack_80);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar14,*(undefined8 *)puVar2,uVar11,0);
        iStack_84 = (int)auStack_78[0];
        uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&iStack_84);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar14,*(undefined8 *)puVar3,uVar11,0);
        iStack_88 = iVar6 + 1;
        uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&iStack_88);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar14,*(undefined8 *)puVar1,uVar11,0);
        uVar11 = Modules_Contexts_Home_MagicStreakGAE_Scripts_MagicStreakGaeService__GetTournamentId_3cfec40
                           (lVar10,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar14,*(undefined8 *)PTR_DAT_057fcce8,uVar11,0);
        auStack_78[0] =
             Modules_Contexts_Home_MagicStreakGAE_Scripts_MagicStreakGaeService__GetEndTimeAsUnix_3cfeca8
                       (lVar10,0);
        uVar11 = thunk_FUN_01320a8c(*(undefined8 *)PTR_DAT_057d6138,auStack_78);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar14,*(undefined8 *)PTR_DAT_0579db08,uVar11,0);
        uVar11 = Modules_Contexts_Home_MagicStreakGAE_Scripts_MagicStreakGaeService__GetSegment_3cfed10
                           (lVar10,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar14,*(undefined8 *)PTR_DAT_057d3f68,uVar11,0);
        iVar9 = Modules_Contexts_Home_MagicStreakGAE_Scripts_MagicStreakGaeService__GetRemainingSeconds_3cfed28
                          (lVar10,0);
        uVar11 = Modules_Contexts_Home_MagicStreakGAE_Scripts_MagicStreakGaeService__GetTournamentId_3cfec40
                           (lVar10,0);
        uVar12 = Modules_Contexts_Home_MagicStreakGAE_Scripts_MagicStreakGaeService__GetEndTimeAsUnix_3cfeca8
                           (lVar10,0);
        uVar13 = Modules_Contexts_Home_MagicStreakGAE_Scripts_MagicStreakGaeService__GetSegment_3cfed10
                           (lVar10,0);
        uVar11 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__MagicStreakGaePopupImpression_2db9cd8
                           ((long)iVar9,(long)iVar8,lVar15,(long)(iVar6 + 1),uVar11,uVar12,uVar13,0)
        ;
        if (*(int *)(*(long *)PTR_DAT_0575f9f0 + 0xe0) == 0) {
          thunk_FUN_0130472c(*(long *)PTR_DAT_0575f9f0);
        }
        GrandSDK_Analytics_Analytics__Track_2b38d30(uVar11,0);
        Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar14);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

