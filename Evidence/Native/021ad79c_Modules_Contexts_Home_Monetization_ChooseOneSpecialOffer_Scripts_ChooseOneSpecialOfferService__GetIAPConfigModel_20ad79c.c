/* IL2CPP: Modules.Contexts.Home.Monetization.ChooseOneSpecialOffer.Scripts.ChooseOneSpecialOfferService$$GetIAPConfigModel
Modules_Contexts_Application_IAP_Scripts_IAPConfigModel_o* Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService__GetIAPConfigModel (Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService_o* __this, System_String_o* iapProductId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.ChooseOneSpecialOffer.Scripts.ChooseOneSpecialOfferService$$GetIAPConfigModel
   Modules_Contexts_Application_IAP_Scripts_IAPConfigModel_o*
   Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService__GetIAPConfigModel
   (Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService_o*
   __this, System_String_o* iapProductId, const MethodInfo* method); */

long Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService__GetIAPConfigModel_20ad79c
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
  
  if ((bRam0000000005c29507 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057b2840);
    FUN_012d0dc8(PTR_DAT_057a6e48);
    FUN_012d0dc8(PTR_DAT_0578a030);
    FUN_012d0dc8(PTR_DAT_057ab7b0);
    bRam0000000005c29507 = 1;
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
        (lVar4 = *(long *)(lVar4 + 0x120), lVar4 == 0)) ||
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
        goto LAB_021ad89c;
      }
      if (lStack_38 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      uVar3 = System_String__Equals_1ecf17c(*(undefined8 *)(lStack_38 + 0x10),param_2,4,0);
    } while ((uVar3 & 1) == 0);
    iVar5 = 5;
LAB_021ad89c:
    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
              (&uStack_48,*(undefined8 *)puVar2);
    if (iVar5 != 5) {
      lVar4 = 0;
    }
  }
  return lVar4;
}

