/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendWheelOfFortuneWheelUnlockedEvent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendWheelOfFortuneWheelUnlockedEvent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t stageIndex, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.Events.Scripts.EventSender$$SendWheelOfFortuneWheelUnlockedEvent
   void 
   Modules_Contexts_Application_Events_Scripts_EventSender__SendWheelOfFortuneWheelUnlockedEvent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t stageIndex, const
   MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendWheelOfFortuneWheelUnlockedEvent_14835e8
               (undefined8 param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  int iStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  int iStack_64;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c23842 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_057b5998);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_058089a0);
    FUN_012d0dc8(PTR_DAT_057e16a8);
    FUN_012d0dc8(PTR_DAT_058196c0);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057bc758);
    FUN_012d0dc8(PTR_DAT_057d3f68);
    FUN_012d0dc8(PTR_DAT_057e66c0);
    bRam0000000005c23842 = 1;
  }
  lVar14 = **(long **)(*(long *)puVar1 + 0xb8);
  if ((lVar14 != 0) && (lVar14 = *(long *)(lVar14 + 0x18), lVar14 != 0)) {
    lVar14 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar14,*(undefined8 *)PTR_DAT_057b5998);
    lVar15 = **(long **)(*(long *)puVar1 + 0xb8);
    if ((lVar15 != 0) &&
       ((lVar15 = *(long *)(lVar15 + 0x18), lVar15 != 0 &&
        (plVar10 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                     (lVar15,*(undefined8 *)PTR_DAT_057a1e60),
        puVar1 = PTR_DAT_057c8a60, lVar14 != 0)))) {
      iVar7 = Modules_Contexts_Home_WheelOfFortune_WheelOfFortuneService__GetCurrentStageIndex_2da5930
                        (lVar14,0);
      uVar11 = Modules_Contexts_Home_WheelOfFortune_WheelOfFortuneService__GetSegment_2da6128
                         (lVar14,0);
      lVar15 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      puVar2 = PTR_DAT_058196c0;
      puVar4 = PTR_DAT_057db748;
      puVar1 = PTR_DAT_057d3f68;
      if (lVar15 != 0) {
        Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                  (lVar15,*(undefined8 *)PTR_DAT_057e16a8,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar15,*(undefined8 *)puVar1,uVar11,0);
        iStack_64 = iVar7 + 1;
        uVar12 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&iStack_64);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar15,*(undefined8 *)puVar2,uVar12,0);
        puVar6 = PTR_DAT_058089a0;
        puVar5 = PTR_DAT_057e66c0;
        puVar3 = PTR_DAT_057caaf0;
        puVar2 = PTR_DAT_057bc758;
        puVar1 = PTR_DAT_057636d0;
        if (plVar10 != (long *)0x0) {
          lVar16 = *plVar10;
          uVar17 = (ulong)*(ushort *)(lVar16 + 0x12a);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_057636d0) {
                puVar13 = (undefined8 *)(lVar16 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                goto LAB_01583854;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar13 = (undefined8 *)FUN_0131971c(plVar10,*(long *)PTR_DAT_057636d0,1);
LAB_01583854:
          uStack_68 = (*(code *)*puVar13)(plVar10,puVar13[1]);
          uVar12 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_68);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar15,*(undefined8 *)puVar3,uVar12,0);
          uStack_6c = Modules_Contexts_Home_WheelOfFortune_WheelOfFortuneService__GetWheelOfFortuneCurrencyCount_2da59a0
                                (lVar14,0);
          uVar12 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_6c);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar15,*(undefined8 *)puVar6,uVar12,0);
          uVar12 = Modules_Contexts_Home_WheelOfFortune_WheelOfFortuneService__GetReadableEventId_2da90ec
                             (lVar14,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar15,*(undefined8 *)puVar5,uVar12,0);
          iStack_70 = param_2;
          uVar12 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&iStack_70);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar15,*(undefined8 *)puVar2,uVar12,0);
          lVar16 = *plVar10;
          uVar17 = (ulong)*(ushort *)(lVar16 + 0x12a);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)puVar1) {
                puVar13 = (undefined8 *)(lVar16 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                goto LAB_01583954;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar13 = (undefined8 *)FUN_0131971c(plVar10,*(long *)puVar1,1);
LAB_01583954:
          iVar8 = (*(code *)*puVar13)(plVar10,puVar13[1]);
          iVar9 = Modules_Contexts_Home_WheelOfFortune_WheelOfFortuneService__GetWheelOfFortuneCurrencyCount_2da59a0
                            (lVar14,0);
          uVar12 = Modules_Contexts_Home_WheelOfFortune_WheelOfFortuneService__GetReadableEventId_2da90ec
                             (lVar14,0);
          uVar11 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__WofWheelUnlocked_2dbcee4
                             (uVar11,(long)(iVar7 + 1),(long)iVar8,(long)iVar9,uVar12,(long)param_2,
                              0);
          if (*(int *)(*(long *)PTR_DAT_0575f9f0 + 0xe0) == 0) {
            thunk_FUN_0130472c(*(long *)PTR_DAT_0575f9f0);
          }
          GrandSDK_Analytics_Analytics__Track_2b38d30(uVar11,0);
          Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar15)
          ;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

