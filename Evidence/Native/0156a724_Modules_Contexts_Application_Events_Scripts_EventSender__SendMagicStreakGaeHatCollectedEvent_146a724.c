/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendMagicStreakGaeHatCollectedEvent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendMagicStreakGaeHatCollectedEvent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, System_String_o* levelId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.Events.Scripts.EventSender$$SendMagicStreakGaeHatCollectedEvent
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendMagicStreakGaeHatCollectedEvent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, System_String_o* levelId,
   const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendMagicStreakGaeHatCollectedEvent_146a724
               (undefined8 param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  int *piVar23;
  undefined4 uStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  undefined8 uStack_78;
  int iStack_70;
  
  puVar2 = PTR_DAT_0576aae0;
  if ((bRam0000000005c237d0 & 1) == 0) {
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
    FUN_012d0dc8(PTR_DAT_057c9ca0);
    FUN_012d0dc8(PTR_DAT_0581a9f8);
    FUN_012d0dc8(PTR_DAT_0579db08);
    FUN_012d0dc8(PTR_DAT_05774660);
    FUN_012d0dc8(PTR_DAT_057fcce8);
    FUN_012d0dc8(PTR_DAT_05784e60);
    FUN_012d0dc8(PTR_DAT_058124b0);
    FUN_012d0dc8(PTR_DAT_0579cca8);
    FUN_012d0dc8(PTR_DAT_0579c3a0);
    FUN_012d0dc8(PTR_DAT_05792228);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057d3f68);
    bRam0000000005c237d0 = 1;
  }
  lVar20 = **(long **)(*(long *)puVar2 + 0xb8);
  if ((lVar20 != 0) && (lVar20 = *(long *)(lVar20 + 0x18), lVar20 != 0)) {
    lVar20 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar20,*(undefined8 *)PTR_DAT_057dc3f0);
    lVar21 = **(long **)(*(long *)puVar2 + 0xb8);
    if ((lVar21 != 0) &&
       (((lVar21 = *(long *)(lVar21 + 0x18), lVar21 != 0 &&
         (plVar14 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                      (lVar21,*(undefined8 *)PTR_DAT_057a1e60),
         puVar3 = PTR_DAT_057c8a60, puVar2 = PTR_DAT_0577a308, lVar20 != 0)) &&
        (lVar21 = *(long *)(lVar20 + 0x60), lVar21 != 0)))) {
      iVar1 = *(int *)(lVar20 + 0x84);
      iVar10 = *(int *)(lVar21 + 0x18);
      if (*(int *)(*(long *)PTR_DAT_057d6f00 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar9 = System_Math__Min_26cd444(iVar1,iVar10 + -1,0);
      iVar10 = System_Collections_Generic_List_int___get_Item_204edf0
                         (lVar21,uVar9,*(undefined8 *)puVar2);
      Modules_Contexts_Home_MagicStreakGAE_Scripts_MagicStreakGaeService__GetViewModel_3cfd114
                (&uStack_78,lVar20,0,0);
      lVar21 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
      puVar3 = PTR_DAT_057c9ca0;
      puVar2 = PTR_DAT_05784e60;
      if (lVar21 != 0) {
        Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                  (lVar21,*(undefined8 *)PTR_DAT_058124b0,0);
        lVar19 = param_2;
        if (param_2 == 0) {
          lVar19 = **(long **)(*(long *)puVar3 + 0xb8);
        }
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar21,*(undefined8 *)puVar2,lVar19,0);
        puVar8 = PTR_DAT_057fcce8;
        puVar7 = PTR_DAT_057db748;
        puVar6 = PTR_DAT_057d6138;
        puVar5 = PTR_DAT_057d3f68;
        puVar4 = PTR_DAT_057caaf0;
        puVar3 = PTR_DAT_0579cca8;
        puVar2 = PTR_DAT_0579c3a0;
        if (plVar14 != (long *)0x0) {
          lVar19 = *plVar14;
          uVar22 = (ulong)*(ushort *)(lVar19 + 0x12a);
          if (uVar22 != 0) {
            piVar23 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_057636d0) {
                puVar15 = (undefined8 *)(lVar19 + (long)(*piVar23 + 1) * 0x10 + 0x138);
                goto LAB_0156aa54;
              }
              uVar22 = uVar22 - 1;
              piVar23 = piVar23 + 4;
            } while (uVar22 != 0);
          }
          puVar15 = (undefined8 *)FUN_0131971c(plVar14,*(long *)PTR_DAT_057636d0,1);
LAB_0156aa54:
          iStack_7c = (*(code *)*puVar15)(plVar14,puVar15[1]);
          iStack_7c = iStack_7c + -1;
          uVar16 = thunk_FUN_01320a8c(*(undefined8 *)puVar7,&iStack_7c);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar21,*(undefined8 *)puVar4,uVar16,0);
          iStack_80 = iVar10;
          uVar16 = thunk_FUN_01320a8c(*(undefined8 *)puVar7,&iStack_80);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar21,*(undefined8 *)puVar2,uVar16,0);
          iStack_84 = iStack_70;
          uVar16 = thunk_FUN_01320a8c(*(undefined8 *)puVar7,&iStack_84);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar21,*(undefined8 *)puVar3,uVar16,0);
          iVar1 = iVar1 + 1;
          iStack_88 = iVar1;
          uVar16 = thunk_FUN_01320a8c(*(undefined8 *)puVar7,&iStack_88);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar21,*(undefined8 *)PTR_DAT_05792228,uVar16,0);
          uVar16 = Modules_Contexts_Home_MagicStreakGAE_Scripts_MagicStreakGaeService__GetTournamentId_3cfec40
                             (lVar20,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar21,*(undefined8 *)puVar8,uVar16,0);
          uStack_78 = Modules_Contexts_Home_MagicStreakGAE_Scripts_MagicStreakGaeService__GetEndTimeAsUnix_3cfeca8
                                (lVar20,0);
          uVar16 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_78);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar21,*(undefined8 *)PTR_DAT_0579db08,uVar16,0);
          uVar16 = Modules_Contexts_Home_MagicStreakGAE_Scripts_MagicStreakGaeService__GetSegment_3cfed10
                             (lVar20,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar21,*(undefined8 *)puVar5,uVar16,0);
          iStack_8c = Modules_Contexts_Home_MagicStreakGAE_Scripts_MagicStreakGaeService__GetTotalCompletedStepCount_3cfee38
                                (lVar20,0);
          iStack_8c = iStack_8c + 1;
          uVar16 = thunk_FUN_01320a8c(*(undefined8 *)puVar7,&iStack_8c);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar21,*(undefined8 *)PTR_DAT_05774660,uVar16,0);
          uStack_90 = Modules_Contexts_Home_MagicStreakGAE_Scripts_MagicStreakGaeService__GetTotalRewardScore_3cfefb0
                                (lVar20,0);
          uVar16 = thunk_FUN_01320a8c(*(undefined8 *)puVar7,&uStack_90);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar21,*(undefined8 *)PTR_DAT_0581a9f8,uVar16,0);
          puVar2 = PTR_DAT_0575f9f0;
          if (param_2 == 0) {
            param_2 = **(long **)(*(long *)PTR_DAT_057c9ca0 + 0xb8);
          }
          lVar19 = *plVar14;
          uVar22 = (ulong)*(ushort *)(lVar19 + 0x12a);
          if (uVar22 != 0) {
            piVar23 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_057636d0) {
                puVar15 = (undefined8 *)(lVar19 + (long)(*piVar23 + 1) * 0x10 + 0x138);
                goto LAB_0156ac88;
              }
              uVar22 = uVar22 - 1;
              piVar23 = piVar23 + 4;
            } while (uVar22 != 0);
          }
          puVar15 = (undefined8 *)FUN_0131971c(plVar14,*(long *)PTR_DAT_057636d0,1);
