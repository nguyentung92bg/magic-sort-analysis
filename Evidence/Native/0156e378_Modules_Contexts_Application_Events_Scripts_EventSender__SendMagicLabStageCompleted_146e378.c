/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendMagicLabStageCompleted
void Modules_Contexts_Application_Events_Scripts_EventSender__SendMagicLabStageCompleted (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t stageId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendMagicLabStageCompleted
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendMagicLabStageCompleted
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t stageId, const
   MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendMagicLabStageCompleted_146e378
               (undefined8 param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  int *piVar20;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c237dd & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_0576f1a0);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057e4da8);
    FUN_012d0dc8(PTR_DAT_057c80d8);
    FUN_012d0dc8(PTR_DAT_05777748);
    FUN_012d0dc8(PTR_DAT_0575a580);
    FUN_012d0dc8(PTR_DAT_057ea800);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057d3f68);
    FUN_012d0dc8(PTR_DAT_057e66c0);
    bRam0000000005c237dd = 1;
  }
  lVar16 = **(long **)(*(long *)puVar1 + 0xb8);
  if ((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x18), lVar16 != 0)) {
    lVar16 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar16,*(undefined8 *)PTR_DAT_0576f1a0);
    puVar3 = PTR_DAT_057c8a60;
    lVar17 = **(long **)(*(long *)puVar1 + 0xb8);
    if ((lVar17 != 0) && (lVar17 = *(long *)(lVar17 + 0x18), lVar17 != 0)) {
      plVar11 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                  (lVar17,*(undefined8 *)PTR_DAT_057a1e60);
      lVar17 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
      if ((lVar17 != 0) &&
         (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                    (lVar17,*(undefined8 *)PTR_DAT_057c80d8,0), puVar7 = PTR_DAT_057ea800,
         puVar6 = PTR_DAT_057e66c0, puVar5 = PTR_DAT_057e4da8, puVar4 = PTR_DAT_057db748,
         puVar2 = PTR_DAT_057d3f68, puVar3 = PTR_DAT_05777748, puVar1 = PTR_DAT_0575a580,
         lVar16 != 0)) {
        uStack_64 = Modules_Contexts_Home_MagicLab_Scripts_MagicLabService__GetRemainingSecondsOfEvent_3753c9c
                              (lVar16,0);
        uVar12 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_64);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar17,*(undefined8 *)puVar5,uVar12,0);
        uVar12 = Modules_Contexts_Home_MagicLab_Scripts_MagicLabService__GetSegment_375417c
                           (lVar16,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar17,*(undefined8 *)puVar2,uVar12,0);
        iStack_68 = param_2;
        uVar12 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&iStack_68);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar17,*(undefined8 *)puVar7,uVar12,0);
        uStack_6c = Modules_Contexts_Home_MagicLab_Scripts_MagicLabService__GetCompletedTaskCountInStage_3754134
                              (lVar16,param_2 + 1,0);
        uVar12 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_6c);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar17,*(undefined8 *)puVar3,uVar12,0);
        uVar12 = Modules_Contexts_Home_MagicLab_Scripts_MagicLabService__GetEventId_3753ea4
                           (lVar16,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar17,*(undefined8 *)puVar1,uVar12,0);
        uVar12 = Modules_Contexts_Home_MagicLab_Scripts_MagicLabService__GetReadableEventId_37541ac
                           (lVar16,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar17,*(undefined8 *)puVar6,uVar12,0);
        puVar3 = PTR_DAT_057caaf0;
        puVar1 = PTR_DAT_057636d0;
        if (plVar11 != (long *)0x0) {
          lVar18 = *plVar11;
          uVar19 = (ulong)*(ushort *)(lVar18 + 0x12a);
          if (uVar19 != 0) {
            piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_057636d0) {
                puVar13 = (undefined8 *)(lVar18 + (long)(*piVar20 + 1) * 0x10 + 0x138);
                goto LAB_0156e690;
              }
              uVar19 = uVar19 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar19 != 0);
          }
          puVar13 = (undefined8 *)FUN_0131971c(plVar11,*(long *)PTR_DAT_057636d0,1);
LAB_0156e690:
          puVar2 = PTR_DAT_0575f9f0;
          uStack_70 = (*(code *)*puVar13)(plVar11,puVar13[1]);
          uVar12 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_70);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar17,*(undefined8 *)puVar3,uVar12,0);
          iVar8 = Modules_Contexts_Home_MagicLab_Scripts_MagicLabService__GetRemainingSecondsOfEvent_3753c9c
                            (lVar16,0);
          uVar12 = Modules_Contexts_Home_MagicLab_Scripts_MagicLabService__GetSegment_375417c
                             (lVar16,0);
          iVar9 = Modules_Contexts_Home_MagicLab_Scripts_MagicLabService__GetCompletedTaskCountInStage_3754134
                            (lVar16,param_2 + 1,0);
          uVar14 = Modules_Contexts_Home_MagicLab_Scripts_MagicLabService__GetEventId_3753ea4
                             (lVar16,0);
          uVar15 = Modules_Contexts_Home_MagicLab_Scripts_MagicLabService__GetReadableEventId_37541ac
                             (lVar16,0);
          lVar16 = *plVar11;
          uVar19 = (ulong)*(ushort *)(lVar16 + 0x12a);
          if (uVar19 != 0) {
            piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *(long *)puVar1) {
                puVar13 = (undefined8 *)(lVar16 + (long)(*piVar20 + 1) * 0x10 + 0x138);
                goto LAB_0156e770;
              }
              uVar19 = uVar19 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar19 != 0);
          }
          puVar13 = (undefined8 *)FUN_0131971c(plVar11,*(long *)puVar1,1);
LAB_0156e770:
          iVar10 = (*(code *)*puVar13)(plVar11,puVar13[1]);
          uVar12 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__MagicLabStageCompleted_2dad580
                             ((long)iVar8,uVar12,(long)param_2,(long)iVar9,uVar14,uVar15,
                              (long)iVar10,0);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_0130472c(*(long *)puVar2);
          }
          GrandSDK_Analytics_Analytics__Track_2b38d30(uVar12,0);
          Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar17)
          ;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

