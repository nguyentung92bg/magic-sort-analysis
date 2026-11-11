/* IL2CPP: Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.SpecialOfferService$$GetBundleId
System_String_o* Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__GetBundleId (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.SpecialOfferService$$GetBundleId
   System_String_o*
   Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__GetBundleId
   (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService_o* __this, const
   MethodInfo* method); */

undefined8
Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__GetBundleId_3596940
          (long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_28;
  
  if ((bRam0000000005c32e69 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578a5a0);
    FUN_012d0dc8(PTR_DAT_05781ef8);
    FUN_012d0dc8(PTR_DAT_057c9ca0);
    bRam0000000005c32e69 = 1;
  }
  puVar2 = PTR_DAT_057c9ca0;
  uStack_28 = 0;
  uStack_38 = 0;
  if ((*(long *)(param_1 + 0x10) == 0) ||
     (lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0x18), lVar5 == 0)) {
LAB_03696a34:
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar5 = *(long *)(lVar5 + 0x18);
  if (lVar5 != 0) {
    iVar1 = *(int *)(lVar5 + 0x48);
    if (iVar1 != 0) {
      if (*(long *)(param_1 + 0x60) == 0) goto LAB_03696a34;
      puVar6 = &uStack_28;
      uVar4 = System_Collections_Generic_Dictionary_Int32Enum__object___TryGetValue_36d2c80
                        (*(long *)(param_1 + 0x60),iVar1,&uStack_28,*(undefined8 *)PTR_DAT_0578a5a0)
      ;
      if ((uVar4 & 1) != 0) goto LAB_03696a1c;
    }
    lVar5 = *(long *)(param_1 + 0x68);
    uVar3 = Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__GetSpecialOfferPopupType_35960a8
                      (param_1);
    if (lVar5 == 0) goto LAB_03696a34;
    puVar6 = &uStack_38;
    uVar4 = System_Collections_Generic_Dictionary_int__object___TryGetValue_397831c
                      (lVar5,uVar3,&uStack_38,*(undefined8 *)PTR_DAT_05781ef8);
    if ((uVar4 & 1) != 0) goto LAB_03696a1c;
  }
  puVar6 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
LAB_03696a1c:
  return *puVar6;
}

