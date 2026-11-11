/* IL2CPP: Modules.Contexts.Home.Monetization.PawTouchOffer.Scripts.PawTouchOfferDataService$$Initialize
void Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferDataService__Initialize (Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferDataService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.PawTouchOffer.Scripts.PawTouchOfferDataService$$Initialize
   void 
   Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferDataService__Initialize
   (Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferDataService_o* __this,
   const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferDataService__Initialize_3470bc4
               (long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  long *plVar6;
  
  if ((bRam0000000005c326e9 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f3da8);
    FUN_012d0dc8(PTR_DAT_057e6920);
    FUN_012d0dc8(PTR_DAT_057cd758);
    bRam0000000005c326e9 = 1;
  }
  plVar5 = *(long **)(param_1 + 0x10);
  if (plVar5 != (long *)0x0) {
    lVar2 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12a);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_057f3da8) {
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 1) * 0x10 + 0x138);
          goto LAB_03570c6c;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_0131971c(plVar5,*(long *)PTR_DAT_057f3da8,1);
LAB_03570c6c:
    lVar2 = (*(code *)*puVar1)(plVar5,puVar1[1]);
    plVar5 = (long *)(param_1 + 0x18);
    *plVar5 = lVar2;
    FUN_012d0d74(plVar5,lVar2);
    lVar2 = *plVar5;
    if (lVar2 != 0) {
      plVar6 = (long *)(lVar2 + 0x10);
      if (*plVar6 == 0) {
        lVar2 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057e6920);
        if (lVar2 == 0) goto LAB_03570d28;
        System_Object___ctor_23dfe5c(lVar2,0);
        *plVar6 = lVar2;
        FUN_012d0d74(plVar6,lVar2);
        lVar2 = *plVar5;
        if (lVar2 == 0) goto LAB_03570d28;
      }
      plVar5 = (long *)(lVar2 + 0x18);
      if (*plVar5 == 0) {
        lVar2 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057cd758);
        if (lVar2 == 0) goto LAB_03570d28;
        System_Object___ctor_23dfe5c(lVar2,0);
        *plVar5 = lVar2;
        FUN_012d0d74(plVar5,lVar2);
      }
      *(undefined2 *)(param_1 + 0x20) = 0x100;
      return;
    }
  }
LAB_03570d28:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

