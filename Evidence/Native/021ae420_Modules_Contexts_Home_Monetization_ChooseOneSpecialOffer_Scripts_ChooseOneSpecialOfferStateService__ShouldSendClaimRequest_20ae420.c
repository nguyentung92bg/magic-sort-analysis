/* IL2CPP: Modules.Contexts.Home.Monetization.ChooseOneSpecialOffer.Scripts.ChooseOneSpecialOfferStateService$$ShouldSendClaimRequest
bool Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferStateService__ShouldSendClaimRequest (Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferStateService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.ChooseOneSpecialOffer.Scripts.ChooseOneSpecialOfferStateService$$ShouldSendClaimRequest
   bool 
   Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferStateService__ShouldSendClaimRequest
   (Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferStateService_o*
   __this, const MethodInfo* method); */

bool Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferStateService__ShouldSendClaimRequest_20ae420
               (long param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  undefined8 uVar8;
  
  if ((bRam0000000005c2950f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576cf88);
    FUN_012d0dc8(PTR_DAT_0579ff98);
    bRam0000000005c2950f = 1;
  }
  plVar7 = *(long **)(param_1 + 0x28);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar4 = *plVar7;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
  uVar8 = *(undefined8 *)PTR_DAT_0579ff98;
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0576cf88) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 3) * 0x10 + 0x138);
        goto LAB_021ae4c4;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_0131971c(plVar7,*(long *)PTR_DAT_0576cf88,3);
LAB_021ae4c4:
  uVar5 = (*(code *)*puVar3)(plVar7,uVar8,puVar3[1]);
  if ((uVar5 & 1) == 0) {
    iVar2 = Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferStateService__GetState_20ae644
                      (param_1);
    bVar1 = iVar2 - 5U < 2;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

