/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.PopupAnimationController$$OnDestroy
void Modules_Contexts_Home_Monetization_WebShop_Scripts_PopupAnimationController__OnDestroy (Modules_Contexts_Home_Monetization_WebShop_Scripts_PopupAnimationController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x01fda9f0) */
/* WARNING: Removing unreachable block (ram,0x01fdaa04) */
/* WARNING: Removing unreachable block (ram,0x01fdaa08) */
/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.PopupAnimationController$$OnDestroy
   void Modules_Contexts_Home_Monetization_WebShop_Scripts_PopupAnimationController__OnDestroy
   (Modules_Contexts_Home_Monetization_WebShop_Scripts_PopupAnimationController_o* __this, const
   MethodInfo* method); */

undefined4
Modules_Contexts_Home_Monetization_WebShop_Scripts_PopupAnimationController__OnDestroy_316dcac
          (long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 in_x7;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x30;
  
  puVar1 = PTR_DAT_057815e0;
  if ((bRam0000000005c3158a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    bRam0000000005c3158a = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  if ((bRam0000000005c28433 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0,0,0);
    FUN_012d0dc8(PTR_DAT_058163b8);
    bRam0000000005c28433 = 1;
  }
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_058163b8 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar2 = DG_Tweening_Core_TweenManager__FilteredOperation_3331d1c
                      (0,1,1,param_1,0,0,0,0,in_x7,unaff_x21,unaff_x20,unaff_x19,unaff_x30);
  }
  return uVar2;
}

