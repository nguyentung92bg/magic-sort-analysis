/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendMagicPassFinished
void Modules_Contexts_Application_Events_Scripts_EventSender__SendMagicPassFinished (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendMagicPassFinished
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendMagicPassFinished
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendMagicPassFinished_147f6b4
               (undefined8 param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined4 uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  int *piVar26;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  uint uStack_64;
  
  puVar2 = PTR_DAT_0576aae0;
  if ((bRam0000000005c23833 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_057dc218);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057d6138);
    FUN_012d0dc8(PTR_DAT_057d6f00);
    FUN_012d0dc8(PTR_DAT_057b8b10);
    FUN_012d0dc8(PTR_DAT_05817c40);
    FUN_012d0dc8(PTR_DAT_05774660);
    FUN_012d0dc8(PTR_DAT_05800a10);
    FUN_012d0dc8(PTR_DAT_0575a580);
    FUN_012d0dc8(PTR_DAT_057da8a0);
    FUN_012d0dc8(PTR_DAT_05789f58);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057d3f68);
    FUN_012d0dc8(PTR_DAT_057e66c0);
    bRam0000000005c23833 = 1;
  }
  lVar22 = **(long **)(*(long *)puVar2 + 0xb8);
  if ((lVar22 != 0) && (lVar22 = *(long *)(lVar22 + 0x18), lVar22 != 0)) {
    lVar22 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar22,*(undefined8 *)PTR_DAT_057dc218);
    puVar3 = PTR_DAT_057c8a60;
    lVar23 = **(long **)(*(long *)puVar2 + 0xb8);
    if ((lVar23 != 0) && (lVar23 = *(long *)(lVar23 + 0x18), lVar23 != 0)) {
      plVar14 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                  (lVar23,*(undefined8 *)PTR_DAT_057a1e60);
      lVar23 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
      if ((lVar23 != 0) &&
         (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                    (lVar23,*(undefined8 *)PTR_DAT_05789f58,0), puVar2 = PTR_DAT_0575a580,
         lVar22 != 0)) {
        uVar15 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__GetEventId_38dbd2c
                           (lVar22,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar23,*(undefined8 *)puVar2,uVar15,0);
        puVar8 = PTR_DAT_05800a10;
        puVar7 = PTR_DAT_057db748;
        puVar6 = PTR_DAT_057d6f00;
        puVar5 = PTR_DAT_057d6138;
        puVar4 = PTR_DAT_057d3f68;
        puVar3 = PTR_DAT_057caaf0;
        puVar2 = PTR_DAT_057b8b10;
        if (plVar14 != (long *)0x0) {
          lVar24 = *plVar14;
          uVar25 = (ulong)*(ushort *)(lVar24 + 0x12a);
          if (uVar25 != 0) {
            piVar26 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
            do {
              if (*(long *)(piVar26 + -2) == *(long *)PTR_DAT_057636d0) {
                puVar16 = (undefined8 *)(lVar24 + (long)(*piVar26 + 1) * 0x10 + 0x138);
                goto LAB_0157f91c;
              }
              uVar25 = uVar25 - 1;
              piVar26 = piVar26 + 4;
            } while (uVar25 != 0);
          }
          puVar16 = (undefined8 *)FUN_0131971c(plVar14,*(long *)PTR_DAT_057636d0,1);
LAB_0157f91c:
          uStack_64 = (*(code *)*puVar16)(plVar14,puVar16[1]);
          uVar15 = thunk_FUN_01320a8c(*(undefined8 *)puVar7,&uStack_64);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar23,*(undefined8 *)puVar3,uVar15,0);
          uStack_70 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__GetStartTimeAsUnix_38dbdac
                                (lVar22,0);
          uVar15 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_70);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar23,*(undefined8 *)puVar2,uVar15,0);
          uVar15 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__GetSegment_38dbdec
                             (lVar22,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar23,*(undefined8 *)puVar4,uVar15,0);
          uVar25 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__IsPassActivated_38dc6c4
                             (lVar22,0);
          uVar15 = *(undefined8 *)puVar8;
          uVar21 = 1;
          if ((uVar25 & 1) == 0) {
            uVar21 = 2;
          }
          uStack_70 = CONCAT44(uStack_70._4_4_,uVar21);
          uVar17 = thunk_FUN_01320a8c(*(undefined8 *)puVar7,&uStack_70);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310(lVar23,uVar15,uVar17,0)
          ;
          uVar9 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__GetCurrentStep_38dca40
                            (lVar22,0);
          uVar10 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__GetDefaultStepsCount_38dcb3c
                             (lVar22,0);
          if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
            thunk_FUN_0130472c(*(long *)puVar6);
          }
          if (cRam0000000005c230ab == '\0') {
            FUN_012d0dc8(PTR_DAT_05800a28);
            FUN_012d0dc8(PTR_DAT_057d6f00);
            cRam0000000005c230ab = '\x01';
          }
          puVar5 = PTR_DAT_05817c40;
          puVar4 = PTR_DAT_057e66c0;
          puVar3 = PTR_DAT_057da8a0;
          puVar2 = PTR_DAT_05774660;
          if ((int)uVar10 < 0) {
            if (*(int *)(*(long *)PTR_DAT_057d6f00 + 0xe0) == 0) {
              thunk_FUN_0130472c();
            }
            System_Math__ThrowMinMaxException_int__29c3384(0,uVar10,*(undefined8 *)PTR_DAT_05800a28)
            ;
          }
          if ((int)uVar9 <= (int)uVar10) {
            uVar10 = uVar9;
          }
          uStack_64 = 0;
          if (-1 < (int)uVar9) {
            uStack_64 = uVar10;
          }
          uVar15 = thunk_FUN_01320a8c(*(undefined8 *)puVar7,&uStack_64);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar23,*(undefined8 *)puVar2,uVar15,0);
          uStack_74 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__GetUnclaimedRewardCount_38de0e0
                                (lVar22,0);
          uVar15 = thunk_FUN_01320a8c(*(undefined8 *)puVar7,&uStack_74);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar23,*(undefined8 *)puVar3,uVar15,0);
          uStack_78 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__GetCurrentVaultCoinAmount_38dd04c
                                (lVar22,0);
          uVar15 = thunk_FUN_01320a8c(*(undefined8 *)puVar7,&uStack_78);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar23,*(undefined8 *)puVar5,uVar15,0);
          uVar15 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__GetReadableEventId_38df4e0
                             (lVar22,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar23,*(undefined8 *)puVar4,uVar15,0);
          uVar15 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__GetEventId_38dbd2c
                             (lVar22,0);
          puVar2 = PTR_DAT_057d6f00;
          lVar24 = *plVar14;
          uVar25 = (ulong)*(ushort *)(lVar24 + 0x12a);
          if (uVar25 != 0) {
            piVar26 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
            do {
              if (*(long *)(piVar26 + -2) == *(long *)PTR_DAT_057636d0) {
                puVar16 = (undefined8 *)(lVar24 + (long)(*piVar26 + 1) * 0x10 + 0x138);
                goto LAB_0157fbcc;
              }
              uVar25 = uVar25 - 1;
              piVar26 = piVar26 + 4;
            } while (uVar25 != 0);
          }
          puVar16 = (undefined8 *)FUN_0131971c(plVar14,*(long *)PTR_DAT_057636d0,1);
