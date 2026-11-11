/* IL2CPP: Modules.Contexts.Home.Monetization.ChooseOneSpecialOffer.Scripts.UI.ChooseOneSpecialOfferLobbyButtonAnimationView$$OnEnable
void Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_UI_ChooseOneSpecialOfferLobbyButtonAnimationView__OnEnable (Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_UI_ChooseOneSpecialOfferLobbyButtonAnimationView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02551108) */
/* WARNING: Removing unreachable block (ram,0x02551110) */
/* WARNING: Removing unreachable block (ram,0x02551124) */
/* IL2CPP:
   Modules.Contexts.Home.Monetization.ChooseOneSpecialOffer.Scripts.UI.ChooseOneSpecialOfferLobbyButtonAnimationView$$OnEnable
   void 
   Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_UI_ChooseOneSpecialOfferLobbyButtonAnimationView__OnEnable
   (Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_UI_ChooseOneSpecialOfferLobbyButtonAnimationView_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_UI_ChooseOneSpecialOfferLobbyButtonAnimationView__OnEnable_20afaa8
               (long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  
  if ((bRam0000000005c29518 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_05810bf0);
    bRam0000000005c29518 = 1;
  }
  puVar1 = PTR_DAT_057815e0;
  lVar3 = *(long *)(param_1 + 0x30);
  if (lVar3 != 0) {
    uVar5 = UnityEngine_Random__Range_383a610
                      (*(undefined4 *)(lVar3 + 0x54),*(undefined4 *)(lVar3 + 0x58),0);
    plVar4 = (long *)(param_1 + 0x50);
    if (*plVar4 != 0) {
      DG_Tweening_TweenExtensions__Kill_1edd6a4(*plVar4,0,0);
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar2 = DG_Tweening_DOTween__Sequence_1eda154(0);
    *(undefined8 *)(param_1 + 0x50) = uVar2;
    FUN_012d0d74(plVar4,uVar2);
    DG_Tweening_TweenSettingsExtensions__AppendInterval_1edcc0c
              (uVar5,*(undefined8 *)(param_1 + 0x50),0);
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    uVar5 = Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_UI_ChooseOneSpecialOfferLobbyButtonAnimationView__IconScale_20afbd0
                      (param_1);
    DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar2,uVar5,0);
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    uVar5 = Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_UI_ChooseOneSpecialOfferLobbyButtonAnimationView__SaleTextSequence_20afc70
                      (param_1);
    DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar2,uVar5,0);
    puVar1 = PTR_DAT_05810bf0;
    if (*(long *)(param_1 + 0x30) != 0) {
      DG_Tweening_TweenSettingsExtensions__AppendInterval_1edcc0c
                (*(undefined4 *)(*(long *)(param_1 + 0x30) + 0x50),*plVar4,0);
      lVar3 = *plVar4;
      uVar5 = *(undefined8 *)puVar1;
      if ((((lVar3 != 0) && (*(char *)(lVar3 + 0xe8) != '\0')) && (*(char *)(lVar3 + 0x100) == '\0')
          ) && (*(undefined4 *)(lVar3 + 0xa4) = 0xffffffff, *(int *)(lVar3 + 0x10) == 0)) {
        *(undefined4 *)(lVar3 + 0x108) = 0x7f800000;
        return;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

