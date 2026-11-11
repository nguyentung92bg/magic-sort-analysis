/* IL2CPP: Modules.Contexts.Home.Monetization.PawTouchOffer.Scripts.PawTouchOfferService$$GetShowEndDateTime
System_DateTime_o Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferService__GetShowEndDateTime (Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.PawTouchOffer.Scripts.PawTouchOfferService$$GetShowEndDateTime
   System_DateTime_o
   Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferService__GetShowEndDateTime
   (Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferService_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferService__GetShowEndDateTime_3472bac
               (long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_30 [16];
  
  if ((bRam0000000005c32701 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05814758);
    bRam0000000005c32701 = 1;
  }
  puVar1 = PTR_DAT_05814758;
  auStack_30._0_8_ = 0;
  auStack_30._8_8_ = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar2 = Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferDataService__GetShowEndDate_34712c4
                      ();
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c(*(long *)puVar1);
    }
    auStack_30 = System_DateTimeOffset__FromUnixTimeSeconds_2104524(uVar2,0);
    System_DateTimeOffset__get_UtcDateTime_2103804(auStack_30,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