LAB_0157fbcc:
          iVar11 = (*(code *)*puVar16)(plVar14,puVar16[1]);
          uVar18 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__GetStartTimeAsUnix_38dbdac
                             (lVar22,0);
          uVar19 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__GetSegment_38dbdec
                             (lVar22,0);
          uVar25 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__IsPassActivated_38dc6c4
                             (lVar22,0);
          uVar17 = 1;
          if ((uVar25 & 1) == 0) {
            uVar17 = 2;
          }
          iVar12 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__GetCurrentStep_38dca40
                             (lVar22,0);
          iVar13 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__GetDefaultStepsCount_38dcb3c
                             (lVar22,0);
          lVar24 = *(long *)puVar2;
          if (*(int *)(lVar24 + 0xe0) == 0) {
            thunk_FUN_0130472c(lVar24);
          }
          if (cRam0000000005c230ab == '\0') {
            FUN_012d0dc8(PTR_DAT_05800a28);
            FUN_012d0dc8(PTR_DAT_057d6f00);
            cRam0000000005c230ab = '\x01';
          }
          puVar3 = PTR_DAT_0575f9f0;
          if (iVar13 < 0) {
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_0130472c();
            }
            System_Math__ThrowMinMaxException_int__29c3384(0,iVar13,*(undefined8 *)PTR_DAT_05800a28)
            ;
          }
          if (iVar12 <= iVar13) {
            iVar13 = iVar12;
          }
          iVar1 = 0;
          if (-1 < iVar12) {
            iVar1 = iVar13;
          }
          iVar13 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__GetUnclaimedRewardCount_38de0e0
                             (iVar13,lVar22,0);
          iVar12 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__GetCurrentVaultCoinAmount_38dd04c
                             (lVar22,0);
          uVar20 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__GetReadableEventId_38df4e0
                             (lVar22,0);
          uVar15 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__MagicPassFinished_2db2050
                             (uVar15,(long)iVar11,uVar18,uVar19,uVar17,(long)iVar1,(long)iVar13,
                              (long)iVar12,uVar20,0);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_0130472c(*(long *)puVar3);
          }
          GrandSDK_Analytics_Analytics__Track_2b38d30(uVar15,0);
          Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar23)
          ;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

