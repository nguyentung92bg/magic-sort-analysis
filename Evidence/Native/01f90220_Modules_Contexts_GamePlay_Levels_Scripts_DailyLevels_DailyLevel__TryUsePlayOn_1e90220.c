/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.DailyLevels.DailyLevel$$TryUsePlayOn
bool Modules_Contexts_GamePlay_Levels_Scripts_DailyLevels_DailyLevel__TryUsePlayOn (Modules_Contexts_GamePlay_Levels_Scripts_DailyLevels_DailyLevel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.DailyLevels.DailyLevel$$TryUsePlayOn
   bool Modules_Contexts_GamePlay_Levels_Scripts_DailyLevels_DailyLevel__TryUsePlayOn
   (Modules_Contexts_GamePlay_Levels_Scripts_DailyLevels_DailyLevel_o* __this, const MethodInfo*
   method); */

undefined8
Modules_Contexts_GamePlay_Levels_Scripts_DailyLevels_DailyLevel__TryUsePlayOn_1e90220(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  puVar1 = PTR_DAT_0576aae0;
  lVar4 = *(long *)(param_1 + 0x38);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if ((bRam0000000005c29b36 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057c9ae0,0);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057ce348);
    FUN_012d0dc8(PTR_DAT_057eaff0);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_05761108);
    bRam0000000005c29b36 = 1;
  }
  if (((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
      (lVar5 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar5 != 0)) &&
     (lVar5 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar5,*(undefined8 *)PTR_DAT_057c9ae0), lVar5 != 0)) {
    uVar6 = Modules_Contexts_Application_Inventory_Scripts_InventoryService__HasFreePlayOn_1380094
                      (lVar5,0);
    if ((uVar6 & 1) != 0) {
      Modules_Contexts_Application_Inventory_Scripts_InventoryService__UseFreePlayOn_13800e0
                (lVar5,0);
      return 1;
    }
    uVar3 = Modules_Contexts_GamePlay_PlayOn_Scripts_PlayOnManager__GetDailyPlayOnPrice_2147cec
                      (lVar4);
    uVar6 = Modules_Contexts_Application_Inventory_Scripts_InventoryService__DoesEnoughVisibleCurrency_137ed28
                      (lVar5,1,uVar3,0);
    puVar2 = PTR_DAT_057eaff0;
    puVar1 = PTR_DAT_057b8520;
    if ((uVar6 & 1) == 0) {
      lVar4 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05761108);
      puVar1 = PTR_DAT_057ce348;
      if (lVar4 != 0) {
        Modules_Contexts_Home_Store_Scripts_StorePopUpArguments___ctor_24641a0(lVar4,0);
        *(undefined4 *)(lVar4 + 0x24) = 3;
        lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
        if (lVar5 != 0) {
          Modules_Contexts_Home_Store_Scripts_OpenStorePopupCommand___ctor_2b06838(lVar5,lVar4,0);
          Modules_Contexts_Home_Store_Scripts_OpenStorePopupCommand__ExecuteAsync_2b06a78(lVar5,0);
          return 0;
        }
      }
    }
    else {
      Modules_Contexts_Application_Inventory_Scripts_InventoryService__Spend_137eea4
                (lVar5,3,1,uVar3,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      lVar4 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                        (*(undefined8 *)puVar2);
      if (lVar4 != 0) {
        Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar4,0);
        return 1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

