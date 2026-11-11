/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.BulkCurrencyAnimationConfig$$.ctor
void Modules_Contexts_Application_Inventory_Scripts_UI_BulkCurrencyAnimationConfig___ctor (Modules_Contexts_Application_Inventory_Scripts_UI_BulkCurrencyAnimationConfig_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.BulkCurrencyAnimationConfig$$.ctor
   void Modules_Contexts_Application_Inventory_Scripts_UI_BulkCurrencyAnimationConfig___ctor
   (Modules_Contexts_Application_Inventory_Scripts_UI_BulkCurrencyAnimationConfig_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Application_Inventory_Scripts_UI_BulkCurrencyAnimationConfig___ctor_1380444
               (undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_0576c200;
  if ((bRam0000000005c3a3d4 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200,0);
    bRam0000000005c3a3d4 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  System_Object___ctor_23dfe5c(param_1,0);
  if (pcRam0000000005c3a3d8 == (code *)0x0) {
    pcRam0000000005c3a3d8 = (code *)FUN_012d0d84(&UNK_043ee072);
  }
                    /* WARNING: Could not recover jumptable at 0x0418f4c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000005c3a3d8)(param_1);
  return;
}

