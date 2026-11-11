/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopPriceView$$Show
void Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopPriceView__Show (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopPriceView_o* __this, Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopProduct_o* product, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopPriceView$$Show
   void Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopPriceView__Show
   (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopPriceView_o* __this,
   Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopProduct_o* product, const MethodInfo*
   method); */

void Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopPriceView__Show_3161fc4
               (long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uStack_24;
  
  if ((bRam0000000005c3151c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057ce7d0);
    FUN_012d0dc8(PTR_DAT_057d1bd0);
    bRam0000000005c3151c = 1;
  }
  puVar1 = PTR_DAT_057d1bd0;
  if (param_2 != 0) {
    uStack_24 = *(undefined4 *)(param_2 + 0x20);
    lVar3 = *(long *)(param_1 + 0x18);
    uVar2 = thunk_FUN_01320a8c(*(undefined8 *)PTR_DAT_057ce7d0,&uStack_24);
    uVar2 = System_String__Format_1ec10a8(*(undefined8 *)puVar1,uVar2,0);
    if (lVar3 != 0) {
      TMPro_TMP_Text__SetText_3dc1ab4(lVar3,uVar2,1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

