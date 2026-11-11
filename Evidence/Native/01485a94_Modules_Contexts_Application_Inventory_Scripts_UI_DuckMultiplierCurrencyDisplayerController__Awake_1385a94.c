/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.DuckMultiplierCurrencyDisplayerController$$Awake
void Modules_Contexts_Application_Inventory_Scripts_UI_DuckMultiplierCurrencyDisplayerController__Awake (Modules_Contexts_Application_Inventory_Scripts_UI_DuckMultiplierCurrencyDisplayerController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.Inventory.Scripts.UI.DuckMultiplierCurrencyDisplayerController$$Awake
   void 
   Modules_Contexts_Application_Inventory_Scripts_UI_DuckMultiplierCurrencyDisplayerController__Awake
   (Modules_Contexts_Application_Inventory_Scripts_UI_DuckMultiplierCurrencyDisplayerController_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Application_Inventory_Scripts_UI_DuckMultiplierCurrencyDisplayerController__Awake_1385a94
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c2304f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0577fc18);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    bRam0000000005c2304f = 1;
  }
  Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyDisplayerController__Awake_1380798
            (param_1);
  if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
     (lVar4 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar4 != 0)) {
    lVar4 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                      (lVar4,*(undefined8 *)PTR_DAT_0577fc18);
    plVar8 = (long *)(param_1 + 0x78);
    *plVar8 = lVar4;
    FUN_012d0d74(plVar8,lVar4);
    if (*plVar8 != 0) {
      bVar3 = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__HasVisibleMultiplier_1b98b8c
                        (*plVar8,0);
      *(byte *)(param_1 + 0x70) = bVar3 & 1;
      if ((bVar3 & 1) == 0) {
        if (*(long *)(param_1 + 0x60) == 0) goto LAB_01485b64;
        UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x60),0,0);
      }
      else {
        Modules_Contexts_Application_Inventory_Scripts_UI_DuckMultiplierCurrencyDisplayerController__PlayAppearAnimation_1385b68
                  (param_1);
      }
      if ((bRam0000000005c23050 & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_05814758);
        FUN_012d0dc8(PTR_DAT_0580b9d0);
        FUN_012d0dc8(PTR_DAT_0576c1b8);
        bRam0000000005c23050 = 1;
      }
      puVar1 = PTR_DAT_0580b9d0;
      uStack_38 = 0;
      if (*(long *)(param_1 + 0x30) != 0) {
        uVar5 = Modules_Contexts_Application_Inventory_Scripts_InventoryService__GetVisibleTimedCurrencyEndDateByType_137e8e0
                          (*(long *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x28));
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_0130472c(*(long *)puVar1);
        }
        uVar6 = System_DateTime__get_UtcNow_2100638(0);
        uVar7 = System_DateTime__op_LessThan_2102098(uVar5,uVar6,0);
        if ((uVar7 & 1) != 0) {
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_0130472c();
          }
          uVar5 = System_DateTime__get_UtcNow_2100638(0);
        }
        puVar2 = PTR_DAT_05814758;
        auVar9 = Modules_Contexts_Application_Inventory_Scripts_UI_DuckMultiplierCurrencyDisplayerController__GetClampedEventMultiplierEndDate_1385da4
                           (param_1,uVar5);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        puVar1 = PTR_DAT_0576c1b8;
        uVar5 = System_DateTime__get_UtcNow_2100638(0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_0130472c(*(long *)puVar2);
        }
        auVar10 = System_DateTimeOffset__op_Implicit_2106a94(uVar5,0);
        uStack_38 = System_DateTimeOffset__op_Subtraction_2106abc
                              (auVar9._0_8_,auVar9._8_8_,auVar10._0_8_,auVar10._8_8_,0);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_0130472c(*(long *)puVar1);
        }
        uVar5 = System_TimeSpan__Duration_2699cdc(&uStack_38,0);
        uVar5 = Modules_Infrastructure_Utils_TimeFormatter__FormatDigitalWatchDuration_3de6910
                          (uVar5,0);
        plVar8 = *(long **)(param_1 + 0x20);
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x558))(plVar8,uVar5,*(undefined8 *)(*plVar8 + 0x560));
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
LAB_01485b64:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

