/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendStrikeShowBallCollected
void Modules_Contexts_Application_Events_Scripts_EventSender__SendStrikeShowBallCollected (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t ballCollected, int32_t totalScore, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendStrikeShowBallCollected
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendStrikeShowBallCollected
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t ballCollected,
   int32_t totalScore, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendStrikeShowBallCollected_149bfb0
               (undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  ulong uVar22;
  int *piVar23;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined4 uStack_64;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c2389b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_0581a738);
    FUN_012d0dc8(PTR_DAT_057a4328);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_0579fa30);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057d6138);
    FUN_012d0dc8(PTR_DAT_057d6f00);
    FUN_012d0dc8(PTR_DAT_057be6f0);
    FUN_012d0dc8(PTR_DAT_057e4da8);
    FUN_012d0dc8(PTR_DAT_0575cf88);
    FUN_012d0dc8(PTR_DAT_05815af0);
    FUN_012d0dc8(PTR_DAT_058157a8);
    FUN_012d0dc8(PTR_DAT_05803ca0);
    FUN_012d0dc8(PTR_DAT_05763528);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057e66c0);
    bRam0000000005c2389b = 1;
  }
  if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
     (lVar8 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar8 != 0)) {
    lVar8 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                      (lVar8,*(undefined8 *)PTR_DAT_057a4328);
    if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
       (lVar9 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar9 != 0)) {
      lVar9 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar9,*(undefined8 *)PTR_DAT_0581a738);
      puVar2 = PTR_DAT_057c8a60;
      if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
         (lVar10 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar10 != 0)) {
        plVar11 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                    (lVar10,*(undefined8 *)PTR_DAT_057a1e60);
        lVar10 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
        if ((lVar10 != 0) &&
           (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                      (lVar10,*(undefined8 *)PTR_DAT_05763528,0), puVar2 = PTR_DAT_057db748,
           puVar1 = PTR_DAT_057caaf0, plVar11 != (long *)0x0)) {
          lVar21 = *plVar11;
          uVar22 = (ulong)*(ushort *)(lVar21 + 0x12a);
          if (uVar22 != 0) {
            piVar23 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
            do {
              if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_057636d0) {
                puVar12 = (undefined8 *)(lVar21 + (long)(*piVar23 + 1) * 0x10 + 0x138);
                goto LAB_0159c204;
              }
              uVar22 = uVar22 - 1;
              piVar23 = piVar23 + 4;
            } while (uVar22 != 0);
          }
          puVar12 = (undefined8 *)FUN_0131971c(plVar11,*(long *)PTR_DAT_057636d0,1);
LAB_0159c204:
          uStack_64 = (*(code *)*puVar12)(plVar11,puVar12[1]);
          uVar13 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&uStack_64);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar10,*(undefined8 *)puVar1,uVar13,0);
          puVar3 = PTR_DAT_05815af0;
          puVar1 = PTR_DAT_057d6138;
          if (lVar9 != 0) {
            uStack_70 = Modules_Contexts_Home_StrikeShow_Scripts_StrikeShowDataService__GetStartTime_2af4480
                                  (lVar9,0);
            uVar13 = thunk_FUN_01320a8c(*(undefined8 *)puVar1,&uStack_70);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar10,*(undefined8 *)puVar3,uVar13,0);
            puVar6 = PTR_DAT_058157a8;
            puVar5 = PTR_DAT_05803ca0;
            puVar4 = PTR_DAT_057e66c0;
            puVar3 = PTR_DAT_057e4da8;
            puVar1 = PTR_DAT_057d6f00;
            if (lVar8 != 0) {
              uVar7 = Modules_Contexts_Home_StrikeShow_Scripts_StrikeShowService__GetRemainingSeconds_2af6738
                                (lVar8,0);
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_0130472c(*(long *)puVar1);
              }
              uStack_74 = System_Math__Max_26cd24c(uVar7,0,0);
              uVar13 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&uStack_74);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar10,*(undefined8 *)puVar3,uVar13,0);
              uVar13 = Modules_Contexts_Home_StrikeShow_Scripts_StrikeShowService__GetReadableEventId_2af82cc
                                 (lVar8,0);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar10,*(undefined8 *)puVar4,uVar13,0);
              uVar13 = Modules_Contexts_Home_StrikeShow_Scripts_StrikeShowDataService__GetLeaderboardId_2af44c8
                                 (lVar9,0);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar10,*(undefined8 *)puVar5,uVar13,0);
              uStack_78 = param_2;
              uVar13 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&uStack_78);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar10,*(undefined8 *)puVar6,uVar13,0);
              uStack_7c = param_3;
              uVar13 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&uStack_7c);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar10,*(undefined8 *)PTR_DAT_057be6f0,uVar13,0);
              uStack_80 = Modules_Contexts_Home_StrikeShow_Scripts_StrikeShowService__GetCurrentMultiplier_2af711c
                                    (lVar8,0);
              uVar13 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&uStack_80);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar10,*(undefined8 *)PTR_DAT_0575cf88,uVar13,0);
              lVar21 = *plVar11;
              uVar22 = (ulong)*(ushort *)(lVar21 + 0x12a);
              if (uVar22 != 0) {
                piVar23 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_057636d0) {
                    puVar12 = (undefined8 *)(lVar21 + (long)(*piVar23 + 1) * 0x10 + 0x138);
                    goto LAB_0159c438;
                  }
                  uVar22 = uVar22 - 1;
                  piVar23 = piVar23 + 4;
                } while (uVar22 != 0);
              }
              puVar12 = (undefined8 *)FUN_0131971c(plVar11,*(long *)PTR_DAT_057636d0,1);
