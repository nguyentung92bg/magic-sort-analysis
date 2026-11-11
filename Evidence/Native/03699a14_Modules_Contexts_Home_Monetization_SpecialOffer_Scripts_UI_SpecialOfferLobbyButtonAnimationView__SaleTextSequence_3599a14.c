/* IL2CPP: Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.UI.SpecialOfferLobbyButtonAnimationView$$SaleTextSequence
DG_Tweening_Sequence_o* Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferLobbyButtonAnimationView__SaleTextSequence (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferLobbyButtonAnimationView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.UI.SpecialOfferLobbyButtonAnimationView$$SaleTextSequence
   DG_Tweening_Sequence_o*
   Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferLobbyButtonAnimationView__SaleTextSequence
   (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferLobbyButtonAnimationView_o*
   __this, const MethodInfo* method); */

undefined8
Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferLobbyButtonAnimationView__SaleTextSequence_3599a14
          (long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_057815e0;
  if ((bRam0000000005c32e86 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    bRam0000000005c32e86 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar2 = DG_Tweening_DOTween__Sequence_1eda154(0);
  uVar3 = Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferLobbyButtonAnimationView__SampleSaleTextPosition_3599b00
                    (param_1);
  DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar2,uVar3,0);
  uVar3 = Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferLobbyButtonAnimationView__SampleSaleTextRotation_3599ba0
                    (param_1);
  uVar3 = DG_Tweening_TweenSettingsExtensions__Join_1ee8bcc(uVar2,uVar3,0);
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 != 0) {
    uVar3 = Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferLobbyButtonAnimationView__SamplePivotRotation_3599c40
                      (*(undefined4 *)(lVar4 + 0x40),*(undefined4 *)(lVar4 + 0x48),uVar3,
                       *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(lVar4 + 0x30));
    uVar3 = DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar2,uVar3,0);
    lVar4 = *(long *)(param_1 + 0x30);
    if (lVar4 != 0) {
      uVar3 = Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferLobbyButtonAnimationView__SamplePivotRotation_3599c40
                        (*(undefined4 *)(lVar4 + 0x44),*(undefined4 *)(lVar4 + 0x4c),uVar3,
                         *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(lVar4 + 0x38));
      DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar2,uVar3,0);
      return uVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

