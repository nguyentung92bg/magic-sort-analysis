/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyRewardTarget$$OnDestroy
void Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyRewardTarget__OnDestroy (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyRewardTarget_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyRewardTarget$$OnDestroy
   void Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyRewardTarget__OnDestroy
   (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyRewardTarget_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyRewardTarget__OnDestroy_13814f8
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR_DAT_057b8520;
  if ((bRam0000000005c23024 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057b2e08);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057e3df0);
    bRam0000000005c23024 = 1;
  }
  puVar1 = PTR_DAT_057b2e08;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar3 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar1);
  if (lVar3 != 0) {
    if (*(long *)(lVar3 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0343e2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_057e3df0 + 0x20) + 0xc0) + 0x18) +
                  8))(*(long *)(lVar3 + 0x18),*(undefined4 *)(param_1 + 0x58),param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

