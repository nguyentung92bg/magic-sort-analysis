/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopRewardView$$Show
void Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopRewardView__Show (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopRewardView_o* __this, Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopProduct_o* webShopProduct, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopRewardView$$Show
   void Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopRewardView__Show
   (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopRewardView_o* __this,
   Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopProduct_o* webShopProduct, const
   MethodInfo* method); */

void Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopRewardView__Show_3162520
               (long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uStack_24;
  
  if ((bRam0000000005c31522 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057cf088);
    bRam0000000005c31522 = 1;
  }
  lVar2 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
  if (((lVar2 != 0) &&
      (UnityEngine_GameObject__SetActive_408e318(lVar2,1,0), puVar1 = PTR_DAT_057cf088, param_2 != 0
      )) && (*(long *)(param_2 + 0x28) != 0)) {
    uStack_24 = *(undefined4 *)(*(long *)(param_2 + 0x28) + 0x14);
    lVar2 = *(long *)(param_1 + 0x18);
    uVar3 = thunk_FUN_01320a8c(*(undefined8 *)PTR_DAT_057db748,&uStack_24);
    uVar3 = System_String__Format_1ec10a8(*(undefined8 *)puVar1,uVar3,0);
    if (lVar2 != 0) {
      TMPro_TMP_Text__SetText_3dc1ab4(lVar2,uVar3,1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

