/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendWheelOfFortuneTaskSelected
void Modules_Contexts_Application_Events_Scripts_EventSender__SendWheelOfFortuneTaskSelected (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t taskId, int32_t taskType, int32_t requiredAmount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendWheelOfFortuneTaskSelected
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendWheelOfFortuneTaskSelected
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t taskId, int32_t
   taskType, int32_t requiredAmount, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendWheelOfFortuneTaskSelected_1483f48
               (undefined8 param_1,int param_2,int param_3,int param_4)

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
  int iVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  int *piVar21;
  int iStack_7c;
  undefined4 uStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c23844 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_057b5998);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_0579ea00);
    FUN_012d0dc8(PTR_DAT_057a54f0);
    FUN_012d0dc8(PTR_DAT_058089a0);
    FUN_012d0dc8(PTR_DAT_057f59e0);
    FUN_012d0dc8(PTR_DAT_057e4440);
    FUN_012d0dc8(PTR_DAT_058196c0);
    FUN_012d0dc8(PTR_DAT_0579a4e0);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057d3f68);
    FUN_012d0dc8(PTR_DAT_057e66c0);
    bRam0000000005c23844 = 1;
  }
  lVar17 = **(long **)(*(long *)puVar1 + 0xb8);
  if ((lVar17 != 0) && (lVar17 = *(long *)(lVar17 + 0x18), lVar17 != 0)) {
    lVar17 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar17,*(undefined8 *)PTR_DAT_057b5998);
    lVar18 = **(long **)(*(long *)puVar1 + 0xb8);
    if ((lVar18 != 0) &&
       ((lVar18 = *(long *)(lVar18 + 0x18), lVar18 != 0 &&
        (plVar13 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                     (lVar18,*(undefined8 *)PTR_DAT_057a1e60),
        puVar1 = PTR_DAT_057c8a60, lVar17 != 0)))) {
      uVar14 = Modules_Contexts_Home_WheelOfFortune_WheelOfFortuneService__GetSegment_2da6128
                         (lVar17,0);
      iVar9 = Modules_Contexts_Home_WheelOfFortune_WheelOfFortuneService__GetCurrentStageIndex_2da5930
                        (lVar17,0);
      iVar10 = Modules_Contexts_Home_WheelOfFortune_WheelOfFortuneService__GetTotalTasksCompleted_2da93f4
                         (lVar17,0);
      lVar18 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      puVar1 = PTR_DAT_057d3f68;
      if (lVar18 != 0) {
        Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                  (lVar18,*(undefined8 *)PTR_DAT_057e4440,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar18,*(undefined8 *)puVar1,uVar14,0);
        puVar8 = PTR_DAT_058196c0;
        puVar7 = PTR_DAT_057f59e0;
        puVar6 = PTR_DAT_057e66c0;
        puVar5 = PTR_DAT_057db748;
        puVar4 = PTR_DAT_057caaf0;
        puVar3 = PTR_DAT_057a54f0;
        puVar2 = PTR_DAT_0579ea00;
        puVar1 = PTR_DAT_0579a4e0;
        if (plVar13 != (long *)0x0) {
          lVar19 = *plVar13;
          uVar20 = (ulong)*(ushort *)(lVar19 + 0x12a);
          if (uVar20 != 0) {
            piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_057636d0) {
                puVar15 = (undefined8 *)(lVar19 + (long)(*piVar21 + 1) * 0x10 + 0x138);
                goto LAB_015841e0;
              }
              uVar20 = uVar20 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar20 != 0);
          }
          puVar15 = (undefined8 *)FUN_0131971c(plVar13,*(long *)PTR_DAT_057636d0,1);
LAB_015841e0:
          uStack_64 = (*(code *)*puVar15)(plVar13,puVar15[1]);
          uVar16 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_64);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar18,*(undefined8 *)puVar4,uVar16,0);
          iStack_68 = iVar9 + 1;
          uVar16 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&iStack_68);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar18,*(undefined8 *)puVar8,uVar16,0);
          iStack_6c = param_3;
          uVar16 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&iStack_6c);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar18,*(undefined8 *)puVar2,uVar16,0);
          iStack_70 = param_2;
          uVar16 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&iStack_70);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar18,*(undefined8 *)puVar3,uVar16,0);
          iStack_74 = iVar10;
          uVar16 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&iStack_74);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar18,*(undefined8 *)puVar1,uVar16,0);
          uStack_78 = Modules_Contexts_Home_WheelOfFortune_WheelOfFortuneService__GetWheelOfFortuneCurrencyCount_2da59a0
                                (lVar17,0);
          uVar16 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_78);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar18,*(undefined8 *)PTR_DAT_058089a0,uVar16,0);
          uVar16 = Modules_Contexts_Home_WheelOfFortune_WheelOfFortuneService__GetReadableEventId_2da90ec
                             (lVar17,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar18,*(undefined8 *)puVar6,uVar16,0);
          iStack_7c = param_4;
          uVar16 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&iStack_7c);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar18,*(undefined8 *)puVar7,uVar16,0);
          lVar19 = *plVar13;
          uVar20 = (ulong)*(ushort *)(lVar19 + 0x12a);
          if (uVar20 != 0) {
            piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_057636d0) {
                puVar15 = (undefined8 *)(lVar19 + (long)(*piVar21 + 1) * 0x10 + 0x138);
                goto LAB_01584398;
              }
              uVar20 = uVar20 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar20 != 0);
          }
          puVar15 = (undefined8 *)FUN_0131971c(plVar13,*(long *)PTR_DAT_057636d0,1);
LAB_01584398:
          iVar11 = (*(code *)*puVar15)(plVar13,puVar15[1]);
          iVar12 = Modules_Contexts_Home_WheelOfFortune_WheelOfFortuneService__GetWheelOfFortuneCurrencyCount_2da59a0
                             (lVar17,0);
          uVar16 = Modules_Contexts_Home_WheelOfFortune_WheelOfFortuneService__GetReadableEventId_2da90ec
                             (lVar17,0);
          uVar14 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__WofTaskSelected_2dbcb0c
                             (uVar14,(long)iVar11,(long)(iVar9 + 1),(long)param_3,(long)param_2,
                              (long)iVar10,(long)iVar12,uVar16,(long)param_4,0);
          if (*(int *)(*(long *)PTR_DAT_0575f9f0 + 0xe0) == 0) {
            thunk_FUN_0130472c(*(long *)PTR_DAT_0575f9f0);
          }
          GrandSDK_Analytics_Analytics__Track_2b38d30(uVar14,0);
          Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar18)
          ;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

