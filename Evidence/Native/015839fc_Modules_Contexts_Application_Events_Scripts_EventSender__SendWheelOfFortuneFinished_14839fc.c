/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendWheelOfFortuneFinished
void Modules_Contexts_Application_Events_Scripts_EventSender__SendWheelOfFortuneFinished (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendWheelOfFortuneFinished
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendWheelOfFortuneFinished
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendWheelOfFortuneFinished_14839fc
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
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  long *plVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  int *piVar24;
  undefined8 uVar25;
  undefined4 uStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  uint uStack_64;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c23843 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_057b5998);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_058089a0);
    FUN_012d0dc8(PTR_DAT_05798338);
    FUN_012d0dc8(PTR_DAT_05793cc8);
    FUN_012d0dc8(PTR_DAT_057ee868);
    FUN_012d0dc8(PTR_DAT_058196c0);
    FUN_012d0dc8(PTR_DAT_0579a4e0);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_0576e008);
    FUN_012d0dc8(PTR_DAT_057d3f68);
    FUN_012d0dc8(PTR_DAT_057e66c0);
    bRam0000000005c23843 = 1;
  }
  lVar20 = **(long **)(*(long *)puVar1 + 0xb8);
  if ((lVar20 != 0) && (lVar20 = *(long *)(lVar20 + 0x18), lVar20 != 0)) {
    lVar20 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar20,*(undefined8 *)PTR_DAT_057b5998);
    lVar21 = **(long **)(*(long *)puVar1 + 0xb8);
    if ((lVar21 != 0) &&
       ((lVar21 = *(long *)(lVar21 + 0x18), lVar21 != 0 &&
        (plVar16 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                     (lVar21,*(undefined8 *)PTR_DAT_057a1e60),
        puVar1 = PTR_DAT_057c8a60, lVar20 != 0)))) {
      uVar17 = Modules_Contexts_Home_WheelOfFortune_WheelOfFortuneService__GetSegment_2da6128
                         (lVar20,0);
      iVar9 = Modules_Contexts_Home_WheelOfFortune_WheelOfFortuneService__GetCurrentStageIndex_2da5930
                        (lVar20,0);
      iVar10 = Modules_Contexts_Home_WheelOfFortune_WheelOfFortuneService__GetTotalSpinnedWheel_2da9564
                         (lVar20,0);
      iVar11 = Modules_Contexts_Home_WheelOfFortune_WheelOfFortuneService__GetRemainingProgressInCurrentStage_2da6e00
                         (lVar20,0);
      iVar12 = Modules_Contexts_Home_WheelOfFortune_WheelOfFortuneService__GetTotalTasksCompleted_2da93f4
                         (lVar20,0);
      uVar13 = Modules_Contexts_Home_WheelOfFortune_WheelOfFortuneService__AllStagesCompleted_2da7a98
                         (lVar20,0);
      lVar21 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      puVar1 = PTR_DAT_057d3f68;
      if (lVar21 != 0) {
        Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                  (lVar21,*(undefined8 *)PTR_DAT_057ee868,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar21,*(undefined8 *)puVar1,uVar17,0);
        puVar8 = PTR_DAT_058196c0;
        puVar7 = PTR_DAT_058089a0;
        puVar6 = PTR_DAT_057e66c0;
        puVar5 = PTR_DAT_057db748;
        puVar4 = PTR_DAT_057caaf0;
        puVar3 = PTR_DAT_0579a4e0;
        puVar2 = PTR_DAT_05798338;
        puVar1 = PTR_DAT_057636d0;
        if (plVar16 != (long *)0x0) {
          lVar22 = *plVar16;
          uVar23 = (ulong)*(ushort *)(lVar22 + 0x12a);
          if (uVar23 != 0) {
            piVar24 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
            do {
              if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_057636d0) {
                puVar18 = (undefined8 *)(lVar22 + (long)(*piVar24 + 1) * 0x10 + 0x138);
                goto LAB_01583cb0;
              }
              uVar23 = uVar23 - 1;
              piVar24 = piVar24 + 4;
            } while (uVar23 != 0);
          }
          puVar18 = (undefined8 *)FUN_0131971c(plVar16,*(long *)PTR_DAT_057636d0,1);
LAB_01583cb0:
          uStack_64 = (*(code *)*puVar18)(plVar16,puVar18[1]);
          uVar19 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_64);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar21,*(undefined8 *)puVar4,uVar19,0);
          iStack_68 = iVar9 + 1;
          uVar19 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&iStack_68);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar21,*(undefined8 *)puVar8,uVar19,0);
          iStack_6c = iVar10;
          uVar19 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&iStack_6c);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar21,*(undefined8 *)puVar2,uVar19,0);
          iStack_70 = iVar12;
          uVar19 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&iStack_70);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar21,*(undefined8 *)puVar3,uVar19,0);
          iStack_74 = iVar11;
          uVar19 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&iStack_74);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar21,*(undefined8 *)PTR_DAT_05793cc8,uVar19,0);
          uStack_78 = Modules_Contexts_Home_WheelOfFortune_WheelOfFortuneService__GetWheelOfFortuneCurrencyCount_2da59a0
                                (lVar20,0);
          uVar19 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_78);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar21,*(undefined8 *)puVar7,uVar19,0);
          uVar25 = *(undefined8 *)PTR_DAT_0576e008;
          uStack_64 = uVar13 & 1;
          uVar19 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_64);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310(lVar21,uVar25,uVar19,0)
          ;
          uVar19 = Modules_Contexts_Home_WheelOfFortune_WheelOfFortuneService__GetReadableEventId_2da90ec
                             (lVar20,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar21,*(undefined8 *)puVar6,uVar19,0);
          lVar22 = *plVar16;
          uVar23 = (ulong)*(ushort *)(lVar22 + 0x12a);
          if (uVar23 != 0) {
            piVar24 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
            do {
              if (*(long *)(piVar24 + -2) == *(long *)puVar1) {
                puVar18 = (undefined8 *)(lVar22 + (long)(*piVar24 + 1) * 0x10 + 0x138);
                goto LAB_01583e70;
              }
              uVar23 = uVar23 - 1;
              piVar24 = piVar24 + 4;
            } while (uVar23 != 0);
          }
          puVar18 = (undefined8 *)FUN_0131971c(plVar16,*(long *)puVar1,1);
LAB_01583e70:
          iVar14 = (*(code *)*puVar18)(plVar16,puVar18[1]);
          iVar15 = Modules_Contexts_Home_WheelOfFortune_WheelOfFortuneService__GetWheelOfFortuneCurrencyCount_2da59a0
                             (lVar20,0);
          uVar19 = Modules_Contexts_Home_WheelOfFortune_WheelOfFortuneService__GetReadableEventId_2da90ec
                             (lVar20,0);
          uVar17 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__WheelOfFortuneWheelFinished_2db30e8
                             (uVar17,0,(long)(iVar9 + 1),(long)iVar10,(long)iVar11,uVar19,uVar13 & 1
                              ,(long)iVar15,(long)iVar12,(long)iVar14,0);
          if (*(int *)(*(long *)PTR_DAT_0575f9f0 + 0xe0) == 0) {
            thunk_FUN_0130472c(*(long *)PTR_DAT_0575f9f0);
          }
          GrandSDK_Analytics_Analytics__Track_2b38d30(uVar17,0);
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