LAB_0159c438:
              puVar1 = PTR_DAT_0575f9f0;
              uVar7 = (*(code *)*puVar12)(plVar11,puVar12[1]);
              if (*(int *)(*(long *)PTR_DAT_0579fa30 + 0xe0) == 0) {
                thunk_FUN_0130472c(*(long *)PTR_DAT_0579fa30);
              }
              uVar13 = System_Convert__ToInt64_2130964(uVar7,0);
              uVar14 = Modules_Contexts_Home_StrikeShow_Scripts_StrikeShowDataService__GetStartTime_2af4480
                                 (lVar9,0);
              uVar14 = System_Convert__ToInt64_21309c8(uVar14,0);
              uVar15 = Modules_Contexts_Home_StrikeShow_Scripts_StrikeShowService__GetRemainingSeconds_2af6738
                                 (lVar8,0);
              uVar15 = System_Math__Max_26cd24c(uVar15,0,0);
              uVar15 = System_Convert__ToInt64_2130964(uVar15,0);
              uVar16 = Modules_Contexts_Home_StrikeShow_Scripts_StrikeShowService__GetReadableEventId_2af82cc
                                 (lVar8,0);
              uVar17 = Modules_Contexts_Home_StrikeShow_Scripts_StrikeShowDataService__GetLeaderboardId_2af44c8
                                 (lVar9,0);
              uVar18 = System_Convert__ToInt64_2130964(param_2,0);
              uVar19 = System_Convert__ToInt64_2130964(param_3,0);
              uVar20 = Modules_Contexts_Home_StrikeShow_Scripts_StrikeShowService__GetCurrentMultiplier_2af711c
                                 (lVar8,0);
              uVar20 = System_Convert__ToInt64_2130964(uVar20,0);
              uVar13 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__StrikeShowBallCollected_2dbf8b0
                                 (uVar13,uVar14,uVar15,uVar16,uVar17,uVar18,uVar19,uVar20,0);
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_0130472c(*(long *)puVar1);
              }
              GrandSDK_Analytics_Analytics__Track_2b38d30(uVar13,0);
              Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4
                        (param_1,lVar10);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

