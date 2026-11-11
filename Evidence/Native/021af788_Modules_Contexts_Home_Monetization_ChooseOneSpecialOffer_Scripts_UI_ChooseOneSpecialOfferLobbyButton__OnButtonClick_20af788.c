/* IL2CPP: Modules.Contexts.Home.Monetization.ChooseOneSpecialOffer.Scripts.UI.ChooseOneSpecialOfferLobbyButton$$OnButtonClick
void Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_UI_ChooseOneSpecialOfferLobbyButton__OnButtonClick (Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_UI_ChooseOneSpecialOfferLobbyButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.ChooseOneSpecialOffer.Scripts.UI.ChooseOneSpecialOfferLobbyButton$$OnButtonClick
   void 
   Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_UI_ChooseOneSpecialOfferLobbyButton__OnButtonClick
   (Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_UI_ChooseOneSpecialOfferLobbyButton_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_UI_ChooseOneSpecialOfferLobbyButton__OnButtonClick_20af788
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long alStack_50 [4];
  
  puVar1 = PTR_DAT_0575cc30;
  if ((bRam0000000005c29516 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575cc30);
    bRam0000000005c29516 = 1;
  }
  lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar3 != 0) {
    System_Object___ctor_23dfe5c(lVar3,0);
    *(undefined4 *)(lVar3 + 0x10) = 1;
    puVar1 = PTR_DAT_0576e800;
    if ((bRam0000000005c29534 & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_057ebc90);
      FUN_012d0dc8(PTR_DAT_0576e800);
      bRam0000000005c29534 = 1;
    }
    puVar2 = PTR_DAT_057ebc90;
    alStack_50[2] = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    alStack_50[1] = 0;
    alStack_50[0] = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    System_Runtime_CompilerServices_AsyncTaskMethodBuilder__Create_2445820(&uStack_a8,0);
    uVar4 = (ulong)&uStack_70 | 8;
    uStack_80 = uStack_98;
    uStack_88 = uStack_a0;
    uStack_90 = uStack_a8;
    uStack_60 = uStack_a0;
    uStack_68 = uStack_a8;
    uStack_58 = uStack_98;
    FUN_012d0d74(uVar4,0);
    alStack_50[0] = lVar3;
    FUN_012d0d74(alStack_50,lVar3);
    uStack_70 = CONCAT44(uStack_70._4_4_,0xffffffff);
    System_Runtime_CompilerServices_AsyncTaskMethodBuilder__Start_ShowChooseOneSpecialOfferPopupCommand__ExecuteAsync_d__2__1e70390
              (uVar4,&uStack_70,*(undefined8 *)puVar2);
    System_Runtime_CompilerServices_AsyncTaskMethodBuilder__get_Task_24437f0(uVar4,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

