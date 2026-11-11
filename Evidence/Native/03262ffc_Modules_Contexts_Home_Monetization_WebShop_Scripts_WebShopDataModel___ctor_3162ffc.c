/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopDataModel$$.ctor
void Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopDataModel___ctor (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopDataModel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopDataModel$$.ctor
   void Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopDataModel___ctor
   (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopDataModel_o* __this, const MethodInfo*
   method); */

undefined1  [16]
Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopDataModel___ctor_3162ffc(ulong param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  puVar1 = PTR_DAT_057fdc48;
  if ((bRam0000000005c31525 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d2000);
    FUN_012d0dc8(PTR_DAT_057fdc48);
    FUN_012d0dc8(PTR_DAT_058102c8);
    bRam0000000005c31525 = 1;
  }
  lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_058102c8;
  if (lVar2 != 0) {
    System_Collections_Generic_List_object____ctor_21fc1fc(lVar2,*(undefined8 *)PTR_DAT_057d2000);
    *(long *)(param_1 + 0x10) = lVar2;
    FUN_012d0d74((long *)(param_1 + 0x10),lVar2);
    lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    if (lVar2 != 0) {
      System_Object___ctor_23dfe5c(lVar2,0);
      *(long *)(param_1 + 0x18) = lVar2;
      FUN_012d0d74((long *)(param_1 + 0x18),lVar2);
      auVar3._8_8_ = 0;
      auVar3._0_8_ = param_1;
      return auVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

