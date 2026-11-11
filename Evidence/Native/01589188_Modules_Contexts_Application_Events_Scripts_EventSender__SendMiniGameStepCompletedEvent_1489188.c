/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendMiniGameStepCompletedEvent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendMiniGameStepCompletedEvent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t completedStep, Modules_Contexts_Application_Reward_Scripts_RewardModel_o* rewardModel, int32_t usedTridentCount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendMiniGameStepCompletedEvent
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendMiniGameStepCompletedEvent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t completedStep,
   Modules_Contexts_Application_Reward_Scripts_RewardModel_o* rewardModel, int32_t usedTridentCount,
   const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendMiniGameStepCompletedEvent_1489188
               (undefined8 param_1,int param_2,long param_3,int param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined4 uVar16;
  int iVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  int *piVar22;
  long lVar23;
  long lVar24;
  double dVar25;
  int iStack_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  
  puVar2 = PTR_DAT_0576aae0;
  if ((bRam0000000005c23854 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_057c3020);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057d6138);
    FUN_012d0dc8(PTR_DAT_0577d870);
    FUN_012d0dc8(PTR_DAT_05761888);
    FUN_012d0dc8(PTR_DAT_0576c1b8);
    FUN_012d0dc8(PTR_DAT_05811fe8);
    FUN_012d0dc8(PTR_DAT_05772560);
    FUN_012d0dc8(PTR_DAT_0579ec40);
    FUN_012d0dc8(PTR_DAT_057e4da8);
    FUN_012d0dc8(PTR_DAT_057b8b10);
    FUN_012d0dc8(PTR_DAT_0575a580);
    FUN_012d0dc8(PTR_DAT_05782070);
    FUN_012d0dc8(PTR_DAT_057fa200);
    FUN_012d0dc8(PTR_DAT_05774390);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_05765b50);
    FUN_012d0dc8(PTR_DAT_057d3f68);
    FUN_012d0dc8(PTR_DAT_058043c0);
    FUN_012d0dc8(PTR_DAT_0576a9b8);
    bRam0000000005c23854 = 1;
  }
  uStack_68 = 0;
  uStack_6c = 0;
  lVar18 = **(long **)(*(long *)puVar2 + 0xb8);
  if ((lVar18 != 0) && (lVar18 = *(long *)(lVar18 + 0x18), lVar18 != 0)) {
    lVar18 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar18,*(undefined8 *)PTR_DAT_057c3020);
    puVar3 = PTR_DAT_057c8a60;
    lVar19 = **(long **)(*(long *)puVar2 + 0xb8);
    if ((lVar19 != 0) && (lVar19 = *(long *)(lVar19 + 0x18), lVar19 != 0)) {
      plVar9 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                 (lVar19,*(undefined8 *)PTR_DAT_057a1e60);
      lVar19 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
      if ((lVar19 != 0) &&
         (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                    (lVar19,*(undefined8 *)PTR_DAT_05765b50,0), puVar5 = PTR_DAT_057e4da8,
         puVar6 = PTR_DAT_057d6138, puVar4 = PTR_DAT_057d3f68, puVar3 = PTR_DAT_057b8b10,
         puVar2 = PTR_DAT_0575a580, lVar18 != 0)) {
        uVar10 = Modules_Contexts_Home_MiniGame_Scripts_MiniGameService__GetEventId_20b5d9c
                           (lVar18,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar19,*(undefined8 *)puVar2,uVar10,0);
        uStack_78 = Modules_Contexts_Home_MiniGame_Scripts_MiniGameService__GetStartTimeAsUnix_20b5d84
                              (lVar18,0);
        uVar10 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_78);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar19,*(undefined8 *)puVar3,uVar10,0);
        uStack_80 = Modules_Contexts_Home_MiniGame_Scripts_MiniGameService__GetRemainingSeconds_20b5b9c
                              (lVar18,0);
        uVar10 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_80);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar19,*(undefined8 *)puVar5,uVar10,0);
        uVar10 = Modules_Contexts_Home_MiniGame_Scripts_MiniGameService__GetSegment_20b58f0
                           (lVar18,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar19,*(undefined8 *)puVar4,uVar10,0);
        puVar6 = PTR_DAT_057db748;
        puVar4 = PTR_DAT_057caaf0;
        puVar3 = PTR_DAT_0579ec40;
        puVar2 = PTR_DAT_05772560;
        if (plVar9 != (long *)0x0) {
          lVar20 = *plVar9;
          uVar21 = (ulong)*(ushort *)(lVar20 + 0x12a);
          if (uVar21 != 0) {
            piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_057636d0) {
                puVar11 = (undefined8 *)(lVar20 + (long)(*piVar22 + 1) * 0x10 + 0x138);
                goto LAB_015894e0;
              }
              uVar21 = uVar21 - 1;
              piVar22 = piVar22 + 4;
            } while (uVar21 != 0);
          }
          puVar11 = (undefined8 *)FUN_0131971c(plVar9,*(long *)PTR_DAT_057636d0,1);