LAB_0156ac88:
          iVar11 = (*(code *)*puVar15)(plVar14,puVar15[1]);
          uVar16 = Modules_Contexts_Home_MagicStreakGAE_Scripts_MagicStreakGaeService__GetTournamentId_3cfec40
                             (lVar20,0);
          uVar17 = Modules_Contexts_Home_MagicStreakGAE_Scripts_MagicStreakGaeService__GetEndTimeAsUnix_3cfeca8
                             (lVar20,0);
          uVar18 = Modules_Contexts_Home_MagicStreakGAE_Scripts_MagicStreakGaeService__GetSegment_3cfed10
                             (lVar20,0);
          iVar12 = Modules_Contexts_Home_MagicStreakGAE_Scripts_MagicStreakGaeService__GetTotalCompletedStepCount_3cfee38
                             (lVar20,0);
          iVar13 = Modules_Contexts_Home_MagicStreakGAE_Scripts_MagicStreakGaeService__GetTotalRewardScore_3cfefb0
                             (lVar20,0);
          uVar16 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__MagicStreakGaeHatCollected_2db9ec4
                             (param_2,(long)(iVar11 + -1),(long)iVar10,(long)iStack_70,(long)iVar1,
                              uVar16,uVar17,uVar18,(long)(iVar12 + 1),(long)iVar13,0);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_0130472c(*(long *)puVar2);
          }
          GrandSDK_Analytics_Analytics__Track_2b38d30(uVar16,0);
          Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar21)
          ;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

