/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.Commands.TryShowWebPurchaseCompletedCommand$$get_ShouldShowForce
bool Modules_Contexts_Home_Monetization_WebShop_Scripts_Commands_TryShowWebPurchaseCompletedCommand__get_ShouldShowForce (Modules_Contexts_Home_Monetization_WebShop_Scripts_Commands_TryShowWebPurchaseCompletedCommand_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.WebShop.Scripts.Commands.TryShowWebPurchaseCompletedCommand$$get_ShouldShowForce
   bool 
   Modules_Contexts_Home_Monetization_WebShop_Scripts_Commands_TryShowWebPurchaseCompletedCommand__get_ShouldShowForce
   (Modules_Contexts_Home_Monetization_WebShop_Scripts_Commands_TryShowWebPurchaseCompletedCommand_o*
   __this, const MethodInfo* method); */

bool Modules_Contexts_Home_Monetization_WebShop_Scripts_Commands_TryShowWebPurchaseCompletedCommand__get_ShouldShowForce_316e5e8
               (long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 != 0) {
    if ((bRam0000000005c31577 & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_057d15d0);
      bRam0000000005c31577 = 1;
    }
    lVar2 = *(long *)(lVar2 + 0x50);
    if (lVar2 == 0) {
      bVar1 = false;
    }
    else {
      bVar1 = 0 < *(int *)(lVar2 + 0x18);
    }
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

