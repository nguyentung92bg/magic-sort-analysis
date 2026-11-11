/* IL2CPP: Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferService$$HasPendingRewards
bool Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__HasPendingRewards (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferService$$HasPendingRewards
   bool 
   Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__HasPendingRewards
   (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService_o* __this,
   const MethodInfo* method); */

uint Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__HasPendingRewards_358da10
               (long param_1)

{
  uint uVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0368da2c to 0378da33 has its CatchHandler @ 0368da74 */
    FUN_012d0ef0();
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0x30) + 0x30);
  if (lVar2 != 0) {
    if ((bRam0000000005c3708b & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_05810cf8);
      bRam0000000005c3708b = 1;
    }
    lVar2 = *(long *)(lVar2 + 0x10);
    if (lVar2 != 0) {
      uVar1 = (**(code **)(*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_05810cf8 + 0x20) + 0xc0) +
                                    0xa8) + 8))(lVar2,0x3e);
      return ~uVar1 >> 0x1f;
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0(0,0x3e,0);
}

