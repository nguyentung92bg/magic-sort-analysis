/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendDuckFestivalStageCompleted
void Modules_Contexts_Application_Events_Scripts_EventSender__SendDuckFestivalStageCompleted (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, Modules_Contexts_Application_Reward_Scripts_RewardModel_o* rewardModel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendDuckFestivalStageCompleted
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendDuckFestivalStageCompleted
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this,
   Modules_Contexts_Application_Reward_Scripts_RewardModel_o* rewardModel, const MethodInfo*
   method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendDuckFestivalStageCompleted_1482398
               (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  long lVar17;
  ulong uVar18;
  int *piVar19;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c2383e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_0577fc18);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_05792f78);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_058031d8);
    FUN_012d0dc8(PTR_DAT_05809518);
    FUN_012d0dc8(PTR_DAT_057e4da8);
    FUN_012d0dc8(PTR_DAT_058133c8);
    FUN_012d0dc8(PTR_DAT_05815af0);
    FUN_012d0dc8(PTR_DAT_05764048);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057d3f68);
    bRam0000000005c2383e = 1;
  }
  if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
     (lVar10 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar10 != 0)) {
    lVar10 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar10,*(undefined8 *)PTR_DAT_05792f78);
    if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
       (lVar11 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar11 != 0)) {
      plVar12 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                  (lVar11,*(undefined8 *)PTR_DAT_057a1e60);
      puVar2 = PTR_DAT_057c8a60;
      if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
         (lVar11 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar11 != 0)) {
        lVar11 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                           (lVar11,*(undefined8 *)PTR_DAT_0577fc18);
        lVar13 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
        if ((lVar13 != 0) &&
           (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                      (lVar13,*(undefined8 *)PTR_DAT_05809518,0), puVar3 = PTR_DAT_05815af0,
           puVar2 = PTR_DAT_057e4da8, puVar1 = PTR_DAT_057db748, lVar11 != 0)) {
          uStack_64 = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__GetTournamentStartTime_1b985b8
                                (lVar11,0);
          uVar14 = thunk_FUN_01320a8c(*(undefined8 *)puVar1,&uStack_64);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar13,*(undefined8 *)puVar3,uVar14,0);
          uStack_68 = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__GetRemainingSeconds_1b96ad4
                                (lVar11,0);
          uVar14 = thunk_FUN_01320a8c(*(undefined8 *)puVar1,&uStack_68);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar13,*(undefined8 *)puVar2,uVar14,0);
          puVar3 = PTR_DAT_057caaf0;
          puVar2 = PTR_DAT_057636d0;
          if (plVar12 != (long *)0x0) {
            lVar17 = *plVar12;
            uVar18 = (ulong)*(ushort *)(lVar17 + 0x12a);
            if (uVar18 != 0) {
              piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_057636d0) {
                  puVar15 = (undefined8 *)(lVar17 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                  goto LAB_01582634;
                }
                uVar18 = uVar18 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar18 != 0);
            }
            puVar15 = (undefined8 *)FUN_0131971c(plVar12,*(long *)PTR_DAT_057636d0,1);
LAB_01582634:
            uStack_6c = (*(code *)*puVar15)(plVar12,puVar15[1]);
            uVar14 = thunk_FUN_01320a8c(*(undefined8 *)puVar1,&uStack_6c);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar13,*(undefined8 *)puVar3,uVar14,0);
            puVar5 = PTR_DAT_058133c8;
            puVar4 = PTR_DAT_058031d8;
            puVar3 = PTR_DAT_057d3f68;
            if (lVar10 != 0) {
              uVar14 = Modules_Contexts_Application_ServerCommunication_Scripts_SegmentService__GetSegment_3e2f82c
                                 (lVar10,0);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar13,*(undefined8 *)puVar3,uVar14,0);
              uStack_70 = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__GetRewardStage_1b988b4
                                    (lVar11,0);
              uVar14 = thunk_FUN_01320a8c(*(undefined8 *)puVar1,&uStack_70);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar13,*(undefined8 *)puVar5,uVar14,0);
              if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                thunk_FUN_0130472c();
              }
              puVar1 = PTR_DAT_0575f9f0;
              uVar14 = Newtonsoft_Json_JsonConvert__SerializeObject_35368d4(param_2,0);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar13,*(undefined8 *)PTR_DAT_05764048,uVar14,0);
              iVar6 = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__GetTournamentStartTime_1b985b8
                                (lVar11,0);
              iVar7 = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__GetRemainingSeconds_1b96ad4
                                (lVar11,0);
              lVar17 = *plVar12;
              uVar18 = (ulong)*(ushort *)(lVar17 + 0x12a);
              if (uVar18 != 0) {
                piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar19 + -2) == *(long *)puVar2) {
                    puVar15 = (undefined8 *)(lVar17 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                    goto LAB_01582790;
                  }
                  uVar18 = uVar18 - 1;
                  piVar19 = piVar19 + 4;
                } while (uVar18 != 0);
              }
              puVar15 = (undefined8 *)FUN_0131971c(plVar12,*(long *)puVar2,1);
LAB_01582790:
              iVar8 = (*(code *)*puVar15)(plVar12,puVar15[1]);
              uVar14 = Modules_Contexts_Application_ServerCommunication_Scripts_SegmentService__GetSegment_3e2f82c
                                 (lVar10,0);
              iVar9 = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__GetRewardStage_1b988b4
                                (lVar11,0);
              uVar16 = Newtonsoft_Json_JsonConvert__SerializeObject_35368d4(param_2,0);
              uVar14 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__DuckFestivalStageCompleted_2db2a90
                                 ((long)iVar6,(long)iVar7,(long)iVar8,uVar14,(long)iVar9,uVar16,0);
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_0130472c(*(long *)puVar1);
              }
              GrandSDK_Analytics_Analytics__Track_2b38d30(uVar14,0);
              Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4
                        (param_1,lVar13);
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

