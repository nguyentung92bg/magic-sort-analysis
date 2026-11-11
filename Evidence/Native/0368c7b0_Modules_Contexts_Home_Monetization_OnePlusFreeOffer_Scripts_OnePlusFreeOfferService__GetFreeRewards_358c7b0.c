/* IL2CPP: Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferService$$GetFreeRewards
System_Collections_Generic_List_RewardModel__o* Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GetFreeRewards (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferService$$GetFreeRewards
   System_Collections_Generic_List_RewardModel__o*
   Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GetFreeRewards
   (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService_o* __this,
   const MethodInfo* method); */

long Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GetFreeRewards_358c7b0
               (long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
                    /* try { // try from 0368c7c4 to 0378c7c7 has its CatchHandler @ 0368c7e8 */
  if ((bRam0000000005c32e01 & 1) == 0) {
                    /* try { // try from 0368c7c8 to 0378c7eb has its CatchHandler @ 0368c414 */
    FUN_012d0dc8(PTR_DAT_0579bac0);
    FUN_012d0dc8(PTR_DAT_0579d708);
    bRam0000000005c32e01 = 1;
  }
  puVar2 = PTR_DAT_0579d708;
                    /* catch() { ... } // from try @ 0368c7c4 with catch @ 0368c7e8 */
                    /* try { // try from 0368c7ec to 0378c7f7 has its CatchHandler @ 0368c80c */
  if ((*(long *)(param_1 + 0x10) == 0) ||
     (lVar11 = *(long *)(*(long *)(param_1 + 0x10) + 0x18), lVar11 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
                    /* try { // try from 0368c7f8 to 0378c803 has its CatchHandler @ 0368c414 */
  lVar11 = *(long *)(lVar11 + 0x18);
                    /* try { // try from 0368c804 to 0378c80b has its CatchHandler @ 0368c80c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0368c7ec with catch @ 0368c80c
                       catch(type#2 @ 00000000) { ... } // from try @ 0368c804 with catch @ 0368c80c
                        */
  if (((lVar11 == 0) || (lVar11 = *(long *)(lVar11 + 0x50), lVar11 == 0)) ||
     (*(int *)(lVar11 + 0x18) == 0)) {
    uVar8 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GetProductId_358cbf4
                      (param_1);
    lVar11 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__TryGetFallbackRewards_358ce1c
                       (param_1,uVar8,0);
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  puVar2 = PTR_DAT_05781050;
  if ((bRam0000000005c32e02 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05780b30);
    FUN_012d0dc8(PTR_DAT_05811f10);
    FUN_012d0dc8(PTR_DAT_057b3a70);
    FUN_012d0dc8(PTR_DAT_05803990);
    FUN_012d0dc8(PTR_DAT_05766c50);
    FUN_012d0dc8(PTR_DAT_057a6288);
    FUN_012d0dc8(PTR_DAT_05773a28);
    FUN_012d0dc8(PTR_DAT_057994c8);
    FUN_012d0dc8(PTR_DAT_0579bac0);
    FUN_012d0dc8(PTR_DAT_05781050);
    FUN_012d0dc8(PTR_DAT_05802320);
    bRam0000000005c32e02 = 1;
  }
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_70 = 0;
  lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  if (lVar9 != 0) {
    System_Collections_Generic_List_object____ctor_21fc1fc(lVar9,*(undefined8 *)PTR_DAT_057994c8);
    puVar7 = PTR_DAT_05811f10;
    puVar6 = PTR_DAT_05802320;
    puVar5 = PTR_DAT_057b3a70;
    puVar4 = PTR_DAT_05780b30;
    puVar3 = PTR_DAT_05773a28;
    puVar2 = PTR_DAT_05766c50;
    if ((lVar11 != 0) && (*(int *)(lVar11 + 0x18) != 0)) {
      System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                (&uStack_88,lVar11,*(undefined8 *)PTR_DAT_057a6288);
      uStack_68 = uStack_80;
      uStack_70 = uStack_88;
      uStack_60 = uStack_78;
      while (uVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                (&uStack_70,*(undefined8 *)puVar5), (uVar10 & 1) != 0) {
        uVar8 = Modules_Contexts_Application_Reward_Scripts_RewardUtil__GetAvailableReward_3ceb114
                          (uStack_60,0);
        lVar11 = *(long *)(lVar9 + 0x10);
        lVar12 = *(long *)puVar2;
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        uVar1 = *(uint *)(lVar9 + 0x18);
        if (uVar1 < *(uint *)(lVar11 + 0x18)) {
          *(uint *)(lVar9 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
          FUN_012d0d74();
        }
        else {
          (**(code **)(*(long *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x58) + 8))(lVar9);
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                (&uStack_70,*(undefined8 *)puVar7);
      lVar9 = Modules_Contexts_Application_Reward_Scripts_RewardMerger__MergeRewards_3ce5df8
                        (lVar9,0);
      lVar11 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
      if ((lVar11 == 0) ||
         (System_Comparison_object____ctor_14ec6c0(lVar11,0,*(undefined8 *)puVar6,0), lVar9 == 0))
      goto LAB_0368d2e0;
      System_Collections_Generic_List_object___Sort_21fe6b8(lVar9,lVar11,*(undefined8 *)puVar3);
    }
    return lVar9;
  }
LAB_0368d2e0:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

