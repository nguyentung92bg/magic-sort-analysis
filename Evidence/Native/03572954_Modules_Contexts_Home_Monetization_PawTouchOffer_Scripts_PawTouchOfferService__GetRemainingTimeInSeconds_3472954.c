/* IL2CPP: Modules.Contexts.Home.Monetization.PawTouchOffer.Scripts.PawTouchOfferService$$GetRemainingTimeInSeconds
int32_t Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferService__GetRemainingTimeInSeconds (Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.PawTouchOffer.Scripts.PawTouchOfferService$$GetRemainingTimeInSeconds
   int32_t
   Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferService__GetRemainingTimeInSeconds
   (Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferService_o* __this, const
   MethodInfo* method); */

int Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferService__GetRemainingTimeInSeconds_3472954
              (long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  double dVar7;
  undefined8 uStack_28;
  
  if ((bRam0000000005c326fe & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0580b9d0);
    FUN_012d0dc8(PTR_DAT_0576c1b8);
    bRam0000000005c326fe = 1;
  }
  puVar3 = PTR_DAT_0580b9d0;
  puVar2 = PTR_DAT_0576c1b8;
  uStack_28 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    iVar4 = Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferDataService__GetEndDate_3471410
                      ();
    lVar6 = *(long *)puVar3;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_0130472c(lVar6);
    }
    uVar5 = System_DateTime__get_UtcNow_2100638(0);
    uStack_28 = System_DateTime__op_Subtraction_2101f60
                          (uVar5,*(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20),0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_0130472c(*(long *)puVar2);
    }
    dVar7 = (double)System_TimeSpan__get_TotalSeconds_26999ac(&uStack_28,0);
    iVar1 = -0x80000000;
    if (dVar7 != INFINITY) {
      iVar1 = (int)dVar7;
    }
    return iVar4 - iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

