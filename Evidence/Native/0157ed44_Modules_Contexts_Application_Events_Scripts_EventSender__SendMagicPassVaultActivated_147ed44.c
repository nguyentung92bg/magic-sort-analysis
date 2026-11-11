/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendMagicPassVaultActivated
void Modules_Contexts_Application_Events_Scripts_EventSender__SendMagicPassVaultActivated (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendMagicPassVaultActivated
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendMagicPassVaultActivated
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendMagicPassVaultActivated_147ed44
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
  long *plVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined4 uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  int *piVar23;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined4 uStack_64;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c23831 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_057dc218);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057d6138);
    FUN_012d0dc8(PTR_DAT_057e4da8);
    FUN_012d0dc8(PTR_DAT_057b8b10);
    FUN_012d0dc8(PTR_DAT_057cc210);
    FUN_012d0dc8(PTR_DAT_05800a10);
    FUN_012d0dc8(PTR_DAT_0575a580);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057d3f68);
    FUN_012d0dc8(PTR_DAT_057e66c0);
    bRam0000000005c23831 = 1;
  }
  lVar19 = **(long **)(*(long *)puVar1 + 0xb8);
  if ((lVar19 != 0) && (lVar19 = *(long *)(lVar19 + 0x18), lVar19 != 0)) {
    lVar19 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar19,*(undefined8 *)PTR_DAT_057dc218);
    puVar2 = PTR_DAT_057c8a60;
    lVar20 = **(long **)(*(long *)puVar1 + 0xb8);
    if ((lVar20 != 0) && (lVar20 = *(long *)(lVar20 + 0x18), lVar20 != 0)) {
      plVar11 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                  (lVar20,*(undefined8 *)PTR_DAT_057a1e60);
      lVar20 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
      if ((lVar20 != 0) &&
         (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                    (lVar20,*(undefined8 *)PTR_DAT_057cc210,0), puVar1 = PTR_DAT_0575a580,
         lVar19 != 0)) {
        uVar12 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__GetEventId_38dbd2c
                           (lVar19,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar20,*(undefined8 *)puVar1,uVar12,0);
        puVar8 = PTR_DAT_05800a10;
        puVar7 = PTR_DAT_057e66c0;
        puVar6 = PTR_DAT_057db748;
        puVar5 = PTR_DAT_057d6138;
        puVar4 = PTR_DAT_057d3f68;
        puVar3 = PTR_DAT_057caaf0;
        puVar2 = PTR_DAT_057b8b10;
        puVar1 = PTR_DAT_057636d0;
        if (plVar11 != (long *)0x0) {
          lVar21 = *plVar11;
          uVar22 = (ulong)*(ushort *)(lVar21 + 0x12a);
          if (uVar22 != 0) {
            piVar23 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
            do {
              if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_057636d0) {
                puVar13 = (undefined8 *)(lVar21 + (long)(*piVar23 + 1) * 0x10 + 0x138);
                goto LAB_0157ef8c;
              }
              uVar22 = uVar22 - 1;
              piVar23 = piVar23 + 4;
            } while (uVar22 != 0);
          }
          puVar13 = (undefined8 *)FUN_0131971c(plVar11,*(long *)PTR_DAT_057636d0,1);
LAB_0157ef8c:
          uStack_64 = (*(code *)*puVar13)(plVar11,puVar13[1]);
          uVar12 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_64);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar20,*(undefined8 *)puVar3,uVar12,0);
          uStack_70 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__GetStartTimeAsUnix_38dbdac
                                (lVar19,0);
          uVar12 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_70);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar20,*(undefined8 *)puVar2,uVar12,0);
          uStack_74 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__GetRemainingSeconds_38dbb08
                                (lVar19,0);
          uVar12 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_74);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar20,*(undefined8 *)PTR_DAT_057e4da8,uVar12,0);
          uVar12 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__GetSegment_38dbdec
                             (lVar19,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar20,*(undefined8 *)puVar4,uVar12,0);
          uVar22 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__IsPassActivated_38dc6c4
                             (lVar19,0);
          uVar12 = *(undefined8 *)puVar8;
          uVar18 = 1;
          if ((uVar22 & 1) == 0) {
            uVar18 = 2;
          }
          uStack_70 = CONCAT44(uStack_70._4_4_,uVar18);
          uVar14 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_70);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310(lVar20,uVar12,uVar14,0)
          ;
          uVar12 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__GetReadableEventId_38df4e0
                             (lVar19,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar20,*(undefined8 *)puVar7,uVar12,0);
          uVar12 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__GetEventId_38dbd2c
                             (lVar19,0);
          lVar21 = *plVar11;
          uVar22 = (ulong)*(ushort *)(lVar21 + 0x12a);
          if (uVar22 != 0) {
            piVar23 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
            do {
              if (*(long *)(piVar23 + -2) == *(long *)puVar1) {
                puVar13 = (undefined8 *)(lVar21 + (long)(*piVar23 + 1) * 0x10 + 0x138);
                goto LAB_0157f110;
              }
              uVar22 = uVar22 - 1;
              piVar23 = piVar23 + 4;
            } while (uVar22 != 0);
          }
          puVar13 = (undefined8 *)FUN_0131971c(plVar11,*(long *)puVar1,1);
LAB_0157f110:
          iVar9 = (*(code *)*puVar13)(plVar11,puVar13[1]);
          uVar15 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__GetStartTimeAsUnix_38dbdac
                             (lVar19,0);
          iVar10 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__GetRemainingSeconds_38dbb08
                             (lVar19,0);
          uVar16 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__GetSegment_38dbdec
                             (lVar19,0);
          uVar22 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__IsPassActivated_38dc6c4
                             (lVar19,0);
          uVar14 = 1;
          if ((uVar22 & 1) == 0) {
            uVar14 = 2;
          }
          uVar17 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__GetReadableEventId_38df4e0
                             (lVar19,0);
          uVar12 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__MagicPassBonusVaultActivated_2db1e08
                             (uVar12,(long)iVar9,uVar15,(long)iVar10,uVar16,uVar14,uVar17,0);
          if (*(int *)(*(long *)PTR_DAT_0575f9f0 + 0xe0) == 0) {
            thunk_FUN_0130472c(*(long *)PTR_DAT_0575f9f0);
          }
          GrandSDK_Analytics_Analytics__Track_2b38d30(uVar12,0);
          Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar20)
          ;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

