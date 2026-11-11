/* IL2CPP: Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.SpecialOfferDataService$$DeleteData
void Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferDataService__DeleteData (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferDataService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.SpecialOfferDataService$$DeleteData
   void Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferDataService__DeleteData
   (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferDataService_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferDataService__DeleteData_359410c
               (long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  
  puVar1 = PTR_DAT_057a0dd8;
  if ((bRam0000000005c32e50 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057fe770);
    FUN_012d0dc8(PTR_DAT_057a0dd8);
    bRam0000000005c32e50 = 1;
  }
  plVar7 = *(long **)(param_1 + 0x10);
  lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar2 != 0) {
    *(undefined4 *)(lVar2 + 0x28) = 1;
    System_Object___ctor_23dfe5c(lVar2,0);
    if (plVar7 != (long *)0x0) {
      lVar4 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_057fe770) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_036941c8;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_0131971c(plVar7,*(long *)PTR_DAT_057fe770,0);
LAB_036941c8:
                    /* WARNING: Could not recover jumptable at 0x036941dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar3)(plVar7,lVar2,puVar3[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

