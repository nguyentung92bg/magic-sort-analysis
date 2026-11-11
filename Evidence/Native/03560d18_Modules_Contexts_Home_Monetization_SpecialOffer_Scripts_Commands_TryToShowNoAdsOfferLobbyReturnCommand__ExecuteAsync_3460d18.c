/* IL2CPP: Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.Commands.TryToShowNoAdsOfferLobbyReturnCommand$$ExecuteAsync
System_Threading_Tasks_Task_o* Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_Commands_TryToShowNoAdsOfferLobbyReturnCommand__ExecuteAsync (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_Commands_TryToShowNoAdsOfferLobbyReturnCommand_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.Commands.TryToShowNoAdsOfferLobbyReturnCommand$$ExecuteAsync
   System_Threading_Tasks_Task_o*
   Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_Commands_TryToShowNoAdsOfferLobbyReturnCommand__ExecuteAsync
   (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_Commands_TryToShowNoAdsOfferLobbyReturnCommand_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_Commands_TryToShowNoAdsOfferLobbyReturnCommand__ExecuteAsync_3460d18
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_0576e800;
                    /* try { // try from 03560d2c to 03660d43 has its CatchHandler @ 03560d84 */
  if ((bRam0000000005c32642 & 1) == 0) {
                    /* try { // try from 03560d44 to 03660d73 has its CatchHandler @ 03560adc */
    FUN_012d0dc8(PTR_DAT_057da6d8);
    FUN_012d0dc8(PTR_DAT_0576e800);
    bRam0000000005c32642 = 1;
  }
  puVar2 = PTR_DAT_057da6d8;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
                    /* try { // try from 03560d74 to 03660d83 has its CatchHandler @ 03560d84 */
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
                    /* catch() { ... } // from try @ 03560d2c with catch @ 03560d84
                       catch() { ... } // from try @ 03560d74 with catch @ 03560d84 */
                    /* try { // try from 03560d88 to 03660d8b has its CatchHandler @ 03560d94 */
                    /* try { // try from 03560d8c to 03660d97 has its CatchHandler @ 03560adc */
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__Create_2445820(&uStack_98,0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03560d88 with catch @ 03560d94
                        */
  uVar3 = (ulong)&uStack_60 | 8;
  uStack_70 = uStack_88;
  uStack_78 = uStack_90;
  uStack_80 = uStack_98;
  uStack_50 = uStack_90;
  uStack_58 = uStack_98;
  uStack_48 = uStack_88;
  FUN_012d0d74(uVar3,0);
  uStack_40 = param_1;
  FUN_012d0d74(&uStack_40,param_1);
  uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__Start_TryToShowNoAdsOfferLobbyReturnCommand__ExecuteAsync_d__11__20cd42c
            (uVar3,&uStack_60,*(undefined8 *)puVar2);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__get_Task_24437f0(uVar3,0);
  return;
}

