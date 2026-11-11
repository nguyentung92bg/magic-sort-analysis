/* IL2CPP: Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.UI.OnePlusFreeOfferLobbyButton$$OnButtonClick
void Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferLobbyButton__OnButtonClick (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferLobbyButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.UI.OnePlusFreeOfferLobbyButton$$OnButtonClick
   void 
   Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferLobbyButton__OnButtonClick
   (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferLobbyButton_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferLobbyButton__OnButtonClick_358ee90
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long alStack_60 [6];
  
                    /* try { // try from 0368ee90 to 0378eeaf has its CatchHandler @ 0368eef0 */
  puVar1 = PTR_DAT_057915b0;
  if ((bRam0000000005c32e19 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057915b0);
    bRam0000000005c32e19 = 1;
  }
  lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar3 != 0) {
                    /* try { // try from 0368eecc to 0378eecf has its CatchHandler @ 0368eee8 */
                    /* try { // try from 0368eed0 to 0378eed3 has its CatchHandler @ 0368eee4 */
                    /* try { // try from 0368eed4 to 0378eed7 has its CatchHandler @ 0368ef14 */
    System_Object___ctor_23dfe5c(lVar3,0);
                    /* try { // try from 0368eed8 to 0378eedb has its CatchHandler @ 0368eedc */
                    /* catch() { ... } // from try @ 0368eed8 with catch @ 0368eedc
                       try { // try from 0368eedc to 0378ef37 has its CatchHandler @ 0368e9f8 */
    *(undefined4 *)(lVar3 + 0x10) = 1;
    puVar1 = PTR_DAT_0576e800;
                    /* catch() { ... } // from try @ 0368ec70 with catch @ 0368eee0 */
                    /* catch() { ... } // from try @ 0368eed0 with catch @ 0368eee4 */
                    /* catch() { ... } // from try @ 0368eecc with catch @ 0368eee8 */
                    /* catch() { ... } // from try @ 0368ee7c with catch @ 0368eeec */
    if ((bRam0000000005c32e3b & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_05785df8);
      FUN_012d0dc8(PTR_DAT_0576e800);
      bRam0000000005c32e3b = 1;
    }
    puVar2 = PTR_DAT_05785df8;
    alStack_60[4] = 0;
    alStack_60[1] = 0;
    alStack_60[0] = 0;
    alStack_60[3] = 0;
    alStack_60[2] = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    System_Runtime_CompilerServices_AsyncTaskMethodBuilder__Create_2445820(&uStack_b8,0);
    uVar4 = (ulong)&uStack_80 | 8;
    uStack_90 = uStack_a8;
    uStack_98 = uStack_b0;
    uStack_a0 = uStack_b8;
    uStack_70 = uStack_b0;
    uStack_78 = uStack_b8;
    uStack_68 = uStack_a8;
    FUN_012d0d74(uVar4,0);
    alStack_60[0] = lVar3;
    FUN_012d0d74(alStack_60,lVar3);
    uStack_80 = CONCAT44(uStack_80._4_4_,0xffffffff);
    System_Runtime_CompilerServices_AsyncTaskMethodBuilder__Start_ShowOnePlusFreeOfferPopupCommand__ExecuteAsync_d__2__1e70aac
              (uVar4,&uStack_80,*(undefined8 *)puVar2);
    System_Runtime_CompilerServices_AsyncTaskMethodBuilder__get_Task_24437f0(uVar4,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0368ee90 with catch @ 0368eef0 */
  FUN_012d0ef0();
}

