/* IL2CPP: Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferRewardMapper$$ToNestedRewardModels
System_Collections_Generic_List_RewardModel__o* Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferRewardMapper__ToNestedRewardModels (System_Collections_Generic_IEnumerable_ClientCommonRewardModelWithCollection__o* source, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferRewardMapper$$ToNestedRewardModels
   System_Collections_Generic_List_RewardModel__o*
   Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferRewardMapper__ToNestedRewardModels
   (System_Collections_Generic_IEnumerable_ClientCommonRewardModelWithCollection__o* source, const
   MethodInfo* method); */

long Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferRewardMapper__ToNestedRewardModels_358b710
               (undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR_DAT_05781050;
  if ((bRam0000000005c32df0 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057994c8);
    FUN_012d0dc8(PTR_DAT_0579bac0);
                    /* catch() { ... } // from try @ 0368b7a0 with catch @ 0368b750
                       catch() { ... } // from try @ 0368b804 with catch @ 0368b750
                       catch() { ... } // from try @ 0368b850 with catch @ 0368b750
                       catch() { ... } // from try @ 0368b8cc with catch @ 0368b750 */
    FUN_012d0dc8(PTR_DAT_05781050);
    bRam0000000005c32df0 = 1;
  }
  lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  if (lVar3 != 0) {
    System_Collections_Generic_List_object____ctor_21fc1fc(lVar3,*(undefined8 *)PTR_DAT_057994c8);
                    /* try { // try from 0368b784 to 0378b78b has its CatchHandler @ 0368b810 */
    Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferRewardMapper__AddRewardModels_358b2e4
              (lVar3,param_1);
    lVar1 = 0;
    if (*(int *)(lVar3 + 0x18) != 0) {
      lVar1 = lVar3;
    }
                    /* try { // try from 0368b798 to 0378b79f has its CatchHandler @ 0368b804 */
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0368b7a0 to 0378b7f7 has its CatchHandler @ 0368b750 */
  FUN_012d0ef0();
}

