/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardService$$TryStartNewEvent
void Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__TryStartNewEvent (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService_o* __this, Modules_Contexts_Home_DailyReward_Scripts_DailyRewardEventInfoResponse_o* response, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardService$$TryStartNewEvent
   void Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__TryStartNewEvent
   (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService_o* __this,
   Modules_Contexts_Home_DailyReward_Scripts_DailyRewardEventInfoResponse_o* response, const
   MethodInfo* method); */

void Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__TryStartNewEvent_38d3d98
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  int *piVar19;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar7 = Modules_Contexts_Home_DailyReward_Scripts_DailyRewardStateService__GetEventState_38d4d24
                      ();
    if ((5 < uVar7) || ((1 << (ulong)(uVar7 & 0x1f) & 0x29U) == 0)) {
      return;
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService__StartNewEvent_38d01f8
                (*(long *)(param_1 + 0x10),param_2);
      if (cRam0000000005c230a8 == '\0') {
        FUN_012d0dc8(PTR_DAT_057ece38);
        cRam0000000005c230a8 = '\x01';
      }
      puVar1 = PTR_DAT_0576aae0;
      lVar14 = **(long **)(*(long *)PTR_DAT_057ece38 + 0xb8);
      if (lVar14 != 0) {
        if ((bRam0000000005c237ee & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_0575f9f0,0);
          FUN_012d0dc8(PTR_DAT_0575c778);
          FUN_012d0dc8(PTR_DAT_057a1e60);
          FUN_012d0dc8(PTR_DAT_0576aae0);
          FUN_012d0dc8(PTR_DAT_057c8a60);
          FUN_012d0dc8(PTR_DAT_057636d0);
          FUN_012d0dc8(PTR_DAT_057db748);
          FUN_012d0dc8(PTR_DAT_057d6138);
          FUN_012d0dc8(PTR_DAT_057e4da8);
          FUN_012d0dc8(PTR_DAT_057b8b10);
          FUN_012d0dc8(PTR_DAT_0575a580);
          FUN_012d0dc8(PTR_DAT_057948c0);
          FUN_012d0dc8(PTR_DAT_057caaf0);
          FUN_012d0dc8(PTR_DAT_057d3f68);
          bRam0000000005c237ee = 1;
        }
        lVar15 = **(long **)(*(long *)puVar1 + 0xb8);
        if ((lVar15 != 0) && (lVar15 = *(long *)(lVar15 + 0x18), lVar15 != 0)) {
          lVar15 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                             (lVar15,*(undefined8 *)PTR_DAT_0575c778);
          puVar3 = PTR_DAT_057c8a60;
          lVar16 = **(long **)(*(long *)puVar1 + 0xb8);
          if ((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x18), lVar16 != 0)) {
            plVar8 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                       (lVar16,*(undefined8 *)PTR_DAT_057a1e60);
            lVar16 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
            if ((lVar16 != 0) &&
               (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                          (lVar16,*(undefined8 *)PTR_DAT_057948c0,0), puVar5 = PTR_DAT_057e4da8,
               puVar2 = PTR_DAT_057d6138, puVar4 = PTR_DAT_057d3f68, puVar3 = PTR_DAT_057b8b10,
               puVar1 = PTR_DAT_0575a580, lVar15 != 0)) {
              uStack_58 = Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__GetStartTimeAsUnix_38d4270
                                    (lVar15,0);
              uVar9 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&uStack_58);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar16,*(undefined8 *)puVar3,uVar9,0);
              uStack_60 = Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__GetRemainingSeconds_38d4064
                                    (lVar15,0);
              uVar9 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&uStack_60);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar16,*(undefined8 *)puVar5,uVar9,0);
              uVar9 = Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__GetSegment_38d4288
                                (lVar15,0);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar16,*(undefined8 *)puVar4,uVar9,0);
              uVar9 = Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__GetEventId_38d42a0
                                (lVar15,0);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar16,*(undefined8 *)puVar1,uVar9,0);
              puVar4 = PTR_DAT_057db748;
              puVar3 = PTR_DAT_057caaf0;
              puVar1 = PTR_DAT_057636d0;
              if (plVar8 != (long *)0x0) {
                lVar17 = *plVar8;
                uVar18 = (ulong)*(ushort *)(lVar17 + 0x12a);
                if (uVar18 != 0) {
                  piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_057636d0) {
                      puVar10 = (undefined8 *)(lVar17 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                      goto LAB_01571580;
                    }
                    uVar18 = uVar18 - 1;
                    piVar19 = piVar19 + 4;
                  } while (uVar18 != 0);
                }
                puVar10 = (undefined8 *)FUN_0131971c(plVar8,*(long *)PTR_DAT_057636d0,1);
LAB_01571580:
                puVar2 = PTR_DAT_0575f9f0;
                uStack_64 = (*(code *)*puVar10)(plVar8,puVar10[1]);
                uVar9 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_64);
                Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                          (lVar16,*(undefined8 *)puVar3,uVar9,0);
                uVar9 = Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__GetStartTimeAsUnix_38d4270
                                  (lVar15,0);
                uVar11 = Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__GetRemainingSeconds_38d4064
                                   (lVar15,0);
                uVar12 = Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__GetSegment_38d4288
                                   (lVar15,0);
                uVar13 = Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__GetEventId_38d42a0
                                   (lVar15,0);
                lVar15 = *plVar8;
                uVar18 = (ulong)*(ushort *)(lVar15 + 0x12a);
                if (uVar18 != 0) {
                  piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar19 + -2) == *(long *)puVar1) {
                      puVar10 = (undefined8 *)(lVar15 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                      goto LAB_0157164c;
                    }
                    uVar18 = uVar18 - 1;
                    piVar19 = piVar19 + 4;
                  } while (uVar18 != 0);
                }
                puVar10 = (undefined8 *)FUN_0131971c(plVar8,*(long *)puVar1,1);
LAB_0157164c:
                iVar6 = (*(code *)*puVar10)(plVar8,puVar10[1]);
                uVar9 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__DailyBonusStarted_2daeb8c
                                  (uVar9,uVar11,uVar12,uVar13,(long)iVar6,0);
                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                  thunk_FUN_0130472c(*(long *)puVar2);
                }
                GrandSDK_Analytics_Analytics__Track_2b38d30(uVar9,0);
                Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4
                          (lVar14,lVar16);
                return;
              }
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

