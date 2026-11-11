/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopPromptResult$$get_IapAuto
Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopPromptResult_o* Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopPromptResult__get_IapAuto (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopPromptResult$$get_IapAuto
   Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopPromptResult_o*
   Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopPromptResult__get_IapAuto (const
   MethodInfo* method); */

long Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopPromptResult__get_IapAuto_3160e44
               (void)

{
  undefined *puVar1;
  long lVar2;
  
                    /* try { // try from 03260e44 to 03360e47 has its CatchHandler @ 03260e50 */
  puVar1 = PTR_DAT_057f0830;
                    /* try { // try from 03260e48 to 03360e53 has its CatchHandler @ 03260b70 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03260e44 with catch @ 03260e50
                        */
  if ((bRam0000000005c3150d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f0830);
    bRam0000000005c3150d = 1;
  }
  lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar2 != 0) {
    System_Object___ctor_23dfe5c(lVar2,0);
    *(undefined4 *)(lVar2 + 0x10) = 1;
    *(undefined1 *)(lVar2 + 0x14) = 1;
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

