/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendMagicBottlePopUpImpression
void Modules_Contexts_Application_Events_Scripts_EventSender__SendMagicBottlePopUpImpression (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t impressionSource, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendMagicBottlePopUpImpression
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendMagicBottlePopUpImpression
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t impressionSource,
   const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendMagicBottlePopUpImpression_1465664
               (undefined8 param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  puVar3 = PTR_DAT_0576aae0;
  if ((bRam0000000005c237b6 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_057fe590);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_05781af0);
    FUN_012d0dc8(PTR_DAT_057dbe68);
    FUN_012d0dc8(PTR_DAT_057ad058);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057b22d0);
    FUN_012d0dc8(PTR_DAT_057e2300);
    bRam0000000005c237b6 = 1;
  }
  lVar12 = **(long **)(*(long *)puVar3 + 0xb8);
  if ((lVar12 != 0) && (lVar12 = *(long *)(lVar12 + 0x18), lVar12 != 0)) {
    lVar12 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar12,*(undefined8 *)PTR_DAT_057fe590);
    puVar2 = PTR_DAT_057c8a60;
    lVar13 = **(long **)(*(long *)puVar3 + 0xb8);
    if ((lVar13 != 0) && (lVar13 = *(long *)(lVar13 + 0x18), lVar13 != 0)) {
      plVar9 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                 (lVar13,*(undefined8 *)PTR_DAT_057a1e60);
      lVar13 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
      puVar2 = PTR_DAT_057dbe68;
      puVar3 = PTR_DAT_05781af0;
      if (lVar13 != 0) {
        Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                  (lVar13,*(undefined8 *)PTR_DAT_057ad058,0);
        uStack_78 = *(undefined8 *)puVar3;
        uStack_70 = 0xffffffffffffffff;
        uStack_68 = param_2;
        uVar10 = System_Enum__ToString_23a4eac(&uStack_78,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar13,*(undefined8 *)puVar2,uVar10,0);
        puVar4 = PTR_DAT_057e2300;
        puVar5 = PTR_DAT_057db748;
        puVar2 = PTR_DAT_057b22d0;
        if (lVar12 != 0) {
          uStack_54 = Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService__GetProgress_375d714
                                (lVar12,0);
          uVar10 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_54);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar13,*(undefined8 *)puVar4,uVar10,0);
          uStack_58 = Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService__GetNeededProgress_375d678
                                (lVar12,0);
          uVar10 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_58);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar13,*(undefined8 *)puVar2,uVar10,0);
          puVar4 = PTR_DAT_057caaf0;
          puVar2 = PTR_DAT_057636d0;
          if (plVar9 != (long *)0x0) {
            lVar14 = *plVar9;
            uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
            if (uVar15 != 0) {
              piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_057636d0) {
                  puVar11 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                  goto LAB_015658f0;
                }
                uVar15 = uVar15 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar15 != 0);
            }
            puVar11 = (undefined8 *)FUN_0131971c(plVar9,*(long *)PTR_DAT_057636d0,1);
LAB_015658f0:
            puVar1 = PTR_DAT_0575f9f0;
            uStack_7c = (*(code *)*puVar11)(plVar9,puVar11[1]);
            uVar10 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_7c);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar13,*(undefined8 *)puVar4,uVar10,0);
            uStack_98 = *(undefined8 *)puVar3;
            uStack_90 = 0xffffffffffffffff;
            uStack_88 = param_2;
            uVar10 = System_Enum__ToString_23a4eac(&uStack_98,0);
            iVar6 = Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService__GetProgress_375d714
                              (lVar12,0);
            iVar7 = Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService__GetNeededProgress_375d678
                              (lVar12,0);
            lVar12 = *plVar9;
            uVar15 = (ulong)*(ushort *)(lVar12 + 0x12a);
            if (uVar15 != 0) {
              piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
                  puVar11 = (undefined8 *)(lVar12 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                  goto LAB_015659bc;
                }
                uVar15 = uVar15 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar15 != 0);
            }
            puVar11 = (undefined8 *)FUN_0131971c(plVar9,*(long *)puVar2,1);
LAB_015659bc:
            iVar8 = (*(code *)*puVar11)(plVar9,puVar11[1]);
            uVar10 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__MagicBottlePopupImpression_2dad9b8
                               (uVar10,(long)iVar6,(long)iVar7,(long)iVar8,0);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_0130472c(*(long *)puVar1);
            }
            GrandSDK_Analytics_Analytics__Track_2b38d30(uVar10,0);
            Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4
                      (param_1,lVar13);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

