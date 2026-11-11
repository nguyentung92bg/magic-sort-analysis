/* IL2CPP: Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferService$$GetRemainingSeconds
int32_t Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GetRemainingSeconds (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferService$$GetRemainingSeconds
   int32_t
   Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GetRemainingSeconds
   (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService_o* __this,
   const MethodInfo* method); */

int Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GetRemainingSeconds_358c200
              (long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  double dVar5;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((bRam0000000005c32dfc & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0580b9d0);
    FUN_012d0dc8(PTR_DAT_0576c1b8);
    bRam0000000005c32dfc = 1;
  }
  puVar1 = PTR_DAT_0576c1b8;
  uStack_28 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 0x18), lVar4 != 0)) {
    lVar4 = *(long *)(lVar4 + 0x18);
    if ((lVar4 == 0) || (*(char *)(lVar4 + 0x30) != '\0')) {
      iVar2 = 0;
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_0580b9d0 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar3 = System_DateTime__get_UtcNow_2100638(0);
      uStack_30 = 0;
      System_DateTime___ctor_20fda84(&uStack_30,0x7b2,1,1,0);
      uStack_28 = System_DateTime__op_Subtraction_2101f60(uVar3,uStack_30,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c(*(long *)puVar1);
      }
      dVar5 = (double)System_TimeSpan__get_TotalSeconds_26999ac(&uStack_28,0);
      iVar2 = -0x80000000;
      if (dVar5 != INFINITY) {
        iVar2 = (int)dVar5;
      }
      iVar2 = *(int *)(lVar4 + 0x28) - iVar2;
    }
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

