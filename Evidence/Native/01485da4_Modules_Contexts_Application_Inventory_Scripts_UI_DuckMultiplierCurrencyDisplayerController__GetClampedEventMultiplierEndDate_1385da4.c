/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.DuckMultiplierCurrencyDisplayerController$$GetClampedEventMultiplierEndDate
System_DateTimeOffset_o Modules_Contexts_Application_Inventory_Scripts_UI_DuckMultiplierCurrencyDisplayerController__GetClampedEventMultiplierEndDate (Modules_Contexts_Application_Inventory_Scripts_UI_DuckMultiplierCurrencyDisplayerController_o* __this, System_DateTime_o multiplierEndDate, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.Inventory.Scripts.UI.DuckMultiplierCurrencyDisplayerController$$GetClampedEventMultiplierEndDate
   System_DateTimeOffset_o
   Modules_Contexts_Application_Inventory_Scripts_UI_DuckMultiplierCurrencyDisplayerController__GetClampedEventMultiplierEndDate
   (Modules_Contexts_Application_Inventory_Scripts_UI_DuckMultiplierCurrencyDisplayerController_o*
   __this, System_DateTime_o multiplierEndDate, const MethodInfo* method); */

undefined1  [16]
Modules_Contexts_Application_Inventory_Scripts_UI_DuckMultiplierCurrencyDisplayerController__GetClampedEventMultiplierEndDate_1385da4
          (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if ((bRam0000000005c23051 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05814758);
    bRam0000000005c23051 = 1;
  }
  puVar1 = PTR_DAT_05814758;
  if (*(long *)(param_1 + 0x78) != 0) {
    auVar3 = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__GetEventEndDate_1b98cf0
                       (*(long *)(param_1 + 0x78),0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    auVar4 = System_DateTimeOffset__op_Implicit_2106a94(param_2,0);
                    /* try { // try from 01485e14 to 01585e7b has its CatchHandler @ 01485f0c */
    uVar2 = System_DateTimeOffset__op_LessThan_2106ca8
                      (auVar3._0_8_,auVar3._8_8_,auVar4._0_8_,auVar4._8_8_,0);
    if ((uVar2 & 1) == 0) {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      auVar3 = System_DateTimeOffset__op_Implicit_2106a94(param_2,0);
    }
    return auVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