LAB_015894e0:
          puVar5 = PTR_DAT_05811fe8;
          uStack_84 = (*(code *)*puVar11)(plVar9,puVar11[1]);
          uVar10 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_84);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar19,*(undefined8 *)puVar4,uVar10,0);
          iStack_88 = param_2 + 1;
          uVar10 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&iStack_88);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar19,*(undefined8 *)puVar3,uVar10,0);
          puVar3 = PTR_DAT_057fa200;
          uVar10 = *(undefined8 *)puVar2;
          if (param_3 == 0) {
            uVar16 = 0;
          }
          else {
            uVar16 = *(undefined4 *)(param_3 + 0x10);
          }
          uStack_78._0_4_ = uVar16;
          uVar12 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_78);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310(lVar19,uVar10,uVar12,0)
          ;
          puVar4 = PTR_DAT_058043c0;
          puVar2 = PTR_DAT_0576c1b8;
          uVar10 = *(undefined8 *)puVar5;
          if (param_3 == 0) {
            uVar16 = 0;
          }
          else {
            uVar16 = *(undefined4 *)(param_3 + 0x14);
          }
          uStack_78 = CONCAT44(uStack_78._4_4_,uVar16);
          uVar12 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_78);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310(lVar19,uVar10,uVar12,0)
          ;
          uVar10 = *(undefined8 *)puVar3;
          if (param_3 == 0) {
            dVar25 = 0.0;
          }
          else {
            uStack_68 = *(undefined8 *)(param_3 + 0x18);
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_0130472c();
            }
            dVar25 = (double)System_TimeSpan__get_TotalSeconds_26999ac(&uStack_68,0);
          }
          puVar5 = PTR_DAT_05782070;
          puVar3 = PTR_DAT_05761888;
          iVar7 = -0x80000000;
          if (dVar25 != INFINITY) {
            iVar7 = (int)dVar25;
          }
          uStack_78 = CONCAT44(uStack_78._4_4_,iVar7);
          uVar12 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_78);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310(lVar19,uVar10,uVar12,0)
          ;
          uVar10 = *(undefined8 *)puVar4;
          if (param_3 == 0) {
            uStack_78 = 0;
          }
          else {
            uStack_78 = 0;
            System_Nullable_int____ctor_203c398
                      (&uStack_78,*(undefined4 *)(param_3 + 0x28),*(undefined8 *)PTR_DAT_0577d870);
          }
          puVar4 = PTR_DAT_0576a9b8;
          uVar12 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_78);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310(lVar19,uVar10,uVar12,0)
          ;
          iVar7 = Modules_Contexts_Home_MiniGame_Scripts_MiniGameService__GetTridentCount_20b6084
                            (lVar18,0);
          puVar3 = PTR_DAT_057636d0;
          uVar10 = *(undefined8 *)puVar5;
          if ((param_3 == 0) || (*(int *)(param_3 + 0x10) != 0x11)) {
            iVar8 = 0;
          }
          else {
            iVar8 = *(int *)(param_3 + 0x14);
          }
          uStack_78 = CONCAT44(uStack_78._4_4_,iVar7 - iVar8);
          uVar12 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_78);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310(lVar19,uVar10,uVar12,0)
          ;
          uStack_80 = CONCAT44(uStack_80._4_4_,param_4);
          uVar10 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_80);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar19,*(undefined8 *)puVar4,uVar10,0);
          uVar10 = Modules_Contexts_Home_MiniGame_Scripts_MiniGameService__GetEventId_20b5d9c
                             (lVar18,0);
          uVar12 = Modules_Contexts_Home_MiniGame_Scripts_MiniGameService__GetStartTimeAsUnix_20b5d84
                             (lVar18,0);
          uVar13 = Modules_Contexts_Home_MiniGame_Scripts_MiniGameService__GetRemainingSeconds_20b5b9c
                             (lVar18,0);
          uVar14 = Modules_Contexts_Home_MiniGame_Scripts_MiniGameService__GetSegment_20b58f0
                             (lVar18,0);
          lVar20 = *plVar9;
          uVar21 = (ulong)*(ushort *)(lVar20 + 0x12a);
          if (uVar21 != 0) {
            piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(long *)(piVar22 + -2) == *(long *)puVar3) {
                puVar11 = (undefined8 *)(lVar20 + (long)(*piVar22 + 1) * 0x10 + 0x138);
                goto LAB_015897c8;
              }
              uVar21 = uVar21 - 1;
              piVar22 = piVar22 + 4;
            } while (uVar21 != 0);
          }
          puVar11 = (undefined8 *)FUN_0131971c(plVar9,*(long *)puVar3,1);
