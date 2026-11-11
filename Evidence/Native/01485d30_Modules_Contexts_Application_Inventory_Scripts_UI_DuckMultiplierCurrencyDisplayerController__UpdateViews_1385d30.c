/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.DuckMultiplierCurrencyDisplayerController$$UpdateViews
void Modules_Contexts_Application_Inventory_Scripts_UI_DuckMultiplierCurrencyDisplayerController__UpdateViews (Modules_Contexts_Application_Inventory_Scripts_UI_DuckMultiplierCurrencyDisplayerController_o* __this, bool active, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.Inventory.Scripts.UI.DuckMultiplierCurrencyDisplayerController$$UpdateViews
   void 
   Modules_Contexts_Application_Inventory_Scripts_UI_DuckMultiplierCurrencyDisplayerController__UpdateViews
   (Modules_Contexts_Application_Inventory_Scripts_UI_DuckMultiplierCurrencyDisplayerController_o*
   __this, bool active, const MethodInfo* method); */

void Modules_Contexts_Application_Inventory_Scripts_UI_DuckMultiplierCurrencyDisplayerController__UpdateViews_1385d30
               (long param_1,byte param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uStack_38;
  
  if (*(byte *)(param_1 + 0x70) != (param_2 & 1)) {
    *(byte *)(param_1 + 0x70) = param_2 & 1;
    Modules_Contexts_Application_Inventory_Scripts_UI_DuckMultiplierCurrencyDisplayerController__OnStateChange_1385d60
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
    uVar3 = Modules_Contexts_Application_Inventory_Scripts_InventoryService__GetVisibleTimedCurrencyEndDateByType_137e8e0
                      (*(long *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x28));
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c(*(long *)puVar1);
    }
    uVar4 = System_DateTime__get_UtcNow_2100638(0);
    uVar5 = System_DateTime__op_LessThan_2102098(uVar3,uVar4,0);
    if ((uVar5 & 1) != 0) {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar3 = System_DateTime__get_UtcNow_2100638(0);
    }
    puVar2 = PTR_DAT_05814758;
    auVar7 = Modules_Contexts_Application_Inventory_Scripts_UI_DuckMultiplierCurrencyDisplayerController__GetClampedEventMultiplierEndDate_1385da4
                       (param_1,uVar3);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    puVar1 = PTR_DAT_0576c1b8;
    uVar3 = System_DateTime__get_UtcNow_2100638(0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_0130472c(*(long *)puVar2);
    }
    auVar8 = System_DateTimeOffset__op_Implicit_2106a94(uVar3,0);
    uStack_38 = System_DateTimeOffset__op_Subtraction_2106abc
                          (auVar7._0_8_,auVar7._8_8_,auVar8._0_8_,auVar8._8_8_,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c(*(long *)puVar1);
    }
    uVar3 = System_TimeSpan__Duration_2699cdc(&uStack_38,0);
    uVar3 = Modules_Infrastructure_Utils_TimeFormatter__FormatDigitalWatchDuration_3de6910(uVar3,0);
    plVar6 = *(long **)(param_1 + 0x20);
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x558))(plVar6,uVar3,*(undefined8 *)(*plVar6 + 0x560));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

