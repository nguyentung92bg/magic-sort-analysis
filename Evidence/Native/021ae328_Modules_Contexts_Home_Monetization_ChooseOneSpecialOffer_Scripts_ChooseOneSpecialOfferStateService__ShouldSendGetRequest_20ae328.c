/* IL2CPP: Modules.Contexts.Home.Monetization.ChooseOneSpecialOffer.Scripts.ChooseOneSpecialOfferStateService$$ShouldSendGetRequest
bool Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferStateService__ShouldSendGetRequest (Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferStateService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.ChooseOneSpecialOffer.Scripts.ChooseOneSpecialOfferStateService$$ShouldSendGetRequest
   bool 
   Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferStateService__ShouldSendGetRequest
   (Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferStateService_o*
   __this, const MethodInfo* method); */

uint Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferStateService__ShouldSendGetRequest_20ae328
               (long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  undefined8 uVar7;
  
  if ((bRam0000000005c2950e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576cf88);
    FUN_012d0dc8(PTR_DAT_0579ff98);
    bRam0000000005c2950e = 1;
  }
  uVar1 = Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferStateService__GetState_20ae644
                    (param_1);
  if ((uVar1 < 7) && ((1 << (ulong)(uVar1 & 0x1f) & 99U) != 0)) {
    uVar1 = 0;
  }
  else {
    plVar6 = *(long **)(param_1 + 0x28);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
    uVar7 = *(undefined8 *)PTR_DAT_0579ff98;
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_0576cf88) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 3) * 0x10 + 0x138);
          goto LAB_021ae400;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_0131971c(plVar6,*(long *)PTR_DAT_0576cf88,3);
LAB_021ae400:
    uVar1 = (*(code *)*puVar2)(plVar6,uVar7,puVar2[1]);
    uVar1 = ~uVar1 & 1;
  }
  return uVar1;
}

