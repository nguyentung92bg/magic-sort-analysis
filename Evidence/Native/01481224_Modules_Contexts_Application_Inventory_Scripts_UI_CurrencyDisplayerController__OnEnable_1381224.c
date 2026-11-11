/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyDisplayerController$$OnEnable
void Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyDisplayerController__OnEnable (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyDisplayerController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyDisplayerController$$OnEnable
   void Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyDisplayerController__OnEnable
   (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyDisplayerController_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyDisplayerController__OnEnable_1381224
               (long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c23021 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f1238);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    bRam0000000005c23021 = 1;
  }
  if (((**(long **)(*(long *)puVar1 + 0xb8) == 0) ||
      (lVar10 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar10 == 0)) ||
     (lVar10 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                         (lVar10,*(undefined8 *)PTR_DAT_057f1238), lVar10 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  Modules_Infrastructure_DI_CustomUpdater__AddSecondUpdate_3d2db24(lVar10,param_1,0);
  if ((bRam0000000005c2301f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0580b9d0);
    FUN_012d0dc8(PTR_DAT_057bc5e8);
    FUN_012d0dc8(PTR_DAT_0576c200);
    FUN_012d0dc8(PTR_DAT_0576c1b8);
    FUN_012d0dc8(PTR_DAT_0578da18);
    bRam0000000005c2301f = 1;
  }
  puVar1 = PTR_DAT_0576c200;
  uStack_28 = 0;
  uStack_2c = 0;
  iVar3 = (int)param_1[5];
  if (iVar3 != 2) goto LAB_01481114;
  if (param_1[6] == 0) goto LAB_014811e0;
  uVar7 = Modules_Contexts_Application_Inventory_Scripts_InventoryService__HasVisibleLimitlessCurrencyByType_137ed7c
                    (param_1[6],2);
  if ((uVar7 & 1) != 0) {
    lVar10 = param_1[4];
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar7 = UnityEngine_Object__op_Inequality_408e110(lVar10,0,0);
    if ((uVar7 & 1) != 0) {
      if ((param_1[3] != 0) &&
         (lVar10 = UnityEngine_Component__get_gameObject_408b480(param_1[3],0), lVar10 != 0)) {
        UnityEngine_GameObject__SetActive_408e318(lVar10,0,0);
        if (param_1[10] != 0) {
          UnityEngine_GameObject__SetActive_408e318(param_1[10],0,0);
          if (param_1[0xb] != 0) {
            UnityEngine_GameObject__SetActive_408e318(param_1[0xb],1,0);
            puVar2 = PTR_DAT_0580b9d0;
            puVar1 = PTR_DAT_0576c1b8;
            if (param_1[6] != 0) {
              uVar8 = Modules_Contexts_Application_Inventory_Scripts_InventoryService__GetVisibleLimitlessCurrencyEndDateByType_137e848
                                (param_1[6],(int)param_1[5]);
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_0130472c(*(long *)puVar2);
              }
              uVar9 = System_DateTime__get_UtcNow_2100638(0);
              uStack_28 = System_DateTime__op_Subtraction_2101f60(uVar8,uVar9,0);
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_0130472c(*(long *)puVar1);
              }
              uVar8 = System_TimeSpan__Duration_2699cdc(&uStack_28,0);
              uVar8 = Modules_Infrastructure_Utils_TimeFormatter__FormatDigitalWatchDuration_3de6910
                                (uVar8,0);
              plVar11 = (long *)param_1[4];
              if (plVar11 != (long *)0x0) {
                (**(code **)(*plVar11 + 0x558))(plVar11,uVar8,*(undefined8 *)(*plVar11 + 0x560));
                return;
              }
            }
          }
        }
      }
      goto LAB_014811e0;
    }
  }
  iVar3 = (int)param_1[5];
  if (iVar3 != 2) goto LAB_01481114;
  if (param_1[6] == 0) goto LAB_014811e0;
  iVar3 = Modules_Contexts_Application_Inventory_Scripts_InventoryService__GetVisibleCurrencyAmountByType_137de74
                    (param_1[6],2);
  if (param_1[6] == 0) goto LAB_014811e0;
  iVar4 = Modules_Contexts_Application_Inventory_Scripts_InventoryService__GetMaxLifeAmount_137e5a4
                    (param_1[6]);
  if (iVar3 < iVar4) {
    lVar10 = param_1[4];
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar7 = UnityEngine_Object__op_Inequality_408e110(lVar10,0,0);
    if ((uVar7 & 1) == 0) goto LAB_01481028;
    if (param_1[6] == 0) goto LAB_014811e0;
    uVar8 = Modules_Contexts_Application_Inventory_Scripts_InventoryService__GetSecondsToFillOneLife_137e4a4
                      ();
    uVar8 = Modules_Infrastructure_Utils_TimeFormatter__FormatDigitalWatchDuration_3de6988(uVar8,0);
LAB_01481088:
    plVar11 = (long *)param_1[4];
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x558))(plVar11,uVar8,*(undefined8 *)(*plVar11 + 0x560));
      if (param_1[6] != 0) {
        uVar5 = Modules_Contexts_Application_Inventory_Scripts_InventoryService__GetVisibleCurrencyAmountByType_137de74
                          (param_1[6],(int)param_1[5]);
        Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyDisplayerController__SetAmount_1380d88
                  (param_1,uVar5);
        if (param_1[10] != 0) {
          UnityEngine_GameObject__SetActive_408e318(param_1[10],1,0);
          if (param_1[0xb] != 0) {
            UnityEngine_GameObject__SetActive_408e318(param_1[0xb],0,0);
            if ((param_1[3] != 0) &&
               (lVar10 = UnityEngine_Component__get_gameObject_408b480(param_1[3],0), lVar10 != 0))
            {
              UnityEngine_GameObject__SetActive_408e318(lVar10,1,0);
              return;
            }
          }
        }
      }
    }
  }
  else {
LAB_01481028:
    iVar3 = (int)param_1[5];
    if (iVar3 == 2) {
      lVar10 = param_1[4];
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar7 = UnityEngine_Object__op_Inequality_408e110(lVar10,0,0);
      puVar2 = PTR_DAT_0578da18;
      if ((uVar7 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_057bc5e8 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        uVar8 = Modules_Infrastructure_Utils_GrandStringExtensions__Localize_3de2900
                          (*(undefined8 *)puVar2,0);
        goto LAB_01481088;
      }
      iVar3 = (int)param_1[5];
    }
LAB_01481114:
    if (iVar3 == 0x10) {
      uVar6 = (**(code **)(*param_1 + 0x1a8))(param_1,0x10,*(undefined8 *)(*param_1 + 0x1b0));
      (**(code **)(*param_1 + 0x198))(param_1,uVar6 & 1,*(undefined8 *)(*param_1 + 0x1a0));
      return;
    }
    lVar10 = param_1[0xb];
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar7 = UnityEngine_Object__op_Inequality_408e110(lVar10,0,0);
    if ((uVar7 & 1) != 0) {
      if (param_1[0xb] == 0) goto LAB_014811e0;
      UnityEngine_GameObject__SetActive_408e318(param_1[0xb],0,0);
    }
    if ((param_1[3] != 0) &&
       (lVar10 = UnityEngine_Component__get_gameObject_408b480(param_1[3],0), lVar10 != 0)) {
      UnityEngine_GameObject__SetActive_408e318(lVar10,1,0);
      if (param_1[6] != 0) {
        uStack_2c = Modules_Contexts_Application_Inventory_Scripts_InventoryService__GetVisibleCurrencyAmountByType_137de74
                              (param_1[6],(int)param_1[5]);
        uVar8 = System_Int32__ToString_26c9768(&uStack_2c,0);
        Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyDisplayerController__SetAmountText_1380a00
                  (param_1,uVar8);
        return;
      }
    }
  }
LAB_014811e0:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

