/* IL2CPP: Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.SpecialOfferService$$IsAllowedByFirstStuckRule
bool Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__IsAllowedByFirstStuckRule (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService_o* __this, bool isFirstPlayOn, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.SpecialOfferService$$IsAllowedByFirstStuckRule
   bool 
   Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__IsAllowedByFirstStuckRule
   (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService_o* __this, bool
   isFirstPlayOn, const MethodInfo* method); */

byte Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__IsAllowedByFirstStuckRule_3596ad8
               (long param_1,byte param_2)

{
  long lVar1;
  
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (lVar1 = Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferStateService__GetConfig_3595a24
                        (), lVar1 != 0)) {
    return *(char *)(lVar1 + 0x26) == '\0' | param_2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