LAB_015897c8:
          puVar3 = PTR_DAT_05774390;
          iVar7 = (*(code *)*puVar11)(plVar9,puVar11[1]);
          if (param_3 == 0) {
            lVar23 = 0;
            lVar24 = 0;
            lVar15 = 0;
            lVar20 = 0;
          }
          else {
            uStack_68 = *(undefined8 *)(param_3 + 0x18);
            lVar24 = (long)*(int *)(param_3 + 0x10);
            lVar23 = (long)*(int *)(param_3 + 0x14);
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_0130472c();
            }
            dVar25 = (double)System_TimeSpan__get_TotalSeconds_26999ac(&uStack_68,0);
            uStack_6c = *(undefined4 *)(param_3 + 0x28);
            lVar20 = -0x80000000;
            if (dVar25 != INFINITY) {
              lVar20 = (long)(int)dVar25;
            }
            lVar15 = System_Int32__ToString_26c9768(&uStack_6c,0);
          }
          puVar2 = PTR_DAT_0575f9f0;
          lVar1 = *(long *)puVar3;
          if (lVar15 != 0) {
            lVar1 = lVar15;
          }
          iVar8 = Modules_Contexts_Home_MiniGame_Scripts_MiniGameService__GetTridentCount_20b6084
                            (lVar18,0);
          if ((param_3 == 0) || (*(int *)(param_3 + 0x10) != 0x11)) {
            iVar17 = 0;
          }
          else {
            iVar17 = *(int *)(param_3 + 0x14);
          }
          uVar10 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__UnderwaterTreasuresStepCompleted_2db3e28
                             (uVar10,uVar12,uVar13,uVar14,(long)iVar7,(long)(param_2 + 1),lVar24,
                              lVar23,lVar20,lVar1,(long)(iVar8 - iVar17),(long)param_4,0);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_0130472c(*(long *)puVar2);
          }
          GrandSDK_Analytics_Analytics__Track_2b38d30(uVar10,0);
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

