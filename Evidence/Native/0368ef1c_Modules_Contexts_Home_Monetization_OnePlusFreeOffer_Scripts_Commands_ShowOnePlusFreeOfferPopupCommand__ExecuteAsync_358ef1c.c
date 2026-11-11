/* IL2CPP: Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.Commands.ShowOnePlusFreeOfferPopupCommand$$ExecuteAsync
System_Threading_Tasks_Task_o* Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_Commands_ShowOnePlusFreeOfferPopupCommand__ExecuteAsync (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_Commands_ShowOnePlusFreeOfferPopupCommand_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.Commands.ShowOnePlusFreeOfferPopupCommand$$ExecuteAsync
   System_Threading_Tasks_Task_o*
   Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_Commands_ShowOnePlusFreeOfferPopupCommand__ExecuteAsync
   (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_Commands_ShowOnePlusFreeOfferPopupCommand_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_Commands_ShowOnePlusFreeOfferPopupCommand__ExecuteAsync_358ef1c
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
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
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
                    /* catch() { ... } // from try @ 0368eb98 with catch @ 0368ef1c
                       catch() { ... } // from try @ 0368ec84 with catch @ 0368ef1c
                       catch() { ... } // from try @ 0368ee5c with catch @ 0368ef1c */
  puVar1 = PTR_DAT_0576e800;
                    /* catch() { ... } // from try @ 0368eca0 with catch @ 0368ef20
                       catch() { ... } // from try @ 0368edcc with catch @ 0368ef20
                       catch() { ... } // from try @ 0368ee4c with catch @ 0368ef20 */
                    /* try { // try from 0368ef38 to 0378ef4f has its CatchHandler @ 0368efb0 */
  if ((bRam0000000005c32e3b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05785df8);
                    /* try { // try from 0368ef50 to 0378ef9f has its CatchHandler @ 0368e9f8 */
    FUN_012d0dc8(PTR_DAT_0576e800);
    bRam0000000005c32e3b = 1;
  }
  puVar2 = PTR_DAT_05785df8;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__Create_2445820(&uStack_b8,0);
                    /* try { // try from 0368efa0 to 0378efaf has its CatchHandler @ 0368efb0 */
  uVar3 = (ulong)&uStack_80 | 8;
                    /* catch() { ... } // from try @ 0368ef38 with catch @ 0368efb0
                       catch() { ... } // from try @ 0368efa0 with catch @ 0368efb0 */
  uStack_90 = uStack_a8;
                    /* try { // try from 0368efb4 to 0378efb7 has its CatchHandler @ 0368efc0 */
  uStack_98 = uStack_b0;
  uStack_a0 = uStack_b8;
                    /* try { // try from 0368efb8 to 0378efc3 has its CatchHandler @ 0368e9f8 */
  uStack_70 = uStack_b0;
  uStack_78 = uStack_b8;
  uStack_68 = uStack_a8;
                    /* catch() { ... } // from try @ 0368efb4 with catch @ 0368efc0 */
  FUN_012d0d74(uVar3,0);
  uStack_60 = param_1;
  FUN_012d0d74(&uStack_60,param_1);
  uStack_80 = CONCAT44(uStack_80._4_4_,0xffffffff);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__Start_ShowOnePlusFreeOfferPopupCommand__ExecuteAsync_d__2__1e70aac
            (uVar3,&uStack_80,*(undefined8 *)puVar2);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__get_Task_24437f0(uVar3,0);
  return;
}

