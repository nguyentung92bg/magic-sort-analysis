/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopPopup$$ShowViews
void Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopPopup__ShowViews (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopPopup_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopPopup$$ShowViews
   void Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopPopup__ShowViews
   (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopPopup_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopPopup__ShowViews_3161f68
               (long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 uStack_24;
  
  if (*(long *)(param_1 + 0x48) != 0) {
    Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopDiscountView__Hide_3161b3c();
    if (*(long *)(param_1 + 0x50) != 0) {
      Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopRewardView__Hide_31624fc();
      if ((*(long *)(param_1 + 0x60) != 0) &&
         (lVar5 = *(long *)(*(long *)(param_1 + 0x60) + 0x30), lVar5 != 0)) {
        if (*(long *)(lVar5 + 0x28) == 0) {
          lVar2 = *(long *)(param_1 + 0x48);
          if (lVar2 != 0) {
            if ((bRam0000000005c31512 & 1) == 0) {
              FUN_012d0dc8(PTR_DAT_057db748);
              FUN_012d0dc8(PTR_DAT_057bf740);
              bRam0000000005c31512 = 1;
            }
            lVar3 = UnityEngine_Component__get_gameObject_408b480(lVar2,0);
            if ((lVar3 != 0) &&
               (UnityEngine_GameObject__SetActive_408e318(lVar3,1,0), puVar1 = PTR_DAT_057bf740,
               lVar5 != 0)) {
              uStack_24 = *(undefined4 *)(lVar5 + 0x24);
              lVar3 = *(long *)(lVar2 + 0x18);
              uVar4 = thunk_FUN_01320a8c(*(undefined8 *)PTR_DAT_057db748,&uStack_24);
              uVar4 = System_String__Format_1ec10a8(*(undefined8 *)puVar1,uVar4,0);
              if (lVar3 != 0) {
                TMPro_TMP_Text__SetText_3dc1ab4(lVar3,uVar4,1,0);
                if (*(long *)(lVar2 + 0x20) != 0) {
                  UnityEngine_GameObject__SetActive_408e318
                            (*(long *)(lVar2 + 0x20),0 < *(int *)(lVar5 + 0x24),0);
                  return;
                }
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
        }
        else {
          lVar2 = *(long *)(param_1 + 0x50);
          if (lVar2 != 0) {
            if ((bRam0000000005c31522 & 1) == 0) {
              FUN_012d0dc8(PTR_DAT_057db748);
              FUN_012d0dc8(PTR_DAT_057cf088);
              bRam0000000005c31522 = 1;
            }
            lVar3 = UnityEngine_Component__get_gameObject_408b480(lVar2,0);
            if (((lVar3 != 0) &&
                (UnityEngine_GameObject__SetActive_408e318(lVar3,1,0), puVar1 = PTR_DAT_057cf088,
                lVar5 != 0)) && (*(long *)(lVar5 + 0x28) != 0)) {
              uStack_24 = *(undefined4 *)(*(long *)(lVar5 + 0x28) + 0x14);
              lVar5 = *(long *)(lVar2 + 0x18);
              uVar4 = thunk_FUN_01320a8c(*(undefined8 *)PTR_DAT_057db748,&uStack_24);
              uVar4 = System_String__Format_1ec10a8(*(undefined8 *)puVar1,uVar4,0);
              if (lVar5 != 0) {
                TMPro_TMP_Text__SetText_3dc1ab4(lVar5,uVar4,1,0);
                return;
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

