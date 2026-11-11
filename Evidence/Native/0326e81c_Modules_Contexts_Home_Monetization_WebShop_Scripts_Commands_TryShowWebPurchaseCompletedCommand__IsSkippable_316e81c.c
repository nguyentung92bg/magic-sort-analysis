/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.Commands.TryShowWebPurchaseCompletedCommand$$IsSkippable
bool Modules_Contexts_Home_Monetization_WebShop_Scripts_Commands_TryShowWebPurchaseCompletedCommand__IsSkippable (Modules_Contexts_Home_Monetization_WebShop_Scripts_Commands_TryShowWebPurchaseCompletedCommand_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.WebShop.Scripts.Commands.TryShowWebPurchaseCompletedCommand$$IsSkippable
   bool 
   Modules_Contexts_Home_Monetization_WebShop_Scripts_Commands_TryShowWebPurchaseCompletedCommand__IsSkippable
   (Modules_Contexts_Home_Monetization_WebShop_Scripts_Commands_TryShowWebPurchaseCompletedCommand_o*
   __this, const MethodInfo* method); */

uint Modules_Contexts_Home_Monetization_WebShop_Scripts_Commands_TryShowWebPurchaseCompletedCommand__IsSkippable_316e81c
               (void)

{
  uint uVar1;
  
  uVar1 = Modules_Contexts_Home_Monetization_WebShop_Scripts_Commands_TryShowWebPurchaseCompletedCommand__get_ShouldShowForce_316e5e8
                    ();
  return ~uVar1 & 1;
}

