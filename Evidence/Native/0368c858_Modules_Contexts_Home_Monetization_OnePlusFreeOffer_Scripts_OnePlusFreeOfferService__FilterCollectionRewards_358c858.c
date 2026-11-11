/* IL2CPP: Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferService$$FilterCollectionRewards
System_Collections_Generic_List_RewardModel__o* Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__FilterCollectionRewards (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService_o* __this, System_Collections_Generic_List_RewardModel__o* rewards, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferService$$FilterCollectionRewards
   System_Collections_Generic_List_RewardModel__o*
   Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__FilterCollectionRewards
   (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService_o* __this,
   System_Collections_Generic_List_RewardModel__o* rewards, const MethodInfo* method); */

long Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__FilterCollectionRewards_358c858
               (undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  
  puVar2 = PTR_DAT_05781050;
  if ((bRam0000000005c32e00 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05811f10);
    FUN_012d0dc8(PTR_DAT_057b3a70);
    FUN_012d0dc8(PTR_DAT_05803990);
    FUN_012d0dc8(PTR_DAT_05766c50);
    FUN_012d0dc8(PTR_DAT_057a6288);
    FUN_012d0dc8(PTR_DAT_057eb4d8);
    FUN_012d0dc8(PTR_DAT_057994c8);
    FUN_012d0dc8(PTR_DAT_05781050);
    bRam0000000005c32e00 = 1;
  }
  uStack_68 = 0;
  lStack_60 = 0;
  uStack_70 = 0;
  lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  if ((lVar7 != 0) &&
     (System_Collections_Generic_List_object____ctor_21fc1fc(lVar7,*(undefined8 *)PTR_DAT_057994c8),
     puVar6 = PTR_DAT_05811f10, puVar5 = PTR_DAT_057eb4d8, puVar4 = PTR_DAT_057b3a70,
     puVar3 = PTR_DAT_057a6288, puVar2 = PTR_DAT_05766c50, param_2 != 0)) {
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_88,param_2,*(undefined8 *)PTR_DAT_057a6288);
    uStack_68 = uStack_80;
    uStack_70 = uStack_88;
    lStack_60 = lStack_78;
    while( true ) {
      uVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                        (&uStack_70,*(undefined8 *)puVar4);
      if ((uVar8 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                  (&uStack_70,*(undefined8 *)puVar6);
        System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                  (&uStack_88,lVar7,*(undefined8 *)puVar3);
        uStack_68 = uStack_80;
        uStack_70 = uStack_88;
        lStack_60 = lStack_78;
        while (uVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                 (&uStack_70,*(undefined8 *)puVar4), (uVar8 & 1) != 0) {
          System_Collections_Generic_List_object___Remove_21fe044
                    (param_2,lStack_60,*(undefined8 *)puVar5);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                  (&uStack_70,*(undefined8 *)puVar6);
        return lVar7;
      }
      if (lStack_60 == 0) break;
      if (*(int *)(lStack_60 + 0x10) == 0xe) {
        lVar10 = *(long *)(lVar7 + 0x10);
        lVar11 = *(long *)puVar2;
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                    /* try { // try from 0368c99c to 0378cb0b has its CatchHandler @ 0368c99c
                       catch() { ... } // from try @ 0368c99c with catch @ 0368c99c
                       catch() { ... } // from try @ 0368cb60 with catch @ 0368c99c
                       catch() { ... } // from try @ 0368cc5c with catch @ 0368c99c
                       catch() { ... } // from try @ 0368cc8c with catch @ 0368c99c */
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        uVar1 = *(uint *)(lVar7 + 0x18);
        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(lVar7 + 0x18) = uVar1 + 1;
          plVar9 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
          *plVar9 = lStack_60;
          FUN_012d0d74(plVar9,lStack_60);
        }
        else {
          (**(code **)(*(long *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x58) + 8))
                    (lVar7,lStack_60);
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

