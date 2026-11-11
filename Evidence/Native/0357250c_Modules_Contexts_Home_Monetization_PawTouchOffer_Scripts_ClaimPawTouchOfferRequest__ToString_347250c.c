/* IL2CPP: Modules.Contexts.Home.Monetization.PawTouchOffer.Scripts.ClaimPawTouchOfferRequest$$ToString
System_String_o* Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_ClaimPawTouchOfferRequest__ToString (Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_ClaimPawTouchOfferRequest_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.PawTouchOffer.Scripts.ClaimPawTouchOfferRequest$$ToString
   System_String_o*
   Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_ClaimPawTouchOfferRequest__ToString
   (Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_ClaimPawTouchOfferRequest_o* __this,
   const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_ClaimPawTouchOfferRequest__ToString_347250c
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_24 [4];
  
  puVar2 = PTR_DAT_057e0b88;
  puVar1 = PTR_DAT_057b4910;
  if ((bRam0000000005c326fa & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057b4910);
    FUN_012d0dc8(PTR_DAT_057e0b88);
    bRam0000000005c326fa = 1;
  }
  auStack_24[0] = *(undefined1 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = thunk_FUN_01320a8c(*(undefined8 *)puVar1,auStack_24);
  System_String__Format_1ed15b8(*(undefined8 *)puVar2,uVar4,uVar3,0);
  return;
}

