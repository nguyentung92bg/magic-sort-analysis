/* IL2CPP: Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferService$$GetDisplayOrder
int32_t Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GetDisplayOrder (int32_t currencyType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferService$$GetDisplayOrder
   int32_t
   Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GetDisplayOrder
   (int32_t currencyType, const MethodInfo* method); */

uint Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GetDisplayOrder_358d400
               (int param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  
  puVar2 = PTR_DAT_0579d708;
  if ((bRam0000000005c32e04 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0579d708);
    bRam0000000005c32e04 = 1;
  }
  lVar3 = *(long *)puVar2;
  uVar6 = 0;
  while( true ) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_0130472c();
      lVar3 = *(long *)puVar2;
    }
    if (**(long **)(lVar3 + 0xb8) == 0) break;
    iVar1 = *(int *)(**(long **)(lVar3 + 0xb8) + 0x18);
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_0130472c();
      lVar3 = *(long *)puVar2;
    }
    lVar4 = **(long **)(lVar3 + 0xb8);
    if (lVar4 == 0) break;
    uVar5 = (uint)*(undefined8 *)(lVar4 + 0x18);
    if (iVar1 <= (int)uVar6) {
      return uVar5 + param_1;
    }
    if (uVar5 <= uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef8();
    }
    if (*(int *)(lVar4 + (long)(int)uVar6 * 4 + 0x20) == param_1) {
      return uVar6;
    }
    uVar6 = uVar6 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

