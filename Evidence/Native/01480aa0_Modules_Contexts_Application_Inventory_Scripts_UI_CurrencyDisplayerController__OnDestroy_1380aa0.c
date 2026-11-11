/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyDisplayerController$$OnDestroy
void Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyDisplayerController__OnDestroy (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyDisplayerController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyDisplayerController$$OnDestroy
   void Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyDisplayerController__OnDestroy
   (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyDisplayerController_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyDisplayerController__OnDestroy_1380aa0
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  puVar2 = PTR_DAT_057b8520;
  if ((bRam0000000005c2301d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057ebd20);
    FUN_012d0dc8(PTR_DAT_057eda60);
    FUN_012d0dc8(PTR_DAT_05802618);
    FUN_012d0dc8(PTR_DAT_057b3468);
    FUN_012d0dc8(PTR_DAT_0576b0b0);
    FUN_012d0dc8(PTR_DAT_057c4d38);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_0576e0c0);
    FUN_012d0dc8(PTR_DAT_057b8968);
    bRam0000000005c2301d = 1;
  }
  puVar3 = PTR_DAT_057ebd20;
  puVar1 = PTR_DAT_0576b0b0;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar4 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar1);
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
  if ((lVar5 != 0) &&
     (System_Action_Int32Enum__int____ctor_1c4ba2c(lVar5,param_1,*(undefined8 *)PTR_DAT_05802618,0),
     puVar1 = PTR_DAT_057eda60, puVar2 = PTR_DAT_057c4d38, lVar4 != 0)) {
    Modules_Infrastructure_Common_Scripts_SignalNS_Signal_Int32Enum__int___Unsubscribe_333e088
              (lVar4,lVar5,*(undefined8 *)PTR_DAT_0576e0c0);
    lVar4 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                      (*(undefined8 *)puVar2);
    lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    if ((lVar5 != 0) &&
       (System_Action_Int32Enum__DateTime____ctor_1c4b944
                  (lVar5,param_1,*(undefined8 *)PTR_DAT_057b3468,0), lVar4 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0343de84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_057b8968 + 0x20) + 0xc0) + 0x10) +
                  8))(lVar4,lVar5);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

