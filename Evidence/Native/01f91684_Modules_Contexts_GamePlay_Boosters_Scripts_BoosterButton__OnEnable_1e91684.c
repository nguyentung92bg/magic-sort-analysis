/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.BoosterButton$$OnEnable
void Modules_Contexts_GamePlay_Boosters_Scripts_BoosterButton__OnEnable (Modules_Contexts_GamePlay_Boosters_Scripts_BoosterButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.BoosterButton$$OnEnable
   void Modules_Contexts_GamePlay_Boosters_Scripts_BoosterButton__OnEnable
   (Modules_Contexts_GamePlay_Boosters_Scripts_BoosterButton_o* __this, const MethodInfo* method);
    */

void Modules_Contexts_GamePlay_Boosters_Scripts_BoosterButton__OnEnable_1e91684(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  
  if ((bRam0000000005c28136 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057ebd20);
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_057b5608);
    FUN_012d0dc8(PTR_DAT_057cb400);
    FUN_012d0dc8(PTR_DAT_0575a600);
    FUN_012d0dc8(PTR_DAT_05785648);
    FUN_012d0dc8(PTR_DAT_0576b0b0);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_05798030);
    bRam0000000005c28136 = 1;
  }
  puVar1 = PTR_DAT_0578b048;
  lVar10 = *(long *)(param_1 + 0x18);
  if (lVar10 != 0) {
    *(undefined4 *)(lVar10 + 0x30) = 2;
    lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    puVar4 = PTR_DAT_057ebd20;
    puVar3 = PTR_DAT_057b8520;
    puVar2 = PTR_DAT_0576b0b0;
    if (lVar7 != 0) {
      System_Action___ctor_21239bc(lVar7,param_1,*(undefined8 *)PTR_DAT_057b5608,0);
      Modules_Infrastructure_UI_Common_Scripts_ButtonNS_Button__add_OnSelectSuccessEvent_4005cd8
                (lVar10,lVar7,0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      lVar10 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                         (*(undefined8 *)puVar2);
      lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
      if ((lVar7 != 0) &&
         (System_Action_Int32Enum__int____ctor_1c4ba2c
                    (lVar7,param_1,*(undefined8 *)PTR_DAT_0575a600,0), puVar2 = PTR_DAT_05785648,
         lVar10 != 0)) {
        Modules_Infrastructure_Common_Scripts_SignalNS_Signal_Int32Enum__int___Subscribe_333e074
                  (lVar10,lVar7,*(undefined8 *)PTR_DAT_05798030);
        lVar10 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                           (*(undefined8 *)puVar2);
        lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
        if ((lVar7 != 0) &&
           (System_Action___ctor_21239bc(lVar7,param_1,*(undefined8 *)PTR_DAT_057cb400,0),
           lVar10 != 0)) {
          Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Subscribe_40e7098(lVar10,lVar7,0);
          puVar1 = PTR_DAT_0576aae0;
          if ((bRam0000000005c28138 & 1) == 0) {
            FUN_012d0dc8(PTR_DAT_057a7c60);
            FUN_012d0dc8(PTR_DAT_057c9ae0);
            FUN_012d0dc8(PTR_DAT_0576aae0);
            bRam0000000005c28138 = 1;
          }
          lVar10 = **(long **)(*(long *)puVar1 + 0xb8);
          if ((lVar10 != 0) && (lVar10 = *(long *)(lVar10 + 0x18), lVar10 != 0)) {
            lVar10 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                               (lVar10,*(undefined8 *)PTR_DAT_057c9ae0);
            lVar7 = **(long **)(*(long *)puVar1 + 0xb8);
            if (((lVar7 != 0) &&
                (((lVar7 = *(long *)(lVar7 + 0x18), lVar7 != 0 &&
                  (lVar7 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                     (lVar7,*(undefined8 *)PTR_DAT_057a7c60), lVar7 != 0)) &&
                 (lVar7 = Modules_Contexts_Application_RemoteConfig_Scripts_ConfigService_GameEconomyConfigService__GetGameEconomyModel_1cc59c4
                                    (lVar7,0), lVar7 != 0)))) &&
               (uVar5 = Modules_Contexts_Application_RemoteConfig_Scripts_GameEconomyModel__GetPriceByCurrency_1cc4ab4
                                  (lVar7,*(undefined4 *)(param_1 + 0x30),0), lVar10 != 0)) {
              Modules_Contexts_Application_Inventory_Scripts_InventoryService__GetVisibleCurrencyAmountByType_137de74
                        (lVar10,*(undefined4 *)(param_1 + 0x30),0);
              uVar6 = Modules_Contexts_Application_Inventory_Scripts_InventoryService__DoesEnoughVisibleCurrency_137ed28
                                (lVar10,*(undefined4 *)(param_1 + 0x30),1,0);
              if (*(long *)(param_1 + 0x20) != 0) {
                lVar10 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x20),0);
                if (lVar10 != 0) {
                  UnityEngine_GameObject__SetActive_408e318(lVar10,~uVar6 & 1,0);
                  if ((*(long *)(param_1 + 0x28) != 0) &&
                     (lVar10 = UnityEngine_Component__get_gameObject_408b480
                                         (*(long *)(param_1 + 0x28),0), lVar10 != 0)) {
                    UnityEngine_GameObject__SetActive_408e318(lVar10,uVar6 & 1,0);
                    if (*(long *)(param_1 + 0x20) != 0) {
                      Modules_Contexts_GamePlay_Boosters_Scripts_BoosterPurchaseView__SetPrice_1e91b7c
                                (*(long *)(param_1 + 0x20),uVar5);
                      if (*(long *)(param_1 + 0x28) != 0) {
                        plVar9 = *(long **)(*(long *)(param_1 + 0x28) + 0x18);
                        uVar8 = System_Int32__ToString_26c9768(&stack0xffffffffffffffec,0);
                        if (plVar9 != (long *)0x0) {
                          (**(code **)(*plVar9 + 0x558))
                                    (plVar9,uVar8,*(undefined8 *)(*plVar9 + 0x560));
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
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

