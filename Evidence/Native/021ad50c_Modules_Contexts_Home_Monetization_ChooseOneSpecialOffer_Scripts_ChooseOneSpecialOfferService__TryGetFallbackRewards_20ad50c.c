/* IL2CPP: Modules.Contexts.Home.Monetization.ChooseOneSpecialOffer.Scripts.ChooseOneSpecialOfferService$$TryGetFallbackRewards
System_Collections_Generic_List_RewardModel__o* Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService__TryGetFallbackRewards (Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService_o* __this, System_String_o* productId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.ChooseOneSpecialOffer.Scripts.ChooseOneSpecialOfferService$$TryGetFallbackRewards
   System_Collections_Generic_List_RewardModel__o*
   Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService__TryGetFallbackRewards
   (Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService_o*
   __this, System_String_o* productId, const MethodInfo* method); */

long Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService__TryGetFallbackRewards_20ad50c
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  
  if ((bRam0000000005c29506 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d0318);
    FUN_012d0dc8(PTR_DAT_057a1e18);
    FUN_012d0dc8(PTR_DAT_057d80c0);
    FUN_012d0dc8(PTR_DAT_05771d70);
    FUN_012d0dc8(PTR_DAT_057fec48);
    FUN_012d0dc8(PTR_DAT_057994c8);
    FUN_012d0dc8(PTR_DAT_0577c6c0);
    FUN_012d0dc8(PTR_DAT_0579bac0);
    FUN_012d0dc8(PTR_DAT_0579fff0);
    FUN_012d0dc8(PTR_DAT_05781050);
    bRam0000000005c29506 = 1;
  }
  puVar6 = PTR_DAT_057d0318;
  puVar5 = PTR_DAT_057a1e18;
  puVar4 = PTR_DAT_0579fff0;
  puVar3 = PTR_DAT_057994c8;
  puVar2 = PTR_DAT_05781050;
  puVar1 = PTR_DAT_05771d70;
  uStack_68 = 0;
  lStack_60 = 0;
  uStack_70 = 0;
  if ((((*(long *)(param_1 + 0x28) == 0) ||
       (lVar9 = *(long *)(*(long *)(param_1 + 0x28) + 0x18), lVar9 == 0)) ||
      (lVar9 = *(long *)(lVar9 + 0x120), lVar9 == 0)) ||
     (lVar9 = *(long *)(lVar9 + 0x30), lVar9 == 0)) goto LAB_021ad718;
  System_Collections_Generic_List_object___GetEnumerator_21fd5c8
            (&uStack_88,lVar9,*(undefined8 *)PTR_DAT_057fec48);
  uStack_68 = uStack_80;
  uStack_70 = uStack_88;
  lStack_60 = lStack_78;
  while (uVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                           (&uStack_70,*(undefined8 *)puVar5), lVar8 = lStack_60, (uVar7 & 1) != 0)
  {
    if (lStack_60 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    if (*(long *)(lStack_60 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    uVar7 = System_Collections_Generic_List_object___Contains_21fce6c
                      (*(long *)(lStack_60 + 0x10),param_2,*(undefined8 *)puVar1);
    if ((uVar7 & 1) != 0) {
      lVar9 = *(long *)(lVar8 + 0x18);
      System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                (&uStack_70,*(undefined8 *)puVar6);
      return lVar9;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
            (&uStack_70,*(undefined8 *)puVar6);
  if (0 < *(int *)(lVar9 + 0x18)) {
    lVar8 = System_Collections_Generic_List_object___get_Item_21fc76c(lVar9,0,*(undefined8 *)puVar4)
    ;
    if ((lVar8 == 0) || (*(long *)(lVar8 + 0x18) == 0)) goto LAB_021ad718;
    if (0 < *(int *)(*(long *)(lVar8 + 0x18) + 0x18)) {
      lVar9 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar9,0,*(undefined8 *)puVar4);
      if (lVar9 != 0) {
        return *(long *)(lVar9 + 0x18);
      }
      goto LAB_021ad718;
    }
  }
  lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  if (lVar9 != 0) {
    System_Collections_Generic_List_object____ctor_21fc1fc(lVar9,*(undefined8 *)puVar3);
    return lVar9;
  }
LAB_021ad718:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

