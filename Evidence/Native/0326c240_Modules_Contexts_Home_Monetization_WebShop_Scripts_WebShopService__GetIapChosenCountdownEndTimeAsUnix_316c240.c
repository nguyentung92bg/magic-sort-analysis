/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopService$$GetIapChosenCountdownEndTimeAsUnix
int64_t Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__GetIapChosenCountdownEndTimeAsUnix (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopService$$GetIapChosenCountdownEndTimeAsUnix
   int64_t
   Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__GetIapChosenCountdownEndTimeAsUnix
   (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService_o* __this, const MethodInfo*
   method); */

undefined8
Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__GetIapChosenCountdownEndTimeAsUnix_316c240
          (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_0580b9d0;
  if (((*(long *)(param_1 + 0x18) != 0) &&
      (lVar6 = *(long *)(*(long *)(param_1 + 0x18) + 0x18), lVar6 != 0)) &&
     (lVar6 = *(long *)(lVar6 + 0x18), lVar6 != 0)) {
    uVar5 = *(undefined8 *)(lVar6 + 0x28);
    if ((bRam0000000005c31579 & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_05814758);
      FUN_012d0dc8(PTR_DAT_0580b9d0);
      bRam0000000005c31579 = 1;
    }
    lVar6 = *(long *)puVar1;
    uStack_30 = 0;
    uStack_28 = 0;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_0130472c();
      lVar6 = *(long *)puVar1;
    }
    uVar3 = System_DateTime__op_Equality_2101fc8
                      (uVar5,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x10),0);
    puVar2 = PTR_DAT_05814758;
    uVar4 = 0;
    if ((uVar3 & 1) == 0) {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar5 = System_DateTime__SpecifyKind_20ffc98(uVar5,1,0);
      uStack_40 = 0;
      uStack_38 = 0;
      System_DateTimeOffset___ctor_2103064(&uStack_40,uVar5,0);
      uStack_28 = uStack_38;
      uStack_30 = uStack_40;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar4 = System_DateTimeOffset__ToUnixTimeSeconds_21054c8(&uStack_30,0);
    }
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

