/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyDisplayerController$$Awake
void Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyDisplayerController__Awake (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyDisplayerController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyDisplayerController$$Awake
   void Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyDisplayerController__Awake
   (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyDisplayerController_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyDisplayerController__Awake_1380798
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined4 uStack_34;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c2301c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057ebd20);
    FUN_012d0dc8(PTR_DAT_057eda60);
    FUN_012d0dc8(PTR_DAT_057c9ae0);
    FUN_012d0dc8(PTR_DAT_057d9070);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_05802618);
    FUN_012d0dc8(PTR_DAT_057b3468);
    FUN_012d0dc8(PTR_DAT_0576b0b0);
    FUN_012d0dc8(PTR_DAT_057c4d38);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_05805bf8);
    FUN_012d0dc8(PTR_DAT_05798030);
    bRam0000000005c2301c = 1;
  }
  uStack_34 = 0;
  lVar5 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
  if ((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0x18), lVar5 != 0)) {
    lVar5 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                      (lVar5,*(undefined8 *)PTR_DAT_057c9ae0);
    plVar6 = (long *)(param_1 + 0x30);
    *plVar6 = lVar5;
    FUN_012d0d74(plVar6,lVar5);
    lVar5 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
    if ((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0x18), lVar5 != 0)) {
      uVar3 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar5,*(undefined8 *)PTR_DAT_057d9070);
      *(undefined8 *)(param_1 + 0x38) = uVar3;
      FUN_012d0d74((undefined8 *)(param_1 + 0x38),uVar3);
      if (*(int *)(param_1 + 0x28) != 0x10) {
        if (*plVar6 == 0) goto LAB_014809fc;
        uStack_34 = Modules_Contexts_Application_Inventory_Scripts_InventoryService__GetVisibleCurrencyAmountByType_137de74
                              ();
        uVar3 = System_Int32__ToString_26c9768(&uStack_34,0);
        Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyDisplayerController__SetAmountText_1380a00
                  (param_1,uVar3);
      }
      puVar2 = PTR_DAT_057ebd20;
      puVar1 = PTR_DAT_0576b0b0;
      if (*(int *)(*(long *)PTR_DAT_057b8520 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                        (*(undefined8 *)puVar1);
      lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
      if ((lVar4 != 0) &&
         (System_Action_Int32Enum__int____ctor_1c4ba2c
                    (lVar4,param_1,*(undefined8 *)PTR_DAT_05802618,0), puVar2 = PTR_DAT_057eda60,
         puVar1 = PTR_DAT_057c4d38, lVar5 != 0)) {
        Modules_Infrastructure_Common_Scripts_SignalNS_Signal_Int32Enum__int___Subscribe_333e074
                  (lVar5,lVar4,*(undefined8 *)PTR_DAT_05798030);
        lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                          (*(undefined8 *)puVar1);
        lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
        if ((lVar4 != 0) &&
           (System_Action_Int32Enum__DateTime____ctor_1c4b944
                      (lVar4,param_1,*(undefined8 *)PTR_DAT_057b3468,0), lVar5 != 0)) {
          Modules_Infrastructure_Common_Scripts_SignalNS_Signal_Int32Enum__DateTime___Subscribe_333de60
                    (lVar5,lVar4,*(undefined8 *)PTR_DAT_05805bf8);
          return;
        }
      }
    }
  }
LAB_014809fc:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

