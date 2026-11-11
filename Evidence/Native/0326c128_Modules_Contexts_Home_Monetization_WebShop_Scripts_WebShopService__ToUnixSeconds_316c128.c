/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopService$$ToUnixSeconds
int64_t Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__ToUnixSeconds (System_DateTime_o dateTimeUtc, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopService$$ToUnixSeconds
   int64_t Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__ToUnixSeconds
   (System_DateTime_o dateTimeUtc, const MethodInfo* method); */

undefined8
Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__ToUnixSeconds_316c128
          (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_0580b9d0;
  if ((bRam0000000005c31579 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05814758);
    FUN_012d0dc8(PTR_DAT_0580b9d0);
    bRam0000000005c31579 = 1;
  }
  lVar3 = *(long *)puVar1;
  uStack_30 = 0;
  uStack_28 = 0;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_0130472c();
    lVar3 = *(long *)puVar1;
  }
  uVar4 = System_DateTime__op_Equality_2101fc8
                    (param_1,*(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x10),0);
  puVar2 = PTR_DAT_05814758;
  uVar5 = 0;
  if ((uVar4 & 1) == 0) {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar5 = System_DateTime__SpecifyKind_20ffc98(param_1,1,0);
    uStack_40 = 0;
    uStack_38 = 0;
    System_DateTimeOffset___ctor_2103064(&uStack_40,uVar5,0);
    uStack_28 = uStack_38;
    uStack_30 = uStack_40;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar5 = System_DateTimeOffset__ToUnixTimeSeconds_21054c8(&uStack_30,0);
  }
  return uVar5;
}

