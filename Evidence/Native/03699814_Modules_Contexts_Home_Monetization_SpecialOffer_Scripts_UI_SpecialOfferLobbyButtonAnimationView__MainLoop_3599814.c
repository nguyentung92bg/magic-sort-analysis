/* IL2CPP: Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.UI.SpecialOfferLobbyButtonAnimationView$$MainLoop
void Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferLobbyButtonAnimationView__MainLoop (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferLobbyButtonAnimationView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02551108) */
/* WARNING: Removing unreachable block (ram,0x02551110) */
/* WARNING: Removing unreachable block (ram,0x02551124) */
/* IL2CPP:
   Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.UI.SpecialOfferLobbyButtonAnimationView$$MainLoop
   void 
   Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferLobbyButtonAnimationView__MainLoop
   (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferLobbyButtonAnimationView_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferLobbyButtonAnimationView__MainLoop_3599814
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  
  if ((bRam0000000005c32e84 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057fc1d0);
    FUN_012d0dc8(PTR_DAT_05810bf0);
    bRam0000000005c32e84 = 1;
  }
  puVar1 = PTR_DAT_057815e0;
  lVar5 = *(long *)(param_1 + 0x30);
  if (lVar5 != 0) {
    uVar7 = UnityEngine_Random__Range_383a610
                      (*(undefined4 *)(lVar5 + 0x54),*(undefined4 *)(lVar5 + 0x58),0);
    plVar6 = (long *)(param_1 + 0x50);
    if (*plVar6 != 0) {
      DG_Tweening_TweenExtensions__Kill_1edd6a4(*plVar6,0,0);
    }
    puVar2 = PTR_DAT_057fc1d0;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar3 = DG_Tweening_DOTween__Sequence_1eda154(0);
    uVar4 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
    uVar3 = DG_Tweening_TweenSettingsExtensions__SetLink_object__2450f00
                      (uVar3,uVar4,*(undefined8 *)puVar2);
    *(undefined8 *)(param_1 + 0x50) = uVar3;
    FUN_012d0d74(plVar6,uVar3);
    DG_Tweening_TweenSettingsExtensions__AppendInterval_1edcc0c
              (uVar7,*(undefined8 *)(param_1 + 0x50),0);
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    uVar7 = Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferLobbyButtonAnimationView__IconScale_3599974
                      (param_1);
    DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar3,uVar7,0);
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    uVar7 = Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferLobbyButtonAnimationView__SaleTextSequence_3599a14
                      (param_1);
    DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar3,uVar7,0);
    puVar1 = PTR_DAT_05810bf0;
    if (*(long *)(param_1 + 0x30) != 0) {
      DG_Tweening_TweenSettingsExtensions__AppendInterval_1edcc0c
                (*(undefined4 *)(*(long *)(param_1 + 0x30) + 0x50),*plVar6,0);
      lVar5 = *plVar6;
      uVar7 = *(undefined8 *)puVar1;
      if ((((lVar5 != 0) && (*(char *)(lVar5 + 0xe8) != '\0')) && (*(char *)(lVar5 + 0x100) == '\0')
          ) && (*(undefined4 *)(lVar5 + 0xa4) = 0xffffffff, *(int *)(lVar5 + 0x10) == 0)) {
        *(undefined4 *)(lVar5 + 0x108) = 0x7f800000;
        return;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

