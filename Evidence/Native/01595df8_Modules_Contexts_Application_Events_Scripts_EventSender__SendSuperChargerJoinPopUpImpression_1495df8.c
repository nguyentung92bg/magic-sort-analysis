/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendSuperChargerJoinPopUpImpression
void Modules_Contexts_Application_Events_Scripts_EventSender__SendSuperChargerJoinPopUpImpression (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t reason, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.Events.Scripts.EventSender$$SendSuperChargerJoinPopUpImpression
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendSuperChargerJoinPopUpImpression
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t reason, const
   MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendSuperChargerJoinPopUpImpression_1495df8
               (undefined8 param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  byte abStack_84 [4];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c23888 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057b4910);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_057a0c88);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057ced00);
    FUN_012d0dc8(PTR_DAT_057f8100);
    FUN_012d0dc8(PTR_DAT_057e3618);
    FUN_012d0dc8(PTR_DAT_057fed28);
    FUN_012d0dc8(PTR_DAT_0580b6f0);
    FUN_012d0dc8(PTR_DAT_057fb070);
    FUN_012d0dc8(PTR_DAT_057d8ed8);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    bRam0000000005c23888 = 1;
  }
  lVar13 = **(long **)(*(long *)puVar1 + 0xb8);
  if ((lVar13 != 0) && (lVar13 = *(long *)(lVar13 + 0x18), lVar13 != 0)) {
    lVar13 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar13,*(undefined8 *)PTR_DAT_057a0c88);
    puVar2 = PTR_DAT_057c8a60;
    lVar14 = **(long **)(*(long *)puVar1 + 0xb8);
    if ((lVar14 != 0) && (lVar14 = *(long *)(lVar14 + 0x18), lVar14 != 0)) {
      plVar9 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                 (lVar14,*(undefined8 *)PTR_DAT_057a1e60);
      lVar14 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
      if ((lVar14 != 0) &&
         (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                    (lVar14,*(undefined8 *)PTR_DAT_0580b6f0,0), puVar2 = PTR_DAT_057db748,
         puVar1 = PTR_DAT_057caaf0, plVar9 != (long *)0x0)) {
        lVar15 = *plVar9;
        uVar16 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_057636d0) {
              puVar10 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
              goto LAB_01595fec;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar10 = (undefined8 *)FUN_0131971c(plVar9,*(long *)PTR_DAT_057636d0,1);
LAB_01595fec:
        uStack_64 = (*(code *)*puVar10)(plVar9,puVar10[1]);
        uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&uStack_64);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar14,*(undefined8 *)puVar1,uVar11,0);
        puVar1 = PTR_DAT_057d8ed8;
        if (lVar13 != 0) {
          uStack_68 = Modules_Contexts_Home_SuperCharger_Scripts_SuperChargerService__GetProgress_2970030
                                (lVar13,0);
          uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&uStack_68);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar14,*(undefined8 *)puVar1,uVar11,0);
          lVar15 = Modules_Contexts_Home_SuperCharger_Scripts_SuperChargerService__GetConfig_29704d4
                             (lVar13,0);
          puVar6 = PTR_DAT_057fed28;
          puVar5 = PTR_DAT_057fb070;
          puVar4 = PTR_DAT_057f8100;
          puVar3 = PTR_DAT_057e3618;
          puVar2 = PTR_DAT_057ced00;
          puVar1 = PTR_DAT_057b4910;
          if (lVar15 != 0) {
            uStack_80 = *(undefined8 *)PTR_DAT_057f8100;
            uStack_70 = *(undefined4 *)(lVar15 + 0x14);
            uStack_78 = 0xffffffffffffffff;
            uVar11 = System_Enum__ToString_23a4eac(&uStack_80,0);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar14,*(undefined8 *)puVar6,uVar11,0);
            abStack_84[0] =
                 Modules_Contexts_Home_SuperCharger_Scripts_SuperChargerService__IsActive_296fea4
                           (lVar13,0);
            abStack_84[0] = abStack_84[0] & 1;
            uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar1,abStack_84);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar14,*(undefined8 *)puVar5,uVar11,0);
            uStack_a0 = *(undefined8 *)puVar2;
            uStack_98 = 0xffffffffffffffff;
            uStack_90 = param_2;
            uVar11 = System_Enum__ToString_23a4eac(&uStack_a0,0);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar14,*(undefined8 *)puVar3,uVar11,0);
            lVar15 = *plVar9;
            uVar16 = (ulong)*(ushort *)(lVar15 + 0x12a);
            if (uVar16 != 0) {
              piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_057636d0) {
                  puVar10 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                  goto LAB_01596198;
                }
                uVar16 = uVar16 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar16 != 0);
            }
            puVar10 = (undefined8 *)FUN_0131971c(plVar9,*(long *)PTR_DAT_057636d0,1);
LAB_01596198:
            iVar7 = (*(code *)*puVar10)(plVar9,puVar10[1]);
            iVar8 = Modules_Contexts_Home_SuperCharger_Scripts_SuperChargerService__GetProgress_2970030
                              (lVar13,0);
            lVar15 = Modules_Contexts_Home_SuperCharger_Scripts_SuperChargerService__GetConfig_29704d4
                               (lVar13,0);
            puVar1 = PTR_DAT_0575f9f0;
            if (lVar15 != 0) {
              uStack_b8 = *(undefined8 *)puVar4;
              uStack_a8 = *(undefined4 *)(lVar15 + 0x14);
              uStack_b0 = 0xffffffffffffffff;
              uVar11 = System_Enum__ToString_23a4eac(&uStack_b8,0);
              uVar16 = Modules_Contexts_Home_SuperCharger_Scripts_SuperChargerService__IsActive_296fea4
                                 (lVar13,0);
              uStack_80 = *(undefined8 *)puVar2;
              uStack_78 = 0xffffffffffffffff;
              uStack_70 = param_2;
              uVar12 = System_Enum__ToString_23a4eac(&uStack_80,0);
              uVar11 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__SuperchargerPopupImpression_2dbbb8c
                                 ((long)iVar7,(long)iVar8,uVar11,uVar16 & 1,uVar12,0);
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_0130472c(*(long *)puVar1);
              }
              GrandSDK_Analytics_Analytics__Track_2b38d30(uVar11,0);
              Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4
                        (param_1,lVar14);
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

