/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopConfigModel$$IsValid
bool Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopConfigModel__IsValid (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopConfigModel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopConfigModel$$IsValid
   bool Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopConfigModel__IsValid
   (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopConfigModel_o* __this, const
   MethodInfo* method); */

uint Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopConfigModel__IsValid_3162e38
               (long param_1)

{
  uint uVar1;
  ulong uVar2;
  
  if ((bRam0000000005c31523 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0580a430);
    bRam0000000005c31523 = 1;
  }
  uVar2 = System_String__IsNullOrEmpty_1ed04ac(*(undefined8 *)(param_1 + 0x20),0);
  if ((uVar2 & 1) == 0) {
    uVar1 = Modules_Contexts_Application_RemoteConfig_Scripts_RemoteConfigValidation__IsNullOrHasNullElement_object__2679cdc
                      (*(undefined8 *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_0580a430);
    uVar1 = ~uVar1 & 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

