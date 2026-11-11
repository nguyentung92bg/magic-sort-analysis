/* IL2CPP: Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.SpecialOfferService$$ShouldShowPlayOnAtEgo
bool Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__ShouldShowPlayOnAtEgo (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService_o* __this, bool isFirstPlayOn, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.SpecialOfferService$$ShouldShowPlayOnAtEgo
   bool 
   Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__ShouldShowPlayOnAtEgo
   (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService_o* __this, bool
   isFirstPlayOn, const MethodInfo* method); */

byte Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__ShouldShowPlayOnAtEgo_3596a80
               (long param_1,byte param_2)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__ShouldShowEgoOffer_3596a38
                    ();
  if ((uVar1 & 1) != 0) {
    if ((*(long *)(param_1 + 0x18) == 0) ||
       (lVar2 = Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferStateService__GetConfig_3595a24
                          (), lVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    if (*(char *)(lVar2 + 0x25) != '\0') {
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (lVar2 = Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferStateService__GetConfig_3595a24
                            (), lVar2 != 0)) {
        return *(char *)(lVar2 + 0x26) == '\0' | param_2 & 1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
  return 0;
}

