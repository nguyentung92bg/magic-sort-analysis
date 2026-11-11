/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.ShuffleButton$$UpdateView
void Modules_Contexts_GamePlay_Boosters_Scripts_ShuffleButton__UpdateView (Modules_Contexts_GamePlay_Boosters_Scripts_ShuffleButton_o* __this, int32_t currencyType, int32_t amount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.ShuffleButton$$UpdateView
   void Modules_Contexts_GamePlay_Boosters_Scripts_ShuffleButton__UpdateView
   (Modules_Contexts_GamePlay_Boosters_Scripts_ShuffleButton_o* __this, int32_t currencyType,
   int32_t amount, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Boosters_Scripts_ShuffleButton__UpdateView_1e9d054(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c2818c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a7c60);
    FUN_012d0dc8(PTR_DAT_057c9ae0);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    bRam0000000005c2818c = 1;
  }
  lVar5 = **(long **)(*(long *)puVar1 + 0xb8);
  if ((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0x18), lVar5 != 0)) {
    lVar5 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                      (lVar5,*(undefined8 *)PTR_DAT_057c9ae0);
    lVar6 = **(long **)(*(long *)puVar1 + 0xb8);
    if (((lVar6 != 0) &&
        (((lVar6 = *(long *)(lVar6 + 0x18), lVar6 != 0 &&
          (lVar6 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                             (lVar6,*(undefined8 *)PTR_DAT_057a7c60), lVar6 != 0)) &&
         (lVar6 = Modules_Contexts_Application_RemoteConfig_Scripts_ConfigService_GameEconomyConfigService__GetGameEconomyModel_1cc59c4
                            (lVar6,0), lVar6 != 0)))) &&
       (uVar2 = Modules_Contexts_Application_RemoteConfig_Scripts_GameEconomyModel__GetPriceByCurrency_1cc4ab4
                          (lVar6,*(undefined4 *)(param_1 + 0x30),0), lVar5 != 0)) {
      Modules_Contexts_Application_Inventory_Scripts_InventoryService__GetVisibleCurrencyAmountByType_137de74
                (lVar5,*(undefined4 *)(param_1 + 0x30),0);
      uVar3 = Modules_Contexts_Application_Inventory_Scripts_InventoryService__DoesEnoughVisibleCurrency_137ed28
                        (lVar5,*(undefined4 *)(param_1 + 0x30),1,0);
      if (*(long *)(param_1 + 0x20) != 0) {
        lVar5 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x20),0);
        if (lVar5 != 0) {
          UnityEngine_GameObject__SetActive_408e318(lVar5,~uVar3 & 1,0);
          if ((*(long *)(param_1 + 0x28) != 0) &&
             (lVar5 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x28),0),
             lVar5 != 0)) {
            UnityEngine_GameObject__SetActive_408e318(lVar5,uVar3 & 1,0);
            if (*(long *)(param_1 + 0x20) != 0) {
              Modules_Contexts_GamePlay_Boosters_Scripts_BoosterPurchaseView__SetPrice_1e91b7c
                        (*(long *)(param_1 + 0x20),uVar2);
              if (*(long *)(param_1 + 0x28) != 0) {
                plVar7 = *(long **)(*(long *)(param_1 + 0x28) + 0x18);
                uVar4 = System_Int32__ToString_26c9768(&stack0xffffffffffffffec,0);
                if (plVar7 != (long *)0x0) {
                  (**(code **)(*plVar7 + 0x558))(plVar7,uVar4,*(undefined8 *)(*plVar7 + 0x560));
                  return;
                }
                    /* WARNING: Subroutine does not return */
                FUN_012d0ef0();
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

