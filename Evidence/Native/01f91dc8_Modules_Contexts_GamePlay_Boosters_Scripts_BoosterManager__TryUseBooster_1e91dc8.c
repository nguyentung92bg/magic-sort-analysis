/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.BoosterManager$$TryUseBooster
bool Modules_Contexts_GamePlay_Boosters_Scripts_BoosterManager__TryUseBooster (Modules_Contexts_GamePlay_Boosters_Scripts_BoosterManager_o* __this, int32_t currencyType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.BoosterManager$$TryUseBooster
   bool Modules_Contexts_GamePlay_Boosters_Scripts_BoosterManager__TryUseBooster
   (Modules_Contexts_GamePlay_Boosters_Scripts_BoosterManager_o* __this, int32_t currencyType, const
   MethodInfo* method); */

undefined4
Modules_Contexts_GamePlay_Boosters_Scripts_BoosterManager__TryUseBooster_1e91dc8
          (undefined8 param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if ((bRam0000000005c2814a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a7c60);
    FUN_012d0dc8(PTR_DAT_057c9ae0);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_058007e8);
    FUN_012d0dc8(PTR_DAT_057ce348);
    FUN_012d0dc8(PTR_DAT_05761108);
    bRam0000000005c2814a = 1;
  }
  uVar3 = Modules_Contexts_GamePlay_Boosters_Scripts_BoosterManager__CanUseBooster_1e93394
                    (param_1,param_2);
  puVar1 = PTR_DAT_0576aae0;
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  if ((**(long **)(*(long *)PTR_DAT_0576aae0 + 0xb8) != 0) &&
     (lVar4 = *(long *)(**(long **)(*(long *)PTR_DAT_0576aae0 + 0xb8) + 0x18), lVar4 != 0)) {
    lVar4 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                      (lVar4,*(undefined8 *)PTR_DAT_057c9ae0);
    if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
       ((lVar5 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar5 != 0 &&
        (lVar5 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                           (lVar5,*(undefined8 *)PTR_DAT_057a7c60), lVar4 != 0)))) {
      uVar3 = Modules_Contexts_Application_Inventory_Scripts_InventoryService__DoesEnoughVisibleCurrency_137ed28
                        (lVar4,param_2,1,0);
      puVar1 = PTR_DAT_058007e8;
      if ((uVar3 & 1) == 0) {
        if (*(int *)(*(long *)PTR_DAT_058007e8 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        if (cRam0000000005c244b6 == '\0') {
          FUN_012d0dc8(PTR_DAT_058007e8);
          cRam0000000005c244b6 = '\x01';
        }
        lVar6 = *(long *)puVar1;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_0130472c();
          lVar6 = *(long *)puVar1;
        }
        if (**(char **)(lVar6 + 0xb8) == '\0') {
          if ((lVar5 != 0) &&
             (lVar5 = Modules_Contexts_Application_RemoteConfig_Scripts_ConfigService_GameEconomyConfigService__GetGameEconomyModel_1cc59c4
                                (lVar5,0), lVar5 != 0)) {
            uVar2 = Modules_Contexts_Application_RemoteConfig_Scripts_GameEconomyModel__GetPriceByCurrency_1cc4ab4
                              (lVar5,param_2,0);
            uVar3 = Modules_Contexts_Application_Inventory_Scripts_InventoryService__DoesEnoughVisibleCurrency_137ed28
                              (lVar4,1,uVar2,0);
            if ((uVar3 & 1) == 0) {
              lVar4 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05761108);
              puVar1 = PTR_DAT_057ce348;
              if (lVar4 != 0) {
                Modules_Contexts_Home_Store_Scripts_StorePopUpArguments___ctor_24641a0(lVar4,0);
                *(undefined4 *)(lVar4 + 0x24) = 1;
                lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                if (lVar5 != 0) {
                  Modules_Contexts_Home_Store_Scripts_OpenStorePopupCommand___ctor_2b06838
                            (lVar5,lVar4,0);
                  Modules_Contexts_Home_Store_Scripts_OpenStorePopupCommand__ExecuteAsync_2b06a78
                            (lVar5,0);
                  return 1;
                }
              }
            }
            else {
              Modules_Contexts_Application_Inventory_Scripts_InventoryService__Spend_137eea4
                        (lVar4,1,1,uVar2,0);
              Modules_Contexts_GamePlay_Boosters_Scripts_BoosterManager__UseBooster_1e933b4
                        (param_1,param_2);
              if (cRam0000000005c230a8 == '\0') {
                FUN_012d0dc8(PTR_DAT_057ece38);
                cRam0000000005c230a8 = '\x01';
              }
              if (**(long **)(*(long *)PTR_DAT_057ece38 + 0xb8) != 0) {
                Modules_Contexts_Application_Events_Scripts_EventSender__SendBoosterPurchasedEvent_144dd88
                          (**(long **)(*(long *)PTR_DAT_057ece38 + 0xb8),param_2,uVar2,0);
                return 1;
              }
            }
          }
          goto LAB_01f92074;
        }
      }
      Modules_Contexts_Application_Inventory_Scripts_InventoryService__Spend_137eea4
                (lVar4,1,param_2,1,0);
      Modules_Contexts_GamePlay_Boosters_Scripts_BoosterManager__UseBooster_1e933b4(param_1,param_2)
      ;
      return 1;
    }
  }
LAB_01f92074:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

