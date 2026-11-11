/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendSuperChargerUsed
void Modules_Contexts_Application_Events_Scripts_EventSender__SendSuperChargerUsed (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, Modules_Contexts_Home_SuperCharger_Scripts_SuperChargerUseEventDTO_o* dto, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendSuperChargerUsed
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendSuperChargerUsed
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this,
   Modules_Contexts_Home_SuperCharger_Scripts_SuperChargerUseEventDTO_o* dto, const MethodInfo*
   method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendSuperChargerUsed_1496294
               (undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  long lVar18;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined1 auStack_a8 [4];
  byte abStack_a4 [4];
  undefined1 auStack_a0 [4];
  undefined1 auStack_9c [4];
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  byte abStack_84 [4];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c23889 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057b4910);
    FUN_012d0dc8(PTR_DAT_057e8f70);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_057a0c88);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_0581aae8);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057f8100);
    FUN_012d0dc8(PTR_DAT_0580a230);
    FUN_012d0dc8(PTR_DAT_05809260);
    FUN_012d0dc8(PTR_DAT_057a61f8);
    FUN_012d0dc8(PTR_DAT_0576bd58);
    FUN_012d0dc8(PTR_DAT_057925d8);
    FUN_012d0dc8(PTR_DAT_057e8fb0);
    FUN_012d0dc8(PTR_DAT_057f5a88);
    FUN_012d0dc8(PTR_DAT_057fed28);
    FUN_012d0dc8(PTR_DAT_057fb070);
    FUN_012d0dc8(PTR_DAT_057dc9f0);
    FUN_012d0dc8(PTR_DAT_057d8ed8);
    FUN_012d0dc8(PTR_DAT_057a0080);
    FUN_012d0dc8(PTR_DAT_057a3a20);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    bRam0000000005c23889 = 1;
  }
  if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
     (lVar9 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar9 != 0)) {
    lVar9 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                      (lVar9,*(undefined8 *)PTR_DAT_057a0c88);
    if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
       (lVar10 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar10 != 0)) {
      plVar11 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                  (lVar10,*(undefined8 *)PTR_DAT_057a1e60);
      if (((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
          (lVar10 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar10 != 0)) &&
         (plVar12 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                      (lVar10,*(undefined8 *)PTR_DAT_057e8f70),
         plVar12 != (long *)0x0)) {
        lVar10 = *plVar12;
        uVar16 = (ulong)*(ushort *)(lVar10 + 0x12a);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_0581aae8) {
              puVar13 = (undefined8 *)(lVar10 + (long)(*piVar17 + 10) * 0x10 + 0x138);
              goto LAB_015964e0;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar13 = (undefined8 *)FUN_0131971c(plVar12,*(long *)PTR_DAT_0581aae8,10);
LAB_015964e0:
        lVar10 = (*(code *)*puVar13)(plVar12,puVar13[1]);
        if (lVar10 != 0) {
          lVar18 = *(long *)(lVar10 + 0x20);
          lVar10 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057c8a60);
          if ((lVar10 != 0) &&
             (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                        (lVar10,*(undefined8 *)PTR_DAT_057925d8,0), puVar4 = PTR_DAT_057db748,
             puVar1 = PTR_DAT_057caaf0, plVar11 != (long *)0x0)) {
            lVar15 = *plVar11;
            uVar16 = (ulong)*(ushort *)(lVar15 + 0x12a);
            if (uVar16 != 0) {
              piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_057636d0) {
                  puVar13 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                  goto LAB_0159658c;
                }
                uVar16 = uVar16 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar16 != 0);
            }
            puVar13 = (undefined8 *)FUN_0131971c(plVar11,*(long *)PTR_DAT_057636d0,1);
LAB_0159658c:
            uStack_64 = (*(code *)*puVar13)(plVar11,puVar13[1]);
            uVar14 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_64);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar10,*(undefined8 *)puVar1,uVar14,0);
            puVar1 = PTR_DAT_057d8ed8;
            if (lVar9 != 0) {
              uStack_68 = Modules_Contexts_Home_SuperCharger_Scripts_SuperChargerService__GetProgress_2970030
                                    (lVar9,0);
              uVar14 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_68);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar10,*(undefined8 *)puVar1,uVar14,0);
              lVar15 = Modules_Contexts_Home_SuperCharger_Scripts_SuperChargerService__GetConfig_29704d4
                                 (lVar9,0);
              puVar3 = PTR_DAT_057fed28;
              puVar2 = PTR_DAT_057fb070;
              puVar1 = PTR_DAT_057b4910;
              if (lVar15 != 0) {
                uStack_80 = *(undefined8 *)PTR_DAT_057f8100;
                uStack_70 = *(undefined4 *)(lVar15 + 0x14);
                uStack_78 = 0xffffffffffffffff;
                uVar14 = System_Enum__ToString_23a4eac(&uStack_80,0);
                Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                          (lVar10,*(undefined8 *)puVar3,uVar14,0);
                abStack_84[0] =
                     Modules_Contexts_Home_SuperCharger_Scripts_SuperChargerService__IsActive_296fea4
                               (lVar9,0);
                abStack_84[0] = abStack_84[0] & 1;
                uVar14 = thunk_FUN_01320a8c(*(undefined8 *)puVar1,abStack_84);
                Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                          (lVar10,*(undefined8 *)puVar2,uVar14,0);
                puVar2 = PTR_DAT_0580a230;
                if (lVar18 != 0) {
                  uStack_88 = *(undefined4 *)(lVar18 + 0xf8);
                  uVar14 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_88);
                  Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                            (lVar10,*(undefined8 *)puVar2,uVar14,0);
                  puVar6 = PTR_DAT_057f5a88;
                  puVar5 = PTR_DAT_057dc9f0;
                  puVar3 = PTR_DAT_057a3a20;
                  puVar2 = PTR_DAT_0576bd58;
                  if (param_2 != 0) {
                    uStack_8c = *(undefined4 *)(param_2 + 0x18);
                    uVar14 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_8c);
                    Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                              (lVar10,*(undefined8 *)puVar6,uVar14,0);
                    uStack_90 = *(undefined4 *)(param_2 + 0x1c);
                    uVar14 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_90);
                    Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                              (lVar10,*(undefined8 *)puVar2,uVar14,0);
                    uStack_94 = *(undefined4 *)(param_2 + 0x10);
                    uVar14 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_94);
                    Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                              (lVar10,*(undefined8 *)puVar5,uVar14,0);
                    uStack_98 = *(undefined4 *)(param_2 + 0x20);
                    uVar14 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_98);
                    Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                              (lVar10,*(undefined8 *)puVar3,uVar14,0);
                    auStack_9c[0] = *(undefined1 *)(param_2 + 0x14);
                    uVar14 = thunk_FUN_01320a8c(*(undefined8 *)puVar1,auStack_9c);
                    Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                              (lVar10,*(undefined8 *)PTR_DAT_057a61f8,uVar14,0);
                    auStack_a0[0] = *(undefined1 *)(param_2 + 0x24);
                    uVar14 = thunk_FUN_01320a8c(*(undefined8 *)puVar1,auStack_a0);
                    Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                              (lVar10,*(undefined8 *)PTR_DAT_057a0080,uVar14,0);
                    abStack_a4[0] = *(byte *)(param_2 + 0x25) ^ 1;
                    uVar14 = thunk_FUN_01320a8c(*(undefined8 *)puVar1,abStack_a4);
                    Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                              (lVar10,*(undefined8 *)PTR_DAT_057e8fb0,uVar14,0);
                    auStack_a8[0] = *(undefined1 *)(param_2 + 0x26);
                    uVar14 = thunk_FUN_01320a8c(*(undefined8 *)puVar1,auStack_a8);
                    Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                              (lVar10,*(undefined8 *)PTR_DAT_05809260,uVar14,0);
                    lVar15 = *plVar11;
                    uVar16 = (ulong)*(ushort *)(lVar15 + 0x12a);
                    if (uVar16 != 0) {
                      piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_057636d0) {
                          puVar13 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                          goto LAB_015968bc;
                        }
                        uVar16 = uVar16 - 1;
                        piVar17 = piVar17 + 4;
                      } while (uVar16 != 0);
                    }
                    puVar13 = (undefined8 *)FUN_0131971c(plVar11,*(long *)PTR_DAT_057636d0,1);
