/* IL2CPP: Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferService$$IsEventTimeUp
bool Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__IsEventTimeUp (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferService$$IsEventTimeUp
   bool 
   Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__IsEventTimeUp
   (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService_o* __this,
   const MethodInfo* method); */

bool Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__IsEventTimeUp_358d95c
               (long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  if ((bRam0000000005c32e0b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0580b9d0);
    bRam0000000005c32e0b = 1;
  }
  puVar1 = PTR_DAT_0580b9d0;
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 0x18), lVar4 != 0)) {
    if (*(long *)(lVar4 + 0x18) != 0) {
      uVar2 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GetEndDate_358c140
                        (param_1);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c(*(long *)puVar1);
      }
      uVar3 = System_DateTime__get_UtcNow_2100638(0);
      puVar1 = PTR_DAT_0580b9d0;
      if ((bRam0000000005c297fd & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_0580b9d0,uVar3,0);
        bRam0000000005c297fd = 1;
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      return (uVar2 & 0x3fffffffffffffff) <= (uVar3 & 0x3fffffffffffffff);
    }
                    /* try { // try from 0368d9f0 to 0378d9f7 has its CatchHandler @ 0368da6c */
    return false;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

