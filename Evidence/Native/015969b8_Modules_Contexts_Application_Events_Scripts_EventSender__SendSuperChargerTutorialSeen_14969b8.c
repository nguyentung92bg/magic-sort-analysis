/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendSuperChargerTutorialSeen
void Modules_Contexts_Application_Events_Scripts_EventSender__SendSuperChargerTutorialSeen (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendSuperChargerTutorialSeen
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendSuperChargerTutorialSeen
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendSuperChargerTutorialSeen_14969b8
               (undefined8 param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  long lVar18;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  puVar2 = PTR_DAT_0576aae0;
  if ((bRam0000000005c2388a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
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
    FUN_012d0dc8(PTR_DAT_057ae8e8);
    FUN_012d0dc8(PTR_DAT_057fed28);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057ea300);
    bRam0000000005c2388a = 1;
  }
  uStack_54 = 0;
  if ((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
     (lVar8 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar8 != 0)) {
    lVar8 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                      (lVar8,*(undefined8 *)PTR_DAT_057a0c88);
    if ((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
       (lVar9 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar9 != 0)) {
      plVar10 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                  (lVar9,*(undefined8 *)PTR_DAT_057a1e60);
      if (((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
          (lVar9 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar9 != 0)) &&
         (plVar11 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                      (lVar9,*(undefined8 *)PTR_DAT_057e8f70),
         plVar11 != (long *)0x0)) {
        lVar9 = *plVar11;
        uVar16 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_0581aae8) {
              puVar12 = (undefined8 *)(lVar9 + (long)(*piVar17 + 10) * 0x10 + 0x138);
              goto LAB_01596b88;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar12 = (undefined8 *)FUN_0131971c(plVar11,*(long *)PTR_DAT_0581aae8,10);
LAB_01596b88:
        lVar9 = (*(code *)*puVar12)(plVar11,puVar12[1]);
        if (lVar9 != 0) {
          lVar18 = *(long *)(lVar9 + 0x20);
          lVar9 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057c8a60);
          if ((lVar9 != 0) &&
             (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                        (lVar9,*(undefined8 *)PTR_DAT_057ea300,0), puVar5 = PTR_DAT_057db748,
             puVar4 = PTR_DAT_057caaf0, puVar2 = PTR_DAT_057636d0, plVar10 != (long *)0x0)) {
            lVar15 = *plVar10;
            uVar16 = (ulong)*(ushort *)(lVar15 + 0x12a);
            if (uVar16 != 0) {
              piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_057636d0) {
                  puVar12 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                  goto LAB_01596c34;
                }
                uVar16 = uVar16 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar16 != 0);
            }
            puVar12 = (undefined8 *)FUN_0131971c(plVar10,*(long *)PTR_DAT_057636d0,1);
LAB_01596c34:
            uStack_58 = (*(code *)*puVar12)(plVar10,puVar12[1]);
            uVar13 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_58);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar9,*(undefined8 *)puVar4,uVar13,0);
            if ((lVar8 != 0) &&
               (lVar15 = Modules_Contexts_Home_SuperCharger_Scripts_SuperChargerService__GetConfig_29704d4
                                   (lVar8,0), puVar3 = PTR_DAT_057fed28, puVar4 = PTR_DAT_057f8100,
               lVar15 != 0)) {
              uStack_60 = *(undefined4 *)(lVar15 + 0x14);
              uStack_70 = *(undefined8 *)PTR_DAT_057f8100;
              uStack_68 = 0xffffffffffffffff;
              uVar13 = System_Enum__ToString_23a4eac(&uStack_70,0);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar9,*(undefined8 *)puVar3,uVar13,0);
              puVar6 = PTR_DAT_0580a230;
              puVar3 = PTR_DAT_057ae8e8;
              if (lVar18 != 0) {
                uStack_74 = *(undefined4 *)(lVar18 + 0xf8);
                uVar13 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_74);
                Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                          (lVar9,*(undefined8 *)puVar6,uVar13,0);
                uStack_54 = Modules_Contexts_Home_SuperCharger_Scripts_SuperChargerService__GetTutorialSeenCount_2970b54
                                      (lVar8,0);
                uVar13 = System_Int32__ToString_26c9768(&uStack_54,0);
                Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                          (lVar9,*(undefined8 *)puVar3,uVar13,0);
                lVar15 = *plVar10;
                uVar16 = (ulong)*(ushort *)(lVar15 + 0x12a);
                if (uVar16 != 0) {
                  piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
                      puVar12 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                      goto LAB_01596d7c;
                    }
                    uVar16 = uVar16 - 1;
                    piVar17 = piVar17 + 4;
                  } while (uVar16 != 0);
                }
                puVar12 = (undefined8 *)FUN_0131971c(plVar10,*(long *)puVar2,1);
LAB_01596d7c:
                iVar7 = (*(code *)*puVar12)(plVar10,puVar12[1]);
                lVar15 = Modules_Contexts_Home_SuperCharger_Scripts_SuperChargerService__GetConfig_29704d4
                                   (lVar8,0);
                puVar2 = PTR_DAT_0575f9f0;
                if (lVar15 != 0) {
                  uStack_90 = *(undefined8 *)puVar4;
                  uStack_80 = *(undefined4 *)(lVar15 + 0x14);
                  uStack_88 = 0xffffffffffffffff;
                  uVar13 = System_Enum__ToString_23a4eac(&uStack_90,0);
                  iVar1 = *(int *)(lVar18 + 0xf8);
                  uStack_54 = Modules_Contexts_Home_SuperCharger_Scripts_SuperChargerService__GetTutorialSeenCount_2970b54
                                        (lVar8,0);
                  uVar14 = System_Int32__ToString_26c9768(&uStack_54,0);
                  uVar13 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__SuperchargerTutorialSeen_2dbbddc
                                     ((long)iVar7,uVar13,(long)iVar1,uVar14,0);
                  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    thunk_FUN_0130472c(*(long *)puVar2);
                  }
                  GrandSDK_Analytics_Analytics__Track_2b38d30(uVar13,0);
                  Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4
                            (param_1,lVar9);
                  return;
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

