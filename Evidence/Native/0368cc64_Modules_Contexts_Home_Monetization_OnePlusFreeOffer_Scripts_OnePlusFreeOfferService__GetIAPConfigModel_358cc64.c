/* IL2CPP: Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferService$$GetIAPConfigModel
Modules_Contexts_Application_IAP_Scripts_IAPConfigModel_o* Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GetIAPConfigModel (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService_o* __this, System_String_o* iapProductId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferService$$GetIAPConfigModel
   Modules_Contexts_Application_IAP_Scripts_IAPConfigModel_o*
   Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GetIAPConfigModel
   (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService_o* __this,
   System_String_o* iapProductId, const MethodInfo* method); */

long Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GetIAPConfigModel_358cc64
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
                    /* catch() { ... } // from try @ 0368cc58 with catch @ 0368cc7c */
                    /* try { // try from 0368cc80 to 0378cc8b has its CatchHandler @ 0368cca0 */
  if ((bRam0000000005c32e07 & 1) == 0) {
                    /* try { // try from 0368cc8c to 0378cc97 has its CatchHandler @ 0368c99c */
    FUN_012d0dc8(PTR_DAT_057b2840);
                    /* try { // try from 0368cc98 to 0378cc9f has its CatchHandler @ 0368cca0 */
    FUN_012d0dc8(PTR_DAT_057a6e48);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0368cc80 with catch @ 0368cca0
                       catch(type#2 @ 00000000) { ... } // from try @ 0368cc98 with catch @ 0368cca0
                        */
    FUN_012d0dc8(PTR_DAT_0578a030);
    FUN_012d0dc8(PTR_DAT_057ab7b0);
    bRam0000000005c32e07 = 1;
  }
  uStack_40 = 0;
  lStack_38 = 0;
  uStack_48 = 0;
  uVar3 = System_String__IsNullOrEmpty_1ed04ac(param_2,0);
  puVar2 = PTR_DAT_057b2840;
  puVar1 = PTR_DAT_057a6e48;
  lVar4 = 0;
  if ((uVar3 & 1) == 0) {
    if ((((*(long *)(param_1 + 0x28) == 0) ||
         (lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 0x18), lVar4 == 0)) ||
        (lVar4 = *(long *)(lVar4 + 0x128), lVar4 == 0)) ||
       (lVar4 = *(long *)(lVar4 + 0x28), lVar4 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0(0);
    }
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_48,lVar4,*(undefined8 *)PTR_DAT_057ab7b0);
    do {
      uVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                        (&uStack_48,*(undefined8 *)puVar1);
      lVar4 = lStack_38;
      if ((uVar3 & 1) == 0) {
        lVar4 = 0;
        iVar5 = 6;
        goto LAB_0368cd64;
      }
      if (lStack_38 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      uVar3 = System_String__Equals_1ecf17c(*(undefined8 *)(lStack_38 + 0x10),param_2,4,0);
    } while ((uVar3 & 1) == 0);
    iVar5 = 5;
LAB_0368cd64:
    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
              (&uStack_48,*(undefined8 *)puVar2);
    if (iVar5 != 5) {
      lVar4 = 0;
    }
  }
  return lVar4;
}

