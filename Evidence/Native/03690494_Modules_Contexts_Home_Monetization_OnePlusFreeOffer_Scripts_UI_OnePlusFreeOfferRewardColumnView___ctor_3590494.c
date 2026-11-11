/* IL2CPP: Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.UI.OnePlusFreeOfferRewardColumnView$$.ctor
void Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferRewardColumnView___ctor (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferRewardColumnView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.UI.OnePlusFreeOfferRewardColumnView$$.ctor
   void 
   Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferRewardColumnView___ctor
   (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferRewardColumnView_o*
   __this, const MethodInfo* method); */

undefined1  [16]
Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferRewardColumnView___ctor_3590494
          (ulong param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  puVar2 = PTR_DAT_057e9fd8;
  if ((bRam0000000005c32e26 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d8950);
    FUN_012d0dc8(PTR_DAT_057e9fd8);
    bRam0000000005c32e26 = 1;
  }
  uVar1 = _UNK_04399838;
  *(undefined8 *)(param_1 + 0x28) = _UNK_04399830;
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  *(undefined4 *)(param_1 + 0x44) = 0x3ecccccd;
  lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  if (lVar3 != 0) {
    System_Collections_Generic_List_object____ctor_21fc1fc(lVar3,*(undefined8 *)PTR_DAT_057d8950);
    *(long *)(param_1 + 0x50) = lVar3;
    FUN_012d0d74((long *)(param_1 + 0x50),lVar3);
    puVar2 = PTR_DAT_0576c200;
    if ((bRam0000000005c3a2b8 & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_0576c200,0);
      bRam0000000005c3a2b8 = 1;
    }
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = param_1;
    return auVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