LAB_015968bc:
                    iVar7 = (*(code *)*puVar13)(plVar11,puVar13[1]);
                    iVar8 = Modules_Contexts_Home_SuperCharger_Scripts_SuperChargerService__GetProgress_2970030
                                      (lVar9,0);
                    lVar15 = Modules_Contexts_Home_SuperCharger_Scripts_SuperChargerService__GetConfig_29704d4
                                       (lVar9,0);
                    puVar1 = PTR_DAT_0575f9f0;
                    if (lVar15 != 0) {
                      uStack_b0 = *(undefined4 *)(lVar15 + 0x14);
                      uStack_c0 = *(undefined8 *)PTR_DAT_057f8100;
                      uStack_b8 = 0xffffffffffffffff;
                      uVar14 = System_Enum__ToString_23a4eac(&uStack_c0,0);
                      uVar16 = Modules_Contexts_Home_SuperCharger_Scripts_SuperChargerService__IsActive_296fea4
                                         (lVar9,0);
                      uVar14 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__SuperchargerUsed_2dbbc74
                                         ((long)iVar7,(long)iVar8,uVar14,uVar16 & 1,
                                          (long)*(int *)(lVar18 + 0xf8),
                                          (long)*(int *)(param_2 + 0x18),
                                          (long)*(int *)(param_2 + 0x1c),
                                          (long)*(int *)(param_2 + 0x10),
                                          (long)*(int *)(param_2 + 0x20),
                                          *(undefined1 *)(param_2 + 0x14),
                                          *(undefined1 *)(param_2 + 0x24),0);
                      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                        thunk_FUN_0130472c(*(long *)puVar1);
                      }
                      GrandSDK_Analytics_Analytics__Track_2b38d30(uVar14,0);
                      Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4
                                (param_1,lVar10);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

