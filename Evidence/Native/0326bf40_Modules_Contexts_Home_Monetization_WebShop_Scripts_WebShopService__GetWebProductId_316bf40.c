/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopService$$GetWebProductId
System_String_o* Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__GetWebProductId (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService_o* __this, System_String_o* productId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopService$$GetWebProductId
   System_String_o*
   Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__GetWebProductId
   (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService_o* __this, System_String_o*
   productId, const MethodInfo* method); */

undefined8
Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__GetWebProductId_316bf40
          (undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if ((bRam0000000005c31575 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057c9ca0);
    bRam0000000005c31575 = 1;
  }
  lVar1 = Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__GetWebShopProduct_31617a4
                    (param_1,param_2);
  if (lVar1 == 0) {
    puVar2 = *(undefined8 **)(*(long *)PTR_DAT_057c9ca0 + 0xb8);
  }
  else {
    puVar2 = (undefined8 *)(lVar1 + 0x18);
  }
  return *puVar2;
}

