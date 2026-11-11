/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyView$$Recycle
void Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__Recycle (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyView$$Recycle
   void Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__Recycle
   (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__Recycle_1384ab8(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_0576c200;
  if ((bRam0000000005c23041 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c23041 = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x80);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar2 = UnityEngine_Object__op_Inequality_408e110(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_1 + 0x80) == 0) goto LAB_01484bf0;
    Modules_Contexts_Home_UI_Chest_Scripts_RevealAnimationView__Dispose_29857e0
              (*(long *)(param_1 + 0x80),0);
  }
  uVar4 = *(undefined8 *)(param_1 + 0xb0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar2 = UnityEngine_Object__op_Inequality_408e110(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_1 + 0xb0) == 0) goto LAB_01484bf0;
    Modules_Contexts_Home_Collection_Scripts_UI_CollectionPackOpeningAnimationHandler__Dispose_3a6af84
              (*(long *)(param_1 + 0xb0),0);
  }
  uVar4 = *(undefined8 *)(param_1 + 0xa0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar2 = UnityEngine_Object__op_Inequality_408e110(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0xa0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    UnityEngine_Object__Destroy_4091dc4(uVar4,0);
  }
  lVar3 = UnityEngine_Component__get_transform_408b444(param_1,0);
  if (lVar3 != 0) {
    UnityEngine_Transform__SetParent_409352c(lVar3,0,0);
    lVar3 = *(long *)(param_1 + 0x18);
    if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01484be0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar3 + 0x18))
                (*(undefined8 *)(lVar3 + 0x40),param_1,*(undefined8 *)(lVar3 + 0x28));
      return;
    }
    return;
  }
LAB_01484bf0:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

