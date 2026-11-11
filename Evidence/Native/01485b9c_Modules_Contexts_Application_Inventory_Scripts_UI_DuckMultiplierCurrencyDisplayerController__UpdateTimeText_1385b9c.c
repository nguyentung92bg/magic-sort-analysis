/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.DuckMultiplierCurrencyDisplayerController$$UpdateTimeText
void Modules_Contexts_Application_Inventory_Scripts_UI_DuckMultiplierCurrencyDisplayerController__UpdateTimeText (Modules_Contexts_Application_Inventory_Scripts_UI_DuckMultiplierCurrencyDisplayerController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.Inventory.Scripts.UI.DuckMultiplierCurrencyDisplayerController$$UpdateTimeText
   void 
   Modules_Contexts_Application_Inventory_Scripts_UI_DuckMultiplierCurrencyDisplayerController__UpdateTimeText
   (Modules_Contexts_Application_Inventory_Scripts_UI_DuckMultiplierCurrencyDisplayerController_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Application_Inventory_Scripts_UI_DuckMultiplierCurrencyDisplayerController__UpdateTimeText_1385b9c
               (long param_1)

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
  
  if ((bRam0000000005c23050 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05814758);
    FUN_012d0dc8(PTR_DAT_0580b9d0);
    FUN_012d0dc8(PTR_DAT_0576c1b8);
    bRam0000000005c23050 = 1;
  }
  puVar1 = PTR_DAT_0580b9d0;
  uStack_38 = 0;
  if (*(long *)(param_1 + 0x30) != 0) {
                    /* try { // try from 01485bfc to 01585c9b has its CatchHandler @ 01485bfc
                       catch() { ... } // from try @ 01485bfc with catch @ 01485bfc
                       catch() { ... } // from try @ 01485e7c with catch @ 01485bfc */
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
                    /* try { // try from 01485c9c to 01585ca3 has its CatchHandler @ 01485f04 */
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    /* try { // try from 01485ca4 to 01585cbf has its CatchHandler @ 01485f10 */
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

