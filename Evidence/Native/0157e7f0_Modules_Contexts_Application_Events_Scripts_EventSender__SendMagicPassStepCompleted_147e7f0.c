/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendMagicPassStepCompleted
void Modules_Contexts_Application_Events_Scripts_EventSender__SendMagicPassStepCompleted (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t step, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendMagicPassStepCompleted
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendMagicPassStepCompleted
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t step, const
   MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendMagicPassStepCompleted_147e7f0
               (undefined8 param_1,int param_2)

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
  long *plVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined4 uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  int *piVar24;
  int iStack_74;
  undefined8 uStack_70;
  undefined4 uStack_64;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c23830 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_057dc218);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057d6138);
    FUN_012d0dc8(PTR_DAT_0579ec40);
    FUN_012d0dc8(PTR_DAT_057e4da8);
    FUN_012d0dc8(PTR_DAT_057b8b10);
    FUN_012d0dc8(PTR_DAT_057d7028);
    FUN_012d0dc8(PTR_DAT_05800a10);
    FUN_012d0dc8(PTR_DAT_0575a580);
    FUN_012d0dc8(PTR_DAT_057da8a0);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057d3f68);
    FUN_012d0dc8(PTR_DAT_057e66c0);
    bRam0000000005c23830 = 1;
  }
  lVar20 = **(long **)(*(long *)puVar1 + 0xb8);
  if ((lVar20 != 0) && (lVar20 = *(long *)(lVar20 + 0x18), lVar20 != 0)) {
    lVar20 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar20,*(undefined8 *)PTR_DAT_057dc218);
    puVar2 = PTR_DAT_057c8a60;
    lVar21 = **(long **)(*(long *)puVar1 + 0xb8);
    if ((lVar21 != 0) && (lVar21 = *(long *)(lVar21 + 0x18), lVar21 != 0)) {
      plVar12 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                  (lVar21,*(undefined8 *)PTR_DAT_057a1e60);
      lVar21 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
      if ((lVar21 != 0) &&
         (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                    (lVar21,*(undefined8 *)PTR_DAT_057d7028,0), puVar1 = PTR_DAT_0575a580,
         lVar20 != 0)) {
        uVar13 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__GetEventId_38dbd2c
                           (lVar20,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar21,*(undefined8 *)puVar1,uVar13,0);
        puVar8 = PTR_DAT_05800a10;
        puVar7 = PTR_DAT_057e66c0;
        puVar6 = PTR_DAT_057db748;
        puVar5 = PTR_DAT_057da8a0;
        puVar4 = PTR_DAT_057d6138;
        puVar3 = PTR_DAT_057caaf0;
        puVar2 = PTR_DAT_057b8b10;
        puVar1 = PTR_DAT_057636d0;
        if (plVar12 != (long *)0x0) {
          lVar22 = *plVar12;
          uVar23 = (ulong)*(ushort *)(lVar22 + 0x12a);
          if (uVar23 != 0) {
            piVar24 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
            do {
              if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_057636d0) {
                puVar14 = (undefined8 *)(lVar22 + (long)(*piVar24 + 1) * 0x10 + 0x138);
                goto LAB_0157ea54;
              }
              uVar23 = uVar23 - 1;
              piVar24 = piVar24 + 4;
            } while (uVar23 != 0);
          }
          puVar14 = (undefined8 *)FUN_0131971c(plVar12,*(long *)PTR_DAT_057636d0,1);
LAB_0157ea54:
          uStack_64 = (*(code *)*puVar14)(plVar12,puVar14[1]);
          uVar13 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_64);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar21,*(undefined8 *)puVar3,uVar13,0);
          uStack_70 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__GetStartTimeAsUnix_38dbdac
                                (lVar20,0);
          uVar13 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_70);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar21,*(undefined8 *)puVar2,uVar13,0);
          iStack_74 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__GetRemainingSeconds_38dbb08
                                (lVar20,0);
          uVar13 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&iStack_74);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar21,*(undefined8 *)PTR_DAT_057e4da8,uVar13,0);
          uVar13 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__GetSegment_38dbdec
                             (lVar20,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar21,*(undefined8 *)PTR_DAT_057d3f68,uVar13,0);
          uVar23 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__IsPassActivated_38dc6c4
                             (lVar20,0);
          uVar13 = *(undefined8 *)puVar8;
          uVar19 = 1;
          if ((uVar23 & 1) == 0) {
            uVar19 = 2;
          }
          uStack_70 = CONCAT44(uStack_70._4_4_,uVar19);
          uVar15 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_70);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310(lVar21,uVar13,uVar15,0)
          ;
          uStack_64 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__GetUnclaimedRewardCount_38de0e0
                                (lVar20,0);
          uVar13 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_64);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar21,*(undefined8 *)puVar5,uVar13,0);
          iStack_74 = param_2;
          uVar13 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&iStack_74);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar21,*(undefined8 *)PTR_DAT_0579ec40,uVar13,0);
          uVar13 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__GetReadableEventId_38df4e0
                             (lVar20,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar21,*(undefined8 *)puVar7,uVar13,0);
          uVar13 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__GetEventId_38dbd2c
                             (lVar20,0);
          lVar22 = *plVar12;
          uVar23 = (ulong)*(ushort *)(lVar22 + 0x12a);
          if (uVar23 != 0) {
            piVar24 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
            do {
              if (*(long *)(piVar24 + -2) == *(long *)puVar1) {
                puVar14 = (undefined8 *)(lVar22 + (long)(*piVar24 + 1) * 0x10 + 0x138);
                goto LAB_0157ec44;
              }
              uVar23 = uVar23 - 1;
              piVar24 = piVar24 + 4;
            } while (uVar23 != 0);
          }
          puVar14 = (undefined8 *)FUN_0131971c(plVar12,*(long *)puVar1,1);
LAB_0157ec44:
          iVar9 = (*(code *)*puVar14)(plVar12,puVar14[1]);
          uVar16 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__GetStartTimeAsUnix_38dbdac
                             (lVar20,0);
          iVar10 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__GetRemainingSeconds_38dbb08
                             (lVar20,0);
          uVar17 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__GetSegment_38dbdec
                             (lVar20,0);
          uVar23 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__IsPassActivated_38dc6c4
                             (lVar20,0);
          uVar15 = 1;
          if ((uVar23 & 1) == 0) {
            uVar15 = 2;
          }
          iVar11 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__GetUnclaimedRewardCount_38de0e0
                             (lVar20,0);
          uVar18 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__GetReadableEventId_38df4e0
                             (lVar20,0);
          uVar13 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__MagicPassStepCompleted_2db1cb4
                             (uVar13,(long)iVar9,uVar16,(long)iVar10,uVar17,uVar15,(long)iVar11,
                              (long)param_2,uVar18,0);
          if (*(int *)(*(long *)PTR_DAT_0575f9f0 + 0xe0) == 0) {
            thunk_FUN_0130472c(*(long *)PTR_DAT_0575f9f0);
          }
          GrandSDK_Analytics_Analytics__Track_2b38d30(uVar13,0);
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

