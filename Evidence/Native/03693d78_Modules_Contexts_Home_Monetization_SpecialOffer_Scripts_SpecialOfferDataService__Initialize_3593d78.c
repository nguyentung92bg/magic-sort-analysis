/* IL2CPP: Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.SpecialOfferDataService$$Initialize
void Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferDataService__Initialize (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferDataService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.SpecialOfferDataService$$Initialize
   void Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferDataService__Initialize
   (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferDataService_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferDataService__Initialize_3593d78
               (long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
  if ((bRam0000000005c32e4b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057fe770);
    FUN_012d0dc8(PTR_DAT_057ffb20);
    bRam0000000005c32e4b = 1;
  }
  plVar5 = *(long **)(param_1 + 0x10);
  if (plVar5 != (long *)0x0) {
    lVar2 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12a);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_057fe770) {
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 1) * 0x10 + 0x138);
          goto LAB_03693e10;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_0131971c(plVar5,*(long *)PTR_DAT_057fe770,1);
LAB_03693e10:
    lVar2 = (*(code *)*puVar1)(plVar5,puVar1[1]);
    plVar5 = (long *)(param_1 + 0x18);
    *plVar5 = lVar2;
    FUN_012d0d74(plVar5,lVar2);
    if (*plVar5 != 0) {
      plVar5 = (long *)(*plVar5 + 0x10);
      if (*plVar5 == 0) {
        lVar2 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057ffb20);
        if (lVar2 == 0) goto LAB_03693e84;
        System_Object___ctor_23dfe5c(lVar2,0);
        *plVar5 = lVar2;
        FUN_012d0d74(plVar5,lVar2);
      }
      *(undefined2 *)(param_1 + 0x20) = 0x100;
      return;
    }
  }
LAB_03693e84:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

